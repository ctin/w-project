import multiprocessing 
import argparse
import subprocess
import os

def run(id):
    scriptPath = os.path.realpath(__file__)
    scriptDir = os.path.dirname(scriptPath)
    clientPath = os.path.join(scriptDir, "build/bin/wclient")
    print(clientPath)
    subprocess.call([clientPath, "127.0.0.1", "8080", str(id)])

if __name__ == '__main__':

    parser = argparse.ArgumentParser(description='Client pool.')
    parser.add_argument('clients_count', type=int,
                        help='count of clients')

    args = parser.parse_args() 
    for x in xrange(args.clients_count):
        p = multiprocessing.Process(target=run, args=(x,))
        p.start()


    #pool = Pool(processes=args.clients_count)    # start 4 worker processes

    #pool.map(client.do_it, range(args.clients_count)) 


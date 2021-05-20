import glob
from os.path import basename
from pprint import pprint
from score_results_against_official import main

our_result_path = 'dataset/dataset'
correct_result_path = 'c:/Github/mu/PA193_Security_Certificate_Parser/dataset/dataset/'

def a():
    return glob.glob(f"{our_result_path}/*.json")

files = []

for x in a():
    base_filename = basename(x)
    # print(base_filename)
    files.append((
        None,
        f"{our_result_path}/{base_filename}",
        f"{correct_result_path}/{base_filename}"
    ))

# pprint(files)
main(files)

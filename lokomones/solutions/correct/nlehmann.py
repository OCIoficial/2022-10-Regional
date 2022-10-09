from typing import Dict, List

features = ['n', 't', 'a', 'd', 'e', 'v']


def is_candidate(non_features, entry):
    for k, v in zip(features, entry):
        for vv in non_features[k]:
            if v == vv:
                return False
    return True


X, Y = [int(n) for n in input().split()]

non_features: Dict[str, List[str]] = {k: [] for k in features}
for _ in range(X):
    k, v = input().split()
    non_features[k].append(v)

candidates: List[str] = []
for _ in range(Y):
    entry = input().split()
    if is_candidate(non_features, entry):
        candidates.append(entry[0])

if len(candidates) == 1:
    print(candidates[0])
else:
    print("IMPOSIBLE")

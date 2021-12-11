N = int(input())
 
names = []
votes = []
 
for i in range(N):
  name = input()
  if name not in names:
    names.append(name)
    votes.append(1)
  else:
    index = names.index(name)
    votes[index] += 1
 
maxindex = votes.index(max(votes))
print(names[maxindex])
#Programming for the Puzzled -- Srini Devadas
#You Will All Conform
#Input is a vector of F's and B's, in terms of forwards and backwards caps
#Output is a set of commands (printed out) to get either all F's or all B's
#Fewest commands are the goal

caps = ['F', 'F', 'B', 'B', 'B', 'F', 'B', 'B', 'B', 'F', 'F', 'B', 'F' ]
cap2 = ['F', 'F', 'B', 'B', 'B', 'F', 'B', 'B', 'B', 'F', 'F', 'F', 'F' ]

# caps = []

def pleaseConform(caps):
    if len(caps) < 2:
        exit()

    #Initialization
    start = 0
    static_cap = caps[0]
    caps += [caps[0]]

    #Determine intervals where caps are on in the same direction
    for i in range(1, len(caps)):
        if caps[i-1] != caps[i]:
            if caps[i] != static_cap:
                print ('People in positions', i, end=' ')
                start = i
            else:
                if start != i-1:
                    print ('through', i-1, end=' ')
                print ('flip your caps!')
            
pleaseConform(caps)
##pleaseConform(cap2)

li=['how','why','however','where','never']

for word in li:
    if(word[0:2]=="wh"): 
        print "* ", 
    else:
        print "- ",
    print word[0:2]+" "+word

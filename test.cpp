from urllib.request import urlopen        

u = urlopen("http://python.org")    
words = {}                         
                                    
for line in u:                      
    line =line.decode("utf-8")     
    line = line.strip(" \n")       
    for word in line.split(" "):    
        try:                            
            words[word] += 1           
        except KeyError:               
            words[word] = 1  

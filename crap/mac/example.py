import sys
from ROOT import gSystem
gSystem.Load("libKazu_crap")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing crap..."

sys.exit(0)


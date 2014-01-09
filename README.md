## ScaleSimple Varnish VMODs

These are the VMODs necessary to run ScaleSimple.  We have included the 3rd party ones as submodules, to keep things simple and clean.  ssutil is our vmod and should be compiled and built along with the others.

Also note, to run the geoip-vmod, you are going to need to install GeoIP Library headers.  You can do this with 

 apt-get install libgeoip-dev
 
 Otherwise the usual steps apply, to build the vmods
 
    VARNISHSRC=/path/to/varnish/src VMODDIR=/path/to/compiled/vmods ./configure 
    make
    make install
    
    then .. 
    cp /path/to/compiled/vmods/* /usr/lib/varnish/vmods  (or wherever your varnish lib dir is, usually /usr/lib/varnish or /usr/local/lib/varnish )

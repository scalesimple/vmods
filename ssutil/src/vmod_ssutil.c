#include <stdlib.h>
#include <stdio.h> 
#include <time.h> 
#include "vrt.h"
#include "bin/varnishd/cache.h"
#include <syslog.h>

#include "vcc_if.h"

int
init_function(struct vmod_priv *priv, const struct VCL_conf *conf)
{
	return (0);
}

const char *
vmod_time_str(struct sess *sp)
{
  time_t now = time(NULL); 
  char * now_char = malloc(33) ; 

  sprintf(now_char,"%d",(int)now); 
  
  return(now_char); 
}

/*---------------------------------------
  Return the time between NOW() and the 
  value of the passed in value
 ---------------------------------------*/
int __match_proto__()
vmod_time_expired(struct sess *sp, const char * expiration) {

  time_t now = time(NULL); 
  return(atoi(expiration) - (int)now); 
}


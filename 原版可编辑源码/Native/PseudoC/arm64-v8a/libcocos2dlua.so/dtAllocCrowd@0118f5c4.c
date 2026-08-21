
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* dtAllocCrowd() */

dtCrowd * dtAllocCrowd(void)

{
  dtCrowd *this;
  
  this = (dtCrowd *)dtAlloc(0x13d0,0);
  if (this != (dtCrowd *)0x0) {
    dtCrowd::dtCrowd(this);
  }
  return this;
}


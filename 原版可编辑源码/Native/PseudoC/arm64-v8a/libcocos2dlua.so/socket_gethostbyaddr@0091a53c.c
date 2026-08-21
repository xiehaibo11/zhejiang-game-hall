
int socket_gethostbyaddr(void *param_1,__socklen_t param_2,undefined8 *param_3)

{
  int iVar1;
  hostent *phVar2;
  int *piVar3;
  
  phVar2 = gethostbyaddr(param_1,param_2,2);
  *param_3 = phVar2;
  if (phVar2 == (hostent *)0x0) {
    piVar3 = (int *)__get_h_errno();
    if (*piVar3 == 0) {
      piVar3 = (int *)__errno();
      iVar1 = -3;
      if (*piVar3 != 0) {
        iVar1 = *piVar3;
      }
    }
    else {
      piVar3 = (int *)__get_h_errno();
                    /* try { // try from 0091a574 to 00a1a62b has its CatchHandler @ 0091a574
                       catch() { ... } // from try @ 0091a574 with catch @ 0091a574
                       catch() { ... } // from try @ 0091a6ac with catch @ 0091a574 */
      iVar1 = *piVar3;
    }
  }
  else {
    iVar1 = 0;
                    /* catch() { ... } // from try @ 0091a528 with catch @ 0091a560 */
  }
  return iVar1;
}


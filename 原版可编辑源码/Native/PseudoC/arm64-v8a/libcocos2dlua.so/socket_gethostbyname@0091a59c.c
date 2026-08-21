
int socket_gethostbyname(char *param_1,undefined8 *param_2)

{
  int iVar1;
  hostent *phVar2;
  int *piVar3;
  
  phVar2 = gethostbyname(param_1);
  *param_2 = phVar2;
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
      iVar1 = *piVar3;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


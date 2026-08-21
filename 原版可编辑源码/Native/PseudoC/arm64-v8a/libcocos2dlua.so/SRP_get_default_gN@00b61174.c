
undefined ** SRP_get_default_gN(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_DAT_0176eb00;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(PTR_DAT_0176eb00,param_1);
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = strcmp(PTR_DAT_0176eb18,param_1);
      if (iVar1 == 0) {
        lVar2 = 1;
      }
      else {
        iVar1 = strcmp(PTR_DAT_0176eb30,param_1);
        if (iVar1 == 0) {
          lVar2 = 2;
        }
        else {
          iVar1 = strcmp(PTR_DAT_0176eb48,param_1);
          if (iVar1 == 0) {
            lVar2 = 3;
          }
          else {
            iVar1 = strcmp(PTR_DAT_0176eb60,param_1);
            if (iVar1 == 0) {
              lVar2 = 4;
            }
            else {
              iVar1 = strcmp(PTR_DAT_0176eb78,param_1);
              if (iVar1 == 0) {
                lVar2 = 5;
              }
              else {
                iVar1 = strcmp(PTR_s_1024_013d07b0_0x3b_0176eb90,param_1);
                if (iVar1 != 0) {
                  return (undefined **)0x0;
                }
                lVar2 = 6;
              }
            }
          }
        }
      }
    }
    ppuVar3 = &PTR_DAT_0176eb00 + lVar2 * 3;
  }
  return ppuVar3;
}


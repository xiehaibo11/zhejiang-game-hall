
undefined ** SRP_get_default_gN(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_DAT_01d208b0;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(PTR_DAT_01d208b0,param_1);
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = strcmp(PTR_DAT_01d208c8,param_1);
      if (iVar1 == 0) {
        lVar2 = 1;
      }
      else {
        iVar1 = strcmp(PTR_DAT_01d208e0,param_1);
        if (iVar1 == 0) {
          lVar2 = 2;
        }
        else {
          iVar1 = strcmp(PTR_DAT_01d208f8,param_1);
          if (iVar1 == 0) {
            lVar2 = 3;
          }
          else {
            iVar1 = strcmp(PTR_DAT_01d20910,param_1);
            if (iVar1 == 0) {
              lVar2 = 4;
            }
            else {
              iVar1 = strcmp(PTR_DAT_01d20928,param_1);
              if (iVar1 == 0) {
                lVar2 = 5;
              }
              else {
                iVar1 = strcmp(PTR_s_1024_018a22f0_0x3b_01d20940,param_1);
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
    ppuVar3 = &PTR_DAT_01d208b0 + lVar2 * 3;
  }
  return ppuVar3;
}


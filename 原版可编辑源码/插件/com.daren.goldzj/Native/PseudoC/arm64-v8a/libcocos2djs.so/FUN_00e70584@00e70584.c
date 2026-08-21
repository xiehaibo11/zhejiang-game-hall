
/* WARNING: Type propagation algorithm not settling */

uint FUN_00e70584(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char local_28;
  char local_27;
  char local_26;
  byte local_25;
  uint local_24;
  
  local_24 = FUN_00e1bb5c(param_1,0);
  if ((local_24 == 0) && (local_24 = FUN_00e1bbd0(param_1,&local_28,4), local_24 == 0)) {
    if ((local_28 == '\x1f') && (((local_27 == -0x75 && (local_26 == '\b')) && (local_25 < 0x20))))
    {
      local_24 = FUN_00e1bc6c(param_1,6);
      if ((local_25 >> 2 & 1) != 0) {
        uVar2 = FUN_00e1db58(param_1,&local_24);
        if (local_24 != 0) {
          return local_24;
        }
        iVar3 = FUN_00e1bc6c(param_1,uVar2);
        if (iVar3 != 0) {
          return iVar3;
        }
        local_24 = 0;
      }
      if ((local_25 >> 3 & 1) != 0) {
        do {
          cVar1 = FUN_00e1dabc(param_1,&local_24);
          iVar3 = 3;
          if (cVar1 != '\0') {
            iVar3 = 0;
          }
          if (local_24 != 0) {
            iVar3 = 2;
          }
        } while (iVar3 == 0);
        if (iVar3 != 3) {
          return local_24;
        }
      }
      if ((local_25 >> 4 & 1) != 0) {
        do {
          cVar1 = FUN_00e1dabc(param_1,&local_24);
          iVar3 = 5;
          if (cVar1 != '\0') {
            iVar3 = 0;
          }
          if (local_24 != 0) {
            iVar3 = 2;
          }
        } while (iVar3 == 0);
        if (iVar3 != 5) {
          return local_24;
        }
      }
      if ((local_25 >> 1 & 1) != 0) {
        local_24 = FUN_00e1bc6c(param_1,2);
      }
    }
    else {
      local_24 = 3;
    }
  }
  return local_24;
}


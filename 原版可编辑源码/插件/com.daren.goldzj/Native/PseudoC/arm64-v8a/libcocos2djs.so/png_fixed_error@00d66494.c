
void png_fixed_error(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  char local_f0 [224];
  
  builtin_strncpy(local_f0 + 0x10,"flow in ",8);
  builtin_strncpy(local_f0,"fixed point over",0x10);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (*(char *)(param_2 + uVar2) == '\0') {
        uVar3 = uVar2 & 0xffffffff;
        break;
      }
      uVar3 = uVar2 + 1;
      local_f0[uVar2 + 0x18] = *(char *)(param_2 + uVar2);
      bVar1 = (long)uVar2 < 0xc2;
      uVar2 = uVar3;
    } while (bVar1);
  }
  local_f0[(long)(int)uVar3 + 0x18] = '\0';
                    /* WARNING: Subroutine does not return */
  png_error(param_1,local_f0);
}


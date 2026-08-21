
undefined8 FUN_00a103a4(long param_1,undefined4 *param_2,uint param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_3 >> 0x10 < 0x11) && ((param_3 & 0xfffff800) != 0xd800)) {
    if (*(int *)(param_1 + 0x44) == 0) {
      bVar1 = param_4 < 4;
      param_4 = param_4 - 4;
      if (bVar1) {
        return 0xfffffffe;
      }
      *param_2 = 0xfffe0000;
      uVar2 = 8;
      param_2 = param_2 + 1;
    }
    else {
      uVar2 = 4;
    }
    if (param_4 < 4) {
      return 0xfffffffe;
    }
    *(char *)((long)param_2 + 1) = (char)(param_3 >> 0x10);
    *(undefined1 *)param_2 = 0;
    *(char *)((long)param_2 + 3) = (char)param_3;
    *(char *)((long)param_2 + 2) = (char)(param_3 >> 8);
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return uVar2;
}


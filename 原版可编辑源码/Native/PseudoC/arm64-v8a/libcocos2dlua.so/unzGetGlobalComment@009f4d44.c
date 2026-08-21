
ulong unzGetGlobalComment(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xffffff9a;
    goto LAB_009f4d9c;
  }
  uVar3 = *(ulong *)(param_1 + 0x50);
  if (param_3 <= *(ulong *)(param_1 + 0x50)) {
    uVar3 = param_3;
  }
  lVar1 = (**(code **)(param_1 + 0x20))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                     *(long *)(param_1 + 0x78) + 0x16,0);
  if (lVar1 == 0) {
    if (uVar3 == 0) {
      if (param_2 == (undefined1 *)0x0) goto LAB_009f4d9c;
    }
    else {
      *param_2 = 0;
      uVar2 = (**(code **)(param_1 + 8))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_2,
                         uVar3);
      if (uVar2 != uVar3) goto LAB_009f4d90;
    }
    if (*(ulong *)(param_1 + 0x50) < param_3) {
      param_2[*(ulong *)(param_1 + 0x50)] = 0;
    }
  }
  else {
LAB_009f4d90:
    uVar3 = 0xffffffff;
  }
LAB_009f4d9c:
  return uVar3 & 0xffffffff;
}


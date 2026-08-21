
ulong unzGetLocalExtrafield(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x120), lVar4 == 0)) {
    uVar2 = 0xffffff9a;
  }
  else {
    uVar2 = (ulong)*(uint *)(lVar4 + 0x90) - *(long *)(lVar4 + 0x98);
    if (param_2 != 0) {
      uVar1 = (uint)uVar2;
      if (param_3 <= uVar2) {
        uVar1 = param_3;
      }
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        lVar3 = (**(code **)(lVar4 + 0xe0))
                          (*(undefined8 *)(lVar4 + 0xf8),*(undefined8 *)(lVar4 + 0x100),
                           *(long *)(lVar4 + 0x88) + *(long *)(lVar4 + 0x98),0);
        if (lVar3 == 0) {
          uVar2 = (**(code **)(lVar4 + 200))
                            (*(undefined8 *)(lVar4 + 0xf8),*(undefined8 *)(lVar4 + 0x100),param_2,
                             (ulong)uVar1);
          if (uVar2 != uVar1) {
            uVar1 = 0xffffffff;
          }
          uVar2 = (ulong)uVar1;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}


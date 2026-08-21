
undefined4 FUN_0100c400(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  cVar1 = cpShapeGetSensor();
  if (cVar1 == '\0') {
    lVar3 = cpShapeGetBody(param_1);
    cVar1 = cpBodyIsSleeping();
    if (cVar1 == '\0') {
      if (*(float *)(lVar3 + 0xb0) <= *(float *)(*(long *)(param_1 + 8) + 0x14)) {
        iVar2 = cpBodyGetType(lVar3);
        uVar4 = 0x3e19999a;
        if (iVar2 != 2) {
          uVar4 = 0x3f400000;
        }
      }
      else {
        uVar4 = 0x3f28f5c3;
      }
    }
    else {
      uVar4 = 0x3e4ccccd;
    }
  }
  else {
    uVar4 = 0x3f800000;
  }
  return uVar4;
}


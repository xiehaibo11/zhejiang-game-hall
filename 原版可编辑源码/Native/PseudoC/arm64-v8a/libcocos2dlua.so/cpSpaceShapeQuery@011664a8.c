
undefined1
cpSpaceShapeQuery(undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *(long *)(param_6 + 0x10);
  if (lVar1 == 0) {
    uVar2 = (ulong)*(uint *)(param_6 + 0x2c);
    param_2 = (ulong)*(uint *)(param_6 + 0x30);
    param_3 = (ulong)*(uint *)(param_6 + 0x34);
    param_4 = (ulong)*(uint *)(param_6 + 0x38);
  }
  else {
    local_60 = *(undefined8 *)(lVar1 + 0x5c);
    uStack_68 = *(undefined8 *)(lVar1 + 0x54);
    local_70 = *(undefined8 *)(lVar1 + 0x4c);
    uVar2 = cpShapeUpdate(param_6,&local_70);
  }
  local_78 = 0;
  local_88 = param_7;
  uStack_80 = param_8;
  cpSpaceLock(param_5);
  (**(code **)(**(long **)(param_5 + 0x68) + 0x48))
            (uVar2,param_2,param_3,param_4,*(long **)(param_5 + 0x68),param_6,FUN_011665b0,&local_88
            );
  (**(code **)(**(long **)(param_5 + 0x60) + 0x48))
            (uVar2,param_2,param_3,param_4,*(long **)(param_5 + 0x60),param_6,FUN_011665b0,&local_88
            );
  cpSpaceUnlock(param_5,1);
  return local_78;
}


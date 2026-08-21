
ulong FUN_014d7d28(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  pIVar1 = param_3 + 0x95a0;
  iVar5 = *(int *)(param_3 + 0x95b0);
  pIVar2 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar2 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = iVar5 + 1;
  uVar7 = *(ulong *)pIVar2;
  uVar3 = *(undefined8 *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  if (((uVar7 & 1) == 0) ||
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x40)) {
    puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0xaa,pIVar2,0,0);
    uVar7 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
    *(undefined8 *)pIVar1 = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  else {
    if ((*(byte *)(uVar7 + 7) >> 2 & 1) == 0) {
      uVar7 = *(ulong *)(param_3 + 0xa0);
    }
    else {
      uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
    }
    *(undefined8 *)pIVar1 = uVar3;
    *(int *)(param_3 + 0x95b0) = iVar5;
  }
  return uVar7;
}


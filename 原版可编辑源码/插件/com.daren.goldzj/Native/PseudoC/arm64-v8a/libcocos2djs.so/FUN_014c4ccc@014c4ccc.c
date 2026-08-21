
undefined8 FUN_014c4ccc(int param_1,long param_2,Isolate *param_3)

{
  ulong *puVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  undefined8 uVar8;
  
  puVar7 = (ulong *)(param_2 - (param_1 * 8 + -8));
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  bVar5 = *(short *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) == 0x439;
  puVar1 = puVar7;
  if (!bVar5) {
    puVar1 = (ulong *)0x0;
  }
  pIVar2 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar2 = param_3 + 0xa0;
  }
  pIVar6 = (Isolate *)
           v8::internal::ErrorUtils::Construct
                     (param_3,param_2 - (param_1 * 8 + -0x10),puVar7,pIVar2,bVar5,puVar1,0);
  pIVar2 = param_3 + 0x180;
  if (pIVar6 != (Isolate *)0x0) {
    pIVar2 = pIVar6;
  }
  uVar8 = *(undefined8 *)pIVar2;
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}


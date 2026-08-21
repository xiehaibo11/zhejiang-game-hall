
void FUN_012a889c(long param_1,GraphReducer *param_2,Reducer *param_3)

{
  Reducer *pRVar1;
  Reducer *pRVar2;
  uint uVar3;
  Zone *pZVar4;
  undefined8 uVar5;
  
  uVar3 = **(uint **)(param_1 + 0x18);
  pRVar1 = param_3;
  if ((uVar3 >> 4 & 1) != 0) {
    pZVar4 = *(Zone **)(param_1 + 0x98);
    pRVar1 = *(Reducer **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pRVar1) < 0x18) {
      pRVar1 = (Reducer *)v8::internal::Zone::NewExpand(pZVar4,0x18);
    }
    else {
      *(Reducer **)(pZVar4 + 0x10) = pRVar1 + 0x18;
    }
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined ***)pRVar1 = &PTR__Reducer_01cbe858;
    *(Reducer **)(pRVar1 + 8) = param_3;
    *(undefined8 *)(pRVar1 + 0x10) = uVar5;
    uVar3 = **(uint **)(param_1 + 0x18);
  }
  pRVar2 = pRVar1;
  if ((uVar3 >> 0xd & 1) != 0) {
    pZVar4 = *(Zone **)(param_1 + 0x98);
    pRVar2 = *(Reducer **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pRVar2) < 0x18) {
      pRVar2 = (Reducer *)v8::internal::Zone::NewExpand(pZVar4,0x18);
    }
    else {
      *(Reducer **)(pZVar4 + 0x10) = pRVar2 + 0x18;
    }
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined ***)pRVar2 = &PTR__Reducer_01cbe890;
    *(Reducer **)(pRVar2 + 8) = pRVar1;
    *(undefined8 *)(pRVar2 + 0x10) = uVar5;
  }
  v8::internal::compiler::GraphReducer::AddReducer(param_2,pRVar2);
  return;
}


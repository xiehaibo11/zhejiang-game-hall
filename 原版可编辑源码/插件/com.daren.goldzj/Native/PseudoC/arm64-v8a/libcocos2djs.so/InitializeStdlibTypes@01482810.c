
/* v8::internal::wasm::AsmJsParser::InitializeStdlibTypes() */

void __thiscall v8::internal::wasm::AsmJsParser::InitializeStdlibTypes(AsmJsParser *this)

{
  AsmType *pAVar1;
  AsmType *pAVar2;
  AsmType *pAVar3;
  AsmOverloadedFunctionType *pAVar4;
  undefined8 uVar5;
  AsmType *pAVar6;
  AsmType *pAVar7;
  long *plVar8;
  AsmFunctionType *pAVar9;
  Zone *pZVar10;
  
  pZVar10 = *(Zone **)this;
  plVar8 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar8) < 0x30) {
    plVar8 = (long *)Zone::NewExpand(pZVar10,0x30);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar8 + 6;
  }
  pAVar9 = (AsmFunctionType *)0x0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = (long)pZVar10;
  *plVar8 = (long)&PTR_Name_01cc4190;
  plVar8[1] = 0xed;
  *(long **)(this + 0x230) = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(*plVar8 + 0x10))();
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x4d);
  pZVar10 = *(Zone **)this;
  plVar8 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar8) < 0x30) {
    plVar8 = (long *)Zone::NewExpand(pZVar10,0x30);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar8 + 6;
  }
  pAVar9 = (AsmFunctionType *)0x0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = (long)pZVar10;
  *plVar8 = (long)&PTR_Name_01cc4190;
  plVar8[1] = 0xed;
  *(long **)(this + 0x238) = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(*plVar8 + 0x10))();
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x4d);
  if (((ulong)*(long **)(this + 0x238) & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(**(long **)(this + 0x238) + 0x10))();
  }
  else {
    pAVar9 = (AsmFunctionType *)0x0;
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x4d);
  pZVar10 = *(Zone **)this;
  pAVar6 = *(AsmType **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pAVar6) < 0x30) {
    pAVar6 = (AsmType *)Zone::NewExpand(pZVar10,0x30);
  }
  else {
    *(AsmType **)(pZVar10 + 0x10) = pAVar6 + 0x30;
  }
  pAVar9 = (AsmFunctionType *)0x0;
  *(undefined8 *)(pAVar6 + 0x10) = 0;
  *(undefined8 *)(pAVar6 + 0x18) = 0;
  *(undefined ***)pAVar6 = &PTR_Name_01cc4190;
  *(undefined8 *)(pAVar6 + 8) = 0x2005;
  *(undefined8 *)(pAVar6 + 0x20) = 0;
  *(Zone **)(pAVar6 + 0x28) = pZVar10;
  if (((ulong)pAVar6 & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(*(long *)pAVar6 + 0x10))(pAVar6);
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x600d);
  pZVar10 = *(Zone **)this;
  pAVar7 = *(AsmType **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pAVar7) < 0x30) {
    pAVar7 = (AsmType *)Zone::NewExpand(pZVar10,0x30);
  }
  else {
    *(AsmType **)(pZVar10 + 0x10) = pAVar7 + 0x30;
  }
  pAVar9 = (AsmFunctionType *)0x0;
  *(undefined8 *)(pAVar7 + 0x10) = 0;
  *(undefined8 *)(pAVar7 + 0x18) = 0;
  *(undefined ***)pAVar7 = &PTR_Name_01cc4190;
  *(undefined8 *)(pAVar7 + 8) = 0xb01;
  *(undefined8 *)(pAVar7 + 0x20) = 0;
  *(Zone **)(pAVar7 + 0x28) = pZVar10;
  if (((ulong)pAVar7 & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(*(long *)pAVar7 + 0x10))(pAVar7);
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x721);
  pZVar10 = *(Zone **)this;
  plVar8 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar8) < 0x30) {
    plVar8 = (long *)Zone::NewExpand(pZVar10,0x30);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar8 + 6;
  }
  pAVar9 = (AsmFunctionType *)0x0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = (long)pZVar10;
  *plVar8 = (long)&PTR_Name_01cc4190;
  plVar8[1] = 0x721;
  *(long **)(this + 0x240) = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(*plVar8 + 0x10))();
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x301);
  pZVar10 = *(Zone **)this;
  plVar8 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar8) < 0x30) {
    plVar8 = (long *)Zone::NewExpand(pZVar10,0x30);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar8 + 6;
  }
  pAVar9 = (AsmFunctionType *)0x0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = (long)pZVar10;
  *plVar8 = (long)&PTR_Name_01cc4190;
  plVar8[1] = 0x721;
  *(long **)(this + 0x248) = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(*plVar8 + 0x10))();
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x301);
  if (((ulong)*(long **)(this + 0x248) & 1) == 0) {
    pAVar9 = (AsmFunctionType *)(**(code **)(**(long **)(this + 0x248) + 0x10))();
  }
  else {
    pAVar9 = (AsmFunctionType *)0x0;
  }
  AsmFunctionType::AddArgument(pAVar9,(AsmType *)0x301);
  pAVar1 = (AsmType *)AsmType::MinMaxType(*(Zone **)this,(AsmType *)0xed,(AsmType *)0xed);
  pAVar2 = (AsmType *)AsmType::MinMaxType(*(Zone **)this,(AsmType *)0xe00d,(AsmType *)0xe00d);
  pAVar3 = (AsmType *)AsmType::MinMaxType(*(Zone **)this,(AsmType *)0x721,(AsmType *)0x721);
  pZVar10 = *(Zone **)this;
  plVar8 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar8) < 0x28) {
    plVar8 = (long *)Zone::NewExpand(pZVar10,0x28);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar8 + 5;
  }
  pAVar4 = (AsmOverloadedFunctionType *)0x0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = (long)pZVar10;
  *plVar8 = (long)&PTR_Name_01cc41d8;
  plVar8[1] = 0;
  *(long **)(this + 0x250) = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(*plVar8 + 0x18))(plVar8);
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,pAVar3);
  if (((ulong)*(long **)(this + 0x250) & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(**(long **)(this + 0x250) + 0x18))();
  }
  else {
    pAVar4 = (AsmOverloadedFunctionType *)0x0;
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,pAVar2);
  if (((ulong)*(long **)(this + 0x250) & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(**(long **)(this + 0x250) + 0x18))();
  }
  else {
    pAVar4 = (AsmOverloadedFunctionType *)0x0;
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,pAVar1);
  pZVar10 = *(Zone **)this;
  plVar8 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar8) < 0x28) {
    plVar8 = (long *)Zone::NewExpand(pZVar10,0x28);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar8 + 5;
  }
  pAVar4 = (AsmOverloadedFunctionType *)0x0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = (long)pZVar10;
  *plVar8 = (long)&PTR_Name_01cc41d8;
  plVar8[1] = 0;
  *(long **)(this + 600) = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(*plVar8 + 0x18))();
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,pAVar7);
  if (((ulong)*(long **)(this + 600) & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(**(long **)(this + 600) + 0x18))();
  }
  else {
    pAVar4 = (AsmOverloadedFunctionType *)0x0;
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,*(AsmType **)(this + 0x230));
  if (((ulong)*(long **)(this + 600) & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(**(long **)(this + 600) + 0x18))();
  }
  else {
    pAVar4 = (AsmOverloadedFunctionType *)0x0;
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,pAVar6);
  pZVar10 = *(Zone **)this;
  plVar8 = *(long **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)plVar8) < 0x28) {
    plVar8 = (long *)Zone::NewExpand(pZVar10,0x28);
  }
  else {
    *(long **)(pZVar10 + 0x10) = plVar8 + 5;
  }
  pAVar4 = (AsmOverloadedFunctionType *)0x0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = (long)pZVar10;
  *plVar8 = (long)&PTR_Name_01cc41d8;
  plVar8[1] = 0;
  *(long **)(this + 0x260) = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(*plVar8 + 0x18))();
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,*(AsmType **)(this + 0x230));
  if (((ulong)*(long **)(this + 0x260) & 1) == 0) {
    pAVar4 = (AsmOverloadedFunctionType *)(**(code **)(**(long **)(this + 0x260) + 0x18))();
  }
  else {
    pAVar4 = (AsmOverloadedFunctionType *)0x0;
  }
  AsmOverloadedFunctionType::AddOverload(pAVar4,pAVar6);
  uVar5 = AsmType::FroundType(*(Zone **)this);
  *(undefined8 *)(this + 0x268) = uVar5;
  return;
}


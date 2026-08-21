
/* v8::internal::ParserBase<v8::internal::Parser>::ClassInfo::ClassInfo(v8::internal::ParserBase<v8::internal::Parser>*)
    */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ClassInfo::ClassInfo
          (ClassInfo *this,ParserBase *param_1)

{
  Zone *pZVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined8 *)this = 0;
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  plVar2 = *(long **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)plVar2) < 0x10) {
    plVar2 = (long *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(long **)(pZVar1 + 0x10) = plVar2 + 2;
  }
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  lVar3 = *(long *)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - lVar3) < 0x20) {
    lVar3 = Zone::NewExpand(pZVar1,0x20);
  }
  else {
    *(long *)(pZVar1 + 0x10) = lVar3 + 0x20;
  }
  *plVar2 = lVar3;
  plVar2[1] = 4;
  *(long **)(this + 8) = plVar2;
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  plVar2 = *(long **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)plVar2) < 0x10) {
    plVar2 = (long *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(long **)(pZVar1 + 0x10) = plVar2 + 2;
  }
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  lVar3 = *(long *)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - lVar3) < 0x20) {
    lVar3 = Zone::NewExpand(pZVar1,0x20);
  }
  else {
    *(long *)(pZVar1 + 0x10) = lVar3 + 0x20;
  }
  *plVar2 = lVar3;
  plVar2[1] = 4;
  *(long **)(this + 0x10) = plVar2;
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  plVar2 = *(long **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)plVar2) < 0x10) {
    plVar2 = (long *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(long **)(pZVar1 + 0x10) = plVar2 + 2;
  }
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  lVar3 = *(long *)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - lVar3) < 0x20) {
    lVar3 = Zone::NewExpand(pZVar1,0x20);
  }
  else {
    *(long *)(pZVar1 + 0x10) = lVar3 + 0x20;
  }
  *plVar2 = lVar3;
  plVar2[1] = 4;
  *(long **)(this + 0x18) = plVar2;
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  plVar2 = *(long **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)plVar2) < 0x10) {
    plVar2 = (long *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(long **)(pZVar1 + 0x10) = plVar2 + 2;
  }
  pZVar1 = *(Zone **)(param_1 + 0xb8);
  lVar3 = *(long *)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - lVar3) < 0x20) {
    lVar3 = Zone::NewExpand(pZVar1,0x20);
  }
  else {
    *(long *)(pZVar1 + 0x10) = lVar3 + 0x20;
  }
  *plVar2 = lVar3;
  plVar2[1] = 4;
  *(long **)(this + 0x20) = plVar2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}



/* v8::internal::CanonicalHandleScope::CanonicalHandleScope(v8::internal::Isolate*) */

void __thiscall
v8::internal::CanonicalHandleScope::CanonicalHandleScope
          (CanonicalHandleScope *this,Isolate *param_1)

{
  RootIndexMap *this_00;
  undefined8 *puVar1;
  long lVar2;
  
  *(Isolate **)this = param_1;
  Zone::Zone((Zone *)(this + 8),*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/handles/handles.cc:121");
  lVar2 = *(long *)this;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(lVar2 + 0x95b8);
  *(CanonicalHandleScope **)(lVar2 + 0x95b8) = this;
  this_00 = operator_new(8);
  RootIndexMap::RootIndexMap(this_00,param_1);
  *(RootIndexMap **)(this + 0x48) = this_00;
  puVar1 = operator_new(0x48);
  puVar1[8] = (Zone *)(this + 8);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  puVar1[2] = param_1 + 0x8850;
  *puVar1 = &PTR__IdentityMap_01ca7050;
  *(undefined8 **)(this + 0x50) = puVar1;
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(lVar2 + 0x95b0);
  return;
}



/* v8::internal::RootsReferencesExtractor::VisitRootPointer(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::RootsReferencesExtractor::VisitRootPointer
          (RootsReferencesExtractor *this,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  V8HeapExplorer *pVVar2;
  undefined8 uVar3;
  
  if (param_2 == 0xb) {
    pVVar2 = *(V8HeapExplorer **)(this + 8);
    uVar3 = *param_4;
    uVar1 = StringsStorage::GetFormatted(*(char **)(pVVar2 + 0x18),"(%s builtin)",param_3);
    V8HeapExplorer::TagObject(pVVar2,uVar3,uVar1);
  }
  V8HeapExplorer::SetGcSubrootReference
            (*(V8HeapExplorer **)(this + 8),param_2,param_3,this[0x10],*param_4);
  return;
}


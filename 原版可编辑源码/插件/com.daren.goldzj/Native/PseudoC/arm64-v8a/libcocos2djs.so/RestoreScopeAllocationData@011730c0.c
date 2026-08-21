
/* v8::internal::BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper>::RestoreScopeAllocationData(v8::internal::DeclarationScope*,
   v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper>::RestoreScopeAllocationData
          (BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper> *this,DeclarationScope *param_1
          ,AstValueFactory *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar2 = (**(code **)(*(long *)this + 0x20))();
  *puVar1 = uVar2;
  RestoreDataForScope(this,(Scope *)param_1,param_2);
  return;
}


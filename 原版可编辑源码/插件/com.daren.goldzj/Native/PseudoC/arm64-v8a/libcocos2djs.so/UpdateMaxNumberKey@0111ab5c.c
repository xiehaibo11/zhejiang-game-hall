
/* v8::internal::NumberDictionary::UpdateMaxNumberKey(unsigned int,
   v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall
v8::internal::NumberDictionary::UpdateMaxNumberKey
          (NumberDictionary *this,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  undefined8 local_8;
  
  lVar2 = *(long *)this;
  if ((*(uint *)(lVar2 + 0x13) & 3) != 2) {
    puVar3 = (uint *)(lVar2 + 0x13);
    if ((param_2 >> 0x1d & 7) == 0) {
      if ((*puVar3 & 1) == 0) {
        uVar1 = (uint)((int)*puVar3 >> 1) >> 1;
        if ((*puVar3 & 1) != 0) {
          uVar1 = 0;
        }
        if ((uint)param_2 <= uVar1) {
          return;
        }
      }
      uVar1 = (uint)param_2 << 2;
    }
    else {
      if (param_3 != (undefined8 *)0x0) {
        local_8 = *param_3;
        JSObject::RequireSlowElements((JSObject *)&local_8,lVar2);
        puVar3 = (uint *)(*(long *)this + 0x13);
      }
      uVar1 = 2;
    }
    *puVar3 = uVar1;
  }
  return;
}


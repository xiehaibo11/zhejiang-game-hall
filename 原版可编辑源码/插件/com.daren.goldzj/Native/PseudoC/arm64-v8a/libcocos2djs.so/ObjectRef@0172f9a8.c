
/* v8::internal::compiler::ObjectRef::ObjectRef(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Handle<v8::internal::Object>, bool) */

void __thiscall
v8::internal::compiler::ObjectRef::ObjectRef(ObjectRef *this,JSHeapBroker *param_1,ulong *param_3)

{
  Zone *this_00;
  ObjectData *pOVar1;
  long lVar2;
  long *plVar3;
  ulong *local_28;
  
  *(JSHeapBroker **)(this + 8) = param_1;
  local_28 = param_3;
  switch(*(undefined4 *)(param_1 + 0x70)) {
  case 0:
    lVar2 = RefsMap::LookupOrInsert
                      (*(RefsMap **)(param_1 + 0x30),(ulong *)&local_28,*(Zone **)(param_1 + 0x10));
    plVar3 = (long *)(lVar2 + 8);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      *(long *)this = lVar2;
      break;
    }
    this_00 = *(Zone **)(param_1 + 0x10);
    pOVar1 = *(ObjectData **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x10) {
      pOVar1 = (ObjectData *)Zone::NewExpand(this_00,0x10);
    }
    else {
      *(ObjectData **)(this_00 + 0x10) = pOVar1 + 0x10;
    }
    ObjectData::ObjectData(pOVar1,param_1,plVar3,param_3,((uint)*param_3 & 1) << 1);
    *plVar3 = (long)pOVar1;
    *(ObjectData **)this = pOVar1;
    if (pOVar1 != (ObjectData *)0x0) {
      return;
    }
    goto LAB_0172fabc;
  case 1:
    lVar2 = JSHeapBroker::GetOrCreateData(param_1,param_3);
    *(long *)this = lVar2;
    break;
  case 2:
    lVar2 = RefsMap::Lookup(*(RefsMap **)(param_1 + 0x30),(ulong *)&local_28);
    if (lVar2 == 0) {
      *(undefined8 *)this = 0;
      goto LAB_0172fabc;
    }
    lVar2 = *(long *)(lVar2 + 8);
    *(long *)this = lVar2;
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
    lVar2 = *(long *)this;
  }
  if (lVar2 == 0) {
LAB_0172fabc:
    local_28 = (ulong *)*param_3;
    Object::Print((Object *)&local_28);
    if (*(long *)this == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Object is not known to the heap broker");
    }
  }
  return;
}


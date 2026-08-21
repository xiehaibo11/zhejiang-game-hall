
/* v8::internal::MapUpdater::GetOrComputeFieldType(v8::internal::InternalIndex,
   v8::internal::PropertyLocation, v8::internal::Representation) const */

void __thiscall
v8::internal::MapUpdater::GetOrComputeFieldType
          (MapUpdater *this,long param_2,int param_3,undefined1 param_4)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  ulong local_28;
  
  if (param_3 == 0) {
    if (*(long *)(this + 0x58) == param_2) {
      uVar3 = **(ulong **)(this + 0x78);
    }
    else {
      uVar3 = Map::UnwrapFieldType
                        (**(ulong **)(this + 0x10) & 0xffffffff00000000 |
                         (ulong)*(uint *)(**(ulong **)(this + 0x10) +
                                          (param_2 * 0xc00000000 + 0x1000000000 >> 0x20) + 7));
    }
    pIVar2 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
    }
  }
  else {
    if (*(long *)(this + 0x58) == param_2) {
      local_28 = **(ulong **)(this + 0x80);
    }
    else {
      local_28 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                 (ulong)*(uint *)(**(ulong **)(this + 0x10) +
                                  (param_2 * 0xc00000000 + 0x1000000000 >> 0x20) + 7);
    }
    Object::OptimalType((Object *)&local_28,*(undefined8 *)this,param_4);
  }
  return;
}


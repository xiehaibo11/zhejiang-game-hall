
/* v8::internal::IdentityMap<unsigned int,
   v8::internal::ZoneAllocationPolicy>::NewPointerArray(unsigned long) */

void __thiscall
v8::internal::IdentityMap<unsigned_int,v8::internal::ZoneAllocationPolicy>::NewPointerArray
          (IdentityMap<unsigned_int,v8::internal::ZoneAllocationPolicy> *this,ulong param_1)

{
  ulong uVar1;
  Zone *this_00;
  ulong uVar2;
  
  this_00 = *(Zone **)(this + 0x40);
  uVar1 = param_1 * 8;
  uVar2 = *(long *)(this_00 + 0x18) - *(long *)(this_00 + 0x10);
  if (uVar1 < uVar2 || uVar1 - uVar2 == 0) {
    *(ulong *)(this_00 + 0x10) = *(long *)(this_00 + 0x10) + uVar1;
    return;
  }
  Zone::NewExpand(this_00,uVar1);
  return;
}


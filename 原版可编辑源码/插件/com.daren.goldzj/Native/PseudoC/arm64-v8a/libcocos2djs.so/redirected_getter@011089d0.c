
/* v8::internal::AccessorInfo::redirected_getter() const */

undefined8 __thiscall v8::internal::AccessorInfo::redirected_getter(AccessorInfo *this)

{
  uint uVar1;
  undefined8 uVar2;
  long local_18;
  
  uVar1 = *(uint *)(*(ulong *)this + 0x13);
  if ((uVar1 == 0) ||
     (local_18 = *(long *)((*(ulong *)this & 0xffffffff00000000 | (ulong)uVar1) + 3), local_18 == 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = ExternalReference::Create(&local_18,8);
  }
  return uVar2;
}


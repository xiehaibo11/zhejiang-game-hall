
/* v8::internal::ParseInfo::AllocateSourceRangeMap() */

void __thiscall v8::internal::ParseInfo::AllocateSourceRangeMap(ParseInfo *this)

{
  undefined8 *puVar1;
  Zone *this_00;
  undefined8 uVar2;
  
  this_00 = *(Zone **)this;
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x20) {
    puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar1 + 4;
  }
  uVar2 = *(undefined8 *)this;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  *(undefined8 **)(this + 0x98) = puVar1;
  return;
}


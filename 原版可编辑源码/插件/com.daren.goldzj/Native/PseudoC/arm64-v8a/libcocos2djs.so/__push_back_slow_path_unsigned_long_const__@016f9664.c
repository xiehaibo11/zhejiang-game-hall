
/* void std::__ndk1::vector<unsigned long*, v8::internal::ZoneAllocator<unsigned long*>
   >::__push_back_slow_path<unsigned long* const&>(unsigned long* const&) */

void __thiscall
std::__ndk1::vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>>::
__push_back_slow_path<unsigned_long*const&>
          (vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> *this,ulong **param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  Zone *this_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  uVar6 = lVar3 >> 2;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0x7fffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0xfffffff;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar6 = uVar1 * 8;
    lVar3 = *(long *)(this_00 + 0x10);
    if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
        uVar6 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar3 + uVar6;
    }
    else {
      lVar3 = v8::internal::Zone::NewExpand(this_00,uVar6);
    }
  }
  puVar5 = (undefined8 *)(lVar3 + lVar8 * 8);
  puVar4 = puVar5 + 1;
  *puVar5 = *param_1;
  puVar2 = *(undefined8 **)this;
  puVar7 = *(undefined8 **)(this + 8);
  while (puVar7 != puVar2) {
    puVar7 = puVar7 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar7;
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar4;
  *(ulong *)(this + 0x10) = lVar3 + uVar1 * 8;
  return;
}


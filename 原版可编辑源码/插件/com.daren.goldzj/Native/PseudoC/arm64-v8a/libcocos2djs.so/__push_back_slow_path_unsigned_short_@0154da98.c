
/* void std::__ndk1::vector<unsigned short, v8::internal::ZoneAllocator<unsigned short>
   >::__push_back_slow_path<unsigned short>(unsigned short&&) */

void __thiscall
std::__ndk1::vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>>::
__push_back_slow_path<unsigned_short>
          (vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>> *this,ushort *param_1)

{
  ulong uVar1;
  ushort *puVar2;
  long lVar3;
  ulong uVar4;
  Zone *this_00;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 1;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x1e != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = *(long *)(this + 0x10) - *(long *)this;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0x1ffffffe < (ulong)((long)uVar4 >> 1)) {
    uVar1 = 0x3fffffff;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar4 = uVar1 * 2 + 7 & 0xfffffffffffffff8;
    lVar3 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar3) < uVar4) {
      lVar3 = v8::internal::Zone::NewExpand(this_00,uVar4);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar3 + uVar4;
    }
  }
  puVar6 = (ushort *)(lVar3 + lVar8 * 2);
  puVar5 = puVar6 + 1;
  *puVar6 = *param_1;
  puVar2 = *(ushort **)this;
  puVar7 = *(ushort **)(this + 8);
  while (puVar7 != puVar2) {
    puVar7 = puVar7 + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *puVar7;
  }
  *(ushort **)this = puVar6;
  *(ushort **)(this + 8) = puVar5;
  *(ulong *)(this + 0x10) = lVar3 + uVar1 * 2;
  return;
}


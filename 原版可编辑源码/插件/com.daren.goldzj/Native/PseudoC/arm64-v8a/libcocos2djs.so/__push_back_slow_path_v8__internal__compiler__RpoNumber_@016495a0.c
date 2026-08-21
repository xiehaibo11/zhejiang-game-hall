
/* void std::__ndk1::vector<v8::internal::compiler::RpoNumber,
   v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>
   >::__push_back_slow_path<v8::internal::compiler::RpoNumber>(v8::internal::compiler::RpoNumber&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
::__push_back_slow_path<v8::internal::compiler::RpoNumber>
          (vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
           *this,RpoNumber *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  Zone *this_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  uVar6 = lVar3 >> 1;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0xffffffe < (ulong)(lVar3 >> 2)) {
    uVar1 = 0x1fffffff;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar6 = uVar1 * 4 + 7 & 0xfffffffffffffff8;
    lVar3 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar3) < uVar6) {
      lVar3 = v8::internal::Zone::NewExpand(this_00,uVar6);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar3 + uVar6;
    }
  }
  puVar5 = (undefined4 *)(lVar3 + lVar8 * 4);
  puVar4 = puVar5 + 1;
  *puVar5 = *(undefined4 *)param_1;
  puVar2 = *(undefined4 **)this;
  puVar7 = *(undefined4 **)(this + 8);
  while (puVar7 != puVar2) {
    puVar7 = puVar7 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar7;
  }
  *(undefined4 **)this = puVar5;
  *(undefined4 **)(this + 8) = puVar4;
  *(ulong *)(this + 0x10) = lVar3 + uVar1 * 4;
  return;
}


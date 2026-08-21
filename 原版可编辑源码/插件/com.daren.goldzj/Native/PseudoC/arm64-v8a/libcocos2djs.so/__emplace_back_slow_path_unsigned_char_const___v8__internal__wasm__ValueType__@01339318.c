
/* void std::__ndk1::vector<v8::internal::wasm::ValueBase,
   v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase> >::__emplace_back_slow_path<unsigned
   char const*&, v8::internal::wasm::ValueType&>(unsigned char const*&,
   v8::internal::wasm::ValueType&) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>::
__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
          (vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
           *this,uchar **param_1,ValueType *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  Zone *this_00;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x1b == 0) {
    lVar5 = *(long *)(this + 0x10) - *(long *)this;
    uVar6 = lVar5 >> 3;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x3fffffe < (ulong)(lVar5 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar6 = uVar1 * 0x10;
      lVar5 = *(long *)(this_00 + 0x10);
      if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
          uVar6 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar5 + uVar6;
      }
      else {
        lVar5 = v8::internal::Zone::NewExpand(this_00,uVar6);
      }
    }
    uVar3 = *param_2;
    puVar2 = (undefined8 *)(lVar5 + lVar8 * 0x10);
    *puVar2 = *param_1;
    *(undefined1 *)(puVar2 + 1) = uVar3;
    lVar8 = *(long *)this;
    puVar4 = puVar2;
    for (lVar7 = *(long *)(this + 8); lVar7 != lVar8; lVar7 = lVar7 + -0x10) {
      uVar9 = *(undefined8 *)(lVar7 + -0x10);
      puVar4[-1] = *(undefined8 *)(lVar7 + -8);
      puVar4[-2] = uVar9;
      puVar4 = puVar4 + -2;
    }
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar2 + 2;
    *(ulong *)(this + 0x10) = lVar5 + uVar1 * 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


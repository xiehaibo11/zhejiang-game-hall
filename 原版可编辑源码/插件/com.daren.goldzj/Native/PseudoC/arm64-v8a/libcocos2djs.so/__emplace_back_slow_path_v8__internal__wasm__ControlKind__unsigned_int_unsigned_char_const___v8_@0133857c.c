
/* void std::__ndk1::vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,
   v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase> >
   >::__emplace_back_slow_path<v8::internal::wasm::ControlKind&, unsigned int, unsigned char
   const*&, v8::internal::wasm::Reachability&>(v8::internal::wasm::ControlKind&, unsigned int&&,
   unsigned char const*&, v8::internal::wasm::Reachability&) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>>>
::
__emplace_back_slow_path<v8::internal::wasm::ControlKind&,unsigned_int,unsigned_char_const*&,v8::internal::wasm::Reachability&>
          (vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>>>
           *this,ControlKind *param_1,uint *param_2,uchar **param_3,Reachability *param_4)

{
  ulong uVar1;
  uint uVar2;
  ControlKind CVar3;
  ControlKind *pCVar4;
  Zone *this_00;
  ControlKind *pCVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uchar *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar1 < 0x1745d18) {
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar6 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0xba2e8a < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x1745d17;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar7 = uVar1 * 0x58;
      lVar6 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar6 + uVar7;
      }
      else {
        lVar6 = v8::internal::Zone::NewExpand(this_00,uVar7);
      }
    }
    CVar3 = *(ControlKind *)param_4;
    uVar2 = *param_2;
    puVar9 = *param_3;
    pCVar5 = (ControlKind *)(lVar6 + lVar8 * 8);
    *pCVar5 = *param_1;
    *(undefined4 *)(pCVar5 + 0x18) = 0;
    *(undefined8 *)(pCVar5 + 0x20) = 0;
    *(undefined4 *)(pCVar5 + 0x38) = 0;
    *(undefined8 *)(pCVar5 + 0x40) = 0;
    pCVar5[0x50] = (ControlKind)0x0;
    *(uint *)(pCVar5 + 4) = uVar2;
    *(uchar **)(pCVar5 + 8) = puVar9;
    pCVar5[0x10] = CVar3;
    pCVar5[0x30] = (ControlKind)(CVar3 == (ControlKind)0x0);
    lVar8 = *(long *)this;
    pCVar4 = pCVar5;
    for (lVar10 = *(long *)(this + 8); lVar10 != lVar8; lVar10 = lVar10 + -0x58) {
      uVar11 = *(undefined8 *)(lVar10 + -0x48);
      uVar13 = *(undefined8 *)(lVar10 + -0x50);
      uVar12 = *(undefined8 *)(lVar10 + -0x58);
      *(undefined8 *)(pCVar4 + -0x40) = *(undefined8 *)(lVar10 + -0x40);
      *(undefined8 *)(pCVar4 + -0x48) = uVar11;
      *(undefined8 *)(pCVar4 + -0x50) = uVar13;
      *(undefined8 *)(pCVar4 + -0x58) = uVar12;
      uVar12 = *(undefined8 *)(lVar10 + -0x30);
      uVar11 = *(undefined8 *)(lVar10 + -0x38);
      uVar14 = *(undefined8 *)(lVar10 + -0x20);
      uVar13 = *(undefined8 *)(lVar10 + -0x28);
      uVar16 = *(undefined8 *)(lVar10 + -0x10);
      uVar15 = *(undefined8 *)(lVar10 + -0x18);
      *(undefined8 *)(pCVar4 + -8) = *(undefined8 *)(lVar10 + -8);
      *(undefined8 *)(pCVar4 + -0x10) = uVar16;
      *(undefined8 *)(pCVar4 + -0x18) = uVar15;
      *(undefined8 *)(pCVar4 + -0x20) = uVar14;
      *(undefined8 *)(pCVar4 + -0x28) = uVar13;
      *(undefined8 *)(pCVar4 + -0x30) = uVar12;
      *(undefined8 *)(pCVar4 + -0x38) = uVar11;
      pCVar4 = pCVar4 + -0x58;
    }
    *(ControlKind **)this = pCVar4;
    *(ControlKind **)(this + 8) = pCVar5 + 0x58;
    *(ulong *)(this + 0x10) = lVar6 + uVar1 * 0x58;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void std::__ndk1::vector<v8::internal::ZoneVector<v8::internal::wasm::ValueType>,
   v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::ValueType> >
   >::__emplace_back_slow_path<v8::internal::ZoneVector<v8::internal::wasm::ValueType>
   >(v8::internal::ZoneVector<v8::internal::wasm::ValueType>&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::ZoneVector<v8::internal::wasm::ValueType>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::ValueType>>>
::__emplace_back_slow_path<v8::internal::ZoneVector<v8::internal::wasm::ValueType>>
          (vector<v8::internal::ZoneVector<v8::internal::wasm::ValueType>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::ValueType>>>
           *this,ZoneVector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  Zone *this_00;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x1a == 0) {
    lVar5 = *(long *)(this + 0x10) - *(long *)this;
    uVar7 = lVar5 >> 4;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x1fffffe < (ulong)(lVar5 >> 5)) {
      uVar1 = 0x3ffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar7 = uVar1 * 0x20;
      lVar5 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar5 + uVar7;
      }
      else {
        lVar5 = v8::internal::Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar11 * 0x20);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar2 = puVar6 + 4;
    puVar6[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar6 = *(undefined8 *)param_1;
    puVar6[1] = *(undefined8 *)(param_1 + 8);
    puVar6[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar8 = *(long **)this;
    plVar3 = *(long **)(this + 8);
    plVar9 = plVar8;
    if (plVar3 != plVar8) {
      lVar11 = 0;
      do {
        *(undefined8 *)((long)puVar6 + lVar11 + -0x20) = 0;
        *(undefined8 *)((long)puVar6 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)puVar6 + lVar11 + -0x10) = 0;
        lVar10 = lVar11 + -0x20;
        *(undefined8 *)((long)puVar6 + lVar11 + -8) = *(undefined8 *)((long)plVar3 + lVar11 + -8);
        *(undefined8 *)((long)puVar6 + lVar11 + -0x20) =
             *(undefined8 *)((long)plVar3 + lVar11 + -0x20);
        *(undefined8 *)((long)puVar6 + lVar11 + -0x18) =
             *(undefined8 *)((long)plVar3 + lVar11 + -0x18);
        *(undefined8 *)((long)puVar6 + lVar11 + -0x10) =
             *(undefined8 *)((long)plVar3 + lVar11 + -0x10);
        *(undefined8 *)((long)plVar3 + lVar11 + -0x20) = 0;
        *(undefined8 *)((long)plVar3 + lVar11 + -0x18) = 0;
        *(undefined8 *)((long)plVar3 + lVar11 + -0x10) = 0;
        lVar11 = lVar10;
      } while ((long)plVar8 - (long)plVar3 != lVar10);
      plVar8 = *(long **)(this + 8);
      puVar6 = (undefined8 *)((long)puVar6 + lVar10);
      plVar9 = *(long **)this;
    }
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar2;
    *(ulong *)(this + 0x10) = lVar5 + uVar1 * 0x20;
    if (plVar8 != plVar9) {
      lVar11 = plVar8[-4];
      plVar3 = plVar8 + -4;
      while( true ) {
        plVar4 = plVar3;
        if (lVar11 != 0) {
          plVar8[-3] = lVar11;
        }
        if (plVar9 == plVar4) break;
        lVar11 = plVar4[-4];
        plVar3 = plVar4 + -4;
        plVar8 = plVar4;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


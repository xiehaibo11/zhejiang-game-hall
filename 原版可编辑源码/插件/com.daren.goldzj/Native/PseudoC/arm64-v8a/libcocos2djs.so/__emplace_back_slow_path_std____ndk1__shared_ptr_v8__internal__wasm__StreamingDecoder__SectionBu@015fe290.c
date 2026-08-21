
/* void 
   std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>
   > 
   >::__emplace_back_slow_path<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>
   >(std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>>>
::
__emplace_back_slow_path<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>>
          (vector<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>>>
           *this,shared_ptr *param_1)

{
  ulong uVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  __shared_weak_count *this_00;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3c == 0) {
    lVar6 = *(long *)(this + 0x10) - *(long *)this;
    uVar10 = lVar6 >> 3;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_015fe3cc;
      pvVar5 = operator_new(uVar1 << 4);
    }
    uVar15 = *(undefined8 *)param_1;
    puVar9 = (undefined8 *)((long)pvVar5 + lVar13 * 0x10);
    puVar7 = puVar9 + 2;
    puVar9[1] = *(undefined8 *)(param_1 + 8);
    *puVar9 = uVar15;
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    puVar12 = *(undefined8 **)this;
    puVar8 = puVar9;
    puVar11 = *(undefined8 **)(this + 8);
    puVar14 = puVar12;
    if (*(undefined8 **)(this + 8) != puVar12) {
      do {
        puVar14 = puVar11 + -2;
        puVar9 = puVar8 + -2;
        *puVar9 = *puVar14;
        puVar8[-1] = puVar11[-1];
        *puVar14 = 0;
        puVar11[-1] = 0;
        puVar8 = puVar9;
        puVar11 = puVar14;
      } while (puVar12 != puVar14);
      puVar12 = *(undefined8 **)this;
      puVar14 = *(undefined8 **)(this + 8);
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar7;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x10);
    while (puVar14 != puVar12) {
      this_00 = (__shared_weak_count *)puVar14[-1];
      puVar14 = puVar14 + -2;
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var2 = this_00 + 8;
        do {
          lVar13 = *(long *)p_Var2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
          if (bVar4) {
            *(long *)p_Var2 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          __shared_weak_count::__release_weak(this_00);
        }
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      operator_delete(puVar12);
      return;
    }
    return;
  }
LAB_015fe3cc:
                    /* WARNING: Subroutine does not return */
  abort();
}


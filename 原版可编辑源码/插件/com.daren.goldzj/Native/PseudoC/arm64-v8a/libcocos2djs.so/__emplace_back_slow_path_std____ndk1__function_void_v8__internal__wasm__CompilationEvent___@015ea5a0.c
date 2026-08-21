
/* void std::__ndk1::vector<std::__ndk1::function<void (v8::internal::wasm::CompilationEvent)>,
   std::__ndk1::allocator<std::__ndk1::function<void (v8::internal::wasm::CompilationEvent)> >
   >::__emplace_back_slow_path<std::__ndk1::function<void (v8::internal::wasm::CompilationEvent)>
   >(std::__ndk1::function<void (v8::internal::wasm::CompilationEvent)>&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
::__emplace_back_slow_path<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>
          (vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
           *this,function *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
LAB_015ea798:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) goto LAB_015ea798;
    pvVar2 = operator_new(uVar1 * 0x30);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  pvVar9 = (void *)((long)pvVar2 + lVar8 * 0x10);
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)((long)pvVar2 + lVar8 * 0x10 + 0x20) = 0;
  }
  else if ((long *)param_1 == plVar3) {
    *(void **)((long)pvVar2 + lVar8 * 0x10 + 0x20) = pvVar9;
    (**(code **)(*plVar3 + 0x18))(plVar3,pvVar9);
  }
  else {
    *(long **)((long)pvVar2 + lVar8 * 0x10 + 0x20) = plVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  plVar3 = *(long **)this;
  plVar10 = *(long **)(this + 8);
  pvVar2 = (void *)((long)pvVar2 + uVar1 * 0x30);
  if (plVar10 == plVar3) {
    *(void **)this = pvVar9;
    *(long *)(this + 8) = (long)pvVar9 + 0x30;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    lVar8 = 0;
    do {
      lVar6 = *(long *)((long)plVar10 + lVar8 + -0x10);
      if (lVar6 == 0) {
        *(undefined8 *)((long)pvVar9 + lVar8 + -0x10) = 0;
      }
      else if ((long)plVar10 + lVar8 + -0x30 == lVar6) {
        *(long *)((long)pvVar9 + lVar8 + -0x10) = (long)pvVar9 + lVar8 + -0x30;
        plVar4 = *(long **)((long)plVar10 + lVar8 + -0x10);
        (**(code **)(*plVar4 + 0x18))(plVar4,(long)pvVar9 + lVar8 + -0x30);
      }
      else {
        *(long *)((long)pvVar9 + lVar8 + -0x10) = lVar6;
        *(undefined8 *)((long)plVar10 + lVar8 + -0x10) = 0;
      }
      lVar8 = lVar8 + -0x30;
    } while ((long)plVar3 - (long)plVar10 != lVar8);
    plVar3 = *(long **)this;
    plVar10 = *(long **)(this + 8);
    *(long *)this = (long)pvVar9 + lVar8;
    *(long *)(this + 8) = (long)pvVar9 + 0x30;
    *(void **)(this + 0x10) = pvVar2;
joined_r0x015ea71c:
    if (plVar10 != plVar3) {
      plVar4 = (long *)plVar10[-2];
      plVar10 = plVar10 + -6;
      if (plVar10 != plVar4) goto code_r0x015ea764;
      pcVar5 = *(code **)(*plVar4 + 0x20);
      goto LAB_015ea748;
    }
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  operator_delete(plVar3);
  return;
code_r0x015ea764:
  if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
LAB_015ea748:
    (*pcVar5)();
  }
  goto joined_r0x015ea71c;
}


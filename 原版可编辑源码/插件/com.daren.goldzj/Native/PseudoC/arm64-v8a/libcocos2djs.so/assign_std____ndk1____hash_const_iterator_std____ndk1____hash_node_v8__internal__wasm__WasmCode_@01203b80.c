
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::wasm::WasmCode*,
   void*>*> >::value&&is_constructible<v8::internal::wasm::WasmCode*,
   std::__ndk1::iterator_traits<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::wasm::WasmCode*,
   void*>*> >::reference>::value, void>::type std::__ndk1::vector<v8::internal::wasm::WasmCode*,
   std::__ndk1::allocator<v8::internal::wasm::WasmCode*>
   >::assign<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::wasm::WasmCode*,
   void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::wasm::WasmCode*,
   void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::wasm::WasmCode*,
   void*>*>) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>::
assign<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::wasm::WasmCode*,void*>*>>
          (vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
           *this,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = param_3;
  if (param_2 == param_3) {
    plVar4 = *(long **)this;
    bVar3 = false;
  }
  else {
    plVar4 = param_2;
    uVar1 = 0xffffffffffffffff;
    do {
      uVar6 = uVar1;
      plVar4 = (long *)*plVar4;
      uVar1 = uVar6 + 1;
    } while (plVar4 != param_3);
    lVar5 = *(long *)(this + 0x10);
    plVar4 = *(long **)this;
    if ((ulong)(lVar5 - (long)plVar4 >> 3) <= uVar1) {
      if (plVar4 != (long *)0x0) {
        *(long **)(this + 8) = plVar4;
        operator_delete(plVar4);
        lVar5 = 0;
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)(this + 0x10) = 0;
      }
      if (uVar1 < 0x1fffffffffffffff) {
        uVar2 = lVar5 >> 2;
        if ((ulong)(lVar5 >> 2) <= uVar1) {
          uVar2 = uVar6 + 2;
        }
        if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 >> 0x3d == 0) {
          plVar7 = operator_new(uVar2 * 8);
          *(long **)this = plVar7;
          *(long **)(this + 8) = plVar7;
          *(long **)(this + 0x10) = plVar7 + uVar2;
          do {
            *plVar7 = param_2[2];
            param_2 = (long *)*param_2;
            plVar7 = (long *)(*(long *)(this + 8) + 8);
            *(long **)(this + 8) = plVar7;
          } while (param_2 != param_3);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = *(long *)(this + 8) - (long)plVar4 >> 3;
    if (uVar1 < uVar6) {
      bVar3 = false;
    }
    else {
      plVar7 = param_2;
      if (*(long *)(this + 8) - (long)plVar4 < 1) goto joined_r0x01203d10;
      do {
        plVar7 = (long *)*plVar7;
        uVar6 = uVar6 - 1;
      } while (0 < (long)uVar6);
      bVar3 = true;
    }
  }
  for (; plVar7 != param_2; param_2 = (long *)*param_2) {
    *plVar4 = param_2[2];
    plVar4 = plVar4 + 1;
  }
  if (!bVar3) {
    *(long **)(this + 8) = plVar4;
    return;
  }
joined_r0x01203d10:
  if (plVar7 != param_3) {
    this = this + 8;
    plVar4 = *(long **)this;
    do {
      *plVar4 = plVar7[2];
      plVar7 = (long *)*plVar7;
      plVar4 = (long *)(*(long *)this + 8);
      *(long **)this = plVar4;
    } while (plVar7 != param_3);
  }
  return;
}


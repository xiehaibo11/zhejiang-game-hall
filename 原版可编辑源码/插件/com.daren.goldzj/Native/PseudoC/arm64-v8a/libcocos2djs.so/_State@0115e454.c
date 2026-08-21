
/* v8::internal::FuncNameInferrer::State::~State() */

void __thiscall v8::internal::FuncNameInferrer::State::~State(State *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  __split_buffer<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>&>
  a_Stack_48 [16];
  undefined8 *local_38;
  
  lVar2 = *(long *)this;
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  uVar1 = *(ulong *)(this + 8);
  uVar4 = (long)puVar3 - *(long *)(lVar2 + 8) >> 3;
  if (uVar1 <= uVar4) {
    if (uVar1 < uVar4) {
      *(ulong *)(lVar2 + 0x10) = *(long *)(lVar2 + 8) + uVar1 * 8;
      lVar2 = *(long *)this;
    }
    *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + -1;
    return;
  }
  if ((ulong)(*(long *)(lVar2 + 0x18) - (long)puVar3 >> 3) < uVar1 - uVar4) {
    uVar1 = FUN_01168598();
    std::__ndk1::
    __split_buffer<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>&>
    ::__split_buffer(a_Stack_48,uVar1,*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3,
                     (allocator *)(lVar2 + 0x18));
    *local_38 = 0;
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}



/* v8::internal::compiler::CodeAssemblerParameterizedLabelBase::CreatePhis(std::__ndk1::vector<v8::internal::MachineRepresentation,
   std::__ndk1::allocator<v8::internal::MachineRepresentation> >) */

vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>> *
__thiscall
v8::internal::compiler::CodeAssemblerParameterizedLabelBase::CreatePhis
          (CodeAssemblerParameterizedLabelBase *this,long *param_2)

{
  long *plVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
  *this_00;
  void *__src;
  size_t __n;
  ulong uVar6;
  Node *local_58;
  
  this_00 = (vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
             *)(this + 0x20);
  __src = *(void **)this_00;
  lVar3 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
  uVar4 = lVar3 * -0x5555555555555555;
  uVar6 = *(long *)(this + 0x30) - (long)__src >> 3;
  if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = lVar3 * 0x5555555555555558;
    __n = *(long *)(this + 0x28) - (long)__src;
    __dest = operator_new(uVar6);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this_00;
    }
    *(void **)(this + 0x20) = __dest;
    *(size_t *)(this + 0x28) = (long)__dest + __n;
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar6);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  lVar3 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) != lVar3) {
    uVar6 = 0;
    do {
      plVar5 = (long *)(lVar3 + uVar6 * 0x18);
      plVar1 = (long *)*plVar5;
      plVar5 = (long *)plVar5[1];
      plVar2 = plVar1;
      do {
        if (plVar2 == plVar5) {
          local_58 = (Node *)RawMachineAssembler::Phi
                                       ((RawMachineAssembler *)**(undefined8 **)this,
                                        *(undefined1 *)(*param_2 + uVar6),
                                        (ulong)((long)plVar5 - (long)plVar1) >> 3);
          goto LAB_0168a910;
        }
        lVar3 = *plVar2;
        plVar2 = plVar2 + 1;
      } while (lVar3 != 0);
      local_58 = (Node *)0x0;
LAB_0168a910:
      if (*(undefined8 **)(this + 0x28) < *(undefined8 **)(this + 0x30)) {
        **(undefined8 **)(this + 0x28) = local_58;
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
        ::__push_back_slow_path<v8::internal::compiler::Node*>(this_00,&local_58);
      }
      lVar3 = *(long *)(this + 8);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)((*(long *)(this + 0x10) - lVar3 >> 3) * -0x5555555555555555));
  }
  return this_00;
}


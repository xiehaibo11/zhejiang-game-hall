
/* v8::internal::compiler::CodeAssemblerParameterizedLabelBase::AddInputs(std::__ndk1::vector<v8::internal::compiler::Node*,
   std::__ndk1::allocator<v8::internal::compiler::Node*> >) */

void __thiscall
v8::internal::compiler::CodeAssemblerParameterizedLabelBase::AddInputs
          (CodeAssemblerParameterizedLabelBase *this,long *param_2)

{
  vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
  *this_00;
  Node *pNVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_2;
  lVar5 = param_2[1];
  if (*(undefined8 **)(this + 0x20) == *(undefined8 **)(this + 0x28)) {
    if (lVar5 != lVar2) {
      lVar4 = 0;
      lVar5 = 0;
      uVar3 = 0;
      do {
        this_00 = (vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                   *)(*(long *)(this + 8) + lVar4);
        if (*(undefined8 **)(this_00 + 8) == *(undefined8 **)(this_00 + 0x10)) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
          ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                    (this_00,(Node **)(lVar2 + lVar5));
        }
        else {
          **(undefined8 **)(this_00 + 8) = *(undefined8 *)(lVar2 + uVar3 * 8);
          *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
        }
        lVar2 = *param_2;
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 8;
        lVar4 = lVar4 + 0x18;
      } while (uVar3 < (ulong)(param_2[1] - lVar2 >> 3));
    }
  }
  else if (lVar5 != lVar2) {
    uVar3 = 0;
    pNVar1 = (Node *)**(undefined8 **)(this + 0x20);
    while( true ) {
      if (pNVar1 != (Node *)0x0) {
        RawMachineAssembler::AppendPhiInput
                  ((RawMachineAssembler *)**(undefined8 **)this,pNVar1,*(Node **)(lVar2 + uVar3 * 8)
                  );
        lVar2 = *param_2;
        lVar5 = param_2[1];
      }
      uVar3 = uVar3 + 1;
      if ((ulong)(lVar5 - lVar2 >> 3) <= uVar3) break;
      pNVar1 = *(Node **)(*(long *)(this + 0x20) + uVar3 * 8);
    }
  }
  return;
}


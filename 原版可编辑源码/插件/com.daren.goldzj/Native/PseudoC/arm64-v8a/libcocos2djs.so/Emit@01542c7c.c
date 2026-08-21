
/* v8::internal::BackReferenceNode::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

void __thiscall
v8::internal::BackReferenceNode::Emit
          (BackReferenceNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  BackReferenceNode BVar1;
  int iVar2;
  RegExpMacroAssembler *this_00;
  
  if (((((*(long *)(param_2 + 0x10) == 0) && (*(long *)(param_2 + 8) == 0)) &&
       (*(int *)param_2 == 0)) &&
      ((*(int *)(param_2 + 0x28) == 0 && (*(int *)(param_2 + 0x2c) == 0)))) &&
     ((*(int *)(param_2 + 0x30) == 0 && (*(int *)(param_2 + 0x5c) == -1)))) {
    this_00 = *(RegExpMacroAssembler **)(param_1 + 0x28);
    iVar2 = RegExpNode::LimitVersions((RegExpNode *)this,param_1,param_2);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      if ((*(uint *)(this + 0x48) >> 1 & 1) == 0) {
        (**(code **)(*(long *)this_00 + 0x80))
                  (this_00,*(undefined4 *)(this + 0x40),this[0x4c] != (BackReferenceNode)0x0,
                   *(undefined8 *)(param_2 + 0x10));
        BVar1 = this[0x4c];
      }
      else {
        (**(code **)(*(long *)this_00 + 0x88))
                  (this_00,*(undefined4 *)(this + 0x40),this[0x4c] != (BackReferenceNode)0x0,
                   *(uint *)(this + 0x48) >> 4 & 1,*(undefined8 *)(param_2 + 0x10));
        BVar1 = this[0x4c];
      }
      if (BVar1 != (BackReferenceNode)0x0) {
        *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
      }
      if ((((byte)this[0x48] >> 4 & 1) != 0) && (param_1[0x30] == (RegExpCompiler)0x0)) {
        RegExpMacroAssembler::CheckNotInSurrogatePair
                  (this_00,*(int *)param_2,*(Label **)(param_2 + 0x10));
      }
      (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),param_1,param_2);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
    return;
  }
  Trace::Flush(param_2,param_1,(RegExpNode *)this);
  return;
}


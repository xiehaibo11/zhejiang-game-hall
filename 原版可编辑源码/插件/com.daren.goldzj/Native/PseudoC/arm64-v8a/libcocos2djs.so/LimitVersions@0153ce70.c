
/* v8::internal::RegExpNode::LimitVersions(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

undefined8 __thiscall
v8::internal::RegExpNode::LimitVersions(RegExpNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  int iVar1;
  RegExpCompiler RVar2;
  vector<v8::internal::RegExpNode*,std::__ndk1::allocator<v8::internal::RegExpNode*>> *this_00;
  RegExpNode *local_18;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    if ((((*(long *)(param_2 + 0x10) == 0) && (*(long *)(param_2 + 8) == 0)) &&
        (*(int *)param_2 == 0)) &&
       (((*(int *)(param_2 + 0x28) == 0 && (*(int *)(param_2 + 0x2c) == 0)) &&
        ((*(int *)(param_2 + 0x30) == 0 && (*(int *)(param_2 + 0x5c) == -1)))))) {
      if (((-1 < *(int *)(this + 0x10)) && (this[0x18] == (RegExpNode)0x0)) &&
         ((param_1[0x32] == (RegExpCompiler)0x0 && (*(int *)(param_1 + 0x20) < 0x65)))) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x40))();
        return 1;
      }
      (**(code **)(**(long **)(param_1 + 0x28) + 0xe0))();
      if ((this[0x18] == (RegExpNode)0x0) && (-1 < *(int *)(this + 0x10))) {
        this[0x18] = (RegExpNode)0x1;
        this_00 = *(vector<v8::internal::RegExpNode*,std::__ndk1::allocator<v8::internal::RegExpNode*>>
                    **)(param_1 + 0x18);
        if (*(undefined8 **)(this_00 + 8) != *(undefined8 **)(this_00 + 0x10)) {
          **(undefined8 **)(this_00 + 8) = this;
          *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
          return 0;
        }
        local_18 = this;
        std::__ndk1::
        vector<v8::internal::RegExpNode*,std::__ndk1::allocator<v8::internal::RegExpNode*>>::
        __push_back_slow_path<v8::internal::RegExpNode*const&>(this_00,&local_18);
      }
      return 0;
    }
    iVar1 = *(int *)(this + 0x1c);
    *(int *)(this + 0x1c) = iVar1 + 1;
    RVar2 = param_1[0x32];
    if ((((RVar2 != (RegExpCompiler)0x0) || (100 < *(int *)(param_1 + 0x20))) || (9 < iVar1 + 1)) ||
       (param_1[0x33] == (RegExpCompiler)0x0)) {
      param_1[0x32] = (RegExpCompiler)0x1;
      Trace::Flush(param_2,param_1,this);
      param_1[0x32] = RVar2;
      return 0;
    }
  }
  return 1;
}


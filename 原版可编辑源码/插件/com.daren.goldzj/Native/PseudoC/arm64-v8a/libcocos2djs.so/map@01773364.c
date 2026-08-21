
/* v8::internal::compiler::PeeledIteration::map(v8::internal::compiler::Node*) */

Node * __thiscall v8::internal::compiler::PeeledIteration::map(PeeledIteration *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)this;
  if (*(long *)(this + 8) - lVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(Node **)(lVar1 + uVar2 * 8) == param_1) {
        return *(Node **)(lVar1 + uVar2 * 8 + 8);
      }
      uVar2 = uVar2 + 2;
    } while (uVar2 < (ulong)(*(long *)(this + 8) - lVar1 >> 3));
  }
  return param_1;
}


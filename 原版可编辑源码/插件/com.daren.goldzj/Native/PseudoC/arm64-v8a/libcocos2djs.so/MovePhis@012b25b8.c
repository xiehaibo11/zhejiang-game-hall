
/* v8::internal::compiler::Schedule::MovePhis(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::Schedule::MovePhis(Schedule *this,BasicBlock *param_1,BasicBlock *param_2)

{
  void *__dest;
  size_t __n;
  long lVar1;
  long lVar2;
  Node *pNVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != lVar1) {
    uVar4 = 0;
    do {
      pNVar3 = *(Node **)(lVar1 + uVar4 * 8);
      if (*(short *)(*(long *)pNVar3 + 0x10) == 0x23) {
        BasicBlock::AddNode(param_2,pNVar3);
        __dest = (void *)(*(long *)(param_1 + 0x40) + uVar4 * 8);
        __n = *(long *)(param_1 + 0x48) - ((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(void **)(param_1 + 0x48) = (void *)((long)__dest + ((long)__n >> 3) * 8);
        *(BasicBlock **)(*(long *)(this + 0x28) + ((ulong)*(uint *)(pNVar3 + 0x14) & 0xffffff) * 8)
             = param_2;
        lVar1 = *(long *)(param_1 + 0x40);
        lVar2 = *(long *)(param_1 + 0x48);
      }
      else {
        uVar4 = uVar4 + 1;
      }
    } while (uVar4 < (ulong)(lVar2 - lVar1 >> 3));
  }
  return;
}



/* btDbvt::remove(btDbvtNode*) */

void __thiscall btDbvt::remove(btDbvt *this,btDbvtNode *param_1)

{
  FUN_01237c10();
  btAlignedFreeInternal(*(void **)(this + 8));
  *(btDbvtNode **)(this + 8) = param_1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  return;
}


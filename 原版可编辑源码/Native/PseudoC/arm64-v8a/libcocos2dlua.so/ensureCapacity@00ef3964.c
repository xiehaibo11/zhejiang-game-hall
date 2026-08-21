
/* cocos2d::DrawNode::ensureCapacity(int) */

void __thiscall cocos2d::DrawNode::ensureCapacity(DrawNode *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)(this + 0x310);
  if (iVar2 < *(int *)(this + 0x314) + param_1) {
    iVar1 = iVar2;
    if (iVar2 <= param_1) {
      iVar1 = param_1;
    }
    *(int *)(this + 0x310) = iVar1 + iVar2;
    pvVar3 = realloc(*(void **)(this + 0x318),(long)(iVar1 + iVar2) * 0x14);
    *(void **)(this + 0x318) = pvVar3;
  }
  return;
}


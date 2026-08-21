
/* cocos2d::DrawNode::ensureCapacityGLLine(int) */

void __thiscall cocos2d::DrawNode::ensureCapacityGLLine(DrawNode *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)(this + 0x344);
  if (iVar2 < *(int *)(this + 0x348) + param_1) {
    iVar1 = iVar2;
    if (iVar2 <= param_1) {
      iVar1 = param_1;
    }
    *(int *)(this + 0x344) = iVar1 + iVar2;
    pvVar3 = realloc(*(void **)(this + 0x350),(long)(iVar1 + iVar2) * 0x14);
    *(void **)(this + 0x350) = pvVar3;
  }
  return;
}


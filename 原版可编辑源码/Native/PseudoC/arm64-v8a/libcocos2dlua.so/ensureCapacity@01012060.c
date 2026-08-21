
/* cocos2d::Physics3DDebugDrawer::ensureCapacity(int) */

void __thiscall
cocos2d::Physics3DDebugDrawer::ensureCapacity(Physics3DDebugDrawer *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)(this + 0x10);
  if (iVar2 < *(int *)(this + 0x14) + param_1) {
    iVar1 = iVar2;
    if (iVar2 <= param_1) {
      iVar1 = param_1;
    }
    *(int *)(this + 0x10) = iVar1 + iVar2;
    pvVar3 = realloc(*(void **)(this + 0x18),(long)(iVar1 + iVar2) * 0x1c);
    *(void **)(this + 0x18) = pvVar3;
  }
  return;
}


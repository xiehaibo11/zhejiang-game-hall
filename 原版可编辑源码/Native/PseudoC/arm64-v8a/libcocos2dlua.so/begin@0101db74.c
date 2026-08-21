
/* cocos2d::NavMeshDebugDraw::begin(duDebugDrawPrimitives, float) */

void __thiscall cocos2d::NavMeshDebugDraw::begin(uint param_1,NavMeshDebugDraw *this,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(long *)(this + 0x38) == 0) {
    puVar3 = operator_new(0x10,(nothrow_t *)&std::nothrow);
    uVar4 = 4;
    if (param_3 != 2) {
      uVar4 = (uint)(param_3 == 1);
    }
    *(uint **)(this + 0x38) = puVar3;
    *puVar3 = uVar4;
    *(NavMeshDebugDraw *)(puVar3 + 1) = this[0xac];
    iVar1 = *(int *)(this + 0x10);
    iVar2 = *(int *)(this + 8);
    puVar3[3] = param_1;
    *(short *)((long)puVar3 + 6) = (short)((uint)(iVar1 - iVar2) >> 2) * 0x6db7;
  }
  return;
}


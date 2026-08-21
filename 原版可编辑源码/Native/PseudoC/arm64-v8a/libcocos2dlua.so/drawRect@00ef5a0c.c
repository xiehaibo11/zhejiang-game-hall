
/* cocos2d::DrawNode::drawRect(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2 const&, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawRect
          (DrawNode *this,Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4,Color4F *param_5)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint auStack_a0 [4];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)(this + 0x348);
  iVar5 = *(int *)(this + 0x344);
  uVar7 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)param_2;
  if (iVar5 < iVar4 + 2) {
    iVar4 = iVar5;
    if (iVar5 < 3) {
      iVar4 = 2;
    }
    *(int *)(this + 0x344) = iVar4 + iVar5;
    pvVar3 = realloc(*(void **)(this + 0x350),(long)(iVar4 + iVar5) * 0x14);
    iVar4 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar3;
  }
  else {
    pvVar3 = *(void **)(this + 0x350);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + (long)iVar4 * 0x14);
  local_90 = uVar7;
  Color4B::Color4B((Color4B *)&uStack_88,param_5);
  uStack_84 = 0;
  uStack_80 = 0;
  Color4B::Color4B((Color4B *)auStack_a0,param_5);
  auStack_a0[1] = 0;
  auStack_a0[2] = 0;
  puVar8[1] = CONCAT44(uStack_84,uStack_88);
  *puVar8 = local_90;
  *(undefined4 *)(puVar8 + 2) = uStack_80;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  *(ulong *)((long)puVar8 + 0x1c) = (ulong)auStack_a0[0];
  *(undefined8 *)((long)puVar8 + 0x14) = uVar6;
  iVar4 = *(int *)(this + 0x348);
  this[0x452] = (DrawNode)0x1;
  iVar1 = *(int *)(this + 0x344);
  iVar5 = iVar4 + 2;
  *(int *)(this + 0x348) = iVar5;
  uVar7 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)param_3;
  if (iVar1 < iVar4 + 4) {
    iVar5 = iVar1;
    if (iVar1 < 3) {
      iVar5 = 2;
    }
    *(int *)(this + 0x344) = iVar5 + iVar1;
    pvVar3 = realloc(*(void **)(this + 0x350),(long)(iVar5 + iVar1) * 0x14);
    iVar5 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar3;
  }
  else {
    pvVar3 = *(void **)(this + 0x350);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + (long)iVar5 * 0x14);
  local_90 = uVar7;
  Color4B::Color4B((Color4B *)&uStack_88,param_5);
  uStack_84 = 0;
  uStack_80 = 0;
  Color4B::Color4B((Color4B *)auStack_a0,param_5);
  auStack_a0[1] = 0;
  auStack_a0[2] = 0;
  puVar8[1] = CONCAT44(uStack_84,uStack_88);
  *puVar8 = local_90;
  *(undefined4 *)(puVar8 + 2) = uStack_80;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  *(ulong *)((long)puVar8 + 0x1c) = (ulong)auStack_a0[0];
  *(undefined8 *)((long)puVar8 + 0x14) = uVar6;
  iVar4 = *(int *)(this + 0x348);
  this[0x452] = (DrawNode)0x1;
  iVar1 = *(int *)(this + 0x344);
  iVar5 = iVar4 + 2;
  *(int *)(this + 0x348) = iVar5;
  uVar7 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)param_4;
  if (iVar1 < iVar4 + 4) {
    iVar5 = iVar1;
    if (iVar1 < 3) {
      iVar5 = 2;
    }
    *(int *)(this + 0x344) = iVar5 + iVar1;
    pvVar3 = realloc(*(void **)(this + 0x350),(long)(iVar5 + iVar1) * 0x14);
    iVar5 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar3;
  }
  else {
    pvVar3 = *(void **)(this + 0x350);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + (long)iVar5 * 0x14);
  local_90 = uVar7;
  Color4B::Color4B((Color4B *)&uStack_88,param_5);
  uStack_84 = 0;
  uStack_80 = 0;
  Color4B::Color4B((Color4B *)auStack_a0,param_5);
  auStack_a0[1] = 0;
  auStack_a0[2] = 0;
  puVar8[1] = CONCAT44(uStack_84,uStack_88);
  *puVar8 = local_90;
  *(undefined4 *)(puVar8 + 2) = uStack_80;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  *(ulong *)((long)puVar8 + 0x1c) = (ulong)auStack_a0[0];
  *(undefined8 *)((long)puVar8 + 0x14) = uVar6;
  iVar4 = *(int *)(this + 0x348);
  this[0x452] = (DrawNode)0x1;
  iVar1 = *(int *)(this + 0x344);
  iVar5 = iVar4 + 2;
  *(int *)(this + 0x348) = iVar5;
  uVar7 = *(undefined8 *)param_4;
  uVar6 = *(undefined8 *)param_1;
  if (iVar1 < iVar4 + 4) {
    iVar5 = iVar1;
    if (iVar1 < 3) {
      iVar5 = 2;
    }
    *(int *)(this + 0x344) = iVar5 + iVar1;
    pvVar3 = realloc(*(void **)(this + 0x350),(long)(iVar5 + iVar1) * 0x14);
    iVar5 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar3;
  }
  else {
    pvVar3 = *(void **)(this + 0x350);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + (long)iVar5 * 0x14);
  local_90 = uVar7;
  Color4B::Color4B((Color4B *)&uStack_88,param_5);
  uStack_84 = 0;
  uStack_80 = 0;
  Color4B::Color4B((Color4B *)auStack_a0,param_5);
  auStack_a0[1] = 0;
  auStack_a0[2] = 0;
  puVar8[1] = CONCAT44(uStack_84,uStack_88);
  *puVar8 = local_90;
  *(undefined4 *)(puVar8 + 2) = uStack_80;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  *(ulong *)((long)puVar8 + 0x1c) = (ulong)auStack_a0[0];
  *(undefined8 *)((long)puVar8 + 0x14) = uVar6;
  this[0x452] = (DrawNode)0x1;
  *(int *)(this + 0x348) = *(int *)(this + 0x348) + 2;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


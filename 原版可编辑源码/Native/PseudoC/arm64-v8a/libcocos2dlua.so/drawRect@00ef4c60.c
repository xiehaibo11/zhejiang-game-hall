
/* cocos2d::DrawNode::drawRect(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Color4F const&)
    */

void __thiscall
cocos2d::DrawNode::drawRect(DrawNode *this,Vec2 *param_1,Vec2 *param_2,Color4F *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_98;
  uint auStack_90 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar7 = *(int *)(this + 0x348);
  iVar8 = *(int *)(this + 0x344);
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)param_2;
  if (iVar8 < iVar7 + 2) {
    iVar7 = iVar8;
    if (iVar8 < 3) {
      iVar7 = 2;
    }
    *(int *)(this + 0x344) = iVar7 + iVar8;
    pvVar6 = realloc(*(void **)(this + 0x350),(long)(iVar7 + iVar8) * 0x14);
    iVar7 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar6;
  }
  else {
    pvVar6 = *(void **)(this + 0x350);
  }
  puVar9 = (undefined8 *)((long)pvVar6 + (long)iVar7 * 0x14);
  local_80 = uVar1;
  uStack_7c = uVar2;
  Color4B::Color4B((Color4B *)&uStack_78,param_3);
  local_98 = CONCAT44(uVar2,uVar3);
  uStack_74 = 0;
  uStack_70 = 0;
  Color4B::Color4B((Color4B *)auStack_90,param_3);
  auStack_90[1] = 0;
  auStack_90[2] = 0;
  puVar9[1] = CONCAT44(uStack_74,uStack_78);
  *puVar9 = CONCAT44(uStack_7c,local_80);
  *(undefined4 *)(puVar9 + 2) = uStack_70;
  *(undefined4 *)((long)puVar9 + 0x24) = 0;
  *(ulong *)((long)puVar9 + 0x1c) = (ulong)auStack_90[0];
  *(undefined8 *)((long)puVar9 + 0x14) = local_98;
  iVar7 = *(int *)(this + 0x348);
  this[0x452] = (DrawNode)0x1;
  iVar4 = *(int *)(this + 0x344);
  iVar8 = iVar7 + 2;
  *(int *)(this + 0x348) = iVar8;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar10 = *(undefined8 *)param_2;
  if (iVar4 < iVar7 + 4) {
    iVar8 = iVar4;
    if (iVar4 < 3) {
      iVar8 = 2;
    }
    *(int *)(this + 0x344) = iVar8 + iVar4;
    pvVar6 = realloc(*(void **)(this + 0x350),(long)(iVar8 + iVar4) * 0x14);
    iVar8 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar6;
  }
  else {
    pvVar6 = *(void **)(this + 0x350);
  }
  puVar9 = (undefined8 *)((long)pvVar6 + (long)iVar8 * 0x14);
  local_80 = (undefined4)uVar10;
  uStack_7c = uVar1;
  Color4B::Color4B((Color4B *)&uStack_78,param_3);
  uStack_74 = 0;
  uStack_70 = 0;
  Color4B::Color4B((Color4B *)auStack_90,param_3);
  auStack_90[1] = 0;
  auStack_90[2] = 0;
  puVar9[1] = CONCAT44(uStack_74,uStack_78);
  *puVar9 = CONCAT44(uStack_7c,local_80);
  *(undefined4 *)(puVar9 + 2) = uStack_70;
  *(undefined4 *)((long)puVar9 + 0x24) = 0;
  *(ulong *)((long)puVar9 + 0x1c) = (ulong)auStack_90[0];
  *(undefined8 *)((long)puVar9 + 0x14) = uVar10;
  iVar7 = *(int *)(this + 0x348);
  this[0x452] = (DrawNode)0x1;
  iVar4 = *(int *)(this + 0x344);
  iVar8 = iVar7 + 2;
  *(int *)(this + 0x348) = iVar8;
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)param_1;
  if (iVar4 < iVar7 + 4) {
    iVar8 = iVar4;
    if (iVar4 < 3) {
      iVar8 = 2;
    }
    *(int *)(this + 0x344) = iVar8 + iVar4;
    pvVar6 = realloc(*(void **)(this + 0x350),(long)(iVar8 + iVar4) * 0x14);
    iVar8 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar6;
  }
  else {
    pvVar6 = *(void **)(this + 0x350);
  }
  puVar9 = (undefined8 *)((long)pvVar6 + (long)iVar8 * 0x14);
  local_80 = uVar1;
  uStack_7c = uVar2;
  Color4B::Color4B((Color4B *)&uStack_78,param_3);
  local_98 = CONCAT44(uVar2,uVar3);
  uStack_74 = 0;
  uStack_70 = 0;
  Color4B::Color4B((Color4B *)auStack_90,param_3);
  auStack_90[1] = 0;
  auStack_90[2] = 0;
  puVar9[1] = CONCAT44(uStack_74,uStack_78);
  *puVar9 = CONCAT44(uStack_7c,local_80);
  *(undefined4 *)(puVar9 + 2) = uStack_70;
  *(undefined4 *)((long)puVar9 + 0x24) = 0;
  *(ulong *)((long)puVar9 + 0x1c) = (ulong)auStack_90[0];
  *(undefined8 *)((long)puVar9 + 0x14) = local_98;
  iVar7 = *(int *)(this + 0x348);
  this[0x452] = (DrawNode)0x1;
  iVar4 = *(int *)(this + 0x344);
  iVar8 = iVar7 + 2;
  *(int *)(this + 0x348) = iVar8;
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar10 = *(undefined8 *)param_1;
  if (iVar4 < iVar7 + 4) {
    iVar8 = iVar4;
    if (iVar4 < 3) {
      iVar8 = 2;
    }
    *(int *)(this + 0x344) = iVar8 + iVar4;
    pvVar6 = realloc(*(void **)(this + 0x350),(long)(iVar8 + iVar4) * 0x14);
    iVar8 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar6;
  }
  else {
    pvVar6 = *(void **)(this + 0x350);
  }
  puVar9 = (undefined8 *)((long)pvVar6 + (long)iVar8 * 0x14);
  local_80 = (undefined4)uVar10;
  uStack_7c = uVar1;
  Color4B::Color4B((Color4B *)&uStack_78,param_3);
  uStack_74 = 0;
  uStack_70 = 0;
  Color4B::Color4B((Color4B *)auStack_90,param_3);
  auStack_90[1] = 0;
  auStack_90[2] = 0;
  puVar9[1] = CONCAT44(uStack_74,uStack_78);
  *puVar9 = CONCAT44(uStack_7c,local_80);
  *(undefined4 *)(puVar9 + 2) = uStack_70;
  *(undefined4 *)((long)puVar9 + 0x24) = 0;
  *(ulong *)((long)puVar9 + 0x1c) = (ulong)auStack_90[0];
  *(undefined8 *)((long)puVar9 + 0x14) = uVar10;
  this[0x452] = (DrawNode)0x1;
  *(int *)(this + 0x348) = *(int *)(this + 0x348) + 2;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


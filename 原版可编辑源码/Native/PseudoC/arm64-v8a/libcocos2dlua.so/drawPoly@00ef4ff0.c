
/* cocos2d::DrawNode::drawPoly(cocos2d::Vec2 const*, unsigned int, bool, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawPoly(DrawNode *this,Vec2 *param_1,uint param_2,bool param_3,Color4F *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  iVar8 = param_2 * 2;
  if (param_3) {
    iVar6 = *(int *)(this + 0x348);
    iVar4 = *(int *)(this + 0x344);
  }
  else {
    iVar6 = *(int *)(this + 0x348);
    iVar4 = *(int *)(this + 0x344);
    iVar8 = iVar8 + -2;
  }
  if (iVar4 < iVar6 + iVar8) {
    iVar6 = iVar4;
    if (iVar4 <= iVar8) {
      iVar6 = iVar8;
    }
    *(int *)(this + 0x344) = iVar6 + iVar4;
    pvVar3 = realloc(*(void **)(this + 0x350),(long)(iVar6 + iVar4) * 0x14);
    *(void **)(this + 0x350) = pvVar3;
  }
  puVar9 = (undefined8 *)(*(long *)(this + 0x350) + (long)*(int *)(this + 0x348) * 0x14);
  if (param_2 - 1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)(param_2 - 1);
    uVar10 = uVar7;
    puVar2 = (undefined8 *)param_1;
    do {
      local_90 = *puVar2;
      Color4B::Color4B((Color4B *)&uStack_88,param_4);
      uStack_84 = 0;
      uStack_80 = 0;
      uVar5 = puVar2[1];
      Color4B::Color4B((Color4B *)&uStack_a0,param_4);
      uStack_9c = 0;
      uStack_98 = 0;
      uVar10 = uVar10 - 1;
      puVar9[1] = CONCAT44(uStack_84,uStack_88);
      *puVar9 = local_90;
      *(undefined4 *)(puVar9 + 2) = uStack_80;
      *(undefined4 *)((long)puVar9 + 0x24) = 0;
      *(ulong *)((long)puVar9 + 0x1c) = (ulong)uStack_a0;
      *(undefined8 *)((long)puVar9 + 0x14) = uVar5;
      puVar9 = puVar9 + 5;
      puVar2 = puVar2 + 1;
    } while (uVar10 != 0);
  }
  if (param_3) {
    local_90 = *(undefined8 *)(param_1 + uVar7 * 8);
    Color4B::Color4B((Color4B *)&uStack_88,param_4);
    uStack_84 = 0;
    uStack_80 = 0;
    uVar5 = *(undefined8 *)param_1;
    Color4B::Color4B((Color4B *)&uStack_a0,param_4);
    uStack_9c = 0;
    uStack_98 = 0;
    puVar9[1] = CONCAT44(uStack_84,uStack_88);
    *puVar9 = local_90;
    *(undefined4 *)(puVar9 + 2) = uStack_80;
    *(undefined4 *)((long)puVar9 + 0x24) = 0;
    *(ulong *)((long)puVar9 + 0x1c) = (ulong)uStack_a0;
    *(undefined8 *)((long)puVar9 + 0x14) = uVar5;
  }
  *(int *)(this + 0x348) = *(int *)(this + 0x348) + iVar8;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cocos2d::DrawNode::drawLine(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Color4F const&)
    */

void __thiscall
cocos2d::DrawNode::drawLine(DrawNode *this,Vec2 *param_1,Vec2 *param_2,Color4F *param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint auStack_70 [4];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)(this + 0x348);
  iVar1 = *(int *)(this + 0x344);
  if (iVar1 < iVar4 + 2) {
    iVar4 = iVar1;
    if (iVar1 < 3) {
      iVar4 = 2;
    }
    *(int *)(this + 0x344) = iVar4 + iVar1;
    pvVar3 = realloc(*(void **)(this + 0x350),(long)(iVar4 + iVar1) * 0x14);
    iVar4 = *(int *)(this + 0x348);
    *(void **)(this + 0x350) = pvVar3;
  }
  else {
    pvVar3 = *(void **)(this + 0x350);
  }
  local_60 = *(undefined8 *)param_1;
  puVar6 = (undefined8 *)((long)pvVar3 + (long)iVar4 * 0x14);
  Color4B::Color4B((Color4B *)&uStack_58,param_3);
  uStack_54 = 0;
  uStack_50 = 0;
  uVar5 = *(undefined8 *)param_2;
  Color4B::Color4B((Color4B *)auStack_70,param_3);
  auStack_70[1] = 0;
  auStack_70[2] = 0;
  puVar6[1] = CONCAT44(uStack_54,uStack_58);
  *puVar6 = local_60;
  *(undefined4 *)(puVar6 + 2) = uStack_50;
  *(undefined4 *)((long)puVar6 + 0x24) = 0;
  *(ulong *)((long)puVar6 + 0x1c) = (ulong)auStack_70[0];
  *(undefined8 *)((long)puVar6 + 0x14) = uVar5;
  this[0x452] = (DrawNode)0x1;
  *(int *)(this + 0x348) = *(int *)(this + 0x348) + 2;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


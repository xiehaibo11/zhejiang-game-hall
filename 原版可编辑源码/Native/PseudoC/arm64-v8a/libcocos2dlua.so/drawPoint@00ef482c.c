
/* cocos2d::DrawNode::drawPoint(cocos2d::Vec2 const&, float, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawPoint(DrawNode *this,Vec2 *param_1,float param_2,Color4F *param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)(this + 0x324);
  iVar1 = *(int *)(this + 800);
  if (iVar4 < iVar1) {
    pvVar3 = *(void **)(this + 0x328);
  }
  else {
    iVar4 = iVar1;
    if (iVar1 < 2) {
      iVar4 = 1;
    }
    *(int *)(this + 800) = iVar4 + iVar1;
    pvVar3 = realloc(*(void **)(this + 0x328),(long)(iVar4 + iVar1) * 0x14);
    iVar4 = *(int *)(this + 0x324);
    *(void **)(this + 0x328) = pvVar3;
  }
  uVar5 = *(undefined8 *)param_1;
  puVar6 = (undefined8 *)((long)pvVar3 + (long)iVar4 * 0x14);
  Color4B::Color4B((Color4B *)&uStack_58,param_3);
  local_50 = 0;
  *(undefined4 *)(puVar6 + 2) = 0;
  puVar6[1] = CONCAT44(param_2,uStack_58);
  *puVar6 = uVar5;
  this[0x451] = (DrawNode)0x1;
  *(int *)(this + 0x324) = *(int *)(this + 0x324) + 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
  fStack_54 = param_2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


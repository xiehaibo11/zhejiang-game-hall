
/* cocos2d::DrawNode::drawPoints(cocos2d::Vec2 const*, unsigned int, float, cocos2d::Color4F const&)
    */

void __thiscall
cocos2d::DrawNode::drawPoints
          (DrawNode *this,Vec2 *param_1,uint param_2,float param_3,Color4F *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)(this + 800);
  uVar6 = (ulong)param_2;
  if ((int)uVar2 < (int)(*(int *)(this + 0x324) + param_2)) {
    uVar1 = uVar2;
    if ((int)uVar2 <= (int)param_2) {
      uVar1 = param_2;
    }
    *(uint *)(this + 800) = uVar1 + uVar2;
    pvVar4 = realloc(*(void **)(this + 0x328),(long)(int)(uVar1 + uVar2) * 0x14);
    *(void **)(this + 0x328) = pvVar4;
  }
  if (param_2 != 0) {
    puVar7 = (undefined8 *)(*(long *)(this + 0x328) + (long)*(int *)(this + 0x324) * 0x14);
    do {
      uVar5 = *(undefined8 *)param_1;
      Color4B::Color4B((Color4B *)&uStack_78,param_4);
      local_70 = 0;
      uVar6 = uVar6 - 1;
      *(undefined4 *)(puVar7 + 2) = 0;
      puVar7[1] = CONCAT44(param_3,uStack_78);
      *puVar7 = uVar5;
      param_1 = (Vec2 *)((long)param_1 + 8);
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
      fStack_74 = param_3;
    } while (uVar6 != 0);
  }
  this[0x451] = (DrawNode)0x1;
  *(uint *)(this + 0x324) = *(int *)(this + 0x324) + param_2;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


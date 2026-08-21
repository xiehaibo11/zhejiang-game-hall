
/* cocos2d::DrawNode::drawDot(cocos2d::Vec2 const&, float, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawDot(DrawNode *this,Vec2 *param_1,float param_2,Color4F *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float local_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(this + 0x310);
  if (iVar2 < *(int *)(this + 0x314) + 6) {
    iVar1 = iVar2;
    if (iVar2 < 7) {
      iVar1 = 6;
    }
    *(int *)(this + 0x310) = iVar1 + iVar2;
    pvVar4 = realloc(*(void **)(this + 0x318),(long)(iVar1 + iVar2) * 0x14);
    *(void **)(this + 0x318) = pvVar4;
  }
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) - param_2,
                      (float)*(undefined8 *)param_1 - param_2);
  Color4B::Color4B((Color4B *)&uStack_68,param_3);
  uVar7 = NEON_fmov(0xbf800000,4);
  uStack_64 = (undefined4)uVar7;
  uStack_60 = (undefined4)((ulong)uVar7 >> 0x20);
  local_88 = *(float *)param_1 - param_2;
  fStack_84 = *(float *)(param_1 + 4) + param_2;
  Color4B::Color4B((Color4B *)&uStack_80,param_3);
  uStack_7c = 0xbf800000;
  uStack_78 = 0x3f800000;
  local_a0 = (float)*(undefined8 *)param_1 + param_2;
  fStack_9c = (float)((ulong)*(undefined8 *)param_1 >> 0x20) + param_2;
  Color4B::Color4B((Color4B *)&uStack_98,param_3);
  uVar7 = NEON_fmov(0x3f800000,4);
  uStack_94 = (undefined4)uVar7;
  uStack_90 = (undefined4)((ulong)uVar7 >> 0x20);
  fVar6 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  Color4B::Color4B((Color4B *)&uStack_b0,param_3);
  uStack_ac = 0x3f800000;
  uStack_a8 = 0xbf800000;
  puVar5 = (undefined8 *)(*(long *)(this + 0x318) + (long)*(int *)(this + 0x314) * 0x14);
  *(ulong *)((long)puVar5 + 0x34) = CONCAT44(uStack_90,uStack_94);
  *(ulong *)((long)puVar5 + 0x2c) = CONCAT44(uStack_98,fStack_9c);
  puVar5[3] = CONCAT44(uStack_80,fStack_84);
  puVar5[2] = CONCAT44(local_88,uStack_60);
  puVar5[5] = CONCAT44(fStack_9c,local_a0);
  puVar5[4] = CONCAT44(uStack_78,uStack_7c);
  puVar5[1] = CONCAT44(uStack_64,uStack_68);
  *puVar5 = local_70;
  puVar5[0xe] = 0xbf8000003f800000;
  puVar5[0xd] = CONCAT44(uStack_b0,fVar8 - param_2);
  *(ulong *)((long)puVar5 + 100) = CONCAT44(fVar8 - param_2,fVar6 + param_2);
  *(ulong *)((long)puVar5 + 0x5c) = CONCAT44(uStack_90,uStack_94);
  *(ulong *)((long)puVar5 + 0x54) = CONCAT44(uStack_98,fStack_9c);
  *(ulong *)((long)puVar5 + 0x4c) = CONCAT44(local_a0,uStack_60);
  *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_64,uStack_68);
  *(undefined8 *)((long)puVar5 + 0x3c) = local_70;
  this[0x450] = (DrawNode)0x1;
  *(int *)(this + 0x314) = *(int *)(this + 0x314) + 6;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


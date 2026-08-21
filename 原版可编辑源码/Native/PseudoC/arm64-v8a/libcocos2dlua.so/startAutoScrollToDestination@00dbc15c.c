
/* cocos2d::ui::ScrollView::startAutoScrollToDestination(cocos2d::Vec2 const&, float, bool) */

void __thiscall
cocos2d::ui::ScrollView::startAutoScrollToDestination
          (ScrollView *this,Vec2 *param_1,float param_2,bool param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  fVar4 = (float)*(undefined8 *)param_1 - (float)*puVar2;
  fVar6 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - (float)((ulong)*puVar2 >> 0x20);
  fVar7 = (float)-(uint)(*(int *)(this + 0x7c0) == 1);
  iVar8 = -(uint)(*(int *)(this + 0x7c0) == 2);
  local_50 = CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                      CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                               CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                        CONCAT14(SUB41(fVar6,0) & ~(byte)iVar8,
                                                 CONCAT13((byte)((uint)fVar4 >> 0x18) &
                                                          ~(byte)((uint)fVar7 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                                                   ~(byte)((uint)fVar7 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar4 >> 8)
                                                                            & ~(byte)((uint)fVar7 >>
                                                                                     8),
                                                                            SUB41(fVar4,0) &
                                                                            ~SUB41(fVar7,0))))))));
  this[0x81d] = (ScrollView)0x1;
  *(undefined8 *)(this + 0x828) = local_50;
  this[0x81e] = (ScrollView)param_3;
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  uVar3 = *puVar2;
  *(float *)(this + 0x830) = param_2;
  *(undefined4 *)(this + 0x834) = 0;
  this[0x839] = (ScrollView)0x0;
  *(undefined8 *)(this + 0x820) = uVar3;
  *(undefined8 *)(this + 0x83c) = 0;
  fVar6 = (float)(**(code **)(*(long *)this + 0x7b8))(this);
  fVar4 = fVar7;
  if ((0.0001 < ABS(fVar6)) || (fVar4 = 0.0001, 0.0001 < ABS(fVar7))) {
    this[0x838] = (ScrollView)0x1;
    fVar5 = (float)(**(code **)(*(long *)this + 0x7b8))(this,&local_50);
    if ((0.0 < fVar6 * fVar5) || (0.0 < fVar7 * fVar4)) {
      this[0x839] = (ScrollView)0x1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


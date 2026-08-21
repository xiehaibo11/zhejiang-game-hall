
/* cocos2d::ui::ScrollView::moveInnerContainer(cocos2d::Vec2 const&, bool) */

void __thiscall
cocos2d::ui::ScrollView::moveInnerContainer(ScrollView *this,Vec2 *param_1,bool param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar7 = 1;
                    /* try { // try from 00dbbab8 to 00ebbabf has its CatchHandler @ 00dbbb10 */
                    /* try { // try from 00dbbac0 to 00ebbb23 has its CatchHandler @ 00dbb8a8 */
  uVar8 = *(undefined8 *)param_1;
  iVar4 = -(uint)(*(int *)(this + 0x7c0) == 1);
  iVar6 = -(uint)(*(int *)(this + 0x7c0) == 2);
  fVar9 = (float)CONCAT13((byte)((ulong)uVar8 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                          CONCAT12((byte)((ulong)uVar8 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                   CONCAT11((byte)((ulong)uVar8 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                            (byte)uVar8 & ~(byte)iVar4)));
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  local_40 = CONCAT44((float)(CONCAT17((byte)((ulong)uVar8 >> 0x38) & ~(byte)((uint)iVar6 >> 0x18),
                                       CONCAT16((byte)((ulong)uVar8 >> 0x30) &
                                                ~(byte)((uint)iVar6 >> 0x10),
                                                CONCAT15((byte)((ulong)uVar8 >> 0x28) &
                                                         ~(byte)((uint)iVar6 >> 8),
                                                         CONCAT14((byte)((ulong)uVar8 >> 0x20) &
                                                                  ~(byte)iVar6,fVar9)))) >> 0x20) +
                      (float)((ulong)*puVar2 >> 0x20),fVar9 + (float)*puVar2);
  setInnerContainerPosition(this,(Vec2 *)&local_40);
                    /* catch() { ... } // from try @ 00dbbab8 with catch @ 00dbbb10 */
  uVar5 = (**(code **)(*(long *)this + 0x7b8))(this,&Vec2::ZERO);
  local_40 = CONCAT44(uVar7,uVar5);
  plVar3 = *(long **)(this + 0x858);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x580))(plVar3,&local_40);
  }
  plVar3 = *(long **)(this + 0x860);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x580))(plVar3,&local_40);
  }
  if ((this[0x845] != (ScrollView)0x0) && (param_2)) {
    startBounceBackIfNeeded();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocos2d::PhysicsBody::onAdd() */

void __thiscall cocos2d::PhysicsBody::onAdd(PhysicsBody *this)

{
  long lVar1;
  long *plVar2;
  Size *pSVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  Size local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x28);
  plVar2[0x5e] = (long)this;
  pSVar3 = (Size *)(**(code **)(*plVar2 + 0x168))();
  Size::Size(local_40,pSVar3);
  *(ulong *)(this + 0xe0) = CONCAT44(local_40._4_4_ * 0.5,local_40._0_4_ * 0.5);
  fVar5 = (float)(**(code **)(**(long **)(this + 0x28) + 0x188))();
                    /* try { // try from 010017d4 to 011017db has its CatchHandler @ 010017e0 */
  if (0.5 < ABS(*(float *)(this + 0xcc) - fVar5)) {
                    /* try { // try from 010017dc to 01101923 has its CatchHandler @ 010013f4 */
                    /* catch() { ... } // from try @ 010014bc with catch @ 010017e0
                       catch() { ... } // from try @ 010017d4 with catch @ 010017e0 */
    dVar7 = *(double *)(this + 0xd8);
    fVar6 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
                    /* catch() { ... } // from try @ 010016f4 with catch @ 010017f0 */
    if (dVar7 == (double)fVar6) {
                    /* catch() { ... } // from try @ 010014e8 with catch @ 01001838 */
      fVar6 = *(float *)(this + 0xd0);
    }
    else {
      fVar6 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
                    /* catch() { ... } // from try @ 01001680 with catch @ 010017fc */
                    /* catch() { ... } // from try @ 01001630 with catch @ 01001800 */
                    /* catch() { ... } // from try @ 010015e0 with catch @ 01001804 */
                    /* catch() { ... } // from try @ 0100159c with catch @ 01001808 */
      *(double *)(this + 0xd8) = (double)fVar6;
                    /* catch() { ... } // from try @ 0100153c with catch @ 01001828 */
      fVar6 = (float)(((double)fVar6 * -180.0) / 3.141592653589793 - (double)*(float *)(this + 0xcc)
                     );
      *(float *)(this + 0xd0) = fVar6;
    }
    *(float *)(this + 0xcc) = fVar5;
                    /* catch() { ... } // from try @ 010016e8 with catch @ 0100184c
                       catch() { ... } // from try @ 01001714 with catch @ 0100184c */
    (**(code **)(*(long *)this + 0xe0))(fVar6,this);
  }
                    /* catch() { ... } // from try @ 01001698 with catch @ 01001850 */
                    /* catch() { ... } // from try @ 01001648 with catch @ 01001854 */
                    /* catch() { ... } // from try @ 010015f8 with catch @ 01001858 */
  if ((*(long **)(this + 0x28) != (long *)0x0) &&
     (lVar4 = (**(code **)(**(long **)(this + 0x28) + 0x368))(), lVar4 != 0)) {
                    /* catch() { ... } // from try @ 01001554 with catch @ 01001878 */
    (**(code **)(**(long **)(lVar4 + 0x348) + 0x30))(*(long **)(lVar4 + 0x348),this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 01001524 with catch @ 0100188c */
                    /* catch() { ... } // from try @ 010016d0 with catch @ 0100189c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


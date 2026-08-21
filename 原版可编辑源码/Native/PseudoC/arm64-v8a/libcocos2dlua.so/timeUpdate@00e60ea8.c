
/* cocos2d::PURibbonTrail::timeUpdate(float) */

void __thiscall cocos2d::PURibbonTrail::timeUpdate(PURibbonTrail *this,float param_1)

{
  Vec4 *this_00;
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  Vec4 aVStack_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 0x58);
  lVar5 = *(long *)(this + 0x60);
  if (lVar5 != lVar3) {
                    /* try { // try from 00e60f00 to 00f60f7f has its CatchHandler @ 00e60f00
                       catch() { ... } // from try @ 00e60f00 with catch @ 00e60f00
                       catch() { ... } // from try @ 00e60f84 with catch @ 00e60f00 */
    uVar6 = 0;
    do {
      lVar8 = *(long *)(lVar3 + uVar6 * 0x18 + 8);
      if ((lVar8 != -1) && (plVar7 = (long *)(lVar3 + uVar6 * 0x18 + 0x10), lVar8 != *plVar7)) {
        do {
          uVar4 = *(ulong *)(this + 8);
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = (lVar8 + 1U) / uVar4;
          }
          lVar8 = (lVar8 + 1U) - uVar1 * uVar4;
                    /* try { // try from 00e60f80 to 00f60f83 has its CatchHandler @ 00e60fe4 */
          lVar5 = *(long *)(this + 0x40) + (*(long *)(lVar3 + uVar6 * 0x18) + lVar8) * 0x34;
                    /* try { // try from 00e60f84 to 00f60ff7 has its CatchHandler @ 00e60f00 */
          fVar9 = *(float *)(lVar5 + 0xc) -
                  *(float *)(*(long *)(this + 0x1b0) + uVar6 * 4) * param_1;
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          *(float *)(lVar5 + 0xc) = fVar9;
          Vec4::Vec4(aVStack_a8,(Vec4 *)(*(long *)(this + 0x180) + uVar6 * 0x10));
          Vec4::scale(aVStack_a8,param_1);
          this_00 = (Vec4 *)(lVar5 + 0x14);
          Vec4::Vec4((Vec4 *)&local_98,this_00);
          Vec4::subtract((Vec4 *)&local_98,aVStack_a8);
          *(undefined8 *)(lVar5 + 0x1c) = uStack_90;
          *(undefined8 *)this_00 = local_98;
          Vec4::~Vec4((Vec4 *)&local_98);
                    /* catch() { ... } // from try @ 00e60f80 with catch @ 00e60fe4 */
          Vec4::~Vec4(aVStack_a8);
          Vec4::Vec4((Vec4 *)&local_98,0.0,0.0,0.0,0.0);
          Vec4::Vec4(aVStack_a8,1.0,1.0,1.0,1.0);
          Vec4::clamp(this_00,(Vec4 *)&local_98,aVStack_a8);
          Vec4::~Vec4(aVStack_a8);
          Vec4::~Vec4((Vec4 *)&local_98);
        } while (lVar8 != *plVar7);
        lVar3 = *(long *)(this + 0x58);
        lVar5 = *(long *)(this + 0x60);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)((lVar5 - lVar3 >> 3) * -0x5555555555555555));
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


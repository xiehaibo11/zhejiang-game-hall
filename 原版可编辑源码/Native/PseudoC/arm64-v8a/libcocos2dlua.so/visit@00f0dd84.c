
/* cocos2d::Label::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Label::visit(Label *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Label *pLVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  Label *pLVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (this[0x1f9] == (Label)0x0) goto LAB_00f0e0d8;
  if (((byte)this[0x328] & 1) == 0) {
    if ((byte)this[0x328] >> 1 == 0) {
LAB_00f0dde4:
      if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) goto LAB_00f0e0d8;
    }
  }
  else if (*(long *)(this + 0x330) == 0) goto LAB_00f0dde4;
  if ((this[0x39c] != (Label)0x0) || (this[0x30c] != (Label)0x0)) {
    (**(code **)(*(long *)this + 0x5c8))(this);
  }
  uVar5 = Node::processParentFlags((Node *)this,param_2,param_3);
  if (((byte)this[0x328] & 1) == 0) {
    if ((byte)this[0x328] >> 1 != 0) {
LAB_00f0de34:
      if ((this[0x60f] != (Label)0x0) && (((uVar5 & 3) != 0 || (this[0x60e] != (Label)0x0)))) {
        this[0x150] = (Label)0x1;
        *(ulong *)(this + 0x50) =
             CONCAT44((float)((ulong)*(undefined8 *)(this + 0x610) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20),
                      (float)*(undefined8 *)(this + 0x610) + (float)*(undefined8 *)(this + 0x50));
        this[0x10c] = (Label)0x1;
        Node::transform((Mat4 *)this);
        *(undefined8 *)(this + 0x5f8) = uStack_70;
        *(undefined8 *)(this + 0x5f0) = local_78;
        *(undefined8 *)(this + 0x5e8) = uStack_80;
        *(undefined8 *)(this + 0x5e0) = local_88;
        *(undefined8 *)(this + 0x5d8) = uStack_90;
        *(undefined8 *)(this + 0x5d0) = local_98;
        *(undefined8 *)(this + 0x5c8) = uStack_a0;
        *(undefined8 *)(this + 0x5c0) = local_a8;
        Mat4::~Mat4((Mat4 *)&local_a8);
        this[0x150] = (Label)0x1;
        this[0x10c] = (Label)0x1;
        this[0x60e] = (Label)0x0;
        *(ulong *)(this + 0x50) =
             CONCAT44((float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(this + 0x610) >> 0x20),
                      (float)*(undefined8 *)(this + 0x50) - (float)*(undefined8 *)(this + 0x610));
      }
    }
  }
  else if (*(long *)(this + 0x330) != 0) goto LAB_00f0de34;
  bVar4 = Node::isVisitableByVisitingCamera((Node *)this);
  if ((*(long *)(this + 0x178) == *(long *)(this + 0x180)) &&
     ((*(long *)(this + 0x3c0) == 0 & (bVar4 ^ 0xff)) != 0)) goto LAB_00f0e0d8;
  Director::pushMatrix(*(Director **)(this + 0x198),0);
  pLVar1 = this + 0x8c;
                    /* try { // try from 00f0df10 to 0100e053 has its CatchHandler @ 00f0df10
                       catch() { ... } // from try @ 00f0df10 with catch @ 00f0df10
                       catch() { ... } // from try @ 00f0e05c with catch @ 00f0df10 */
  Director::loadMatrix(*(Director **)(this + 0x198),0,pLVar1);
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    pLVar7 = *(Label **)(this + 0x3c0);
    if (pLVar7 == (Label *)0x0) {
      if ((bVar4 & 1) != 0) {
                    /* try { // try from 00f0e05c to 0100e13b has its CatchHandler @ 00f0df10 */
        if (((byte)this[0x328] & 1) == 0) {
          if ((byte)this[0x328] >> 1 != 0) {
LAB_00f0e110:
            pcVar9 = *(code **)(*(long *)this + 0x348);
            pLVar7 = this;
            goto LAB_00f0e020;
          }
        }
        else if (*(long *)(this + 0x330) != 0) goto LAB_00f0e110;
      }
    }
    else {
      plVar10 = *(long **)(this + 0x3c8);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x358))(plVar10,param_1,pLVar1,uVar5);
        pLVar7 = *(Label **)(this + 0x3c0);
      }
      pcVar9 = *(code **)(*(long *)pLVar7 + 0x358);
LAB_00f0e020:
      (*pcVar9)(pLVar7,param_1,pLVar1,uVar5);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x2b0))(this);
    lVar8 = *(long *)(this + 0x180) - (long)*(undefined8 **)(this + 0x178);
    if (lVar8 < 1) {
      uVar12 = 0;
      pLVar7 = *(Label **)(this + 0x3c0);
joined_r0x00f0e03c:
      if (pLVar7 != (Label *)0x0) goto LAB_00f0dfa4;
LAB_00f0e040:
      if ((bVar4 & 1) != 0) {
        if (((byte)this[0x328] & 1) == 0) {
          if ((byte)this[0x328] >> 1 != 0) {
LAB_00f0e088:
            pcVar9 = *(code **)(*(long *)this + 0x348);
            pLVar7 = this;
            goto LAB_00f0dfd4;
          }
        }
        else if (*(long *)(this + 0x330) != 0) goto LAB_00f0e088;
      }
    }
    else {
      plVar10 = (long *)**(undefined8 **)(this + 0x178);
      uVar12 = 0;
      if (plVar10 != (long *)0x0) {
        uVar12 = 1;
        do {
          iVar6 = (**(code **)(*plVar10 + 0x30))(plVar10);
          if (-1 < iVar6) break;
          (**(code **)(*plVar10 + 0x358))(plVar10,param_1,pLVar1,uVar5);
          if (lVar8 >> 3 <= (long)uVar12) {
            uVar12 = uVar12 & 0xffffffff;
            pLVar7 = *(Label **)(this + 0x3c0);
            goto joined_r0x00f0e03c;
          }
          plVar10 = *(long **)(*(long *)(this + 0x178) + uVar12 * 8);
          uVar12 = uVar12 + 1;
        } while (plVar10 != (long *)0x0);
        uVar12 = uVar12 - 1;
      }
      pLVar7 = *(Label **)(this + 0x3c0);
      if (pLVar7 == (Label *)0x0) goto LAB_00f0e040;
LAB_00f0dfa4:
      plVar10 = *(long **)(this + 0x3c8);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x358))(plVar10,param_1,pLVar1,uVar5);
        pLVar7 = *(Label **)(this + 0x3c0);
      }
      pcVar9 = *(code **)(*(long *)pLVar7 + 0x358);
LAB_00f0dfd4:
      (*pcVar9)(pLVar7,param_1,pLVar1,uVar5);
    }
    puVar2 = *(undefined8 **)(this + 0x180);
    for (puVar11 = (undefined8 *)(*(long *)(this + 0x178) + uVar12 * 8); puVar11 != puVar2;
        puVar11 = puVar11 + 1) {
      (**(code **)(*(long *)*puVar11 + 0x358))((long *)*puVar11,param_1,pLVar1,uVar5);
    }
  }
  Director::popMatrix(*(Director **)(this + 0x198),0);
LAB_00f0e0d8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


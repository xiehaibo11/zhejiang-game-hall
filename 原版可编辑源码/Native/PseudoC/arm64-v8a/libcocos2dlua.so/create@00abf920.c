
/* fairygui::GPath::create(fairygui::GPathPoint*, int) */

void __thiscall fairygui::GPath::create(GPath *this,GPathPoint *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Vec3 *this_00;
  Vec3 *pVVar5;
  GPath *pGVar6;
  Vec3 *pVVar7;
  GPathPoint *pGVar8;
  long lVar9;
  long lVar10;
  int local_78;
  float fStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  pGVar6 = this + 0x18;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)pGVar6;
  DAT_01782bc0 = DAT_01782bb8;
  *(undefined4 *)(this + 0x30) = 0;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_00abfb8c(&DAT_01782bb8,param_1);
    }
    if (1 < param_2) {
      lVar9 = 1;
      lVar10 = (ulong)(uint)param_2 - 1;
      pGVar8 = param_1;
      this_00 = (Vec3 *)param_1;
      do {
        pVVar7 = this_00 + 0x28;
        iVar2 = *(int *)(this_00 + 0x24);
        lVar3 = lVar9 * 0x28;
        if (iVar2 == 0) {
LAB_00abfae8:
          if (*(int *)(this_00 + 0x4c) != 0) goto LAB_00abfaf0;
LAB_00abf9d0:
          FUN_00abfb8c(&DAT_01782bb8,pVVar7);
        }
        else {
          iStack_70 = (int)((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 2) *
                      -0x55555555;
          local_78 = iVar2;
          if (iVar2 == 1) {
            uStack_6c = 3;
            FUN_00abfb8c(pGVar6,this_00);
            FUN_00abfb8c(pGVar6,pVVar7);
            pVVar5 = this_00 + 0xc;
LAB_00abfaa8:
            FUN_00abfb8c(pGVar6,pVVar5);
          }
          else {
            if (iVar2 == 2) {
              uStack_6c = 4;
              FUN_00abfb8c(pGVar6,this_00);
              FUN_00abfb8c(pGVar6,pVVar7);
              FUN_00abfb8c(pGVar6,this_00 + 0xc);
              pVVar5 = (Vec3 *)(pGVar8 + 0x18);
              goto LAB_00abfaa8;
            }
            if (iVar2 == 3) {
              uStack_6c = 2;
              FUN_00abfb8c(pGVar6,this_00);
              pVVar5 = (Vec3 *)(param_1 + lVar3);
              goto LAB_00abfaa8;
            }
          }
          fStack_74 = (float)cocos2d::Vec3::distance(this_00,pVVar7);
          puVar1 = *(undefined8 **)(this + 8);
          *(float *)(this + 0x30) = fStack_74 + *(float *)(this + 0x30);
          if (puVar1 != *(undefined8 **)(this + 0x10)) {
            puVar1[1] = CONCAT44(uStack_6c,iStack_70);
            *puVar1 = CONCAT44(fStack_74,local_78);
            *(undefined8 **)(this + 8) = puVar1 + 2;
            goto LAB_00abfae8;
          }
          std::__ndk1::
          vector<fairygui::GPath::Segment,std::__ndk1::allocator<fairygui::GPath::Segment>>::
          __push_back_slow_path<fairygui::GPath::Segment_const&>
                    ((vector<fairygui::GPath::Segment,std::__ndk1::allocator<fairygui::GPath::Segment>>
                      *)this,(Segment *)&local_78);
          if (*(int *)(this_00 + 0x4c) == 0) goto LAB_00abf9d0;
LAB_00abfaf0:
          if (DAT_01782bc0 != DAT_01782bb8) {
            FUN_00abfb8c(&DAT_01782bb8,pVVar7);
            createSplineSegment(this);
          }
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + -1;
        pGVar8 = param_1 + lVar3;
        this_00 = pVVar7;
      } while (lVar10 != 0);
    }
    if (1 < (ulong)((DAT_01782bc0 - DAT_01782bb8 >> 2) * -0x5555555555555555)) {
      createSplineSegment(this);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


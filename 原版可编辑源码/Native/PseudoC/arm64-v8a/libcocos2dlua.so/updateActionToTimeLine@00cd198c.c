
/* cocostudio::ActionNode::updateActionToTimeLine(float) */

undefined4 __thiscall cocostudio::ActionNode::updateActionToTimeLine(ActionNode *this,float param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ActionFrame *this_00;
  code *pcVar4;
  ActionFrame *this_01;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  if (*(int *)(this + 0x68) < 1) {
    uVar5 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    do {
      if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar6 = *(long **)(*(long *)(this + 0x50) + uVar7 * 8);
      puVar1 = (undefined8 *)*plVar6;
      if ((puVar1 != (undefined8 *)plVar6[1]) && (lVar8 = plVar6[1] - (long)puVar1, 0 < lVar8)) {
        this_01 = (ActionFrame *)*puVar1;
        iVar2 = ActionFrame::getFrameIndex(this_01);
        if (*(float *)(this + 0x2c) * (float)iVar2 != param_1) {
          lVar9 = -0x100000000;
          lVar10 = 1;
          do {
            iVar2 = ActionFrame::getFrameIndex(this_01);
            if (param_1 < *(float *)(this + 0x2c) * (float)iVar2) {
              if ((int)lVar10 == 1) {
                (**(code **)(*(long *)this + 0x60))(0x3f800000,0x3f800000,this,0,this_01);
                uVar5 = 0;
                goto LAB_00cd1a00;
              }
              this_00 = *(ActionFrame **)(*plVar6 + (lVar9 >> 0x1d));
              iVar2 = ActionFrame::getFrameIndex(this_01);
              iVar3 = ActionFrame::getFrameIndex(this_00);
              fVar12 = *(float *)(this + 0x2c) * (float)(iVar2 - iVar3);
              iVar2 = ActionFrame::getFrameIndex(this_00);
              fVar11 = *(float *)(this + 0x2c);
              (**(code **)(*(long *)this + 0x60))(fVar12,0x3f800000,this,0,this_00);
              fVar11 = (param_1 - fVar11 * (float)iVar2) / fVar12;
              pcVar4 = *(code **)(*(long *)this + 0x60);
              goto LAB_00cd19f4;
            }
            if (lVar8 >> 3 <= lVar10) goto LAB_00cd1a00;
            this_01 = *(ActionFrame **)(*plVar6 + lVar10 * 8);
            iVar2 = ActionFrame::getFrameIndex(this_01);
            lVar9 = lVar9 + 0x100000000;
            lVar10 = lVar10 + 1;
          } while (*(float *)(this + 0x2c) * (float)iVar2 != param_1);
        }
        pcVar4 = *(code **)(*(long *)this + 0x60);
        this_00 = (ActionFrame *)0x0;
        fVar12 = 1.0;
        fVar11 = 1.0;
LAB_00cd19f4:
        (*pcVar4)(fVar12,fVar11,this,this_00,this_01);
        uVar5 = 1;
      }
LAB_00cd1a00:
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)*(int *)(this + 0x68));
  }
  return uVar5;
}


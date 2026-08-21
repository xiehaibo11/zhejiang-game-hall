
/* cocostudio::ColliderDetector::updateTransform(cocos2d::Mat4&) */

void cocostudio::ColliderDetector::updateTransform(Mat4 *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  Mat4 *in_x1;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 in_s1;
  
  if (param_1[0x48] != (Mat4)0x0) {
    plVar3 = *(long **)(param_1 + 0x30);
    for (plVar2 = *(long **)(param_1 + 0x28); plVar2 != plVar3; plVar2 = plVar2 + 1) {
      lVar6 = *plVar2;
      lVar7 = *(long *)(lVar6 + 0x40);
      lVar5 = *(long *)(lVar7 + 0x28);
      lVar4 = *(long *)(lVar7 + 0x30) - lVar5;
      if (lVar4 != 0) {
        if (*(long *)(lVar7 + 0x30) == lVar5) {
LAB_00c45b8c:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar8 = 0;
        uVar9 = 0;
        while( true ) {
          helpPoint = *(undefined8 *)(lVar5 + lVar8);
          uVar10 = cocos2d::PointApplyTransform((Vec2 *)&helpPoint,in_x1);
          helpPoint = CONCAT44(in_s1,uVar10);
          if ((ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar9 = uVar9 + 1;
          puVar1 = (undefined4 *)(*(long *)(lVar6 + 0x28) + lVar8);
          *puVar1 = uVar10;
          puVar1[1] = in_s1;
          if ((ulong)(lVar4 >> 3) <= uVar9) break;
          lVar5 = *(long *)(lVar7 + 0x28);
          lVar8 = lVar8 + 8;
          if ((ulong)(*(long *)(lVar7 + 0x30) - lVar5 >> 3) <= uVar9) goto LAB_00c45b8c;
        }
      }
    }
  }
  return;
}


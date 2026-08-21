
/* cocostudio::Bone::update(float) */

void cocostudio::Bone::update(float param_1)

{
  Mat4 *this;
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  Bone *in_x0;
  BaseData *pBVar4;
  Mat4 *pMVar5;
  Mat4 *in_x2;
  Bone BVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined4 in_register_00005004;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long **)(in_x0 + 0x338) != (long *)0x0) {
    if (in_x0[0x340] == (Bone)0x0) {
      bVar3 = (**(code **)(**(long **)(in_x0 + 0x338) + 0x540))();
      BVar6 = (Bone)(bVar3 & 1);
    }
    else {
      BVar6 = (Bone)0x1;
    }
    in_x0[0x340] = BVar6;
  }
  BVar6 = in_x0[0x340];
  if (*(long **)(in_x0 + 0x390) == (long *)0x0) {
LAB_00c39a3c:
    if (BVar6 != (Bone)0x0) goto LAB_00c39a44;
  }
  else {
    if (BVar6 == (Bone)0x0) {
      bVar3 = (**(code **)(**(long **)(in_x0 + 0x390) + 0x540))();
      BVar6 = (Bone)(bVar3 & 1);
      in_x0[0x340] = BVar6;
      goto LAB_00c39a3c;
    }
LAB_00c39a44:
    (**(code **)(**(long **)(in_x0 + 0x388) + 0x10))
              (*(long **)(in_x0 + 0x388),*(undefined8 *)(in_x0 + 0x330));
    pBVar4 = *(BaseData **)(in_x0 + 0x388);
    if (0.3 <= *(float *)(in_x0 + 0x398)) {
      TransformHelp::nodeConcat(pBVar4,*(BaseData **)(in_x0 + 0x2f8));
      pBVar4 = *(BaseData **)(in_x0 + 0x388);
      uVar13 = NEON_fmov(0xbf800000,4);
      uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(pBVar4 + 0x38) >> 0x20) +
                        (float)((ulong)uVar13 >> 0x20),
                        (float)*(undefined8 *)(pBVar4 + 0x38) + (float)uVar13);
      *(undefined8 *)(pBVar4 + 0x38) = uVar13;
    }
    else {
      uVar13 = *(undefined8 *)(pBVar4 + 0x38);
    }
    fVar10 = (float)*(undefined8 *)(pBVar4 + 0x24) + (float)*(undefined8 *)(in_x0 + 0x50);
    fVar11 = (float)((ulong)*(undefined8 *)(pBVar4 + 0x24) >> 0x20) +
             (float)((ulong)*(undefined8 *)(in_x0 + 0x50) >> 0x20);
    *(ulong *)(pBVar4 + 0x24) = CONCAT44(fVar11,fVar10);
    fVar12 = (float)uVar13 * (float)*(undefined8 *)(in_x0 + 0x44);
    fVar14 = (float)((ulong)uVar13 >> 0x20) * (float)((ulong)*(undefined8 *)(in_x0 + 0x44) >> 0x20);
    *(ulong *)(pBVar4 + 0x38) = CONCAT44(fVar14,fVar12);
    fVar15 = (float)*(undefined8 *)(pBVar4 + 0x30) + (float)*(undefined8 *)(in_x0 + 0x68) +
             (float)*(undefined8 *)(in_x0 + 0x2c) * 0.017453292;
    fVar16 = ((float)((ulong)*(undefined8 *)(pBVar4 + 0x30) >> 0x20) +
             (float)((ulong)*(undefined8 *)(in_x0 + 0x68) >> 0x20)) -
             (float)((ulong)*(undefined8 *)(in_x0 + 0x2c) >> 0x20) * 0.017453292;
    *(ulong *)(pBVar4 + 0x30) = CONCAT44(fVar16,fVar15);
    lVar7 = *(long *)(in_x0 + 0x338);
    if ((lVar7 != 0) || (lVar7 = *(long *)(in_x0 + 0x390), lVar7 != 0)) {
      lVar8 = *(long *)(lVar7 + 0x388);
      *(float *)(pBVar4 + 0x24) =
           *(float *)(lVar7 + 0x344) * fVar10 + *(float *)(lVar7 + 0x354) * fVar11 +
           *(float *)(lVar8 + 0x24);
      *(float *)(pBVar4 + 0x28) =
           *(float *)(lVar8 + 0x28) +
           *(float *)(lVar7 + 0x348) * fVar10 + *(float *)(lVar7 + 0x358) * fVar11;
      *(ulong *)(pBVar4 + 0x38) =
           CONCAT44(fVar14 * (float)((ulong)*(undefined8 *)(lVar8 + 0x38) >> 0x20),
                    fVar12 * (float)*(undefined8 *)(lVar8 + 0x38));
      *(ulong *)(pBVar4 + 0x30) =
           CONCAT44(fVar16 + (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20),
                    fVar15 + (float)*(undefined8 *)(lVar8 + 0x30));
    }
    this = (Mat4 *)(in_x0 + 0x344);
    TransformHelp::nodeToMatrix(pBVar4,this);
    if (*(long *)(in_x0 + 0x390) != 0) {
      pMVar5 = (Mat4 *)(**(code **)(**(long **)(in_x0 + 0x300) + 1000))();
      cocos2d::TransformConcat((cocos2d *)this,pMVar5,in_x2);
      *(undefined8 *)(in_x0 + 0x36c) = uStack_60;
      *(undefined8 *)(in_x0 + 0x364) = local_68;
      *(undefined8 *)(in_x0 + 0x37c) = uStack_50;
      *(undefined8 *)(in_x0 + 0x374) = local_58;
      *(undefined8 *)(in_x0 + 0x34c) = uStack_80;
      *(undefined8 *)this = local_88;
      *(undefined8 *)(in_x0 + 0x35c) = uStack_70;
      *(undefined8 *)(in_x0 + 0x354) = local_78;
      cocos2d::Mat4::~Mat4((Mat4 *)&local_88);
    }
    if (in_x0[0x340] != (Bone)0x0) {
      bVar3 = 1;
      goto LAB_00c39bc4;
    }
  }
  bVar3 = (**(code **)(**(long **)(in_x0 + 0x300) + 0x590))();
LAB_00c39bc4:
  DisplayFactory::updateDisplay(in_x0,param_1,(bool)(bVar3 & 1));
  puVar1 = *(undefined8 **)(in_x0 + 0x180);
  for (puVar9 = *(undefined8 **)(in_x0 + 0x178); puVar9 != puVar1; puVar9 = puVar9 + 1) {
    (**(code **)(*(long *)*puVar9 + 0x3d8))(CONCAT44(in_register_00005004,param_1));
  }
  in_x0[0x340] = (Bone)0x0;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* spine::SkeletonBinary::readFloatArray(spine::SkeletonBinary::DataInput*, int, float,
   spine::Vector<float>&) */

SkeletonBinary * __thiscall
spine::SkeletonBinary::readFloatArray
          (SkeletonBinary *this,DataInput *param_1,int param_2,float param_3,Vector *param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  uVar1 = *(ulong *)(param_4 + 8);
  uVar11 = (ulong)(uint)param_2;
  uVar6 = (ulong)param_2;
  *(ulong *)(param_4 + 8) = uVar6;
  if (*(ulong *)(param_4 + 0x10) < uVar6) {
    uVar9 = (uint)((float)uVar6 * 1.75);
    uVar12 = *(undefined8 *)(param_4 + 0x18);
    if (uVar9 < 9) {
      uVar9 = 8;
    }
    *(long *)(param_4 + 0x10) = (long)(int)uVar9;
    plVar5 = (long *)SpineExtension::getInstance();
    this = (SkeletonBinary *)
           (**(code **)(*plVar5 + 0x20))
                     (plVar5,uVar12,-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2
                      ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                      0x52);
    uVar6 = *(ulong *)(param_4 + 8);
    *(SkeletonBinary **)(param_4 + 0x18) = this;
  }
  if (uVar1 <= uVar6 && uVar6 - uVar1 != 0) {
    this = memset((void *)(*(long *)(param_4 + 0x18) + uVar1 * 4),0,(uVar6 - uVar1) * 4);
  }
  if (param_3 == 1.0) {
    if (0 < param_2) {
      puVar10 = (undefined1 *)(*(long *)(param_1 + 8) + 2);
      puVar7 = *(undefined4 **)(param_4 + 0x18);
      do {
        *(undefined1 **)(param_1 + 8) = puVar10 + -1;
        uVar3 = puVar10[-2];
        *(undefined1 **)(param_1 + 8) = puVar10;
        uVar4 = puVar10[-1];
        *(undefined1 **)(param_1 + 8) = puVar10 + 1;
        uVar2 = *puVar10;
        *(undefined1 **)(param_1 + 8) = puVar10 + 2;
        uVar11 = uVar11 - 1;
        *puVar7 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar2),puVar10[1]);
        puVar10 = puVar10 + 4;
        puVar7 = puVar7 + 1;
      } while (uVar11 != 0);
    }
  }
  else if (0 < param_2) {
    puVar10 = (undefined1 *)(*(long *)(param_1 + 8) + 2);
    pfVar8 = *(float **)(param_4 + 0x18);
    do {
      *(undefined1 **)(param_1 + 8) = puVar10 + -1;
      uVar3 = puVar10[-2];
      *(undefined1 **)(param_1 + 8) = puVar10;
      uVar4 = puVar10[-1];
      *(undefined1 **)(param_1 + 8) = puVar10 + 1;
      uVar2 = *puVar10;
      *(undefined1 **)(param_1 + 8) = puVar10 + 2;
      uVar11 = uVar11 - 1;
      *pfVar8 = (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar2),puVar10[1]) * param_3;
      puVar10 = puVar10 + 4;
      pfVar8 = pfVar8 + 1;
    } while (uVar11 != 0);
  }
  return this;
}


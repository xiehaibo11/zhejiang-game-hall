
/* spine::SkeletonBinary::readShortArray(spine::SkeletonBinary::DataInput*, spine::Vector<unsigned
   short>&) */

SkeletonBinary * __thiscall
spine::SkeletonBinary::readShortArray(SkeletonBinary *this,DataInput *param_1,Vector *param_2)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  pbVar7 = *(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = pbVar7 + 1;
  uVar3 = *pbVar7 & 0x7f;
  if ((char)*pbVar7 < '\0') {
    *(byte **)(param_1 + 8) = pbVar7 + 2;
    uVar3 = uVar3 | (pbVar7[1] & 0x7f) << 7;
    if ((char)pbVar7[1] < '\0') {
      *(byte **)(param_1 + 8) = pbVar7 + 3;
      uVar3 = uVar3 | (pbVar7[2] & 0x7f) << 0xe;
      if ((char)pbVar7[2] < '\0') {
        *(byte **)(param_1 + 8) = pbVar7 + 4;
        uVar3 = uVar3 | (pbVar7[3] & 0x7f) << 0x15;
        if ((char)pbVar7[3] < '\0') {
          *(byte **)(param_1 + 8) = pbVar7 + 5;
          uVar3 = uVar3 | (uint)pbVar7[4] << 0x1c;
        }
      }
    }
  }
  uVar8 = *(ulong *)(param_2 + 8);
  uVar11 = (ulong)(int)uVar3;
  *(ulong *)(param_2 + 8) = uVar11;
  if (*(ulong *)(param_2 + 0x10) < uVar11) {
    uVar6 = (uint)((float)uVar11 * 1.75);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(param_2 + 0x10) = (long)(int)uVar6;
    plVar2 = (long *)SpineExtension::getInstance();
    this = (SkeletonBinary *)
           (**(code **)(*plVar2 + 0x20))
                     (plVar2,uVar10,-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1
                      ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                      0x52);
    *(SkeletonBinary **)(param_2 + 0x18) = this;
    lVar4 = *(ulong *)(param_2 + 8) - uVar8;
    if (*(ulong *)(param_2 + 8) < uVar8 || lVar4 == 0) goto joined_r0x00cfd228;
  }
  else {
    lVar4 = uVar11 - uVar8;
    if (uVar11 < uVar8 || lVar4 == 0) goto joined_r0x00cfd228;
  }
  this = memset((void *)(*(long *)(param_2 + 0x18) + uVar8 * 2),0,lVar4 << 1);
joined_r0x00cfd228:
  if (0 < (int)uVar3) {
    uVar8 = (ulong)uVar3;
    psVar5 = *(short **)(param_2 + 0x18);
    puVar9 = (undefined1 *)(*(long *)(param_1 + 8) + 1);
    do {
      *(undefined1 **)(param_1 + 8) = puVar9;
      bVar1 = puVar9[-1];
      uVar8 = uVar8 - 1;
      *psVar5 = (ushort)bVar1 << 8;
      *(undefined1 **)(param_1 + 8) = puVar9 + 1;
      *psVar5 = CONCAT11(bVar1,*puVar9);
      psVar5 = psVar5 + 1;
      puVar9 = puVar9 + 2;
    } while (uVar8 != 0);
  }
  return this;
}



/* spine::SkeletonBinary::readFloat(spine::SkeletonBinary::DataInput*) */

undefined4 __thiscall spine::SkeletonBinary::readFloat(SkeletonBinary *this,DataInput *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  puVar4 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar4 + 1;
  uVar1 = *puVar4;
  *(undefined1 **)(param_1 + 8) = puVar4 + 2;
  uVar2 = puVar4[1];
  *(undefined1 **)(param_1 + 8) = puVar4 + 3;
  uVar3 = puVar4[2];
  *(undefined1 **)(param_1 + 8) = puVar4 + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar4[3]);
}


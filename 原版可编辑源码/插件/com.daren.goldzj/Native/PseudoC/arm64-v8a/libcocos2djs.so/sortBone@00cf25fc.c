
/* spine::Skeleton::sortBone(spine::Bone*) */

void __thiscall spine::Skeleton::sortBone(Skeleton *this,Bone *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (param_1[0x94] != (Bone)0x0) {
    return;
  }
  if (*(Bone **)(param_1 + 0x18) != (Bone *)0x0) {
    sortBone(this,*(Bone **)(param_1 + 0x18));
  }
  param_1[0x94] = (Bone)0x1;
  uVar1 = *(ulong *)(this + 0xd8);
  if (uVar1 == *(ulong *)(this + 0xe0)) {
    uVar6 = (uint)((float)uVar1 * 1.75);
    uVar7 = *(undefined8 *)(this + 0xe8);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(this + 0xe0) = (long)(int)uVar6;
    plVar2 = (long *)SpineExtension::getInstance();
    lVar3 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar7,-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3
                       ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x6a);
    lVar4 = *(long *)(this + 0xd8);
    *(long *)(this + 0xe8) = lVar3;
    *(long *)(this + 0xd8) = lVar4 + 1;
    puVar5 = (undefined8 *)(lVar3 + lVar4 * 8);
  }
  else {
    *(ulong *)(this + 0xd8) = uVar1 + 1;
    puVar5 = (undefined8 *)(*(long *)(this + 0xe8) + uVar1 * 8);
  }
  *puVar5 = param_1;
  return;
}


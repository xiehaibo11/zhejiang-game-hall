
/* cocos2d::Physics3DComponent::syncNodeToPhysics() */

void __thiscall cocos2d::Physics3DComponent::syncNodeToPhysics(Physics3DComponent *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(**(long **)(this + 0xd0) + 0x10))();
  if ((iVar2 == 1) || (iVar2 = (**(code **)(**(long **)(this + 0xd0) + 0x10))(), iVar2 == 2)) {
    (**(code **)(**(long **)(this + 0x28) + 0x430))(&local_78);
                    /* catch() { ... } // from try @ 0101188c with catch @ 01011860 */
                    /* try { // try from 01011884 to 0111188b has its CatchHandler @ 010118a4 */
                    /* try { // try from 0101188c to 011118bf has its CatchHandler @ 01011860 */
    fVar5 = 1.0 / SQRT(local_78 * local_78 + fStack_74 * fStack_74 + local_70 * local_70);
    fVar7 = 1.0 / SQRT(local_68 * local_68 + fStack_64 * fStack_64 + local_60 * local_60);
                    /* catch() { ... } // from try @ 01011884 with catch @ 010118a4 */
    fVar6 = 1.0 / SQRT(local_58 * local_58 + fStack_54 * fStack_54 + local_50 * local_50);
    local_78 = local_78 * fVar5;
    fStack_74 = fStack_74 * fVar5;
    local_70 = local_70 * fVar5;
    local_68 = local_68 * fVar7;
    fStack_64 = fStack_64 * fVar7;
    local_60 = local_60 * fVar7;
                    /* catch() { ... } // from try @ 0101190c with catch @ 010118c0 */
    local_58 = local_58 * fVar6;
    fStack_54 = fStack_54 * fVar6;
    local_50 = local_50 * fVar6;
    Mat4::multiply((Mat4 *)&local_78,(Mat4 *)(this + 0x90));
    iVar2 = (**(code **)(**(long **)(this + 0xd0) + 0x10))();
                    /* try { // try from 01011904 to 0111190b has its CatchHandler @ 01011968 */
    if (iVar2 == 1) {
                    /* try { // try from 0101190c to 01111983 has its CatchHandler @ 010118c0 */
      lVar4 = *(long *)(*(long *)(this + 0xd0) + 0x78);
      plVar3 = *(long **)(lVar4 + 0x200);
      convertMat4TobtTransform((Mat4 *)&local_78);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8);
      *(long **)(lVar4 + 0x200) = plVar3;
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar4 + 8);
    }
    else {
      iVar2 = (**(code **)(**(long **)(this + 0xd0) + 0x10))();
      if (iVar2 == 2) {
                    /* catch() { ... } // from try @ 01011904 with catch @ 01011968 */
        lVar4 = *(long *)(*(long *)(this + 0xd0) + 0xe0);
        convertMat4TobtTransform((Mat4 *)&local_78);
        *(int *)(lVar4 + 0x120) = *(int *)(lVar4 + 0x120) + 1;
        *(undefined8 *)(lVar4 + 0x10) = uStack_b0;
        *(undefined8 *)(lVar4 + 8) = local_b8;
        *(undefined8 *)(lVar4 + 0x20) = uStack_a0;
        *(undefined8 *)(lVar4 + 0x18) = local_a8;
        *(undefined8 *)(lVar4 + 0x30) = uStack_90;
        *(undefined8 *)(lVar4 + 0x28) = local_98;
        *(undefined8 *)(lVar4 + 0x40) = uStack_80;
        *(undefined8 *)(lVar4 + 0x38) = local_88;
      }
    }
    Mat4::~Mat4((Mat4 *)&local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


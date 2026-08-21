
/* btCompoundShape::removeChildShape(btCollisionShape*) */

void __thiscall btCompoundShape::removeChildShape(btCompoundShape *this,btCollisionShape *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x1c);
  *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
  if (0 < iVar1) {
    lVar2 = (long)iVar1 + 1;
    lVar3 = (long)iVar1 * 0x58 + -0x18;
    do {
      iVar1 = iVar1 + -1;
      if (*(btCollisionShape **)(*(long *)(this + 0x28) + lVar3) == param_1) {
        removeChildShapeByIndex(this,iVar1);
      }
      lVar2 = lVar2 + -1;
      lVar3 = lVar3 + -0x58;
    } while (1 < lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x01224e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))(this);
  return;
}


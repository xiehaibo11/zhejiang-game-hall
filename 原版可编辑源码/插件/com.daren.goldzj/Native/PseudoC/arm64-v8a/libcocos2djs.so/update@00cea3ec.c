
/* spine::IkConstraint::update() */

void __thiscall spine::IkConstraint::update(IkConstraint *this)

{
  Bone *pBVar1;
  Bone *pBVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(this + 0x18) == 2) {
    pBVar2 = (Bone *)**(undefined8 **)(this + 0x28);
    pBVar1 = (Bone *)(*(undefined8 **)(this + 0x28))[1];
    fVar3 = (float)Bone::getWorldX(*(Bone **)(this + 0x40));
    fVar4 = (float)Bone::getWorldY(*(Bone **)(this + 0x40));
    apply(pBVar2,pBVar1,fVar3,fVar4,*(int *)(this + 0x30),(bool)this[0x35],*(float *)(this + 0x3c),
          *(float *)(this + 0x38));
    return;
  }
  if (*(long *)(this + 0x18) == 1) {
    pBVar2 = (Bone *)**(undefined8 **)(this + 0x28);
    fVar3 = (float)Bone::getWorldX(*(Bone **)(this + 0x40));
    fVar4 = (float)Bone::getWorldY(*(Bone **)(this + 0x40));
    apply(pBVar2,fVar3,fVar4,(bool)this[0x34],(bool)this[0x35],*(bool *)(*(long *)(this + 8) + 0x5e)
          ,*(float *)(this + 0x38));
    return;
  }
  return;
}



/* cocos2d::PUForceFieldAffector::prepare() */

void __thiscall cocos2d::PUForceFieldAffector::prepare(PUForceFieldAffector *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(this + 0x100);
  uVar2 = PUAffector::getDerivedPosition();
  PUForceField::initialise
            (*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),
             *(undefined8 *)(this + 0x130),(PUForceField *)(this + 0xb0),uVar1,uVar2,
             *(undefined4 *)(this + 0x138),*(undefined2 *)(this + 0x118),this + 0x13c);
  puVar3 = (undefined8 *)PUForceField::getForceFieldPositionBase((PUForceField *)(this + 0xb0));
  uVar2 = *puVar3;
  uVar1 = *(undefined4 *)(puVar3 + 1);
  this[0x148] = (PUForceFieldAffector)0x1;
  *(undefined8 *)(this + 0x170) = uVar2;
  *(undefined4 *)(this + 0x178) = uVar1;
  return;
}


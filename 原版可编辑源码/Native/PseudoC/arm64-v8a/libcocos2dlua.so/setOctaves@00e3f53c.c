
/* cocos2d::PUForceFieldCalculationFactory::setOctaves(unsigned short) */

void __thiscall
cocos2d::PUForceFieldCalculationFactory::setOctaves
          (PUForceFieldCalculationFactory *this,ushort param_1)

{
  undefined4 uVar1;
  
  *(ushort *)(this + 0x830) = param_1;
  uVar1 = (**(code **)(*(long *)this + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e3f588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))
            (*(undefined8 *)(this + 0x838),*(undefined8 *)(this + 0x840),
             *(undefined8 *)(this + 0x848),this,uVar1,*(undefined2 *)(this + 0x830),this + 0x85c);
  return;
}


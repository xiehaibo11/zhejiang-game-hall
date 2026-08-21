
/* cocostudio::DisplayFactory::createArmatureDisplay(cocostudio::Bone*,
   cocostudio::DecorativeDisplay*) */

void cocostudio::DisplayFactory::createArmatureDisplay(Bone *param_1,DecorativeDisplay *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
  uVar2 = Armature::create((basic_string *)(lVar1 + 0x28),param_1);
                    /* WARNING: Could not recover jumptable at 0x00c4304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x18))(param_2,uVar2);
  return;
}



/* btCollisionWorld::serialize(btSerializer*) */

void __thiscall btCollisionWorld::serialize(btCollisionWorld *this,btSerializer *param_1)

{
  (**(code **)(*(long *)param_1 + 0x40))(param_1);
  serializeCollisionObjects(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0121cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


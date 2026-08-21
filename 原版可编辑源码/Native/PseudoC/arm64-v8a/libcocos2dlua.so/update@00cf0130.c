
/* cocosbuilder::CCBEaseInstant::update(float) */

void __thiscall cocosbuilder::CCBEaseInstant::update(CCBEaseInstant *this,float param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (0.0 <= param_1) {
    uVar1 = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00cf014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x58) + 0x48))(uVar1);
  return;
}


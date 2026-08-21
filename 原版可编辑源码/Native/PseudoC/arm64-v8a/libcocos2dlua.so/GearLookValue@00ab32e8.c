
/* fairygui::GearLook::GearLookValue::GearLookValue(float, float, bool, bool) */

void __thiscall
fairygui::GearLook::GearLookValue::GearLookValue
          (GearLookValue *this,float param_1,float param_2,bool param_3,bool param_4)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  this[8] = (GearLookValue)param_3;
  this[9] = (GearLookValue)param_4;
  return;
}



/* se::Value::reset(se::Value::Type) */

void __thiscall se::Value::reset(Value *this,Value param_2)

{
  Value VVar1;
  RefCounter *this_00;
  undefined8 *puVar2;
  byte *pbVar3;
  
  VVar1 = this[8];
  if (VVar1 != param_2) {
    if (VVar1 == (Value)0x5) {
      this_00 = *(RefCounter **)this;
      if (this_00 != (RefCounter *)0x0) {
        if (this[9] != (Value)0x0) {
          Object::unroot((Object *)this_00);
          this_00 = *(RefCounter **)this;
        }
        RefCounter::decRef(this_00);
        *(undefined8 *)this = 0;
      }
      this[9] = (Value)0x0;
    }
    else if ((VVar1 == (Value)0x4) && (pbVar3 = *(byte **)this, pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + 0x10));
      }
      operator_delete(pbVar3);
    }
    *(undefined8 *)this = 0;
    if (param_2 == (Value)0x4) {
      puVar2 = operator_new(0x18);
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(undefined8 **)this = puVar2;
    }
    this[8] = param_2;
  }
  return;
}


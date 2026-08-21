
/* se::Value::TEMPNAMEPLACEHOLDERVALUE(se::Value&&) */

Value * __thiscall se::Value::operator=(Value *this,Value *param_1)

{
  RefCounter *this_00;
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (this != param_1) {
    reset(this,param_1[8]);
    switch(this[8]) {
    case (Value)0x0:
    case (Value)0x1:
      *(undefined8 *)this = 0;
      break;
    case (Value)0x2:
      *(undefined8 *)this = *(undefined8 *)param_1;
      break;
    case (Value)0x3:
      *this = *param_1;
      break;
    case (Value)0x4:
      pbVar2 = *(byte **)this;
      puVar1 = *(undefined8 **)param_1;
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
        }
      }
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      *(undefined8 *)(pbVar2 + 0x10) = puVar1[2];
      *(undefined8 *)(pbVar2 + 8) = uVar4;
      *(undefined8 *)pbVar2 = uVar3;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      break;
    case (Value)0x5:
      this_00 = *(RefCounter **)this;
      if (this_00 != (RefCounter *)0x0) {
        if (this[9] != (Value)0x0) {
          Object::unroot((Object *)this_00);
          this_00 = *(RefCounter **)this;
        }
        RefCounter::decRef(this_00);
      }
      *(undefined8 *)this = *(undefined8 *)param_1;
      this[9] = param_1[9];
      *(undefined8 *)param_1 = 0;
      param_1[9] = (Value)0x0;
    }
    reset(param_1,0);
  }
  return this;
}


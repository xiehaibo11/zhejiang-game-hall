
/* cocos2d::Value::clear() */

void __thiscall cocos2d::Value::clear(Value *this)

{
  undefined8 *puVar1;
  byte *pbVar2;
  Value *this_00;
  Value *pVVar3;
  void *pvVar4;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
  case 6:
    *this = (Value)0x0;
    goto switchD_008836fc_default;
  case 2:
  case 3:
  case 4:
    *(undefined4 *)this = 0;
    goto switchD_008836fc_default;
  case 5:
    break;
  case 7:
    pbVar2 = *(byte **)this;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 1) == 0) goto LAB_008837e0;
      pVVar3 = *(Value **)(pbVar2 + 0x10);
LAB_008837dc:
      operator_delete(pVVar3);
LAB_008837e0:
      operator_delete(pbVar2);
    }
    break;
  case 8:
    pbVar2 = *(byte **)this;
    if (pbVar2 != (byte *)0x0) {
      pVVar3 = *(Value **)pbVar2;
      if (pVVar3 != (Value *)0x0) {
        this_00 = *(Value **)(pbVar2 + 8);
        if (this_00 == pVVar3) {
          *(Value **)(pbVar2 + 8) = pVVar3;
        }
        else {
          do {
            this_00 = this_00 + -0x10;
            clear(this_00);
          } while (pVVar3 != this_00);
          *(Value **)(pbVar2 + 8) = pVVar3;
          pVVar3 = *(Value **)pbVar2;
        }
        goto LAB_008837dc;
      }
      goto LAB_008837e0;
    }
    break;
  case 9:
    pbVar2 = *(byte **)this;
    if (pbVar2 != (byte *)0x0) {
      puVar1 = *(void **)(pbVar2 + 0x10);
      while (puVar1 != (void *)0x0) {
        pvVar4 = (void *)*puVar1;
        clear((Value *)(puVar1 + 5));
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          operator_delete((void *)puVar1[4]);
        }
        operator_delete(puVar1);
        puVar1 = pvVar4;
      }
LAB_008837d0:
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      pVVar3 = *(Value **)pbVar2;
      if (*(Value **)pbVar2 != (Value *)0x0) goto LAB_008837dc;
      goto LAB_008837e0;
    }
    break;
  case 10:
    pbVar2 = *(byte **)this;
    if (pbVar2 != (byte *)0x0) {
      puVar1 = *(void **)(pbVar2 + 0x10);
      while (puVar1 != (void *)0x0) {
        pvVar4 = (void *)*puVar1;
        clear((Value *)(puVar1 + 3));
        operator_delete(puVar1);
        puVar1 = pvVar4;
      }
      goto LAB_008837d0;
    }
    break;
  default:
    goto switchD_008836fc_default;
  }
  *(undefined8 *)this = 0;
switchD_008836fc_default:
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* fairygui::TransitionItem::TransitionItem(fairygui::TransitionActionType) */

void __thiscall fairygui::TransitionItem::TransitionItem(TransitionItem *this,undefined4 param_2)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 0xc:
  case 0xd:
    puVar1 = operator_new(0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x101;
    break;
  case 7:
    puVar1 = operator_new(8);
    goto LAB_00a96f30;
  case 8:
    puVar1 = operator_new(1);
    *(undefined1 *)puVar1 = 0;
    break;
  case 9:
    puVar1 = operator_new(0x20);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    break;
  case 10:
    puVar1 = operator_new(0x30);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    break;
  case 0xb:
  case 0xe:
  case 0xf:
    puVar1 = operator_new(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
LAB_00a96f30:
    *puVar1 = 0;
    break;
  default:
    *(undefined8 *)(this + 0x48) = 0;
    return;
  }
  *(undefined8 **)(this + 0x48) = puVar1;
  return;
}


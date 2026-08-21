
void FUN_00aa263c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3d;
  switch(*(undefined1 *)(param_1 + 0x2fe)) {
  case 3:
    uVar1 = 0xb;
    break;
  case 4:
    uVar1 = 10;
    break;
  default:
    uVar1 = 0x10;
    break;
  case 0xc:
    break;
  case 0xd:
    uVar1 = 0x41;
    break;
  case 0x26:
    uVar1 = 0x39;
  }
  FUN_00aa08a4(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,uVar1,
               *(undefined8 *)(param_1 + 0x270),0,0);
  return;
}


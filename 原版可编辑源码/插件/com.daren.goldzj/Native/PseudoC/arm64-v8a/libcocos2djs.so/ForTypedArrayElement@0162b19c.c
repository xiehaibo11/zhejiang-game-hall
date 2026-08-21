
/* v8::internal::compiler::AccessBuilder::ForTypedArrayElement(v8::internal::ExternalArrayType,
   bool, v8::internal::LoadSensitivity) */

void __thiscall
v8::internal::compiler::AccessBuilder::ForTypedArrayElement
          (byte *param_1,undefined4 param_2,byte param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  if ((param_3 & 1) == 0) {
    uVar1 = 8;
  }
  uVar2 = 0x202;
  uVar3 = 1099;
  switch(param_2) {
  case 1:
    break;
  case 2:
  case 9:
    uVar2 = 0x302;
    goto LAB_0162b214;
  case 3:
    uVar2 = 0x203;
    uVar3 = 1099;
    break;
  case 4:
    uVar2 = 0x303;
    goto LAB_0162b214;
  case 5:
    uVar2 = 0x204;
    uVar3 = 1099;
    break;
  case 6:
    uVar2 = 0x304;
LAB_0162b214:
    uVar3 = 0x407;
    break;
  case 7:
    uVar2 = 0x60b;
    uVar3 = 0x1c5f;
    break;
  case 8:
    uVar2 = 0x60c;
    uVar3 = 0x1c5f;
    break;
  case 10:
  case 0xb:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unimplemented code");
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined2 *)(param_1 + 0x10) = uVar2;
  param_1[0x12] = 0;
  *param_1 = ~param_3 & 1;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}


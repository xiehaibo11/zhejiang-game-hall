
/* v8::internal::compiler::AccessBuilder::ForFixedArrayElement(v8::internal::ElementsKind,
   v8::internal::LoadSensitivity) */

void __thiscall
v8::internal::compiler::AccessBuilder::ForFixedArrayElement
          (undefined1 *param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined8 *)(param_1 + 8) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10) = 0x708;
  param_1[0x12] = 5;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  switch(param_2) {
  case 0:
    uVar1 = BitsetType::SignedSmall();
    *(ulong *)(param_1 + 8) = (ulong)(uVar1 | 1);
    *(undefined2 *)(param_1 + 0x10) = 0x206;
    param_1[0x12] = 0;
    break;
  case 1:
    lVar2 = TypeCache::Get();
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar2 + 0xd8);
    break;
  case 2:
    *(undefined8 *)(param_1 + 8) = 0xc7f7fff;
    break;
  case 3:
    break;
  case 4:
    uVar3 = 0x1c5f;
    goto LAB_0162b07c;
  case 5:
    uVar3 = 0x801c5f;
LAB_0162b07c:
    param_1[0x12] = 0;
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined2 *)(param_1 + 0x10) = 0x60c;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return;
}


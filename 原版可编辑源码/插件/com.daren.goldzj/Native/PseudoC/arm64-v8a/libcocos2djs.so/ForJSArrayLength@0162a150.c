
/* v8::internal::compiler::AccessBuilder::ForJSArrayLength(v8::internal::ElementsKind) */

void __thiscall
v8::internal::compiler::AccessBuilder::ForJSArrayLength(undefined1 *param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = TypeCache::Get();
  uVar2 = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined4 *)(param_1 + 4) = 0xc;
  *(undefined2 *)(param_1 + 0x20) = 0x708;
  param_1[0x22] = 5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  param_1[0x30] = 0;
  if ((param_2 & 0xfe) == 4) {
    puVar3 = (undefined8 *)(lVar1 + 0x1b8);
  }
  else {
    if (5 < param_2) {
      return;
    }
    puVar3 = (undefined8 *)(lVar1 + 0x1b0);
  }
  uVar2 = *puVar3;
  *(undefined2 *)(param_1 + 0x20) = 0x206;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}


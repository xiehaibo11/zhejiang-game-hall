
/* v8::internal::wasm::NativeModule::CreateCompilationEnv() const */

void v8::internal::wasm::NativeModule::CreateCompilationEnv(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long in_x0;
  long *in_x8;
  long lVar3;
  
  lVar3 = *(long *)(in_x0 + 200);
  uVar2 = *(undefined1 *)(in_x0 + 0x184);
  *(undefined1 *)((long)in_x8 + 9) = 1;
  *in_x8 = lVar3;
  *(undefined1 *)(in_x8 + 1) = uVar2;
  if (lVar3 == 0) {
    in_x8[2] = 0;
  }
  else {
    in_x8[2] = (ulong)*(uint *)(lVar3 + 8) << 0x10;
    if (*(char *)(lVar3 + 0x11) != '\0') {
      lVar3 = (ulong)*(uint *)(lVar3 + 0xc) << 0x10;
      goto LAB_01201218;
    }
  }
  lVar3 = 0x7fff0000;
LAB_01201218:
  in_x8[3] = lVar3;
  uVar1 = *(undefined4 *)(in_x0 + 0xc0);
  *(undefined1 *)((long)in_x8 + 0x24) = 0;
  *(undefined4 *)(in_x8 + 4) = uVar1;
  return;
}


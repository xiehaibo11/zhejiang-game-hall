
/* v8::internal::compiler::GetMathIntrinsicOpcode(v8::internal::compiler::WasmImportCallKind, char
   const**) */

undefined4 v8::internal::compiler::GetMathIntrinsicOpcode(char param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  bVar2 = param_1 - 6;
  if (bVar2 < 0x17) {
    uVar1 = *(undefined4 *)(&DAT_01a062e0 + (long)(char)bVar2 * 4);
    *param_2 = (&PTR_s_WasmMathIntrinsic_F64Acos_01cc3c00)[(char)bVar2];
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


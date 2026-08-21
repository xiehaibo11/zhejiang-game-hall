
/* v8::internal::compiler::Type::OtherNumberConstant(double, v8::internal::Zone*) */

void v8::internal::compiler::Type::OtherNumberConstant(double param_1,Zone *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x10) {
    puVar1 = (undefined4 *)Zone::NewExpand(param_2,0x10);
  }
  else {
    *(undefined4 **)(param_2 + 0x10) = puVar1 + 4;
  }
  *puVar1 = 1;
  *(double *)(puVar1 + 2) = param_1;
  if (((!NAN(param_1)) && (param_1 != -0.0)) && ((double)(long)param_1 != param_1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsOtherNumberConstant(value)");
}


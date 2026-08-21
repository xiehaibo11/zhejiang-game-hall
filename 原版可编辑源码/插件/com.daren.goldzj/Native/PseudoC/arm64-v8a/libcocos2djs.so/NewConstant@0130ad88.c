
/* v8::internal::compiler::Type::NewConstant(double, v8::internal::Zone*) */

undefined4 * v8::internal::compiler::Type::NewConstant(double param_1,Zone *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (((double)(long)param_1 == param_1) && (param_1 != -0.0)) {
    if (-2147483648.0 <= param_1) {
      if (-1073741824.0 <= param_1) {
        if (0.0 <= param_1) {
          if (1073741824.0 <= param_1) {
            if (2147483648.0 <= param_1) {
              uVar2 = 4;
              if (4294967296.0 <= param_1) {
                uVar2 = 0x10;
              }
            }
            else {
              uVar2 = 2;
            }
          }
          else {
            uVar2 = 0x400;
          }
        }
        else {
          uVar2 = 0x40;
        }
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 0x10;
    }
    puVar1 = *(undefined4 **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x18) {
      puVar1 = (undefined4 *)Zone::NewExpand(param_2,0x18);
    }
    else {
      *(undefined4 **)(param_2 + 0x10) = puVar1 + 6;
    }
    *puVar1 = 4;
    puVar1[1] = uVar2;
    *(double *)(puVar1 + 2) = param_1;
    *(double *)(puVar1 + 4) = param_1;
  }
  else if (param_1 == -0.0) {
    puVar1 = (undefined4 *)0x801;
  }
  else if (NAN(param_1)) {
    puVar1 = (undefined4 *)0x1001;
  }
  else {
    puVar1 = *(undefined4 **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x10) {
      puVar1 = (undefined4 *)Zone::NewExpand(param_2,0x10);
    }
    else {
      *(undefined4 **)(param_2 + 0x10) = puVar1 + 4;
    }
    *puVar1 = 1;
    *(double *)(puVar1 + 2) = param_1;
    if ((double)(long)param_1 == param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsOtherNumberConstant(value)");
    }
  }
  return puVar1;
}


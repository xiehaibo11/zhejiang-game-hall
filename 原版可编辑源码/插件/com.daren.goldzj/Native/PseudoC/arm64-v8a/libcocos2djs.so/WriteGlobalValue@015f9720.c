
/* v8::internal::wasm::InstanceBuilder::WriteGlobalValue(v8::internal::wasm::WasmGlobal const&,
   double) */

void __thiscall
v8::internal::wasm::InstanceBuilder::WriteGlobalValue
          (InstanceBuilder *this,WasmGlobal *param_1,double param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  switch(*param_1) {
  case (WasmGlobal)0x1:
    if (*(long **)(this + 0x40) != (long *)0x0) {
      lVar3 = *(long *)(**(long **)(this + 0x40) + 0x13);
      if ((((param_2 < -2147483648.0) || (2147483647.0 < param_2)) || (ABS(param_2) == INFINITY)) ||
         ((NAN(ABS(param_2)) || (iVar4 = (int)param_2, (double)(int)param_2 != param_2)))) {
        uVar1 = 0xfffffbce;
        if (((ulong)param_2 & 0x7ff0000000000000) != 0) {
          uVar1 = ((uint)((ulong)param_2 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar1 < 0) {
          if ((int)uVar1 < -0x34) goto LAB_015f9898;
          uVar2 = (ulong)param_2 & 0xfffffffffffff;
          if (((ulong)param_2 & 0x7ff0000000000000) != 0) {
            uVar2 = (ulong)param_2 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar5 = (int)(uVar2 >> ((ulong)-uVar1 & 0x3f));
        }
        else {
          if (0x1f < (int)uVar1) {
LAB_015f9898:
            *(undefined4 *)(lVar3 + *(int *)(param_1 + 0x18)) = 0;
            return;
          }
          uVar2 = (ulong)param_2 & 0xfffffffffffff;
          if (((ulong)param_2 & 0x7ff0000000000000) != 0) {
            uVar2 = (ulong)param_2 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar5 = (int)(uVar2 << ((ulong)uVar1 & 0x3f));
        }
        iVar4 = -iVar5;
        if (-1 < (long)param_2) {
          iVar4 = iVar5;
        }
      }
      *(int *)(lVar3 + *(int *)(param_1 + 0x18)) = iVar4;
      return;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case (WasmGlobal)0x3:
    if (*(long **)(this + 0x40) != (long *)0x0) {
      if (param_2 <= 3.4028234663852886e+38) {
        if (-3.4028234663852886e+38 <= param_2) {
          fVar6 = (float)param_2;
        }
        else if (-3.4028235677973362e+38 <= param_2) {
          fVar6 = -3.4028235e+38;
        }
        else {
          fVar6 = -INFINITY;
        }
      }
      else if (param_2 <= 3.4028235677973362e+38) {
        fVar6 = 3.4028235e+38;
      }
      else {
        fVar6 = INFINITY;
      }
      *(float *)(*(long *)(**(long **)(this + 0x40) + 0x13) + (long)*(int *)(param_1 + 0x18)) =
           fVar6;
      return;
    }
    break;
  case (WasmGlobal)0x4:
    if (*(long **)(this + 0x40) != (long *)0x0) {
      *(double *)(*(long *)(**(long **)(this + 0x40) + 0x13) + (long)*(int *)(param_1 + 0x18)) =
           param_2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}


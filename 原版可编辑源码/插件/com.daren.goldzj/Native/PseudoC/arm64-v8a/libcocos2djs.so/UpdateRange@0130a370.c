
/* v8::internal::compiler::Type::UpdateRange(v8::internal::compiler::Type,
   v8::internal::compiler::UnionType*, int, v8::internal::Zone*) */

ulong v8::internal::compiler::Type::UpdateRange(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long local_38;
  
  lVar2 = *(long *)(param_2 + 8);
  if (param_3 == 1) {
    *(long *)(lVar2 + 8) = param_1;
    uVar3 = 2;
  }
  else {
    uVar3 = (ulong)(param_3 + 1);
    *(undefined8 *)(lVar2 + (long)param_3 * 8) = *(undefined8 *)(lVar2 + 8);
    *(long *)(*(long *)(param_2 + 8) + 8) = param_1;
    if (1 < param_3) {
      iVar4 = 2;
LAB_0130a3e8:
      do {
        lVar2 = *(long *)(param_2 + 8);
        local_38 = *(long *)(lVar2 + (long)iVar4 * 8);
        if (local_38 != param_1) {
          uVar1 = SlowIs((Type *)&local_38,param_1);
          if ((uVar1 & 1) == 0) {
            iVar4 = iVar4 + 1;
            if ((int)uVar3 <= iVar4) break;
            goto LAB_0130a3e8;
          }
          lVar2 = *(long *)(param_2 + 8);
        }
        uVar3 = (long)(int)uVar3 - 1;
        *(undefined8 *)(lVar2 + (long)iVar4 * 8) = *(undefined8 *)(lVar2 + uVar3 * 8);
      } while (iVar4 < (int)uVar3);
    }
  }
  return uVar3 & 0xffffffff;
}


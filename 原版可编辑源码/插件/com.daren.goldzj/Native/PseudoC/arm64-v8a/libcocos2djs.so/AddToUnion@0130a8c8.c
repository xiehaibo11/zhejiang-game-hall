
/* v8::internal::compiler::Type::AddToUnion(v8::internal::compiler::Type,
   v8::internal::compiler::UnionType*, int, v8::internal::Zone*) */

uint v8::internal::compiler::Type::AddToUnion
               (int *param_1,long param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int *local_48;
  
  if (((ulong)param_1 & 1) == 0) {
    local_48 = param_1;
    if (*param_1 == 3) {
      uVar1 = param_1[1];
      if (0 < (int)uVar1) {
        lVar3 = 0;
        do {
          param_3 = AddToUnion(*(undefined8 *)(*(long *)(param_1 + 2) + lVar3),param_2,param_3,
                               param_4);
          lVar3 = lVar3 + 8;
        } while ((ulong)uVar1 * 8 - lVar3 != 0);
      }
    }
    else if (*param_1 != 4) {
      if (0 < (int)param_3) {
        lVar3 = 0;
        do {
          if (local_48 == *(int **)(*(long *)(param_2 + 8) + lVar3)) {
            return param_3;
          }
          uVar2 = SlowIs((Type *)&local_48);
          if ((uVar2 & 1) != 0) {
            return param_3;
          }
          lVar3 = lVar3 + 8;
          param_1 = local_48;
        } while ((ulong)param_3 * 8 - lVar3 != 0);
      }
      *(int **)(*(long *)(param_2 + 8) + (long)(int)param_3 * 8) = param_1;
      param_3 = param_3 + 1;
    }
  }
  return param_3;
}


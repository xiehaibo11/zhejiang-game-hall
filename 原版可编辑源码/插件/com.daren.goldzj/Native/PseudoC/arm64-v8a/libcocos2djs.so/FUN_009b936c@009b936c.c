
void FUN_009b936c(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  byte *pbVar1;
  undefined2 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  void *__dest;
  ulong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (param_3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = param_3 * 0x20;
    puVar3 = operator_new(uVar4);
    *param_1 = puVar3;
    param_1[1] = puVar3;
                    /* try { // try from 009b93b8 to 00ab94a7 has its CatchHandler @ 009b9118 */
    param_1[2] = puVar3 + param_3 * 4;
    do {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      if ((*param_2 & 1) == 0) {
        uVar6 = param_2[1];
        uVar5 = *param_2;
        puVar3[2] = param_2[2];
        puVar3[1] = uVar6;
        *puVar3 = uVar5;
      }
      else {
        uVar5 = param_2[1];
        if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        __src = (void *)param_2[2];
        if (uVar5 < 0x17) {
          __dest = (void *)((long)puVar3 + 1);
          *(char *)puVar3 = (char)((int)uVar5 << 1);
          if (uVar5 != 0) goto LAB_009b942c;
        }
        else {
          uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar6);
          puVar3[1] = uVar5;
          puVar3[2] = (ulong)__dest;
          *puVar3 = uVar6 | 1;
LAB_009b942c:
                    /* catch() { ... } // from try @ 009b91a4 with catch @ 009b9438 */
          memcpy(__dest,__src,uVar5);
        }
                    /* catch() { ... } // from try @ 009b9198 with catch @ 009b943c */
        *(undefined1 *)((long)__dest + uVar5) = 0;
      }
                    /* catch() { ... } // from try @ 009b9178 with catch @ 009b9440 */
      pbVar1 = (byte *)((long)param_2 + 0x1e);
      uVar2 = *(undefined2 *)((long)param_2 + 0x1c);
      uVar5 = param_2[3];
      param_2 = param_2 + 4;
                    /* catch() { ... } // from try @ 009b91b0 with catch @ 009b9450 */
      *(byte *)((long)puVar3 + 0x1e) = *pbVar1;
      *(undefined2 *)((long)puVar3 + 0x1c) = uVar2;
      *(int *)(puVar3 + 3) = (int)uVar5;
      uVar4 = uVar4 - 0x20;
      puVar3 = (ulong *)(param_1[1] + 0x20);
      param_1[1] = puVar3;
    } while (uVar4 != 0);
  }
  return;
}



ulong * FUN_01587bd8(long param_1,int param_2,undefined1 *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  
  lVar1 = **(long **)(param_1 + 0x28);
  if ((ulong)((*(long **)(param_1 + 0x28))[1] - lVar1 >> 3) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar2 = *(ulong **)(lVar1 + (long)param_2 * 8);
  if (((*puVar2 & 1) == 0) || ((int)*puVar2 != *(int *)(*(long *)(param_1 + 8) + 0xa0))) {
    *param_3 = 1;
    uVar3 = *puVar2;
    if (((uVar3 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))) {
      puVar2 = (ulong *)v8::internal::Object::ConvertToString(*(undefined8 *)(param_1 + 8));
      return puVar2;
    }
  }
  else {
    *param_3 = 0;
    puVar2 = (ulong *)(*(long *)(param_1 + 8) + 200);
  }
  return puVar2;
}


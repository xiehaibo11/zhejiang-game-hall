
void FUN_01340e60(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x26;
  
  if (((*(byte *)(unaff_x26 + (ulong)*(uint *)(*(long *)(&stack0x00000000 + param_3 * 8) + -1) + 9)
        >> 5 & 1) != 0) && (((uint)(*(int *)(param_2 + 0x2b) >> 1) >> 5 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1f78));
  }
  lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x17);
  FUN_01348140(*(long *)(&stack0x00000000 + param_3 * 8),
               *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar1 + 7) + 3),param_3,
               unaff_x26 + (ulong)*(uint *)(lVar1 + 0xb));
  return;
}


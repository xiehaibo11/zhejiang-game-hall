
/* v8::internal::MemOperand::AreConsistentForPair(v8::internal::MemOperand const&,
   v8::internal::MemOperand const&, int) */

undefined8
v8::internal::MemOperand::AreConsistentForPair(MemOperand *param_1,MemOperand *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (((((*(int *)param_1 == *(int *)param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)))
       && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
      ((*(int *)(param_1 + 0x20) == 0 && (*(int *)(param_2 + 0x20) == 0)))) &&
     (uVar1 = *(ulong *)(param_1 + 0x18), (uVar1 & (long)~(-1 << (ulong)(param_3 & 0x1f))) == 0)) {
    lVar2 = *(long *)(param_2 + 0x18);
    lVar3 = 1L << ((ulong)(uint)param_3 & 0x3f);
    if ((lVar2 == uVar1 + lVar3) && (((long)uVar1 >> ((ulong)(uint)param_3 & 0x3f)) + 0x40U < 0x80))
    {
      return 1;
    }
    if ((uVar1 == lVar2 + lVar3) && ((lVar2 >> ((ulong)(uint)param_3 & 0x3f)) + 0x40U < 0x80)) {
      return 2;
    }
  }
  return 0;
}



uint getUpTo9bits(long *param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(undefined1 *)(*param_1 + ((ulong)(uVar1 >> 3) & 0x1fff));
  uVar3 = *(undefined1 *)(*param_1 + ((ulong)((uVar1 >> 3) + 1) & 0x1fff));
  *(uint *)(param_1 + 1) = uVar1 + param_2;
  return ((uint)CONCAT11(uVar2,uVar3) << ((ulong)uVar1 & 7) & 0xffff) >>
         (ulong)(0x10U - param_2 & 0x1f);
}


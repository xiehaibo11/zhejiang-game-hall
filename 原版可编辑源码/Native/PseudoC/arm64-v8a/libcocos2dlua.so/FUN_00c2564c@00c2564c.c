
void FUN_00c2564c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00c0ee70((*(long **)(param_1 + 0x50))[2],
                       (int)(param_2 - **(long **)(param_1 + 0x50) >> 3) * -0x55555555,0);
                    /* WARNING: Subroutine does not return */
  FUN_00c24fe0(param_1,0,0xd71,lVar1 + 0x18);
}


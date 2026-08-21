
void FUN_009cf32c(undefined8 param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = lua_tolstring(param_1,param_3,&local_50);
  uVar5 = *(uint *)((long)param_2 + 0xc);
  iVar2 = local_50 * 6 + 2;
  if ((int)((int)param_2[1] + ~uVar5) < iVar2) {
    strbuf_resize(param_2,iVar2 + uVar5);
    uVar5 = *(uint *)((long)param_2 + 0xc);
  }
  *(uint *)((long)param_2 + 0xc) = uVar5 + 1;
  *(undefined1 *)(*param_2 + (long)(int)uVar5) = 0x22;
  if (CONCAT44(uStack_4c,local_50) != 0) {
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(lVar4 + uVar6);
      if ((&PTR_s__u0000_0169ee70)[bVar1] == (undefined *)0x0) {
        iVar2 = *(int *)((long)param_2 + 0xc);
        *(int *)((long)param_2 + 0xc) = iVar2 + 1;
        *(byte *)(*param_2 + (long)iVar2) = bVar1;
      }
      else {
        strbuf_append_string(param_2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < CONCAT44(uStack_4c,local_50));
  }
  iVar2 = *(int *)((long)param_2 + 0xc);
  *(int *)((long)param_2 + 0xc) = iVar2 + 1;
  *(undefined1 *)(*param_2 + (long)iVar2) = 0x22;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


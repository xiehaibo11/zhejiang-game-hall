
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* getApkPath() */

void getApkPath(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  basic_string *in_x2;
  basic_string local_68;
  undefined5 uStack_67;
  undefined2 uStack_62;
  undefined1 uStack_60;
  undefined5 uStack_5f;
  undefined1 local_5a;
  undefined1 uStack_59;
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = (ulong)((byte)DAT_01781c38 >> 1);
  if ((DAT_01781c38 & 1) != 0) {
    uVar1 = DAT_01781c40;
  }
  if (uVar1 == 0) {
    uStack_59 = 0;
    uStack_67 = 0x7341746567;
    uStack_62 = 0x6573;
    uStack_60 = 0x74;
    uStack_5f = 0x6874615073;
    local_58 = (void *)0x0;
    local_68 = (basic_string)0x1a;
    local_5a = 0;
    cocos2d::JniHelper::callStaticStringMethod<>((JniHelper *)&DAT_01781c20,&local_68,in_x2);
    if ((DAT_01781c38 & 1) != 0) {
      *DAT_01781c48 = 0;
      DAT_01781c40 = 0;
      if ((DAT_01781c38 & 1) != 0) {
        operator_delete(DAT_01781c48);
      }
    }
    DAT_01781c40 = uStack_48;
    DAT_01781c38 = local_50;
    local_50 = 0;
    uStack_48 = 0;
    DAT_01781c48 = local_40;
    local_40 = (undefined1 *)0x0;
    if (((byte)local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  puVar2 = (undefined1 *)((long)&DAT_01781c38 + 1);
  if (((byte)DAT_01781c38 & 1) != 0) {
    puVar2 = DAT_01781c48;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar2);
  }
  return;
}


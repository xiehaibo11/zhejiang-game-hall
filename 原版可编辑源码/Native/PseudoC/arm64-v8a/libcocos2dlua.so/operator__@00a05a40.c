
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(char const*) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,char *param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = strlen(param_1);
  writeStrLen(this,&local_40);
  uVar2 = local_40;
                    /* catch() { ... } // from try @ 00a059d8 with catch @ 00a05a84 */
  if (local_40 != 0) {
    if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < local_40) {
      pcVar3 = (char *)Translated::getInstance();
      Translated::log(pcVar3,&LAB_012f87ac,uVar2,*(long *)(this + 8) - *(long *)(this + 0x10));
    }
    else {
      memcpy((void *)(*(long *)this + *(long *)(this + 0x10)),param_1,local_40);
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + uVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


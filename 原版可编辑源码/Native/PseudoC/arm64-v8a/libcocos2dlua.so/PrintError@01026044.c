
/* tinyxml2::XMLDocument::PrintError() const */

void __thiscall tinyxml2::XMLDocument::PrintError(XMLDocument *this)

{
  long lVar1;
  uint uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x5c) != 0) {
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    if (*(long *)(this + 0x68) != 0) {
      FUN_01021478(&local_40,0x14,0x14,"%s");
    }
    if (*(long *)(this + 0x70) != 0) {
      FUN_01021478(&local_58,0x14,0x14,"%s");
    }
    uVar2 = printf("XMLDocument error id=%d str1=%s str2=%s\n",(ulong)*(uint *)(this + 0x5c),
                   &local_40,&local_58);
    this = (XMLDocument *)(ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


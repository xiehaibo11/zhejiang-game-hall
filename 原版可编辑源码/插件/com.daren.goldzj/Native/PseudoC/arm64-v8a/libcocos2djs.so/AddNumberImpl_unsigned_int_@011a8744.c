
/* void v8::internal::OutputStreamWriter::AddNumberImpl<unsigned int>(unsigned int, char const*) */

void __thiscall
v8::internal::OutputStreamWriter::AddNumberImpl<unsigned_int>
          (OutputStreamWriter *this,uint param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char acStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(this + 0x20);
  if (*(int *)(this + 8) - iVar3 < 0xb) {
    SNPrintF(acStack_38,0xb,param_2,param_1);
    AddString(this,acStack_38);
  }
  else {
    iVar2 = SNPrintF(*(long *)(this + 0x10) + (long)iVar3,(long)*(int *)(this + 8) - (long)iVar3,
                     param_2,param_1);
    iVar3 = *(int *)(this + 0x20);
    *(int *)(this + 0x20) = iVar3 + iVar2;
    if ((iVar3 + iVar2 == *(int *)(this + 8)) && (this[0x24] == (OutputStreamWriter)0x0)) {
      iVar3 = (**(code **)(**(long **)this + 0x20))(*(long **)this,*(undefined8 *)(this + 0x10));
      if (iVar3 == 1) {
        this[0x24] = (OutputStreamWriter)0x1;
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


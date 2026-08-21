
/* v8::internal::CodeEventLogger::NameBuffer::AppendName(v8::internal::Name) */

void __thiscall
v8::internal::CodeEventLogger::NameBuffer::AppendName(NameBuffer *this,ulong param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *local_58;
  int local_4c;
  ulong local_48;
  
  uVar5 = param_2 & 0xffffffff00000000;
  if (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0x40) {
    if ((int)param_2 != 0) {
      local_4c = 0;
      local_48 = param_2;
      String::ToCString(&local_58,&local_48,1,0,&local_4c);
      iVar4 = 0x200 - *(int *)this;
      iVar2 = local_4c;
      if (iVar4 <= local_4c) {
        iVar2 = iVar4;
      }
      MemCopy(this + (long)*(int *)this + 4,local_58,(long)iVar2);
      pvVar1 = local_58;
      *(int *)this = iVar2 + *(int *)this;
      local_58 = (void *)0x0;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
    }
  }
  else {
    iVar2 = __strlen_chk("symbol(",8);
    iVar4 = 0x200 - *(int *)this;
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    MemCopy(this + (long)*(int *)this + 4,"symbol(",(long)iVar2);
    *(int *)this = iVar2 + *(int *)this;
    if (*(int *)(param_2 + 0xb) != *(int *)(uVar5 + 0xa0)) {
      iVar2 = __strlen_chk(&DAT_01a61e87,2);
      iVar4 = 0x200 - *(int *)this;
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      MemCopy(this + (long)*(int *)this + 4,&DAT_01a61e87,(long)iVar2);
      *(int *)this = iVar2 + *(int *)this;
      local_48 = uVar5 | *(uint *)(param_2 + 0xb);
      if (*(uint *)(param_2 + 0xb) != 0) {
        local_4c = 0;
        String::ToCString(&local_58,&local_48,1,0,&local_4c);
        iVar4 = 0x200 - *(int *)this;
        iVar2 = local_4c;
        if (iVar4 <= local_4c) {
          iVar2 = iVar4;
        }
        MemCopy(this + (long)*(int *)this + 4,local_58,(long)iVar2);
        pvVar1 = local_58;
        *(int *)this = iVar2 + *(int *)this;
        local_58 = (void *)0x0;
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
      }
      iVar2 = __strlen_chk("\" ",3);
      iVar4 = 0x200 - *(int *)this;
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      MemCopy(this + (long)*(int *)this + 4,"\" ",(long)iVar2);
      *(int *)this = iVar2 + *(int *)this;
    }
    iVar2 = __strlen_chk("hash ",6);
    iVar4 = 0x200 - *(int *)this;
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    MemCopy(this + (long)*(int *)this + 4,"hash ",(long)iVar2);
    iVar2 = iVar2 + *(int *)this;
    *(int *)this = iVar2;
    if ((*(uint *)(param_2 + 3) & 1) == 0) {
      uVar3 = *(uint *)(param_2 + 3) >> 3;
    }
    else {
      local_48 = param_2;
      uVar3 = String::ComputeAndSetHash((String *)&local_48);
      iVar2 = *(int *)this;
    }
    if (iVar2 < 0x200) {
      iVar2 = SNPrintF(this + (long)iVar2 + 4,(long)(0x200 - iVar2),&DAT_0188de11,uVar3);
      iVar4 = *(int *)this;
      if ((0 < iVar2) && (iVar2 = iVar4 + iVar2, iVar2 < 0x201)) {
        *(int *)this = iVar2;
        iVar4 = iVar2;
      }
      if (iVar4 < 0x200) {
        *(int *)this = iVar4 + 1;
        this[(long)iVar4 + 4] = (NameBuffer)0x29;
      }
    }
  }
  return;
}


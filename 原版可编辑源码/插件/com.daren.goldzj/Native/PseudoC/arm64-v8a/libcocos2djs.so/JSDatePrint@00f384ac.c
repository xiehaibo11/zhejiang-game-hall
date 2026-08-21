
/* v8::internal::JSDate::JSDatePrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) */

void __thiscall v8::internal::JSDate::JSDatePrint(JSDate *this,basic_ostream *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  basic_ostream *pbVar8;
  char *__s;
  long *plVar9;
  size_t sVar10;
  long lVar11;
  ulong local_38;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSDate");
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - value: ",0xb);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar8,(Brief *)&local_38);
  lVar11 = *(long *)this;
  if ((*(byte *)(lVar11 + 0xf) & 1) == 0) {
    __s = operator_new__(100,(nothrow_t *)&std::nothrow);
    if (__s == (char *)0x0) {
      plVar9 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar9 + 0x18))();
      __s = operator_new__(100,(nothrow_t *)&std::nothrow);
      if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
      lVar11 = *(long *)this;
    }
    iVar7 = 0;
    if ((*(uint *)(lVar11 + 0x1b) & 1) == 0) {
      iVar7 = ((int)*(uint *)(lVar11 + 0x1b) >> 1) + 1;
    }
    iVar1 = (int)*(uint *)(lVar11 + 0xf) >> 1;
    iVar2 = (int)*(uint *)(lVar11 + 0x13) >> 1;
    if ((*(uint *)(lVar11 + 0xf) & 1) != 0) {
      iVar1 = -1;
    }
    iVar3 = (int)*(uint *)(lVar11 + 0x17) >> 1;
    if ((*(uint *)(lVar11 + 0x13) & 1) != 0) {
      iVar2 = -1;
    }
    iVar4 = (int)*(uint *)(lVar11 + 0x1f) >> 1;
    if ((*(uint *)(lVar11 + 0x17) & 1) != 0) {
      iVar3 = -1;
    }
    iVar5 = (int)*(uint *)(lVar11 + 0x23) >> 1;
    if ((*(uint *)(lVar11 + 0x1f) & 1) != 0) {
      iVar4 = -1;
    }
    iVar6 = (int)*(uint *)(lVar11 + 0x27) >> 1;
    if ((*(uint *)(lVar11 + 0x23) & 1) != 0) {
      iVar5 = -1;
    }
    if ((*(uint *)(lVar11 + 0x27) & 1) != 0) {
      iVar6 = -1;
    }
    SNPrintF(__s,100,"\n - time = %s %04d/%02d/%02d %02d:%02d:%02d\n",(&PTR_DAT_01ca4b70)[iVar7],
             iVar1,iVar2,iVar3,iVar4,iVar5,iVar6);
    sVar10 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar10);
    operator_delete__(__s);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - time = NaN\n",0xf);
  }
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  return;
}


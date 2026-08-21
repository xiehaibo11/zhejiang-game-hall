
void FUN_00909784(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,StackTrace *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  Isolate *pIVar5;
  StackFrame *this;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_120;
  ulong local_118;
  char *local_110;
  char *local_108 [2];
  char *local_f8;
  ulong local_f0;
  char *local_e8;
  char local_e0 [112];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2 != (StackTrace *)0x0) {
    local_e0[0x60] = '\0';
    local_e0[0x61] = '\0';
    local_e0[0x62] = '\0';
    local_e0[99] = '\0';
    local_e0[0x48] = '\0';
    local_e0[0x49] = '\0';
    local_e0[0x4a] = '\0';
    local_e0[0x4b] = '\0';
    local_e0[0x4c] = '\0';
    local_e0[0x4d] = '\0';
    local_e0[0x4e] = '\0';
    local_e0[0x4f] = '\0';
    local_e0[0x40] = '\0';
    local_e0[0x41] = '\0';
    local_e0[0x42] = '\0';
    local_e0[0x43] = '\0';
    local_e0[0x44] = '\0';
    local_e0[0x45] = '\0';
    local_e0[0x46] = '\0';
    local_e0[0x47] = '\0';
    local_e0[0x58] = '\0';
    local_e0[0x59] = '\0';
    local_e0[0x5a] = '\0';
    local_e0[0x5b] = '\0';
    local_e0[0x5c] = '\0';
    local_e0[0x5d] = '\0';
    local_e0[0x5e] = '\0';
    local_e0[0x5f] = '\0';
    local_e0[0x50] = '\0';
    local_e0[0x51] = '\0';
    local_e0[0x52] = '\0';
    local_e0[0x53] = '\0';
    local_e0[0x54] = '\0';
    local_e0[0x55] = '\0';
    local_e0[0x56] = '\0';
    local_e0[0x57] = '\0';
    local_e0[0x28] = '\0';
    local_e0[0x29] = '\0';
    local_e0[0x2a] = '\0';
    local_e0[0x2b] = '\0';
    local_e0[0x2c] = '\0';
    local_e0[0x2d] = '\0';
    local_e0[0x2e] = '\0';
    local_e0[0x2f] = '\0';
    local_e0[0x20] = '\0';
    local_e0[0x21] = '\0';
    local_e0[0x22] = '\0';
    local_e0[0x23] = '\0';
    local_e0[0x24] = '\0';
    local_e0[0x25] = '\0';
    local_e0[0x26] = '\0';
    local_e0[0x27] = '\0';
    local_e0[0x38] = '\0';
    local_e0[0x39] = '\0';
    local_e0[0x3a] = '\0';
    local_e0[0x3b] = '\0';
    local_e0[0x3c] = '\0';
    local_e0[0x3d] = '\0';
    local_e0[0x3e] = '\0';
    local_e0[0x3f] = '\0';
    local_e0[0x30] = '\0';
    local_e0[0x31] = '\0';
    local_e0[0x32] = '\0';
    local_e0[0x33] = '\0';
    local_e0[0x34] = '\0';
    local_e0[0x35] = '\0';
    local_e0[0x36] = '\0';
    local_e0[0x37] = '\0';
    local_e0[8] = '\0';
    local_e0[9] = '\0';
    local_e0[10] = '\0';
    local_e0[0xb] = '\0';
    local_e0[0xc] = '\0';
    local_e0[0xd] = '\0';
    local_e0[0xe] = '\0';
    local_e0[0xf] = '\0';
    local_e0[0] = '\0';
    local_e0[1] = '\0';
    local_e0[2] = '\0';
    local_e0[3] = '\0';
    local_e0[4] = '\0';
    local_e0[5] = '\0';
    local_e0[6] = '\0';
    local_e0[7] = '\0';
    local_e0[0x18] = '\0';
    local_e0[0x19] = '\0';
    local_e0[0x1a] = '\0';
    local_e0[0x1b] = '\0';
    local_e0[0x1c] = '\0';
    local_e0[0x1d] = '\0';
    local_e0[0x1e] = '\0';
    local_e0[0x1f] = '\0';
    local_e0[0x10] = '\0';
    local_e0[0x11] = '\0';
    local_e0[0x12] = '\0';
    local_e0[0x13] = '\0';
    local_e0[0x14] = '\0';
    local_e0[0x15] = '\0';
    local_e0[0x16] = '\0';
    local_e0[0x17] = '\0';
    iVar4 = v8::StackTrace::GetFrameCount(param_2);
    if (0 < iVar4) {
      uVar10 = 0;
      do {
        pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
        this = (StackFrame *)v8::StackTrace::GetFrame(param_2,pIVar5,uVar10);
        lVar6 = v8::StackFrame::GetScriptName(this);
        local_120 = 0;
        local_118 = 0;
        local_110 = (char *)0x0;
        if (lVar6 != 0) {
          uVar7 = v8::Isolate::GetCurrent();
          v8::String::Utf8Value::Utf8Value((Utf8Value *)&local_f8,uVar7,lVar6);
          pcVar1 = local_f8;
          sVar8 = strlen(local_f8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_120,pcVar1,sVar8);
          v8::String::Utf8Value::~Utf8Value((Utf8Value *)&local_f8);
        }
        lVar6 = v8::StackFrame::GetFunctionName(this);
        local_f8 = (char *)0x0;
        local_f0 = 0;
        local_e8 = (char *)0x0;
        if (lVar6 != 0) {
          uVar7 = v8::Isolate::GetCurrent();
          v8::String::Utf8Value::Utf8Value((Utf8Value *)local_108,uVar7,lVar6);
          pcVar1 = local_108[0];
          sVar8 = strlen(local_108[0]);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_f8,pcVar1,sVar8);
          v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_108);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,"[",1);
        snprintf(local_e0,100,"%d",(ulong)uVar10);
        sVar8 = strlen(local_e0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,local_e0,sVar8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,"]",1);
        pcVar1 = (char *)((ulong)&local_f8 | 1);
        uVar9 = (ulong)local_f8 >> 1 & 0x7f;
        if (((ulong)local_f8 & 1) != 0) {
          pcVar1 = local_e8;
          uVar9 = local_f0;
        }
        pcVar2 = "anonymous";
        if (uVar9 != 0) {
          pcVar2 = pcVar1;
        }
        sVar8 = strlen(pcVar2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,pcVar2,sVar8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,"@",1);
        pcVar1 = (char *)((ulong)&local_120 | 1);
        uVar9 = local_120 >> 1 & 0x7f;
        if ((local_120 & 1) != 0) {
          pcVar1 = local_110;
          uVar9 = local_118;
        }
        pcVar2 = "(no filename)";
        if (uVar9 != 0) {
          pcVar2 = pcVar1;
        }
        sVar8 = strlen(pcVar2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,pcVar2,sVar8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,":",1);
        uVar9 = v8::StackFrame::GetLineNumber();
        snprintf(local_e0,100,"%d",uVar9 & 0xffffffff);
        sVar8 = strlen(local_e0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,local_e0,sVar8);
        if ((int)uVar10 < iVar4 + -1) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_1,"\n",1);
        }
        if (((ulong)local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
        if ((local_120 & 1) != 0) {
          operator_delete(local_110);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


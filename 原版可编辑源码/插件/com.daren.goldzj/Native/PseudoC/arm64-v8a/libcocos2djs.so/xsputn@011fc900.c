
/* v8::internal::AndroidLogStream::xsputn(char const*, long) */

long __thiscall
v8::internal::AndroidLogStream::xsputn(AndroidLogStream *this,char *param_1,long param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  char *pcVar5;
  ulong uVar6;
  AndroidLogStream *pAVar7;
  ulong __n;
  ulong uVar8;
  
  if (0 < param_2) {
    pcVar1 = param_1 + param_2;
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x40);
    do {
      pcVar5 = memchr(param_1,10,(long)pcVar1 - (long)param_1);
      bVar4 = *this_00;
      pcVar3 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        pcVar3 = pcVar1;
      }
      __n = (long)pcVar3 - (long)param_1;
      if (((byte)bVar4 & 1) == 0) {
        uVar8 = (ulong)((byte)bVar4 >> 1);
        uVar6 = 0x16;
      }
      else {
        uVar8 = *(ulong *)(this + 0x48);
        uVar6 = (*(ulong *)(this + 0x40) & 0xfffffffffffffffe) - 1;
      }
      if (uVar6 - uVar8 < __n) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__grow_by_and_replace(this_00,uVar6,(uVar8 + __n) - uVar6,uVar8,uVar8,0,__n,param_1);
      }
      else if (__n != 0) {
        pAVar7 = this + 0x41;
        if (((byte)bVar4 & 1) != 0) {
          pAVar7 = *(AndroidLogStream **)(this + 0x50);
        }
        memcpy(pAVar7 + uVar8,param_1,__n);
        lVar2 = uVar8 + __n;
        if (((byte)*this_00 & 1) == 0) {
          *this_00 = SUB41((int)lVar2 << 1,0);
          pAVar7[lVar2] = (AndroidLogStream)0x0;
        }
        else {
          *(long *)(this + 0x48) = lVar2;
          pAVar7[lVar2] = (AndroidLogStream)0x0;
        }
      }
      if (pcVar5 == (char *)0x0) {
        return param_2;
      }
      pAVar7 = this + 0x41;
      if (((byte)*this_00 & 1) != 0) {
        pAVar7 = *(AndroidLogStream **)(this + 0x50);
      }
      __android_log_write(4,&DAT_019c38f7,pAVar7);
      if (((byte)*this_00 & 1) == 0) {
        *(undefined2 *)this_00 = 0;
      }
      else {
        **(undefined1 **)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x48) = 0;
      }
      param_1 = pcVar5 + 1;
    } while (param_1 < pcVar1);
  }
  return param_2;
}


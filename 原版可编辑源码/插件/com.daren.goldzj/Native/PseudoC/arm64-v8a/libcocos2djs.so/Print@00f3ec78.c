
/* v8::internal::LayoutDescriptor::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::LayoutDescriptor::Print(LayoutDescriptor *this,basic_ostream *param_1)

{
  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"Layout descriptor: ",0x13);
  uVar2 = *(ulong *)this;
  if ((int)uVar2 == 0) {
    pcVar1 = "<all tagged>";
    uVar2 = 0xc;
  }
  else {
    if ((uVar2 & 1) == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"fast",4);
      uVar3 = 0;
      uVar4 = *(int *)this >> 1;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
        do {
          pcVar1 = "_";
          if ((uVar4 & 1) != 0) {
            pcVar1 = "x";
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,pcVar1,1);
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 >> 1;
          if (uVar3 == 0x20) goto LAB_00f3ed50;
        } while ((uVar3 & 7) != 0);
      } while( true );
    }
    if ((*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x43) ||
       ((int)uVar2 != *(int *)((uVar2 & 0xffffffff00000000) + 0x98))) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"slow",4);
      uVar3 = *(uint *)(*(long *)this + 3);
      if (7 < (int)uVar3) {
        uVar2 = 0;
LAB_00f3ee24:
        uVar4 = 0;
        uVar5 = *(uint *)(*(long *)this + uVar2 * 4 + 7);
        do {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
          do {
            pcVar1 = "_";
            if ((uVar5 & 1) != 0) {
              pcVar1 = "x";
            }
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,pcVar1,1);
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar4 == 0x20) {
              uVar2 = uVar2 + 1;
              if (uVar3 >> 3 <= uVar2) goto LAB_00f3ed50;
              if (uVar2 != 0) {
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (param_1," |",2);
              }
              goto LAB_00f3ee24;
            }
          } while ((uVar4 & 7) != 0);
        } while( true );
      }
      goto LAB_00f3ed50;
    }
    pcVar1 = "<uninitialized>";
    uVar2 = 0xf;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,uVar2);
LAB_00f3ed50:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}


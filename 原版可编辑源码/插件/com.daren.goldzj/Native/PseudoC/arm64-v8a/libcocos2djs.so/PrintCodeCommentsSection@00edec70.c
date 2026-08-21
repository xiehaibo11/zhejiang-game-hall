
/* v8::internal::PrintCodeCommentsSection(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned long, unsigned int) */

void v8::internal::PrintCodeCommentsSection(basic_ostream *param_1,ulong param_2,uint param_3)

{
  uint *__s;
  uint uVar1;
  basic_ostream *pbVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  size_t sVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(param_2 + 4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"CodeComments (size = ",0x15);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,param_3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")\n",2);
  if (puVar4 < (uint *)(param_2 + param_3)) {
    *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 6;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"pc",2);
    *(undefined8 *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 0x18) = 6;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"len",3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar2," comment\n",9);
    do {
      *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) =
           *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0xffffffb5 | 8;
      *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 6;
      this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*puVar4);
      *(uint *)(this + *(long *)(*(long *)this + -0x18) + 8) =
           *(uint *)(this + *(long *)(*(long *)this + -0x18) + 8) & 0xffffffb5 | 2;
      *(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x18) = 6;
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         (this,puVar4[1]);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2," (",2);
      uVar1 = puVar4[1];
      __s = puVar4 + 2;
      sVar3 = strlen((char *)__s);
      if (sVar3 + 1 != (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","GetCommentSize() == strlen(comment_string) + 1");
      }
      sVar3 = strlen((char *)__s);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2,(char *)__s,sVar3);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")\n",2);
      puVar4 = (uint *)((long)puVar4 + (ulong)(puVar4[1] + 8));
    } while (puVar4 < (uint *)(param_2 + param_3));
  }
  return;
}


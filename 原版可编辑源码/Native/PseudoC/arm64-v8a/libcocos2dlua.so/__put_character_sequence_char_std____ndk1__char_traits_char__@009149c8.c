
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char>
   >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char const*, unsigned long)
    */

basic_ostream *
std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
          (basic_ostream *param_1,char *param_2,ulong param_3)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream *local_68;
  locale alStack_60 [8];
  long local_58;
  
                    /* try { // try from 009149cc to 00a149df has its CatchHandler @ 00914acc */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70[0] = (sentry)0x0;
                    /* try { // try from 009149fc to 00a14a03 has its CatchHandler @ 00914a9c */
  lVar7 = *(long *)param_1;
                    /* try { // try from 00914a04 to 00a14a47 has its CatchHandler @ 00914958 */
  local_68 = param_1;
  if (*(int *)(param_1 + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (param_1 + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
                  (param_1 + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)param_1;
    }
    local_70[0] = (sentry)0x1;
    pbVar1 = param_1 + *(long *)(lVar7 + -0x18);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    uVar3 = *(uint *)(pbVar1 + 8);
                    /* try { // try from 00914a48 to 00a14a5b has its CatchHandler @ 00914ad0 */
    if (*(int *)(pbVar1 + 0x90) == -1) {
      ios_base::getloc();
                    /* try { // try from 00914a5c to 00a14aeb has its CatchHandler @ 00914958 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)&ctype<char>::id);
      cVar5 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = (int)cVar5;
    }
    pcVar2 = param_2 + param_3;
                    /* catch() { ... } // from try @ 009149fc with catch @ 00914a9c */
    if ((uVar3 & 0xb0) != 0x20) {
      pcVar2 = param_2;
    }
    lVar7 = FUN_00914b68(uVar8,param_2,pcVar2,param_2 + param_3,pbVar1);
    if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 009149cc with catch @ 00914acc */
      ios_base::clear((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
                      *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20)
                      | 5);
    }
  }
                    /* catch() { ... } // from try @ 009149a8 with catch @ 00914ad0
                       catch() { ... } // from try @ 00914a48 with catch @ 00914ad0 */
  basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00914aec to 00a14b3b has its CatchHandler @ 00914aec
                       catch() { ... } // from try @ 00914aec with catch @ 00914aec
                       catch() { ... } // from try @ 00914b7c with catch @ 00914aec
                       catch() { ... } // from try @ 00914bc0 with catch @ 00914aec */
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


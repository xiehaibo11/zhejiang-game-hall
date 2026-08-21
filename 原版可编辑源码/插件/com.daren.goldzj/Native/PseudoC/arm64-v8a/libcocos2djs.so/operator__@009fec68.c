
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(long)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,long param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
                    /* catch() { ... } // from try @ 009febf0 with catch @ 009fec7c */
                    /* catch() { ... } // from try @ 009febe4 with catch @ 009fec80 */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 009febf8 with catch @ 009fec88 */
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fed14 with catch @ 009feca4
                       catch(type#1 @ 00000000) { ... } // from try @ 009fed44 with catch @ 009feca4
                       catch(type#1 @ 00000000) { ... } // from try @ 009fed74 with catch @ 009feca4
                       catch(type#1 @ 00000000) { ... } // from try @ 009fed9c with catch @ 009feca4
                       catch(type#1 @ 00000000) { ... } // from try @ 009fedc8 with catch @ 009feca4
                        */
  local_68 = this;
  if (*(int *)(this + *(long *)(*(long *)this + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(*(long *)this + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(*(long *)this + -0x18) + 0x88));
    }
    local_70[0] = (sentry)0x1;
    ios_base::getloc();
    plVar5 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar2 = *(int *)(pbVar1 + 0x90);
                    /* try { // try from 009fed0c to 00afed13 has its CatchHandler @ 009fee08 */
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
                    /* try { // try from 009fed14 to 00afed37 has its CatchHandler @ 009feca4 */
    if (iVar2 == -1) {
      ios_base::getloc();
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)&ctype<char>::id);
                    /* try { // try from 009fed38 to 00afed43 has its CatchHandler @ 009fee08 */
      cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
                    /* try { // try from 009fed44 to 00afed6b has its CatchHandler @ 009feca4 */
      locale::~locale(alStack_60);
      iVar2 = (int)cVar4;
      *(int *)(pbVar1 + 0x90) = iVar2;
    }
                    /* try { // try from 009fed6c to 00afed73 has its CatchHandler @ 009fee04 */
    lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar8,pbVar1,iVar2,param_1);
                    /* try { // try from 009fed74 to 00afed93 has its CatchHandler @ 009feca4 */
    if (lVar7 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
                    /* try { // try from 009fed94 to 00afed9b has its CatchHandler @ 009fee04 */
  sentry::~sentry(local_70);
                    /* try { // try from 009fed9c to 00afedbb has its CatchHandler @ 009feca4 */
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 009fedbc to 00afedc7 has its CatchHandler @ 009fee04 */
                    /* try { // try from 009fedc8 to 00afee0b has its CatchHandler @ 009feca4 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


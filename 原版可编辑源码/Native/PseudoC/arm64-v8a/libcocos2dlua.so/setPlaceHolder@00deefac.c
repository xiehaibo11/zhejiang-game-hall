
/* cocos2d::ui::EditBoxImplCommon::setPlaceHolder(char const*) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setPlaceHolder(EditBoxImplCommon *this,char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
                    /* try { // try from 00deefcc to 00eeefcf has its CatchHandler @ 00def000 */
    sVar1 = strlen(param_1);
                    /* try { // try from 00deefdc to 00eeefe7 has its CatchHandler @ 00def004 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x50),param_1,sVar1);
                    /* try { // try from 00deefe8 to 00eef043 has its CatchHandler @ 00deefa0 */
    (**(code **)(*(long *)this + 400))(this,param_1);
                    /* catch() { ... } // from try @ 00deefcc with catch @ 00def000 */
                    /* catch() { ... } // from try @ 00deefdc with catch @ 00def004 */
                    /* WARNING: Could not recover jumptable at 0x00def014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x588))
              (*(long **)(this + 0x20),
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x50));
    return;
  }
  return;
}


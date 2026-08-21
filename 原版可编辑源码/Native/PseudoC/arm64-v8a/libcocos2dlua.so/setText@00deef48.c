
/* cocos2d::ui::EditBoxImplCommon::setText(char const*) */

void __thiscall cocos2d::ui::EditBoxImplCommon::setText(EditBoxImplCommon *this,char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    (**(code **)(*(long *)this + 0x188))();
    sVar1 = strlen(param_1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),param_1,sVar1);
                    /* catch() { ... } // from try @ 00deefe8 with catch @ 00deefa0 */
                    /* WARNING: Could not recover jumptable at 0x00deefa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x130))(this);
    return;
  }
  return;
}


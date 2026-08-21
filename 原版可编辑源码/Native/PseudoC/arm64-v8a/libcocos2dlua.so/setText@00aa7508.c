
/* fairygui::FUILabel::setText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::FUILabel::setText(FUILabel *this,basic_string *param_1)

{
  if (*(int *)(this + 0x6c0) < 0) {
    applyTextFormat(this);
  }
                    /* WARNING: Could not recover jumptable at 0x00aa7544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x588))(this,param_1);
  return;
}



/* fairygui::FUIInput::getText() const */

void fairygui::FUIInput::getText(void)

{
  EditBox *in_x0;
  char *pcVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  pcVar1 = (char *)cocos2d::ui::EditBox::getText(in_x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,pcVar1);
  return;
}


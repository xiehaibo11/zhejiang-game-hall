
/* fairygui::GTreeNode::setText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void fairygui::GTreeNode::setText(basic_string *param_1)

{
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a8f018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
    return;
  }
  return;
}


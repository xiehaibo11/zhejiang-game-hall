
/* universe::HeBaiChuan::onNetStateChange(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void universe::HeBaiChuan::onNetStateChange(basic_string *param_1)

{
                    /* try { // try from 00a0d280 to 00b0d28f has its CatchHandler @ 00a0d440 */
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a0d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
    return;
  }
  return;
}


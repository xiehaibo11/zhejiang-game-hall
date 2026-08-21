
/* fairygui::GBasicTextField::setTextFieldText() */

void __thiscall fairygui::GBasicTextField::setTextFieldText(GBasicTextField *this)

{
  FUILabel *this_00;
  long lVar1;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00a8cba0 to 00b8cbcf has its CatchHandler @ 00a8cb18 */
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = *(FUILabel **)(this + 0x200);
  if (*(long *)(this + 0x1f8) == 0) {
    FUILabel::setText(this_00,(basic_string *)(this + 0x1d8));
                    /* try { // try from 00a8cbd0 to 00b8cbe3 has its CatchHandler @ 00a8cc24 */
  }
  else {
    GTextField::parseTemplate((char *)this);
                    /* try { // try from 00a8cbe4 to 00b8cc3f has its CatchHandler @ 00a8cb18 */
    FUILabel::setText(this_00,local_40);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


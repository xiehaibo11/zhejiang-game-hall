
/* fairygui::GTextInput::setTextFieldText() */

void __thiscall fairygui::GTextInput::setTextFieldText(GTextInput *this)

{
  long lVar1;
  FUIInput *this_00;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = *(FUIInput **)(this + 0x208);
                    /* try { // try from 00a8d3e4 to 00b8d43b has its CatchHandler @ 00a8d3e4
                       catch() { ... } // from try @ 00a8d3e4 with catch @ 00a8d3e4
                       catch() { ... } // from try @ 00a8d474 with catch @ 00a8d3e4
                       catch() { ... } // from try @ 00a8d4b8 with catch @ 00a8d3e4 */
  if (*(long *)(this + 0x1f8) == 0) {
    FUIInput::setText(this_00,(basic_string *)(this + 0x1d8));
  }
  else {
    GTextField::parseTemplate((char *)this);
    FUIInput::setText(this_00,local_40);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
                    /* try { // try from 00a8d43c to 00b8d473 has its CatchHandler @ 00a8d534 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


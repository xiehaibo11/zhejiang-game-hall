
/* fairygui::GRichTextField::setTextFieldText() */

void __thiscall fairygui::GRichTextField::setTextFieldText(GRichTextField *this)

{
  FUIRichText *this_00;
  long lVar1;
  char *pcVar2;
  char cVar3;
  ulong local_68;
  undefined1 *local_58;
  ulong local_50 [2];
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a87fd4 to 00b87fe7 has its CatchHandler @ 00a8818c */
  if (this[0x1f0] == (GRichTextField)0x0) {
    this_00 = *(FUIRichText **)(this + 0x200);
    if (*(long *)(this + 0x1f8) == 0) {
      FUIRichText::setText(this_00,(basic_string *)(this + 0x1d8));
      goto LAB_00a880dc;
    }
    GTextField::parseTemplate((char *)this);
    FUIRichText::setText(this_00,(basic_string *)local_50);
  }
  else {
    pcVar2 = (char *)UBBParser::getInstance();
    if (((byte)this[0x1d8] & 1) == 0) {
                    /* try { // try from 00a87fec to 00b87fff has its CatchHandler @ 00a88194 */
      cVar3 = (char)this + -0x27;
    }
    else {
      cVar3 = (char)*(undefined8 *)(this + 0x1e8);
    }
                    /* try { // try from 00a8801c to 00b8802f has its CatchHandler @ 00a88198 */
    UBBParser::parse(pcVar2,(bool)cVar3);
    if (*(long *)(this + 0x1f8) != 0) {
                    /* try { // try from 00a88034 to 00b88047 has its CatchHandler @ 00a881a0 */
                    /* try { // try from 00a8804c to 00b8805f has its CatchHandler @ 00a8819c */
      GTextField::parseTemplate((char *)this);
      if ((local_50[0] & 1) != 0) {
                    /* try { // try from 00a88064 to 00b88077 has its CatchHandler @ 00a881b8 */
        *local_40 = 0;
        local_50[1] = 0;
        if ((local_50[0] & 1) != 0) {
                    /* try { // try from 00a88078 to 00b881e3 has its CatchHandler @ 00a870f0 */
          operator_delete(local_40);
        }
      }
      local_50[0] = local_68;
      local_40 = local_58;
    }
    FUIRichText::setText(*(FUIRichText **)(this + 0x200),(basic_string *)local_50);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00a880dc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00a8793c with catch @ 00a880f8 */
                    /* catch() { ... } // from try @ 00a87700 with catch @ 00a880fc */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a87b04 with catch @ 00a88100 */
  __stack_chk_fail();
}


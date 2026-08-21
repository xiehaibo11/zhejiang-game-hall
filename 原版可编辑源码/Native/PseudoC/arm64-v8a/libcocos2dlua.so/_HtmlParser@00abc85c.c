
/* fairygui::HtmlParser::~HtmlParser() */

void __thiscall fairygui::HtmlParser::~HtmlParser(HtmlParser *this)

{
  byte bVar1;
  HtmlParser HVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
                    /* try { // try from 00abc87c to 00bbc8c7 has its CatchHandler @ 00abc87c
                       catch() { ... } // from try @ 00abc87c with catch @ 00abc87c
                       catch() { ... } // from try @ 00abc8cc with catch @ 00abc87c */
  *(undefined ***)this = &PTR__HtmlParser_016aa9f8;
  if (((byte)this[0xb0] & 1) == 0) {
    HVar2 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0xc0));
    HVar2 = this[0x48];
  }
  if (((byte)HVar2 & 1) == 0) {
    pvVar3 = *(void **)(this + 0x28);
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    pvVar3 = *(void **)(this + 0x28);
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar3;
    operator_delete(pvVar3);
  }
  pbVar6 = *(byte **)(this + 0x10);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x18);
    pbVar4 = pbVar6;
    if (pbVar5 != pbVar6) {
      bVar1 = pbVar5[-0x58];
      pbVar4 = pbVar5 + -0x58;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -0x48));
        }
                    /* try { // try from 00abc8c8 to 00bbc8cb has its CatchHandler @ 00abc900 */
        if (pbVar6 == pbVar4) break;
                    /* try { // try from 00abc8cc to 00bbc913 has its CatchHandler @ 00abc87c */
        bVar1 = pbVar4[-0x58];
        pbVar5 = pbVar4;
        pbVar4 = pbVar4 + -0x58;
      }
      pbVar4 = *(byte **)(this + 0x10);
    }
    *(byte **)(this + 0x18) = pbVar6;
    operator_delete(pbVar4);
    return;
  }
                    /* try { // try from 00abc914 to 00bbca5b has its CatchHandler @ 00abc914
                       catch() { ... } // from try @ 00abc914 with catch @ 00abc914
                       catch() { ... } // from try @ 00abcadc with catch @ 00abc914 */
  return;
}


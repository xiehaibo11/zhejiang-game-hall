
/* fairygui::GComboBox::~GComboBox() */

void __thiscall fairygui::GComboBox::~GComboBox(GComboBox *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* try { // try from 00a6e414 to 00b6e48f has its CatchHandler @ 00a6e414
                       catch() { ... } // from try @ 00a6e414 with catch @ 00a6e414
                       catch() { ... } // from try @ 00a6e71c with catch @ 00a6e414
                       catch() { ... } // from try @ 00a6e7f4 with catch @ 00a6e414
                       catch() { ... } // from try @ 00a6e8f8 with catch @ 00a6e414 */
  *(undefined ***)this = &PTR__GComboBox_016a4ff8;
  if (*(Ref **)(this + 0x288) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x288));
  }
  pbVar4 = *(byte **)(this + 0x2e0);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x2e8);
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 0x2e0);
    }
    *(byte **)(this + 0x2e8) = pbVar4;
    operator_delete(pbVar2);
  }
  pbVar4 = *(byte **)(this + 0x2c8);
                    /* try { // try from 00a6e490 to 00b6e4a7 has its CatchHandler @ 00a6e9a4 */
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x2d0);
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
                    /* try { // try from 00a6e4b4 to 00b6e4cb has its CatchHandler @ 00a6e97c */
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 0x2c8);
    }
                    /* try { // try from 00a6e4d8 to 00b6e4ef has its CatchHandler @ 00a6e928 */
    *(byte **)(this + 0x2d0) = pbVar4;
    operator_delete(pbVar2);
  }
  pbVar4 = *(byte **)(this + 0x2b0);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x2b8);
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
                    /* try { // try from 00a6e4f4 to 00b6e50b has its CatchHandler @ 00a6e910 */
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
                    /* try { // try from 00a6e514 to 00b6e543 has its CatchHandler @ 00a6e90c */
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 0x2b0);
    }
    *(byte **)(this + 0x2b8) = pbVar4;
    operator_delete(pbVar2);
  }
  GComponent::~GComponent((GComponent *)this);
  return;
}


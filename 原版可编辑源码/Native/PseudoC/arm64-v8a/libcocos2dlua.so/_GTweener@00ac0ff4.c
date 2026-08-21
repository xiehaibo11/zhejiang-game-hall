
/* fairygui::GTweener::~GTweener() */

void __thiscall fairygui::GTweener::~GTweener(GTweener *this)

{
  GTweener *pGVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00ac0e14 with catch @ 00ac0ff4 */
                    /* catch() { ... } // from try @ 00ac0df8 with catch @ 00ac0ff8 */
                    /* catch() { ... } // from try @ 00ac06f0 with catch @ 00ac0ffc
                       catch() { ... } // from try @ 00ac0e78 with catch @ 00ac0ffc */
                    /* catch() { ... } // from try @ 00ac06d4 with catch @ 00ac1000 */
  pGVar1 = *(GTweener **)(this + 0x1a0);
                    /* try { // try from 00ac1014 to 00bc105f has its CatchHandler @ 00ac1014
                       catch() { ... } // from try @ 00ac1014 with catch @ 00ac1014
                       catch() { ... } // from try @ 00ac1064 with catch @ 00ac1014 */
  *(undefined ***)this = &PTR__GTweener_016aab40;
  if (this + 0x180 == pGVar1) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x20);
LAB_00ac103c:
    (*pcVar2)();
  }
  else if (pGVar1 != (GTweener *)0x0) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x28);
    goto LAB_00ac103c;
  }
  pGVar1 = *(GTweener **)(this + 0x170);
  if (this + 0x150 == pGVar1) {
                    /* try { // try from 00ac1060 to 00bc1063 has its CatchHandler @ 00ac10b0 */
                    /* try { // try from 00ac1064 to 00bc10c3 has its CatchHandler @ 00ac1014 */
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x20);
LAB_00ac1068:
    (*pcVar2)();
  }
  else if (pGVar1 != (GTweener *)0x0) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x28);
    goto LAB_00ac1068;
  }
  pGVar1 = *(GTweener **)(this + 0x140);
  if (this + 0x120 == pGVar1) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x20);
LAB_00ac1094:
    (*pcVar2)();
  }
  else if (pGVar1 != (GTweener *)0x0) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x28);
    goto LAB_00ac1094;
  }
  pGVar1 = *(GTweener **)(this + 0x110);
  if (this + 0xf0 == pGVar1) {
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x20);
  }
  else {
    if (pGVar1 == (GTweener *)0x0) goto LAB_00ac10c4;
                    /* catch() { ... } // from try @ 00ac1060 with catch @ 00ac10b0 */
    pcVar2 = *(code **)(*(long *)pGVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00ac10c4:
                    /* try { // try from 00ac10c4 to 00bc1357 has its CatchHandler @ 00ac10c4
                       catch() { ... } // from try @ 00ac10c4 with catch @ 00ac10c4
                       catch() { ... } // from try @ 00ac13d8 with catch @ 00ac10c4 */
  cocos2d::Value::~Value((Value *)(this + 200));
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}


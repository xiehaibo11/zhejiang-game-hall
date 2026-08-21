
/* cocos2d::network::Uri::clear() */

void __thiscall cocos2d::network::Uri::clear(Uri *this)

{
  long lVar1;
  Uri UVar2;
  long lVar3;
  long lVar4;
  
  *(undefined2 *)this = 0;
  if (((byte)this[8] & 1) == 0) {
    *(undefined2 *)(this + 8) = 0;
    UVar2 = this[0x20];
  }
  else {
                    /* try { // try from 009f06d8 to 00af06e3 has its CatchHandler @ 009f0864 */
    **(undefined1 **)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 009f06e4 to 00af0717 has its CatchHandler @ 009f0894 */
    UVar2 = this[0x20];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0x20) = 0;
    UVar2 = this[0x38];
  }
  else {
    **(undefined1 **)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    UVar2 = this[0x38];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0x38) = 0;
    UVar2 = this[0x50];
  }
  else {
    **(undefined1 **)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
                    /* try { // try from 009f06ac to 00af06c3 has its CatchHandler @ 009f0884 */
    UVar2 = this[0x50];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0x50) = 0;
    UVar2 = this[0x68];
  }
  else {
    **(undefined1 **)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    UVar2 = this[0x68];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0x68) = 0;
  }
  else {
                    /* try { // try from 009f06cc to 00af06d7 has its CatchHandler @ 009f0868 */
    **(undefined1 **)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  this[0x80] = (Uri)0x0;
  *(undefined2 *)(this + 0x82) = 0;
  if (((byte)this[0x88] & 1) == 0) {
    *(undefined2 *)(this + 0x88) = 0;
                    /* try { // try from 009f0728 to 00af0747 has its CatchHandler @ 009f086c */
    UVar2 = this[0xa0];
  }
  else {
    **(undefined1 **)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    UVar2 = this[0xa0];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0xa0) = 0;
    UVar2 = this[0xb8];
  }
  else {
    **(undefined1 **)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    UVar2 = this[0xb8];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0xb8) = 0;
    UVar2 = this[0xd0];
  }
  else {
    **(undefined1 **)(this + 200) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    UVar2 = this[0xd0];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0xd0) = 0;
    UVar2 = this[0xe8];
  }
  else {
    **(undefined1 **)(this + 0xe0) = 0;
                    /* try { // try from 009f0760 to 00af079b has its CatchHandler @ 009f0894 */
    *(undefined8 *)(this + 0xd8) = 0;
    UVar2 = this[0xe8];
  }
  if (((byte)UVar2 & 1) == 0) {
    *(undefined2 *)(this + 0xe8) = 0;
  }
  else {
    **(undefined1 **)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
  }
  lVar1 = *(long *)(this + 0x100);
  lVar4 = *(long *)(this + 0x108);
  while (lVar3 = lVar4, lVar3 != lVar1) {
    if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -8));
    }
                    /* try { // try from 009f07d4 to 00af0817 has its CatchHandler @ 009f086c */
    lVar4 = lVar3 + -0x30;
    if ((*(byte *)(lVar3 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x20));
    }
  }
  *(long *)(this + 0x108) = lVar1;
  return;
}


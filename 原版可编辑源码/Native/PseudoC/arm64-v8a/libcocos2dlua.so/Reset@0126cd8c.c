
/* CProfileNode::Reset() */

void __thiscall CProfileNode::Reset(CProfileNode *this)

{
  do {
    *(undefined8 *)(this + 8) = 0;
    if (*(CProfileNode **)(this + 0x28) != (CProfileNode *)0x0) {
      Reset(*(CProfileNode **)(this + 0x28));
    }
    this = *(CProfileNode **)(this + 0x30);
  } while (this != (CProfileNode *)0x0);
  return;
}


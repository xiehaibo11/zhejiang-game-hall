
/* CProfileIterator::CProfileIterator(CProfileNode*) */

void __thiscall CProfileIterator::CProfileIterator(CProfileIterator *this,CProfileNode *param_1)

{
  *(CProfileNode **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x28);
  return;
}


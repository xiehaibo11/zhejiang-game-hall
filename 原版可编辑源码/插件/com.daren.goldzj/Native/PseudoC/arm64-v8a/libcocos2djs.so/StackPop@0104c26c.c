
/* v8::internal::JsonStringifier::StackPop() */

void __thiscall v8::internal::JsonStringifier::StackPop(JsonStringifier *this)

{
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + -0x10;
  return;
}


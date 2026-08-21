
/* universe::Example::~Example() */

void __thiscall universe::Example::~Example(Example *this)

{
  ~Example(this);
  operator_delete(this);
  return;
}


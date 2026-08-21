
/* se::Object::~Object() */

void __thiscall se::Object::~Object(Object *this)

{
  ~Object(this);
  operator_delete(this);
  return;
}


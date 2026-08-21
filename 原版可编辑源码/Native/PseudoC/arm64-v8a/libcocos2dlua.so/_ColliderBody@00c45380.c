
/* cocostudio::ColliderBody::~ColliderBody() */

void __thiscall cocostudio::ColliderBody::~ColliderBody(ColliderBody *this)

{
  ~ColliderBody(this);
  operator_delete(this);
  return;
}


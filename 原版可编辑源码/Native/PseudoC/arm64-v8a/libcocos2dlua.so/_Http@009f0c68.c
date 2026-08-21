
/* universe::Http::~Http() */

void __thiscall universe::Http::~Http(Http *this)

{
  ~Http(this);
  operator_delete(this);
  return;
}


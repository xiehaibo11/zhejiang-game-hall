
/* v8::platform::DefaultPlatform::~DefaultPlatform() */

void __thiscall v8::platform::DefaultPlatform::~DefaultPlatform(DefaultPlatform *this)

{
  ~DefaultPlatform(this);
  operator_delete(this);
  return;
}



/* v8::Isolate::Allocate() */

void v8::Isolate::Allocate(void)

{
  internal::Isolate::New(1);
  return;
}


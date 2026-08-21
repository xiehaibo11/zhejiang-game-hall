
/* v8::internal::Isolate::Iterate(v8::internal::RootVisitor*, char*) */

char * __thiscall v8::internal::Isolate::Iterate(Isolate *this,RootVisitor *param_1,char *param_2)

{
  Iterate(this,param_1,(ThreadLocalTop *)param_2);
  return param_2 + 0xc0;
}


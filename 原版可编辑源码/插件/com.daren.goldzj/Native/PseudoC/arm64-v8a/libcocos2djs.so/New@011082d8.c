
/* v8::internal::TemplateList::New(v8::internal::Isolate*, int) */

void v8::internal::TemplateList::New(Isolate *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)Factory::NewFixedArray((Factory *)param_1,param_2,0);
  *(undefined4 *)(*plVar1 + 7) = 0;
  return;
}


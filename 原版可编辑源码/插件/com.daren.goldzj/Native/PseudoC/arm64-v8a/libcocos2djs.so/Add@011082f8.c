
/* v8::internal::TemplateList::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::TemplateList>, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::TemplateList::Add(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = (*(int *)(*param_2 + 7) >> 1) + 1;
  plVar2 = (long *)FixedArray::SetAndGrow(param_1,param_2,iVar1,param_3);
  *(int *)(*plVar2 + 7) = iVar1 * 2;
  return;
}



/* v8::internal::DeoptimizationData::New(v8::internal::Isolate*, int, v8::internal::AllocationType)
    */

void v8::internal::DeoptimizationData::New(Factory *param_1,int param_2)

{
  Factory::NewFixedArray(param_1,param_2 * 3 + 9);
  return;
}


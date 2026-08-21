
/* v8::internal::Sweeper::MakeIterable(v8::internal::Page*) */

void __thiscall v8::internal::Sweeper::MakeIterable(Sweeper *this,Page *param_1)

{
  RawSweep(this,param_1,1,FLAG_verify_heap,1);
  return;
}


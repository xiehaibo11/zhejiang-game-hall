
/* v8::debug::GetNextRandomInt64(v8::Isolate*) */

void v8::debug::GetNextRandomInt64(Isolate *param_1)

{
  RandomNumberGenerator *this;
  
  this = (RandomNumberGenerator *)internal::Isolate::random_number_generator((Isolate *)param_1);
  base::RandomNumberGenerator::NextInt64(this);
  return;
}


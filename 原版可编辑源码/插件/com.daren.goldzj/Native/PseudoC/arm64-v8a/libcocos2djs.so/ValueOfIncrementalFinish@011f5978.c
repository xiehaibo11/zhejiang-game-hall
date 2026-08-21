
/* unibrow::Utf8::ValueOfIncrementalFinish(Utf8DfaDecoder::State*) */

undefined8 unibrow::Utf8::ValueOfIncrementalFinish(State *param_1)

{
  if (*param_1 == (State)0xc) {
    return 0;
  }
  *param_1 = (State)0xc;
  return 0xfffd;
}


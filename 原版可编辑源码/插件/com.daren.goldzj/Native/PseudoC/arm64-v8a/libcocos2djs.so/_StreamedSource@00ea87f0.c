
/* v8::ScriptCompiler::StreamedSource::~StreamedSource() */

void __thiscall v8::ScriptCompiler::StreamedSource::~StreamedSource(StreamedSource *this)

{
  ScriptStreamingData *this_00;
  
  this_00 = *(ScriptStreamingData **)this;
  *(undefined8 *)this = 0;
  if (this_00 != (ScriptStreamingData *)0x0) {
    internal::ScriptStreamingData::~ScriptStreamingData(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


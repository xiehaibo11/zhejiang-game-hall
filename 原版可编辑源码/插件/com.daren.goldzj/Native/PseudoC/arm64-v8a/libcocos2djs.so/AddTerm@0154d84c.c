
/* v8::internal::RegExpBuilder::AddTerm(v8::internal::RegExpTree*) */

void __thiscall v8::internal::RegExpBuilder::AddTerm(RegExpBuilder *this,RegExpTree *param_1)

{
  FlushText(this);
  BufferedZoneList<v8::internal::RegExpTree,2>::Add
            ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x20),param_1,*(Zone **)this);
  return;
}


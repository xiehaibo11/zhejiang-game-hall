
/* v8::internal::JsonStringifier::Stringify(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

long __thiscall
v8::internal::JsonStringifier::Stringify
          (JsonStringifier *this,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = InitializeReplacer(this,param_3);
  if ((uVar2 & 1) != 0) {
    if (((*param_4 & 1) == 0) || (lVar3 = *(long *)this, (int)*param_4 != *(int *)(lVar3 + 0xa0))) {
      uVar2 = InitializeGap(this,param_4);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = *(long *)this;
    }
    iVar1 = Serialize_<false>(this,param_2,0,lVar3 + 200);
    if (iVar1 == 1) {
      lVar3 = IncrementalStringBuilder::Finish((IncrementalStringBuilder *)(this + 8));
      return lVar3;
    }
    if (iVar1 == 0) {
      return *(long *)this + 0xa0;
    }
  }
  return 0;
}


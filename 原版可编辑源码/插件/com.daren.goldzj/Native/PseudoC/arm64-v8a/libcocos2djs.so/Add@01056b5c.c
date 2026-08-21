
/* v8::internal::RuntimeCallStats::Add(v8::internal::RuntimeCallStats*) */

void __thiscall
v8::internal::RuntimeCallStats::Add(RuntimeCallStats *this,RuntimeCallStats *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  lVar3 = -0x7068;
  do {
    *(long *)(this + lVar3 + 0x7090) =
         *(long *)(this + lVar3 + 0x7090) + *(long *)(param_1 + lVar3 + 0x7090);
    local_38 = *(undefined8 *)(param_1 + lVar3 + 0x7098);
    lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_38);
    lVar1 = lVar3 + 0x18;
    *(long *)(this + lVar3 + 0x7098) = *(long *)(this + lVar3 + 0x7098) + lVar2;
    lVar3 = lVar1;
  } while (lVar1 != 0);
  return;
}



/* v8::internal::Zone::Zone(v8::internal::AccountingAllocator*, char const*) */

void __thiscall v8::internal::Zone::Zone(Zone *this,AccountingAllocator *param_1,char *param_2)

{
  *(AccountingAllocator **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(char **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x38] = (Zone)0x0;
                    /* WARNING: Could not recover jumptable at 0x0125e39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))(param_1,this);
  return;
}


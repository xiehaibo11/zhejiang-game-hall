
/* v8::internal::RuntimeCallStats::RuntimeCallStats(v8::internal::RuntimeCallStats::ThreadType) */

void __thiscall
v8::internal::RuntimeCallStats::RuntimeCallStats(RuntimeCallStats *this,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (RuntimeCallStats)0x0;
  *(undefined4 *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  memset(this + 0x20,0,0x7068);
  lVar1 = 0;
  this = this + 0x28;
  do {
    puVar2 = (&PTR_s_GC_MC_INCREMENTAL_019be604_3_01caf998)[lVar1];
    lVar1 = lVar1 + 1;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined **)(this + -8) = puVar2;
    this = this + 0x18;
  } while (lVar1 != 0x4af);
  return;
}


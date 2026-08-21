
/* v8::internal::Zone::ReleaseMemory() */

void __thiscall v8::internal::Zone::ReleaseMemory(Zone *this)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(**(long **)(this + 0x20) + 0x28))(*(long **)(this + 0x20),this);
  lVar2 = *(long *)(this + 0x28);
  while (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    *(long *)(this + 8) = *(long *)(this + 8) - *(long *)(lVar2 + 0x10);
    (**(code **)(**(long **)(this + 0x20) + 0x18))();
    lVar2 = lVar1;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0125e644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x20))(*(long **)(this + 0x20),this);
  return;
}


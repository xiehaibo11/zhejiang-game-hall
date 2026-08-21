
/* v8::internal::Zone::AsanNew(unsigned long) */

long __thiscall v8::internal::Zone::AsanNew(Zone *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (this[0x38] == (Zone)0x0) {
    lVar1 = *(long *)(this + 0x10);
    uVar2 = param_1 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this + 0x18) - lVar1) < uVar2) {
      lVar1 = NewExpand(this,uVar2);
    }
    else {
      *(ulong *)(this + 0x10) = lVar1 + uVar2;
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!sealed_");
}


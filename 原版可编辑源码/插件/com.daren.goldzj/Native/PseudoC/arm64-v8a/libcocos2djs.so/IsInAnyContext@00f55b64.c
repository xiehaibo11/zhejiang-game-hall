
/* v8::internal::Isolate::IsInAnyContext(v8::internal::Object, unsigned int) */

undefined8 __thiscall v8::internal::Isolate::IsInAnyContext(Isolate *this,int param_2,int param_3)

{
  uint *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x8e38);
  if ((uVar2 & 1) == 0) goto LAB_00f55b88;
  do {
    if ((int)uVar2 == *(int *)(this + 0xa0)) {
      return 0;
    }
LAB_00f55b88:
    do {
      if (*(int *)((long)(param_3 << 2) + 7 + uVar2) == param_2) {
        return 1;
      }
      puVar1 = (uint *)(uVar2 + 0x41f);
      uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) == 0);
  } while( true );
}


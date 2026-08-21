
/* v8::internal::compiler::MapRef::GetPropertyDetails(v8::internal::InternalIndex) const */

int __thiscall v8::internal::compiler::MapRef::GetPropertyDetails(MapRef *this,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar3 = *(ulong *)**(undefined8 **)this;
    iVar2 = *(int *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) +
                    (param_2 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U)) >> 1;
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    plVar6 = (long *)(*(long *)(lVar1 + 0x70) + 0x20);
    plVar4 = (long *)*plVar6;
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)(*(long *)(lVar1 + 0x70) + 0x20);
      do {
        while( true ) {
          plVar5 = plVar4;
          if ((int)plVar5[4] <= (int)param_2) break;
          plVar4 = (long *)*plVar5;
          plVar6 = plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_0172350c;
        }
        if ((int)param_2 <= (int)plVar5[4]) break;
        plVar6 = plVar5 + 1;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
LAB_0172350c:
    iVar2 = *(int *)(*plVar6 + 0x38);
  }
  return iVar2;
}


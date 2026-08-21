
/* v8::internal::compiler::MapRef::IsUnboxedDoubleField(v8::internal::InternalIndex) const */

bool __thiscall v8::internal::compiler::MapRef::IsUnboxedDoubleField(MapRef *this,long param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  Representation local_8 [8];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar5 = *(ulong *)**(undefined8 **)this;
    uVar1 = (uint)(*(int *)((uVar5 & 0xffffffff00000000) +
                            (param_2 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U) +
                           (ulong)*(uint *)(uVar5 + 0x17)) >> 1) >> 6 & 7;
    local_8[0] = SUB41(uVar1,0);
    if (4 < uVar1) {
      uVar4 = Representation::Mnemonic(local_8);
      PrintF("%s\n",uVar4);
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    bVar2 = false;
  }
  else {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    plVar8 = (long *)(*(long *)(lVar3 + 0x70) + 0x20);
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)(*(long *)(lVar3 + 0x70) + 0x20);
      do {
        while( true ) {
          plVar7 = plVar6;
          if ((int)plVar7[4] <= (int)param_2) break;
          plVar6 = (long *)*plVar7;
          plVar8 = plVar7;
          if ((long *)*plVar7 == (long *)0x0) goto LAB_01723ce4;
        }
        if ((int)param_2 <= (int)plVar7[4]) break;
        plVar8 = plVar7 + 1;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
LAB_01723ce4:
    bVar2 = *(char *)(*plVar8 + 0x58) != '\0';
  }
  return bVar2;
}


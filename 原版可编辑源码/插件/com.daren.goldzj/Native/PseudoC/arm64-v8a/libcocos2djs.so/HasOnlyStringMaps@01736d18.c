
/* v8::internal::compiler::ElementAccessFeedback::HasOnlyStringMaps(v8::internal::compiler::JSHeapBroker*)
   const */

undefined8 __thiscall
v8::internal::compiler::ElementAccessFeedback::HasOnlyStringMaps
          (ElementAccessFeedback *this,JSHeapBroker *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  short sVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 *local_50 [2];
  
  plVar1 = *(long **)(this + 0x10);
  plVar3 = *(long **)(this + 0x18);
  do {
    if (plVar1 == plVar3) {
      return 1;
    }
    puVar4 = (undefined8 *)plVar1[1];
    for (puVar2 = (undefined8 *)*plVar1; puVar2 != puVar4; puVar2 = puVar2 + 1) {
      ObjectRef::ObjectRef((ObjectRef *)local_50,param_1,*puVar2,0);
      puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)local_50);
      if (*(int *)(puVar6 + 1) == 2) {
        uVar8 = *(ulong *)*puVar6;
        if ((uVar8 & 1) == 0) goto LAB_01736e48;
        sVar5 = *(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1));
      }
      else {
        if (*(int *)(puVar6 + 1) == 0) goto LAB_01736e48;
        sVar5 = *(short *)(puVar6[2] + 0x18);
      }
      if (sVar5 != 0xa2) {
LAB_01736e48:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      if (*(int *)(local_50[0] + 1) == 2) {
        puVar9 = (ushort *)(*(long *)*local_50[0] + 7);
      }
      else {
        lVar7 = ObjectRef::data((ObjectRef *)local_50);
        if (*(int *)(lVar7 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
        }
        if (*(short *)(*(long *)(lVar7 + 0x10) + 0x18) != 0xa2) goto LAB_01736e48;
        puVar9 = (ushort *)(lVar7 + 0x18);
      }
      if (0x3f < *puVar9) {
        return 0;
      }
    }
    plVar1 = plVar1 + 4;
  } while( true );
}


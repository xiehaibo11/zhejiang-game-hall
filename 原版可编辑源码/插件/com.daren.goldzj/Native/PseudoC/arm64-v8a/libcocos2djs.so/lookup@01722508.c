
/* v8::internal::compiler::ScriptContextTableRef::lookup(v8::internal::compiler::NameRef const&)
   const */

void v8::internal::compiler::ScriptContextTableRef::lookup(NameRef *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  Isolate *pIVar3;
  ObjectRef *in_x1;
  undefined8 *in_x8;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  char local_48;
  
  puVar2 = (undefined8 *)ObjectRef::data(in_x1);
  if (*(int *)(puVar2 + 1) == 0) {
LAB_017225f8:
    in_x8[1] = 0;
    *in_x8 = 0;
    in_x8[3] = 0;
    in_x8[2] = 0;
    return;
  }
  if (*(int *)(puVar2 + 1) == 2) {
    uVar4 = *(ulong *)*puVar2;
    if ((uVar4 & 1) == 0) goto LAB_017225f8;
    uVar1 = *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
  }
  else {
    uVar1 = *(ushort *)(puVar2[2] + 0x18);
  }
  if (0x3f < uVar1) goto LAB_017225f8;
  puVar6 = (ulong *)**(undefined8 **)param_1;
  uVar5 = **(undefined8 **)(param_1 + 8);
  uVar4 = *puVar6;
  puVar2 = (undefined8 *)ObjectRef::AsString(in_x1);
  uVar4 = ScriptContextTable::Lookup(uVar5,uVar4,*(undefined8 *)*puVar2,&local_50);
  if ((uVar4 & 1) == 0) goto LAB_017225f8;
  uVar4 = *puVar6;
  pIVar3 = (Isolate *)**(undefined8 **)(param_1 + 8);
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)(local_50 * 4 + 4) + 7);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar4;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_68,*(undefined8 *)(param_1 + 8),puVar6,0);
  puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_68);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar4 = *(ulong *)*puVar2;
    if ((uVar4 & 1) == 0) goto LAB_017226d0;
    uVar1 = *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
  }
  else {
    if (*(int *)(puVar2 + 1) == 0) goto LAB_017226d0;
    uVar1 = *(ushort *)(puVar2[2] + 0x18);
  }
  if (uVar1 - 0x88 < 10) {
    local_58 = CONCAT31(local_58._1_3_,local_48 == '\x01');
    *(undefined1 *)in_x8 = 1;
    in_x8[2] = uStack_60;
    in_x8[1] = local_68;
    in_x8[3] = CONCAT44(local_4c,local_58);
    return;
  }
LAB_017226d0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsContext()");
}


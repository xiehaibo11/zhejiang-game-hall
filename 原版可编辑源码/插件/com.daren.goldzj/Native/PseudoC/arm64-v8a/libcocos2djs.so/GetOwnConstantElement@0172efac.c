
/* v8::internal::compiler::ObjectRef::GetOwnConstantElement(unsigned int,
   v8::internal::compiler::SerializationPolicy) const */

void v8::internal::compiler::ObjectRef::GetOwnConstantElement
               (undefined1 *param_1,ObjectRef *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  JSObjectData *pJVar7;
  long lVar8;
  StringData *pSVar9;
  ulong uVar10;
  Factory *this;
  ulong *puVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_94;
  undefined8 local_8c;
  Factory *local_80;
  ulong *local_78;
  undefined8 local_70;
  ulong *puStack_68;
  undefined8 local_60;
  ulong *puStack_58;
  ulong local_50;
  undefined8 uStack_48;
  
  iVar2 = *(int *)(*(long *)param_2 + 8);
  puVar4 = (undefined8 *)data(param_2);
  if (*(int *)(puVar4 + 1) == 0) {
LAB_0172f000:
    bVar1 = false;
  }
  else {
    if (*(int *)(puVar4 + 1) == 2) {
      uVar10 = *(ulong *)*puVar4;
      if ((uVar10 & 1) == 0) goto LAB_0172f000;
      uVar3 = *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1));
    }
    else {
      uVar3 = *(ushort *)(puVar4[2] + 0x18);
    }
    bVar1 = 0xa9 < uVar3;
  }
  if (iVar2 == 2) {
    if (!bVar1) {
      puVar4 = (undefined8 *)data(param_2);
      if (*(int *)(puVar4 + 1) == 0) goto LAB_0172f284;
      if (*(int *)(puVar4 + 1) == 2) {
        uVar10 = *(ulong *)*puVar4;
        if ((uVar10 & 1) == 0) goto LAB_0172f284;
        uVar3 = *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1));
      }
      else {
        uVar3 = *(ushort *)(puVar4[2] + 0x18);
      }
      if (0x3f < uVar3) goto LAB_0172f284;
    }
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar10 = (ulong)param_3;
    puVar11 = (ulong *)**(undefined8 **)param_2;
    this = (Factory *)*puVar4;
    if (((*puVar11 & 1) == 0) ||
       (puStack_58 = puVar11, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*puVar11 - 1)) < 0xa9
       )) {
      puStack_58 = (ulong *)LookupIterator::GetRootForNonJSReceiver(this,puVar11,uVar10);
    }
    local_78 = (ulong *)0x0;
    local_70 = 0;
    local_60 = 0;
    local_98 = 1;
    local_8c = 0xc000000000;
    uStack_48 = 0xffffffffffffffff;
    local_80 = this;
    puVar5 = local_78;
    puStack_68 = puVar11;
    local_50 = uVar10;
    if (((param_3 == 0xffffffff) &&
        (*(short *)((*puStack_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_58 - 1)) !=
         0x41b)) &&
       (puVar5 = (ulong *)Factory::SizeToString(this,0xffffffff,true),
       (*(ushort *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) & 0xffe0) ==
       0x20)) {
      puVar5 = (ulong *)StringTable::LookupString(this);
    }
    local_78 = puVar5;
    LookupIterator::Start<true>((LookupIterator *)&local_98);
    if ((local_94 == 6) && (((local_8c._4_4_ ^ 0xffffffff) & 0x28) == 0)) {
      uVar6 = LookupIterator::GetDataValue();
      ObjectRef((ObjectRef *)&local_a8,puVar4,uVar6,0);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x10) = uStack_a0;
      *(undefined8 *)(param_1 + 8) = local_a8;
      return;
    }
    goto LAB_0172f284;
  }
  if (bVar1) {
    pJVar7 = (JSObjectData *)data(param_2);
    if (*(int *)(pJVar7 + 8) != 1) {
LAB_0172f2a4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(pJVar7 + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    lVar8 = JSObjectData::GetOwnConstantElement(pJVar7,*(undefined8 *)(param_2 + 8),param_3,param_4)
    ;
  }
  else {
    puVar4 = (undefined8 *)data(param_2);
    if (*(int *)(puVar4 + 1) == 0) goto LAB_0172f284;
    if (*(int *)(puVar4 + 1) == 2) {
      uVar10 = *(ulong *)*puVar4;
      if ((uVar10 & 1) == 0) goto LAB_0172f284;
      uVar3 = *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1));
    }
    else {
      uVar3 = *(ushort *)(puVar4[2] + 0x18);
    }
    if (0x3f < uVar3) goto LAB_0172f284;
    pSVar9 = (StringData *)data(param_2);
    if (*(int *)(pSVar9 + 8) != 1) goto LAB_0172f2a4;
    if (0x3f < *(ushort *)(*(long *)(pSVar9 + 0x10) + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsString()");
    }
    lVar8 = StringData::GetCharAsString(pSVar9,*(undefined8 *)(param_2 + 8),param_3,param_4);
  }
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 8);
    *param_1 = 1;
    *(long *)(param_1 + 8) = lVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    return;
  }
LAB_0172f284:
  *param_1 = 0;
  param_1[8] = 0;
  return;
}


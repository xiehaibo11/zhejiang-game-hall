
/* v8::internal::Deserializer::DeserializeDeferredObjects() */

void __thiscall v8::internal::Deserializer::DeserializeDeferredObjects(Deserializer *this)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = *(int *)(this + 0x7c);
  lVar6 = *(long *)(this + 0x70);
  iVar7 = iVar3 + 1;
  *(int *)(this + 0x7c) = iVar7;
  bVar2 = *(byte *)(lVar6 + iVar3);
  do {
    if (bVar2 == 0x1a) {
      return;
    }
    uVar8 = (uint)bVar2;
    if (uVar8 - 0x17 < 3) {
      *(uint *)(this + 0x208) = uVar8 - 0x16;
    }
    else {
      uVar8 = uVar8 & 7;
      lVar6 = GetBackReferencedObject(this,uVar8);
      puVar1 = (uint *)(*(long *)(this + 0x70) + (long)*(int *)(this + 0x7c));
      uVar4 = *puVar1;
      iVar7 = ((byte)*puVar1 & 3) + 1;
      *(int *)(this + 0x7c) = iVar7 + *(int *)(this + 0x7c);
      bVar5 = ReadData<v8::internal::CompressedMaybeObjectSlot>
                        (this,lVar6 + 3,
                         lVar6 + -1 +
                         (long)(int)(0xffffffffU >> (ulong)(iVar7 * -8 & 0x1f) & uVar4 & 0xfffffffc)
                         ,uVar8);
      if (!bVar5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","filled");
      }
      PostProcessNewObject(this,lVar6,uVar8);
      lVar6 = *(long *)(this + 0x70);
      iVar7 = *(int *)(this + 0x7c);
    }
    *(int *)(this + 0x7c) = iVar7 + 1;
    bVar2 = *(byte *)(lVar6 + iVar7);
    iVar7 = iVar7 + 1;
  } while( true );
}


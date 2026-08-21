
/* v8::internal::RegExpParser::CreateCaptureNameMap() */

ulong * __thiscall v8::internal::RegExpParser::CreateCaptureNameMap(RegExpParser *this)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  Factory *this_00;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  
  puVar4 = *(undefined8 **)(this + 0x20);
  if ((puVar4 == (undefined8 *)0x0) || (puVar4[3] == 0)) {
    puVar2 = (ulong *)0x0;
  }
  else {
    local_90 = *(long *)(this + 8);
    std::__ndk1::
    vector<v8::internal::RegExpCapture*,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>::
    vector<std::__ndk1::__tree_const_iterator<v8::internal::RegExpCapture*,std::__ndk1::__tree_node<v8::internal::RegExpCapture*,void*>*,long>>
              (&local_80,*puVar4,puVar4 + 1,&local_90,0);
    FUN_0154de68(local_80,local_78);
    this_00 = *(Factory **)this;
    puVar2 = (ulong *)Factory::NewFixedArray
                                (this_00,(uint)((ulong)(local_78 - local_80) >> 2) & 0xfffffffe,0);
    if (local_80 != local_78) {
      lVar10 = 0;
      do {
        plVar5 = *(long **)(*(long *)(local_80 + lVar10) + 0x18);
        local_90 = *plVar5;
        lStack_88 = plVar5[1] - local_90 >> 1;
        puVar3 = (ulong *)Factory::InternalizeString<unsigned_short>
                                    (this_00,(Vector *)&local_90,false);
        uVar8 = *puVar2;
        uVar7 = *puVar3;
        iVar9 = (int)lVar10;
        puVar1 = (undefined4 *)(uVar8 + (long)(iVar9 + 7));
        *puVar1 = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar8,puVar1,uVar7);
            uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar7);
          }
        }
        plVar5 = (long *)(local_80 + lVar10);
        lVar10 = lVar10 + 8;
        *(int *)(*puVar2 + (long)(iVar9 + 4) + 7) = *(int *)(*plVar5 + 0x10) << 1;
      } while (local_78 - local_80 != lVar10);
    }
  }
  return puVar2;
}


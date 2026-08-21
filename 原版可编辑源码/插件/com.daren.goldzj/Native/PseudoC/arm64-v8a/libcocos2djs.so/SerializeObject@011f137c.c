
/* v8::internal::StartupSerializer::SerializeObject(v8::internal::HeapObject) */

void __thiscall
v8::internal::StartupSerializer::SerializeObject(StartupSerializer *this,undefined **param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined **local_80;
  StartupSerializer *pSStack_78;
  undefined **local_70;
  StartupSerializer *pSStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = Serializer::SerializeHotObject();
  if ((uVar4 & 1) != 0) goto LAB_011f1644;
  lVar6 = **(long **)(this + 0x90);
  uVar2 = (int)(*(long **)(this + 0x90))[1] - 1;
  uVar4 = (ulong)(uVar2 & (uint)param_2);
  lVar8 = lVar6 + uVar4 * 0x18;
  if ((*(char *)(lVar8 + 0x10) != '\0') && (*(undefined ***)(lVar6 + uVar4 * 0x18) != param_2)) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar2);
      if (*(char *)(lVar6 + uVar4 * 0x18 + 0x10) == '\0') break;
    } while (*(undefined ***)(lVar6 + uVar4 * 0x18) != param_2);
    lVar8 = lVar6 + uVar4 * 0x18;
  }
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    uVar2 = *(uint *)(lVar8 + 8);
    if (0x1f1 < (uVar2 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (((*(ulong *)(this + (((ulong)uVar2 & 0xffff) >> 3 & 0x1ff8) + 0x1d0) >>
          ((ulong)uVar2 & 0x3f) & 1) != 0) &&
       (uVar4 = Serializer::SerializeRoot((Serializer *)this,param_2), (uVar4 & 1) != 0))
    goto LAB_011f1644;
  }
  uVar4 = ReadOnlySerializer::SerializeUsingReadOnlyObjectCache
                    (*(ReadOnlySerializer **)(this + 0x240),this + 0x50,param_2);
  if (((uVar4 & 1) != 0) ||
     (uVar4 = Serializer::SerializeBackReference((Serializer *)this,param_2), (uVar4 & 1) != 0))
  goto LAB_011f1644;
  uVar9 = (ulong)param_2 & 0xffffffff00000000;
  uVar4 = uVar9 | 7;
  if ((*(short *)(uVar4 + *(uint *)((long)param_2 + -1)) == 0x65) &&
     (local_80 = param_2, uVar5 = Script::IsUserJavaScript((Script *)&local_80), (uVar5 & 1) != 0))
  {
    uVar4 = *(ulong *)(*(long *)(this + 0x68) + 0xc08);
    *(int *)((long)param_2 + 0x13) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar9 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      lVar6 = (long)param_2 + 0x13;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(param_2,lVar6,uVar4);
        uVar9 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar9 & 0x18) != 0) {
        bVar1 = *(byte *)(((ulong)param_2 & 0xfffffffffffc0000) + 8);
        ppuVar7 = param_2;
joined_r0x011f1604:
        if ((bVar1 & 0x18) == 0) {
          Heap_GenerationalBarrierSlow(ppuVar7,lVar6,uVar4);
        }
      }
    }
  }
  else if (*(short *)(uVar4 + *(uint *)((long)param_2 + -1)) == 0xa6) {
    ppuVar7 = (undefined **)(uVar9 | *(uint *)((long)param_2 + 0xf));
    if (*(short *)(uVar4 + *(uint *)((long)ppuVar7 + -1)) == 0x5b) {
      ppuVar7 = (undefined **)(uVar9 | *(uint *)((long)ppuVar7 + 0xb));
    }
    if (((((((ulong)ppuVar7 & 1) != 0) &&
          ((int)ppuVar7 == *(int *)(((ulong)ppuVar7 & 0xffffffff00000000) + 0xa0))) ||
         (local_80 = ppuVar7, uVar5 = Script::IsUserJavaScript((Script *)&local_80),
         (uVar5 & 1) == 0)) ||
        (((*(uint *)((long)param_2 + 3) & 1) != 0 &&
         (*(short *)(uVar4 + *(uint *)((uVar9 | *(uint *)((long)param_2 + 3)) - 1)) == 0x57)))) &&
       (((*(uint *)((long)param_2 + 3) & 1) != 0 &&
        (*(ushort *)(uVar4 + *(uint *)((uVar9 | *(uint *)((long)param_2 + 3)) - 1)) - 0x95 < 2)))) {
      uVar2 = *(uint *)((long)param_2 + 3);
      ppuVar7 = (undefined **)(uVar9 | uVar2);
      uVar4 = *(ulong *)(*(long *)(this + 0x68) + 200);
      *(int *)((long)ppuVar7 + 3) = (int)uVar4;
      if ((uVar4 & 1) != 0) {
        uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
        lVar6 = (long)ppuVar7 + 3;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(ppuVar7,lVar6,uVar4);
          uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar5 & 0x18) != 0) {
          bVar1 = *(byte *)((uVar9 | (ulong)uVar2 & 0xfffffffffffc0000) + 8);
          goto joined_r0x011f1604;
        }
      }
    }
  }
  RootsSerializer::CheckRehashability((RootsSerializer *)this,param_2);
  local_60 = 0;
  local_80 = &PTR__ObjectVisitor_01cbba18;
  pSStack_78 = this;
  local_70 = param_2;
  pSStack_68 = this + 0x50;
  Serializer::ObjectSerializer::Serialize((ObjectSerializer *)&local_80);
LAB_011f1644:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


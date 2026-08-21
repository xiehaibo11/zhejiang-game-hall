
/* v8::internal::compiler::FrameElider::MarkBlocks() */

void __thiscall v8::internal::compiler::FrameElider::MarkBlocks(FrameElider *this)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  
  plVar3 = (long *)**(long **)(*(long *)this + 0x10);
  plVar4 = (long *)(*(long **)(*(long *)this + 0x10))[1];
  do {
    if (plVar3 == plVar4) {
      return;
    }
    lVar6 = *plVar3;
    if (*(char *)(lVar6 + 0x7c) == '\0') {
      lVar7 = (long)*(int *)(lVar6 + 0x70);
      if (*(int *)(lVar6 + 0x70) < *(int *)(lVar6 + 0x74)) {
        do {
          uVar1 = *(long *)(*(long *)this + 0xb0) + lVar7;
          puVar8 = *(uint **)(*(long *)(*(long *)(*(long *)this + 0x88) +
                                       (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
          if ((*(byte *)((long)puVar8 + 7) >> 6 & 1) != 0) {
LAB_016319a4:
            *(undefined1 *)(lVar6 + 0x7c) = 1;
            break;
          }
          uVar5 = *puVar8;
          uVar2 = uVar5 & 0x1ff;
          if ((((uVar2 == 0x16) || ((uVar5 >> 0xe & 7) - 3 < 2)) || (uVar2 == 0x1e)) ||
             (uVar2 == 0x18)) goto LAB_016319a4;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar6 + 0x74));
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


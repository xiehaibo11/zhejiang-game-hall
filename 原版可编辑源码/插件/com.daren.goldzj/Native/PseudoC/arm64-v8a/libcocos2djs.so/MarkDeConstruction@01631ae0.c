
/* v8::internal::compiler::FrameElider::MarkDeConstruction() */

void __thiscall v8::internal::compiler::FrameElider::MarkDeConstruction(FrameElider *this)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  puVar1 = (undefined8 *)**(undefined8 **)(*(long *)this + 0x10);
  puVar3 = (undefined8 *)(*(undefined8 **)(*(long *)this + 0x10))[1];
  do {
    if (puVar1 == puVar3) {
      return;
    }
    puVar6 = (undefined8 *)*puVar1;
    if (*(char *)((long)puVar6 + 0x7c) == '\0') {
      piVar4 = (int *)puVar6[1];
      for (piVar2 = (int *)*puVar6; piVar2 != piVar4; piVar2 = piVar2 + 1) {
        lVar7 = **(long **)(*(long *)this + 0x10);
        if ((ulong)((*(long **)(*(long *)this + 0x10))[1] - lVar7 >> 3) <= (ulong)(long)*piVar2)
        goto LAB_01631c28;
        lVar7 = *(long *)(lVar7 + (long)*piVar2 * 8);
        if (*(char *)(lVar7 + 0x7c) != '\0') {
          *(undefined1 *)(lVar7 + 0x7d) = 1;
        }
      }
    }
    else {
      if (puVar6[4] == puVar6[5]) {
        *(undefined1 *)((long)puVar6 + 0x7d) = 1;
      }
      for (piVar2 = (int *)*puVar6; piVar2 != (int *)puVar6[1]; piVar2 = piVar2 + 1) {
        lVar8 = *(long *)this;
        lVar7 = **(long **)(lVar8 + 0x10);
        if ((ulong)((*(long **)(lVar8 + 0x10))[1] - lVar7 >> 3) <= (ulong)(long)*piVar2) {
LAB_01631c28:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((*(char *)(*(long *)(lVar7 + (long)*piVar2 * 8) + 0x7c) == '\0') &&
           (((uVar9 = ((long)*(int *)((long)puVar6 + 0x74) + *(long *)(lVar8 + 0xb0)) - 1,
             uVar5 = **(uint **)(*(long *)(*(long *)(lVar8 + 0x88) +
                                          (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8),
             0x16 < (uVar5 & 0x1ff) || ((1 << (ulong)(uVar5 & 0x1f) & 0x600816U) == 0)) &&
            (1 < (uVar5 >> 0xe & 7) - 3)))) {
          *(undefined1 *)((long)puVar6 + 0x7e) = 1;
        }
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


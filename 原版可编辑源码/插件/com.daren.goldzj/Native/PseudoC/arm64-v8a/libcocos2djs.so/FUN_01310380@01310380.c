
void FUN_01310380(Schedule *param_1,long param_2,Node *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  Node *pNVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)param_3;
  uVar4 = (ulong)*(uint *)(lVar5 + 0x14);
  if (0 < (int)*(uint *)(lVar5 + 0x14)) {
    do {
      uVar4 = uVar4 - 1;
      lVar6 = param_2;
      if (*(short *)(lVar5 + 0x10) == 0x23) {
        lVar6 = *(long *)(*(long *)(param_2 + 0x80) + uVar4 * 8);
        param_4 = (int)((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40)) >> 3) - 1;
      }
      pNVar3 = param_3 + 0x20;
      if ((*(uint *)(param_3 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar3 = (Node *)(*(long *)(param_3 + 0x20) + 0x10);
      }
      uVar2 = param_4;
      do {
        if (-1 < (int)uVar2) {
          do {
            if (*(long *)(*(long *)(lVar6 + 0x40) + (ulong)uVar2 * 8) ==
                *(long *)(pNVar3 + uVar4 * 8)) goto LAB_013103c8;
            bVar1 = 0 < (int)uVar2;
            uVar2 = uVar2 - 1;
          } while (bVar1);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Node #%d:%s in B%d is not dominated by input@%d #%d:%s",
                   (ulong)(*(uint *)(param_3 + 0x14) & 0xffffff),*(undefined8 *)(lVar5 + 8),
                   (ulong)*(uint *)(param_2 + 4),uVar4,
                   (ulong)(*(uint *)((long)*(long **)(pNVar3 + uVar4 * 8) + 0x14) & 0xffffff),
                   *(undefined8 *)(**(long **)(pNVar3 + uVar4 * 8) + 8));
        }
        uVar2 = (int)((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40)) >> 3) - 1;
      } while (*(long *)(lVar6 + 0x38) != *(long *)(pNVar3 + uVar4 * 8));
LAB_013103c8:
    } while (0 < (long)uVar4);
  }
  if ((*(int *)(lVar5 + 0x1c) == 1) && (*(short *)(lVar5 + 0x10) != 0x16)) {
    pNVar3 = (Node *)v8::internal::compiler::NodeProperties::GetControlInput(param_3,0);
    lVar6 = v8::internal::compiler::Schedule::block(param_1,pNVar3);
    lVar5 = v8::internal::compiler::Schedule::block(param_1,param_3);
    while( true ) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Node #%d:%s in B%d is not dominated by control input #%d:%s",
                 (ulong)(*(uint *)(param_3 + 0x14) & 0xffffff),*(undefined8 *)(*(long *)param_3 + 8)
                 ,(ulong)*(uint *)(param_2 + 4),(ulong)(*(uint *)(pNVar3 + 0x14) & 0xffffff),
                 *(undefined8 *)(*(long *)pNVar3 + 8));
      }
      if (lVar5 == lVar6) break;
      lVar5 = *(long *)(lVar5 + 0x10);
    }
  }
  return;
}


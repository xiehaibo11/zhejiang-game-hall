
/* v8::internal::compiler::Node::New(v8::internal::Zone*, unsigned int,
   v8::internal::compiler::Operator const*, int, v8::internal::compiler::Node* const*, bool) */

long * v8::internal::compiler::Node::New
                 (Zone *param_1,uint param_2,Operator *param_3,int param_4,Node **param_5,
                 bool param_6)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  Node *pNVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (0 < param_4) {
    uVar2 = 0;
    do {
      if (param_5[uVar2] == (Node *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Node::New() Error: #%d:%s[%d] is nullptr",(ulong)param_2,
                 *(undefined8 *)(param_3 + 8));
      }
      uVar2 = uVar2 + 1;
    } while ((uint)param_4 != uVar2);
    if (0xe < param_4) {
      lVar6 = *(long *)(param_1 + 0x10);
      iVar4 = param_4 + 0xe;
      if (!param_6) {
        iVar4 = param_4;
      }
      uVar2 = (long)iVar4 << 5 | 0x10;
      if ((ulong)(*(long *)(param_1 + 0x18) - lVar6) < uVar2) {
        lVar6 = Zone::NewExpand(param_1,uVar2);
      }
      else {
        *(ulong *)(param_1 + 0x10) = lVar6 + uVar2;
      }
      plVar10 = (long *)(lVar6 + (long)iVar4 * 0x18);
      *(undefined4 *)(plVar10 + 1) = 0;
      *(int *)((long)plVar10 + 0xc) = iVar4;
      plVar1 = *(long **)(param_1 + 0x10);
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)plVar1) < 0x28) {
        plVar1 = (long *)Zone::NewExpand(param_1,0x28);
      }
      else {
        *(long **)(param_1 + 0x10) = plVar1 + 5;
      }
      *plVar1 = (long)param_3;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      *(uint *)((long)plVar1 + 0x14) = param_2 | 0xf000000;
      plVar1[3] = 0;
      if (param_2 >> 0x18 != 0) goto LAB_0129d064;
      uVar3 = 0;
      plVar1[4] = (long)plVar10;
      *plVar10 = (long)plVar1;
      *(int *)(plVar10 + 1) = param_4;
      plVar5 = plVar10 + 2;
      goto joined_r0x0129cfb0;
    }
  }
  uVar3 = param_4;
  if (param_4 < 2) {
    uVar3 = 1;
  }
  iVar4 = param_4;
  if (10 < param_4) {
    iVar4 = 0xb;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar7 = iVar4 + 3;
  if (!param_6) {
    uVar7 = uVar3;
  }
  uVar2 = (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5) + 0x20;
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar6) < uVar2) {
    lVar6 = Zone::NewExpand(param_1,uVar2);
  }
  else {
    *(ulong *)(param_1 + 0x10) = lVar6 + uVar2;
  }
  plVar10 = (long *)(lVar6 + (long)(int)uVar7 * 0x18);
  *plVar10 = (long)param_3;
  plVar10[1] = 0;
  *(undefined4 *)(plVar10 + 2) = 0;
  *(uint *)((long)plVar10 + 0x14) = param_2 | param_4 << 0x18 | uVar7 << 0x1c;
  plVar10[3] = 0;
  if ((param_2 & 0xff000000) != 0) {
LAB_0129d064:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IdField::is_valid(id)");
  }
  plVar5 = plVar10 + 4;
  uVar3 = 1;
  plVar1 = plVar10;
joined_r0x0129cfb0:
  if (0 < param_4) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      pNVar8 = *param_5;
      *plVar5 = (long)pNVar8;
      *(uint *)((long)plVar10 + lVar6 + -8) = uVar7 | uVar3;
      puVar9 = (undefined8 *)((long)plVar10 + lVar6 + -0x18);
      *puVar9 = *(undefined8 *)(pNVar8 + 0x18);
      *(undefined8 *)((long)plVar10 + lVar6 + -0x10) = 0;
      if (*(long *)(pNVar8 + 0x18) != 0) {
        *(undefined8 **)(*(long *)(pNVar8 + 0x18) + 8) = puVar9;
      }
      lVar6 = lVar6 + -0x18;
      uVar7 = uVar7 + 2;
      plVar5 = plVar5 + 1;
      *(undefined8 **)(pNVar8 + 0x18) = puVar9;
      param_5 = param_5 + 1;
    } while ((ulong)(uint)param_4 * 0x18 + lVar6 != 0);
  }
  return plVar1;
}


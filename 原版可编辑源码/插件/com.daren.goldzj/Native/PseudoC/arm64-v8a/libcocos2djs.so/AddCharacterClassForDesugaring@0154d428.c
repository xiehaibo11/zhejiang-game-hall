
/* v8::internal::RegExpBuilder::AddCharacterClassForDesugaring(int) */

void __thiscall
v8::internal::RegExpBuilder::AddCharacterClassForDesugaring(RegExpBuilder *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  Zone *pZVar3;
  RegExpTree *pRVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  pZVar3 = *(Zone **)this;
  pRVar4 = *(RegExpTree **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pRVar4) < 0x20) {
    pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(RegExpTree **)(pZVar3 + 0x10) = pRVar4 + 0x20;
  }
  pZVar3 = *(Zone **)this;
  puVar5 = *(undefined8 **)(pZVar3 + 0x10);
  lVar10 = *(long *)(pZVar3 + 0x18);
  if ((ulong)(lVar10 - (long)puVar5) < 0x10) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    puVar9 = *(undefined8 **)(pZVar3 + 0x10);
    lVar10 = *(long *)(pZVar3 + 0x18);
  }
  else {
    puVar9 = puVar5 + 2;
    *(undefined8 **)(pZVar3 + 0x10) = puVar9;
  }
  if ((ulong)(lVar10 - (long)puVar9) < 8) {
    puVar9 = (undefined8 *)Zone::NewExpand(pZVar3,8);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar9 + 1;
  }
  *puVar5 = puVar9;
  puVar5[1] = 0x100000001;
  *puVar9 = CONCAT44(param_1,param_1);
  uVar2 = *(undefined4 *)(this + 0xc);
  *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7550;
  *(undefined8 **)(pRVar4 + 8) = puVar5;
  *(undefined2 *)(pRVar4 + 0x10) = 0;
  *(undefined4 *)(pRVar4 + 0x18) = uVar2;
  *(undefined4 *)(pRVar4 + 0x1c) = 0;
  if (*(int *)((long)puVar5 + 0xc) == 0) {
    uVar8 = *(uint *)(puVar5 + 1);
    if ((int)uVar8 < 1) {
      pvVar6 = *(void **)(pZVar3 + 0x10);
      uVar1 = uVar8 << 1 | 1;
      uVar7 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar6) < uVar7) {
        pvVar6 = (void *)Zone::NewExpand(pZVar3,uVar7);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = (long)pvVar6 + uVar7;
      }
      uVar8 = *(uint *)((long)puVar5 + 0xc);
      if (0 < (int)uVar8) {
        MemCopy(pvVar6,(void *)*puVar5,(ulong)uVar8 << 3);
        uVar8 = *(uint *)((long)puVar5 + 0xc);
      }
      puVar9 = (undefined8 *)((long)pvVar6 + (long)(int)uVar8 * 8);
      *puVar5 = pvVar6;
      *(uint *)(puVar5 + 1) = uVar1;
      *(uint *)((long)puVar5 + 0xc) = uVar8 + 1;
    }
    else {
      puVar9 = (undefined8 *)*puVar5;
      *(undefined4 *)((long)puVar5 + 0xc) = 1;
    }
    *puVar9 = 0x10ffff00000000;
    *(uint *)(pRVar4 + 0x1c) = *(uint *)(pRVar4 + 0x1c) ^ 1;
  }
  FlushText(this);
  BufferedZoneList<v8::internal::RegExpTree,2>::Add
            ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this + 0x20),pRVar4,*(Zone **)this);
  return;
}


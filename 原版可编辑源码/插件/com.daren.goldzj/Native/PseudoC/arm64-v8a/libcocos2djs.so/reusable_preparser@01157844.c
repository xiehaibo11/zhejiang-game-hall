
/* v8::internal::Parser::reusable_preparser() */

undefined8 __thiscall v8::internal::Parser::reusable_preparser(Parser *this)

{
  Zone *pZVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  AstValueFactory *pAVar10;
  long lVar11;
  
  if (*(long *)(this + 0x2e8) == 0) {
    puVar7 = operator_new(0x140);
    pAVar10 = *(AstValueFactory **)(this + 0x60);
    uVar2 = *(undefined8 *)(this + 0xa8);
    uVar4 = *(undefined8 *)(this + 0xb0);
    uVar3 = *(undefined8 *)(this + 0x90);
    uVar5 = *(undefined8 *)(this + 0x98);
    uVar6 = *(undefined2 *)(this + 0xa0);
    pZVar1 = (Zone *)(this + 0x2a8);
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = pAVar10;
    AstNodeFactory::AstNodeFactory((AstNodeFactory *)(puVar7 + 6),pAVar10,pZVar1);
    puVar7[0xb] = pZVar1;
    puVar7[0xc] = uVar3;
    puVar7[0xd] = uVar5;
    *(undefined2 *)(puVar7 + 0xe) = uVar6;
    puVar7[0xf] = uVar2;
    puVar7[0x10] = uVar4;
    puVar7[0x11] = pZVar1;
    puVar7[0x12] = 0;
    puVar7[0x19] = this + 0x140;
    *(undefined4 *)(puVar7 + 0x1e) = 0;
    puVar7[0x1f] = 0;
    puVar7[0x1a] = 0xffffffff00000000;
    *(undefined1 *)(puVar7 + 0x1b) = 1;
    puVar7[0x1d] = 0xffffffff;
    *(undefined1 *)(puVar7 + 0x20) = 1;
    *(undefined1 *)((long)puVar7 + 0x105) = 0;
    pvVar8 = operator_new(0x100);
    puVar7[0x13] = pvVar8;
    puVar7[0x14] = pvVar8;
    puVar7[0x15] = (long)pvVar8 + 0x100;
    pvVar8 = operator_new(0x200);
    puVar7[0x16] = pvVar8;
    puVar7[0x17] = pvVar8;
    puVar7[0x18] = (long)pvVar8 + 0x200;
    puVar7[0x21] = 0;
    puVar7[0x22] = 0xffffffffffffffff;
    puVar7[0x23] = 0xffffffffffffffff;
    puVar7[0x24] = 0;
    pvVar8 = operator_new(0x80);
    puVar7[0x25] = pvVar8;
    puVar7[0x26] = pvVar8;
    puVar7[0x27] = (long)pvVar8 + 0x80;
    *(undefined8 **)(this + 0x2e8) = puVar7;
    *(Parser *)((long)puVar7 + 0x101) = this[0x131];
    *(Parser *)((long)puVar7 + 0x102) = this[0x132];
    *(Parser *)((long)puVar7 + 0x103) = this[0x133];
    *(Parser *)((long)puVar7 + 0x104) = this[0x134];
    *(Parser *)((long)puVar7 + 0x106) = this[0x136];
    pvVar8 = *(void **)(this + 0x490);
    if ((ulong)(*(long *)(this + 0x4a0) - (long)pvVar8) < 0x80) {
      lVar11 = *(long *)(this + 0x498) - (long)pvVar8;
      pvVar9 = operator_new(0x80);
      if (0 < lVar11) {
        __memcpy_chk(pvVar9,pvVar8,lVar11,0x80);
        pvVar8 = *(void **)(this + 0x490);
      }
      *(void **)(this + 0x490) = pvVar9;
      *(long *)(this + 0x498) = (long)pvVar9 + lVar11;
      *(long *)(this + 0x4a0) = (long)pvVar9 + 0x80;
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
    }
  }
  return *(undefined8 *)(this + 0x2e8);
}


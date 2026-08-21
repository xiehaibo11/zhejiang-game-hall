
/* v8::internal::ClassScope::DeclarePrivateName(v8::internal::AstRawString const*,
   v8::internal::VariableMode, v8::internal::IsStaticFlag, bool*) */

void __thiscall
v8::internal::ClassScope::DeclarePrivateName
          (ClassScope *this,undefined8 param_1,uint param_3,byte param_4,char *param_5)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(this + 0x88);
  if (uVar5 < 8) {
    pZVar1 = *(Zone **)this;
    puVar2 = *(undefined8 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x30) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x30);
    }
    else {
      *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 6;
    }
    pZVar1 = *(Zone **)this;
    *puVar2 = 0;
    puVar2[1] = puVar2;
    puVar3 = *(undefined8 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0xc0) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0xc0);
      puVar2[2] = puVar3;
    }
    else {
      *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 0x18;
      puVar2[2] = puVar3;
    }
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Out of memory: HashMap::Initialize");
    }
    *(undefined4 *)(puVar2 + 3) = 8;
    *puVar3 = 0;
    if (1 < *(uint *)(puVar2 + 3)) {
      uVar5 = 1;
      lVar6 = 0x18;
      do {
        uVar5 = uVar5 + 1;
        *(undefined8 *)(puVar2[2] + lVar6) = 0;
        lVar6 = lVar6 + 0x18;
      } while (uVar5 < *(uint *)(puVar2 + 3));
    }
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    puVar2[5] = 0;
    uVar5 = *(ulong *)(this + 0x88) & 7 | (ulong)puVar2;
    *(ulong *)(this + 0x88) = uVar5;
  }
  lVar6 = VariableMap::Declare
                    ((VariableMap *)((uVar5 & 0xfffffffffffffff8) + 0x10),*(undefined8 *)this,this,
                     param_1,param_3,0,0,1,param_4,param_5);
  if (*param_5 == '\0') {
    uVar4 = *(ushort *)(lVar6 + 0x28);
    if ((uVar4 & 0xf) == 9) {
      if ((param_3 & 0xff) != 8) goto LAB_014a4a44;
    }
    else if (((uVar4 & 0xf) != 8) || ((param_3 & 0xff) != 9)) goto LAB_014a4a44;
    if (uVar4 >> 0xf == (ushort)param_4) {
      *param_5 = '\x01';
      uVar4 = *(ushort *)(lVar6 + 0x28) & 0xfff0 | 10;
      *(ushort *)(lVar6 + 0x28) = uVar4;
    }
  }
  else {
    **(long **)(this + 0x40) = lVar6;
    *(long *)(this + 0x40) = lVar6 + 0x18;
    this[0x98] = (ClassScope)
                 ((byte)this[0x98] |
                 ((short)*(ushort *)(lVar6 + 0x28) < 0 &&
                 ((*(ushort *)(lVar6 + 0x28) & 0xf) - 7 & 0xff) < 4));
    uVar4 = *(ushort *)(lVar6 + 0x28);
  }
LAB_014a4a44:
  *(ushort *)(lVar6 + 0x28) = uVar4 | 0x400;
  return;
}


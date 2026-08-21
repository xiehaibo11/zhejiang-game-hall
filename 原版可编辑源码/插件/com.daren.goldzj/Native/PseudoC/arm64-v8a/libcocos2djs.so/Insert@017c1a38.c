
/* v8::internal::interpreter::ConstantArrayBuilder::Insert(v8::internal::AstBigInt) */

undefined4 __thiscall
v8::internal::interpreter::ConstantArrayBuilder::Insert(ConstantArrayBuilder *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  
  uVar2 = base::hash_value(param_2);
  lVar4 = *(long *)(this + 0x18);
  uVar6 = *(undefined8 *)(this + 0xb8);
  uVar5 = (ulong)(*(int *)(this + 0x20) - 1U & uVar2);
  puVar7 = (ulong *)(lVar4 + uVar5 * 0x18);
  if (((char)puVar7[2] != '\0') && (*(ulong *)(lVar4 + uVar5 * 0x18) != param_2)) {
    do {
      uVar5 = (ulong)((int)uVar5 + 1U & *(int *)(this + 0x20) - 1U);
      if (*(char *)(lVar4 + uVar5 * 0x18 + 0x10) == '\0') break;
    } while (*(ulong *)(lVar4 + uVar5 * 0x18) != param_2);
    puVar7 = (ulong *)(lVar4 + uVar5 * 0x18);
  }
  if ((char)puVar7[2] == '\0') {
    lVar4 = *(long *)this;
    if (((*(long *)(lVar4 + 8) - *(long *)(lVar4 + 0x10) ==
          *(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 4) &&
        (lVar4 = *(long *)(this + 8),
        *(long *)(lVar4 + 8) - *(long *)(lVar4 + 0x10) ==
        *(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 4)) &&
       (lVar4 = *(long *)(this + 0x10),
       *(long *)(lVar4 + 8) - *(long *)(lVar4 + 0x10) ==
       *(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 4)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = ConstantArraySlice::Allocate(lVar4,param_2,5,1);
    *puVar7 = param_2;
    *(undefined4 *)(puVar7 + 1) = uVar3;
    *(uint *)((long)puVar7 + 0xc) = uVar2;
    *(undefined1 *)(puVar7 + 2) = 1;
    uVar1 = *(int *)(this + 0x24) + 1;
    *(uint *)(this + 0x24) = uVar1;
    if (*(uint *)(this + 0x20) <= uVar1 + (uVar1 >> 2)) {
      base::
      TemplateHashMapImpl<long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::internal::ZoneAllocationPolicy>
      ::Resize((TemplateHashMapImpl<long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::internal::ZoneAllocationPolicy>
                *)(this + 0x18),uVar6);
      lVar4 = *(long *)(this + 0x18);
      uVar5 = (ulong)(*(int *)(this + 0x20) - 1U & uVar2);
      puVar7 = (ulong *)(lVar4 + uVar5 * 0x18);
      if (((char)puVar7[2] != '\0') && (*(ulong *)(lVar4 + uVar5 * 0x18) != param_2)) {
        do {
          uVar5 = (ulong)((int)uVar5 + 1U & *(int *)(this + 0x20) - 1U);
          if (*(char *)(lVar4 + uVar5 * 0x18 + 0x10) == '\0') break;
        } while (*(ulong *)(lVar4 + uVar5 * 0x18) != param_2);
        puVar7 = (ulong *)(lVar4 + uVar5 * 0x18);
      }
    }
  }
  return (int)puVar7[1];
}



/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x01496d9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::ObjectLiteral::CalculateEmitStore(v8::internal::Zone*) */

void __thiscall v8::internal::ObjectLiteral::CalculateEmitStore(ObjectLiteral *this,Zone *param_1)

{
  ObjectLiteral *pOVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  ulong local_60;
  ObjectLiteral *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined1 auStack_28 [8];
  
  local_48 = Literal::Match;
  local_58 = *(ObjectLiteral **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)local_58) < 0xc0) {
    local_58 = (ObjectLiteral *)Zone::NewExpand(param_1,0xc0);
    pOVar1 = local_58;
  }
  else {
    *(ObjectLiteral **)(param_1 + 0x10) = local_58 + 0xc0;
    pOVar1 = this;
  }
  if (local_58 == (ObjectLiteral *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  local_50 = 8;
  *(undefined8 *)local_58 = 0;
  uVar2 = 1;
  lVar5 = 0x18;
  do {
    uVar2 = uVar2 + 1;
    *(undefined8 *)(local_58 + lVar5) = 0;
    lVar5 = lVar5 + 0x18;
  } while (uVar2 < 8);
  local_4c = 0;
  uVar2 = (ulong)*(uint *)(this + 0x24);
  if (0 < (int)*(uint *)(this + 0x24)) {
    do {
      puVar7 = *(ulong **)(*(long *)(this + 0x18) + uVar2 * 8 + -8);
      if (((*puVar7 & 3) == 0) && ((char)puVar7[2] != '\x05')) {
        uVar3 = *puVar7 & 0xfffffffffffffffc;
        if ((*(uint *)(uVar3 + 4) & 0x3f) != 0x29) {
          uVar3 = 0;
        }
        if ((*(uint *)(uVar3 + 4) & 0x780) == 0x180) {
          uVar4 = *(uint *)(*(long *)(uVar3 + 8) + 0x18) >> 3;
        }
        else {
          uVar4 = *(uint *)(uVar3 + 4) >> 7 & 0xf;
          if (uVar4 == 1) {
            dVar8 = *(double *)(uVar3 + 8);
          }
          else {
            if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            dVar8 = (double)(long)*(int *)(uVar3 + 8);
          }
          uVar6 = ~(ulong)dVar8 + (long)dVar8 * 0x40000;
          uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
          uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
          uVar4 = ((uint)(uVar6 >> 0x16) ^ (uint)uVar6) & 0x3fffffff;
        }
        local_60 = uVar3;
        pOVar1 = (ObjectLiteral *)
                 base::
                 TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
                 ::
                 LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::internal::ZoneAllocationPolicy)::_lambda()_1_>
                           ((TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
                             *)pOVar1,&local_60,uVar4,auStack_28,param_1);
        if (*(long *)(pOVar1 + 8) != 0) {
          uVar4 = (uint)*(byte *)(*(long *)(pOVar1 + 8) + 0x10);
          if ((((uVar4 == 4) && ((char)puVar7[2] == '\x03')) ||
              ((uVar4 == 3 && ((char)puVar7[2] == '\x04')))) ||
             (*(undefined1 *)((long)puVar7 + 0x11) = 0, 1 < uVar4 - 3)) goto LAB_01496cd8;
        }
        *(ulong **)(pOVar1 + 8) = puVar7;
      }
LAB_01496cd8:
      uVar2 = uVar2 - 1;
    } while (0 < (long)uVar2);
  }
  return;
}


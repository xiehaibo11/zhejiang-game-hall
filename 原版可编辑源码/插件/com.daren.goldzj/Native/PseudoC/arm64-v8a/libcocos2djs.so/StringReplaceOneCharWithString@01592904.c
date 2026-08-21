
/* v8::internal::StringReplaceOneCharWithString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>, bool*, int) */

ulong * v8::internal::StringReplaceOneCharWithString
                  (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,int param_6)

{
  Isolate *pIVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = GetCurrentStackPosition();
  puVar7 = (ulong *)0x0;
  if ((param_6 != 0) && (*(ulong *)(param_1 + 0x58) <= uVar3)) {
    uVar3 = *param_2;
    uVar9 = uVar3 & 0xffffffff00000000;
    if ((*(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40) &&
       ((*(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 7) == 1)) {
      pIVar1 = param_1 + 0x95a0;
      uVar8 = uVar9 | *(uint *)(uVar3 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar8;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      }
      uVar9 = uVar9 | *(uint *)(uVar3 + 0xf);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar9;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      }
      puVar6 = (ulong *)StringReplaceOneCharWithString
                                  (param_1,puVar4,param_3,param_4,param_5,param_6 + -1);
      puVar7 = (ulong *)0x0;
      if (puVar6 != (ulong *)0x0) {
        if (*param_5 == '\0') {
          puVar5 = (ulong *)StringReplaceOneCharWithString
                                      (param_1,puVar5,param_3,param_4,param_5,param_6 + -1);
          if (puVar5 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
          puVar6 = puVar4;
          if (*param_5 == '\0') {
            return param_2;
          }
        }
LAB_01592b2c:
        puVar7 = (ulong *)Factory::NewConsString((Factory *)param_1,puVar6,puVar5);
        return puVar7;
      }
    }
    else {
      iVar2 = String::IndexOf(param_1,param_2,param_3,0);
      puVar7 = param_2;
      if (iVar2 != -1) {
        *param_5 = '\x01';
        if (*(int *)(*param_2 + 7) != iVar2) {
          puVar7 = (ulong *)Factory::NewProperSubString((Factory *)param_1,param_2,0,iVar2);
        }
        puVar6 = (ulong *)Factory::NewConsString((Factory *)param_1,puVar7,param_4);
        puVar7 = (ulong *)0x0;
        if (puVar6 != (ulong *)0x0) {
          puVar5 = (ulong *)Factory::NewProperSubString
                                      ((Factory *)param_1,param_2,iVar2 + 1,
                                       *(undefined4 *)(*param_2 + 7));
          goto LAB_01592b2c;
        }
      }
    }
  }
  return puVar7;
}


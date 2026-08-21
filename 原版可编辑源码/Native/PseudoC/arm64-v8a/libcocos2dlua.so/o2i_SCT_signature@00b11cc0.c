
int o2i_SCT_signature(int *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int line;
  undefined1 *puVar6;
  
  if (*param_1 == 0) {
    if (param_3 < 5) {
      iVar5 = 0x6b;
      line = 0x2a;
    }
    else {
      puVar6 = (undefined1 *)*param_2;
      *(undefined1 *)(param_1 + 0x10) = *puVar6;
      *(undefined1 *)((long)param_1 + 0x41) = puVar6[1];
      iVar5 = SCT_get_signature_nid(param_1);
      if (iVar5 == 0) {
        iVar5 = 0x6b;
        line = 0x33;
      }
      else {
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar6 = puVar6 + 4;
        uVar2 = (ulong)CONCAT11(uVar3,uVar4);
        uVar1 = (*param_2 - (long)puVar6) + param_3;
        if (uVar2 <= uVar1) {
          iVar5 = SCT_set1_signature(param_1,puVar6,uVar2);
          if (iVar5 != 1) {
            return -1;
          }
          *param_2 = (long)(puVar6 + uVar2);
          return ((uint)CONCAT11(uVar3,uVar4) + (int)param_3) - (int)uVar1;
        }
        iVar5 = 0x6b;
        line = 0x3a;
      }
    }
  }
  else {
    iVar5 = 0x67;
    line = 0x1f;
  }
  ERR_put_error(0x32,0x70,iVar5,"crypto/ct/ct_oct.c",line);
  return -1;
}


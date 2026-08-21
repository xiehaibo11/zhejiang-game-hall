
/* cocos2d::ZipUtils::inflateMemoryWithHint(unsigned char*, long, unsigned char**, long*, long) */

int cocos2d::ZipUtils::inflateMemoryWithHint
              (uchar *param_1,long param_2,uchar **param_3,long *param_4,long param_5)

{
  long lVar1;
  int iVar2;
  uchar *puVar3;
  uchar *local_b8;
  undefined4 local_b0;
  uchar *local_a0;
  uint local_98;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_a0 = malloc(param_5);
  *param_3 = local_a0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_b0 = (undefined4)param_2;
  local_98 = (uint)param_5;
  local_b8 = param_1;
  iVar2 = inflateInit2_(&local_b8,0x2f,"1.2.7",0x70);
  if (iVar2 == 0) {
    while (iVar2 = inflate(&local_b8,0), 1 < iVar2 + 4U) {
      if (iVar2 == 1) {
        *param_4 = param_5 - (ulong)local_98;
        iVar2 = inflateEnd(&local_b8);
        goto LAB_00887ea4;
      }
      if (iVar2 == 2) {
        iVar2 = -3;
        break;
      }
      puVar3 = realloc(*param_3,param_5 << 1);
      *param_3 = puVar3;
      if (puVar3 == (uchar *)0x0) {
        inflateEnd(&local_b8);
        iVar2 = -4;
        goto LAB_00887ea4;
      }
      local_a0 = puVar3 + param_5;
      local_98 = (uint)param_5;
      param_5 = param_5 << 1;
    }
    inflateEnd(&local_b8);
  }
LAB_00887ea4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


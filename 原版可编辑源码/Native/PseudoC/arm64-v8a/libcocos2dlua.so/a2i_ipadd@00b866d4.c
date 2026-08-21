
int a2i_ipadd(uchar *ipout,char *ipasc)

{
  int iVar1;
  long lVar2;
  size_t __n;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  uint local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  
  pcVar5 = strchr(ipasc,0x3a);
  if (pcVar5 == (char *)0x0) {
    iVar4 = sscanf(ipasc,"%d.%d.%d.%d",&local_58,&local_34,&uStack_38,&local_3c);
                    /* try { // try from 00b86794 to 00c86797 has its CatchHandler @ 00b867e8 */
    if ((iVar4 == 4) && ((local_34 | local_58 | uStack_38 | local_3c) < 0x100)) {
      *ipout = (uchar)local_58;
      bVar3 = true;
      ipout[1] = (uchar)local_34;
      ipout[2] = (uchar)uStack_38;
      ipout[3] = (uchar)local_3c;
    }
    else {
      bVar3 = false;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b86794 with catch @ 00b867e8
                        */
    iVar4 = 4;
    goto LAB_00b86804;
  }
  local_48 = -0x100000000;
  local_40 = 0;
  iVar4 = CONF_parse_list(ipasc,0x3a,0,FUN_00b87230,&local_58);
  if (iVar4 == 0) {
LAB_00b867fc:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b86854 with catch @ 00b867fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00b86a1c with catch @ 00b867fc
                        */
    bVar3 = false;
    iVar4 = 0x10;
    goto LAB_00b86804;
  }
  iVar4 = (int)local_48;
  lVar2 = (long)(int)local_48;
  iVar1 = local_48._4_4_;
  __n = (size_t)local_48._4_4_;
  if (local_48._4_4_ == -1) {
    if ((int)local_48 != 0x10) goto LAB_00b867fc;
LAB_00b867c0:
    *(undefined8 *)(ipout + 8) = uStack_50;
    *(ulong *)ipout = CONCAT44(uStack_54,local_58);
LAB_00b867c8:
    bVar3 = true;
  }
  else {
    if (((int)local_48 == 0x10) || (3 < local_40)) goto LAB_00b867fc;
    if (local_40 == 2) {
      if ((local_48._4_4_ != 0) && ((int)local_48 != local_48._4_4_)) goto LAB_00b867fc;
LAB_00b86830:
      if (local_48 < 0) goto LAB_00b867c0;
      memcpy(ipout,&local_58,__n);
                    /* try { // try from 00b8684c to 00c86853 has its CatchHandler @ 00b86b20 */
                    /* try { // try from 00b86854 to 00c869ab has its CatchHandler @ 00b867fc */
      memset(ipout + __n,0,0x10 - lVar2);
      if (iVar4 != iVar1) {
        memcpy(ipout + __n + (0x10 - lVar2),(void *)((long)&local_58 + __n),(long)(iVar4 - iVar1));
      }
      goto LAB_00b867c8;
    }
    if (local_40 == 3) {
      if (0 < (int)local_48) goto LAB_00b867fc;
      goto LAB_00b86830;
    }
    bVar3 = false;
    if ((local_48._4_4_ != 0) && (bVar3 = false, (int)local_48 != local_48._4_4_))
    goto LAB_00b86830;
  }
  iVar4 = 0x10;
LAB_00b86804:
  iVar1 = 0;
  if (bVar3) {
    iVar1 = iVar4;
  }
  return iVar1;
}


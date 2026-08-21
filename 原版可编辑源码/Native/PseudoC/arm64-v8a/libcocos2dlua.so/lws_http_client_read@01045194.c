
undefined8 lws_http_client_read(long param_1,long *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  iVar3 = lws_ssl_capable_read(param_1,*param_2,*param_3);
                    /* try { // try from 010451d0 to 011451db has its CatchHandler @ 010459d4 */
  *param_3 = 0;
  FUN_01046364(param_1,0,1);
  if (iVar3 != 0) {
                    /* try { // try from 010451e8 to 011451f3 has its CatchHandler @ 010459e4 */
    if (iVar3 != -1) {
      if (iVar3 < 0) {
        return 0;
      }
      *param_3 = iVar3;
                    /* try { // try from 01045244 to 01145253 has its CatchHandler @ 010458e0 */
      uVar6 = *(uint *)(param_1 + 0x2f4) & 0xf7ffffff;
      *(uint *)(param_1 + 0x2f4) = uVar6;
      do {
        if ((uVar6 >> 0x1a & 1) != 0) {
          do {
                    /* try { // try from 0104525c to 0114527f has its CatchHandler @ 0104595c */
            if ((*(char *)(param_1 + 0x308) == '\x02') || (*param_3 == 0)) {
                    /* try { // try from 01045330 to 01145337 has its CatchHandler @ 010459d0 */
              bVar1 = false;
              if (*(int *)(param_1 + 0x2ec) == 0) {
                return 0;
              }
              goto LAB_01045338;
            }
                    /* try { // try from 01045280 to 01145287 has its CatchHandler @ 01045910 */
            switch(*(char *)(param_1 + 0x308)) {
            case '\0':
              if (*(char *)*param_2 == '\r') {
                *(undefined1 *)(param_1 + 0x308) = 1;
              }
              else {
                cVar2 = FUN_01048180();
                if (cVar2 < 0) {
                  return 0xffffffff;
                }
                *(int *)(param_1 + 0x2ec) = (int)cVar2 | *(int *)(param_1 + 0x2ec) << 4;
              }
              break;
            case '\x01':
              if (*(char *)*param_2 != '\n') {
                return 0xffffffff;
              }
                    /* try { // try from 010452ac to 011452bb has its CatchHandler @ 0104590c */
              *(undefined1 *)(param_1 + 0x308) = 2;
              if (*(int *)(param_1 + 0x2ec) == 0) goto LAB_01045404;
              break;
            case '\x03':
                    /* try { // try from 010452c4 to 011452e7 has its CatchHandler @ 0104596c */
              if (*(char *)*param_2 != '\r') {
                return 0xffffffff;
              }
              *(undefined1 *)(param_1 + 0x308) = 4;
              break;
            case '\x04':
              if (*(char *)*param_2 != '\n') {
                return 0xffffffff;
              }
              *(undefined1 *)(param_1 + 0x308) = 0;
                    /* try { // try from 010452e8 to 011452f3 has its CatchHandler @ 010458f4 */
              *(undefined4 *)(param_1 + 0x2ec) = 0;
            }
            *param_2 = *param_2 + 1;
                    /* try { // try from 01045314 to 0114532b has its CatchHandler @ 010458f0 */
            *param_3 = *param_3 + -1;
          } while ((*(byte *)(param_1 + 0x2f7) >> 2 & 1) != 0);
        }
        bVar1 = true;
LAB_01045338:
        uVar8 = *(ulong *)(param_1 + 0x160);
        iVar3 = (int)uVar8;
        if ((ulong)(long)*param_3 <= uVar8 || uVar8 == 0) {
          iVar3 = *param_3;
        }
        iVar7 = iVar3;
                    /* try { // try from 01045358 to 0114535f has its CatchHandler @ 010457f0 */
        if ((!bVar1) && (iVar7 = *(int *)(param_1 + 0x2ec), iVar3 <= iVar7 || iVar7 == 0)) {
          iVar7 = iVar3;
        }
                    /* try { // try from 01045360 to 0114537f has its CatchHandler @ 010459d0 */
        lVar9 = (long)iVar7;
                    /* try { // try from 01045380 to 0114539b has its CatchHandler @ 010459bc */
        iVar3 = FUN_01043028(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,0x30,
                             *(undefined8 *)(param_1 + 0x270),*param_2,lVar9);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        uVar6 = *(uint *)(param_1 + 0x2f4);
        if (((uVar6 >> 0x1a & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2ec), iVar3 != 0)) {
                    /* try { // try from 0104539c to 011453af has its CatchHandler @ 010459d0 */
          *param_2 = *param_2 + lVar9;
          *(int *)(param_1 + 0x2ec) = iVar3 - iVar7;
          *param_3 = *param_3 - iVar7;
          uVar6 = *(uint *)(param_1 + 0x2f4);
        }
        if ((uVar6 >> 0x1a & 1) == 0) {
          if (*(long *)(param_1 + 0x158) == 0) {
            return 0;
          }
                    /* try { // try from 010453f0 to 011453ff has its CatchHandler @ 01045834 */
          lVar9 = *(long *)(param_1 + 0x160) - lVar9;
          *(long *)(param_1 + 0x160) = lVar9;
          if (*(long *)(param_1 + 0x158) == 0) {
            return 0;
          }
          if (lVar9 != 0) {
            return 0;
          }
LAB_01045404:
          iVar3 = FUN_01043028(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,0x2f,
                               *(undefined8 *)(param_1 + 0x270),0,0);
                    /* try { // try from 01045424 to 01145433 has its CatchHandler @ 010457e8 */
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          uVar4 = FUN_0104d898(param_1);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          pcVar5 = "%s: transaction completed says -1\n";
                    /* try { // try from 0104543c to 0114545f has its CatchHandler @ 010458c8 */
          goto LAB_010451f4;
        }
        if (*(int *)(param_1 + 0x2ec) == 0) {
          *(undefined1 *)(param_1 + 0x308) = 3;
          if (*param_3 == 0) {
            return 0;
          }
        }
        else {
                    /* try { // try from 010453cc to 011453eb has its CatchHandler @ 010458dc */
          if (*param_3 == 0) {
            return 0;
          }
        }
      } while( true );
    }
    pcVar5 = "%s: SSL capable error\n";
LAB_010451f4:
                    /* try { // try from 010451f8 to 0114521b has its CatchHandler @ 010459f4 */
    _lws_log(4,pcVar5,"lws_http_client_read");
  }
  return 0xffffffff;
}


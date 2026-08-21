
/* WARNING: Removing unreachable block (ram,0x00acee24) */
/* WARNING: Removing unreachable block (ram,0x00acf198) */
/* WARNING: Removing unreachable block (ram,0x00acedcc) */

undefined8 FUN_00ace8e8(SSL *param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ssl3_state_st *psVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  ssl2_state_st *str;
  code *pcVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  SSL_METHOD **ppSVar20;
  code *pcVar21;
  char *pcVar22;
  int *local_b8;
  time_t local_88;
  ssl3_state_st *local_80;
  long lStack_78;
  long local_70;
  undefined4 local_64;
  
                    /* try { // try from 00ace8ec to 00bce8ef has its CatchHandler @ 00ace98c */
                    /* try { // try from 00ace8f0 to 00bce99f has its CatchHandler @ 00ace894 */
  local_88 = time((time_t *)0x0);
  if (param_1->state == 1) {
    return 0xffffffff;
  }
  RAND_add(&local_88,8,0.0);
  ERR_clear_error();
  puVar8 = (undefined4 *)__errno();
  *puVar8 = 0;
  pcVar21 = *(code **)&(param_1->ex_data).dummy;
  if (pcVar21 == (code *)0x0) {
    pcVar21 = *(code **)(param_1->mode + 0xf8);
  }
  *(int *)&param_1->packet = *(int *)&param_1->packet + 1;
  if (param_1->init_num == 0) {
LAB_00ace980:
    iVar7 = SSL_clear(param_1);
    if (iVar7 == 0) {
      return 0xffffffff;
    }
LAB_00ace98c:
                    /* catch() { ... } // from try @ 00ace8ec with catch @ 00ace98c */
    iVar7 = param_1->state;
  }
  else {
    if (*(int *)((long)&param_1->init_msg + 4) != 0) goto LAB_00ace98c;
    iVar7 = param_1->state;
    if (iVar7 == 0) goto LAB_00ace980;
  }
  if (iVar7 != 0) {
    if (iVar7 == 2) {
      param_1[1].init_off = 1;
      if (param_2 == 0) {
        *(int *)(param_1->mode + 0x6c) = *(int *)(param_1->mode + 0x6c) + 1;
      }
      goto LAB_00ace9c0;
    }
LAB_00acea38:
    local_b8 = &param_1->read_ahead;
    piVar15 = &param_1->rstate;
    ppSVar20 = &param_1->method;
    piVar18 = &param_1->server;
LAB_00acebcc:
    if (iVar7 == 3) {
      local_70 = 0;
      pcVar16 = *(code **)&(param_1->ex_data).dummy;
      if (pcVar16 == (code *)0x0) {
        pcVar16 = *(code **)(param_1->mode + 0xf8);
      }
      bVar6 = *piVar18 != 0;
      pcVar1 = ossl_statem_client_read_transition;
      if (bVar6) {
        pcVar1 = ossl_statem_server_read_transition;
      }
      pcVar2 = ossl_statem_client_process_message;
      if (bVar6) {
        pcVar2 = ossl_statem_server_process_message;
      }
      pcVar3 = ossl_statem_client_post_process_message;
                    /* catch() { ... } // from try @ 00aceec8 with catch @ 00acef70 */
      if (bVar6) {
        pcVar3 = ossl_statem_server_post_process_message;
      }
                    /* try { // try from 00acef84 to 00bcefe7 has its CatchHandler @ 00acef84
                       catch() { ... } // from try @ 00acef84 with catch @ 00acef84
                       catch() { ... } // from try @ 00acefec with catch @ 00acef84 */
      pcVar4 = ossl_statem_client_max_message_size;
      if (bVar6) {
        pcVar4 = ossl_statem_server_max_message_size;
      }
      if (param_1->init_off != 0) {
        *(undefined4 *)&param_1->tlsext_ocsp_ids = 1;
        param_1->init_off = 0;
      }
      iVar7 = *(int *)((long)&param_1->init_buf + 4);
      if (iVar7 == 2) goto LAB_00acf148;
LAB_00acefa8:
      if (iVar7 != 1) {
        if (iVar7 != 0) {
          ssl3_send_alert(param_1,2,0x50);
          ERR_put_error(0x14,0x160,0x44,"ssl/statem/statem.c",0x27c);
          goto LAB_00acf1c8;
        }
        if (((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) == 0) {
          iVar7 = tls_get_message_header(param_1,&local_64);
        }
        else {
                    /* try { // try from 00acefec to 00bcf013 has its CatchHandler @ 00acef84 */
          iVar7 = dtls_get_message(param_1,&local_64,&local_70);
        }
        if (iVar7 == 0) goto LAB_00acf234;
        if (pcVar16 != (code *)0x0) {
          if (*piVar18 == 0) {
            uVar19 = 0x1001;
          }
          else {
            uVar19 = 0x2001;
                    /* try { // try from 00acefe8 to 00bcefeb has its CatchHandler @ 00acf000 */
          }
          (*pcVar16)(param_1,uVar19,1);
        }
        iVar7 = (*pcVar1)(param_1,local_64);
        if (iVar7 == 0) goto LAB_00acf1c8;
        uVar17 = *(ulong *)(*(long *)&param_1->read_ahead + 0x218);
        uVar9 = (*pcVar4)(param_1);
        if (uVar17 <= uVar9) {
          if ((((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) == 0) &&
             (*(long *)(*(long *)local_b8 + 0x218) != 0)) {
            psVar5 = param_1->s3;
            uVar9 = *(long *)(*(long *)local_b8 + 0x218) + 4;
            pcVar22 = *(char **)&param_1->s2->escape;
            iVar7 = BUF_MEM_grow_clean((BUF_MEM *)param_1->s2,(long)(int)uVar9);
            if ((iVar7 == 0) || (uVar17 = (long)psVar5 - (long)pcVar22, uVar9 < uVar17)) {
              ssl3_send_alert(param_1,2,0x50);
              ERR_put_error(0x14,0x160,7,"ssl/statem/statem.c",0x236);
              str = (ssl2_state_st *)0x0;
              goto LAB_00acf238;
            }
            param_1->s3 = (ssl3_state_st *)(*(long *)&param_1->s2->escape + uVar17);
          }
          *(undefined4 *)((long)&param_1->init_buf + 4) = 1;
          goto LAB_00acf0c0;
        }
        ssl3_send_alert(param_1,2,0x2f);
        iVar7 = 0x98;
        iVar12 = 0x22c;
LAB_00acf22c:
        ERR_put_error(0x14,0x160,iVar7,"ssl/statem/statem.c",iVar12);
        goto LAB_00acf234;
      }
LAB_00acf0c0:
      if ((((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) == 0) &&
         (iVar7 = tls_get_message_body(param_1,&local_70), iVar7 == 0)) goto LAB_00acf234;
      *(undefined4 *)&param_1->tlsext_ocsp_ids = 0;
      if (local_70 < 0) {
        ssl3_send_alert(param_1,2,0x50);
        iVar7 = 0x44;
        iVar12 = 0x24a;
        goto LAB_00acf22c;
      }
      local_80 = param_1->s3;
      lStack_78 = local_70;
      iVar7 = (*pcVar2)(param_1,&local_80);
      *(undefined4 *)&param_1->d1 = 0;
      if (iVar7 != 2) {
        if (iVar7 == 0) goto LAB_00acf234;
        if (iVar7 == 1) goto LAB_00acf16c;
LAB_00acf138:
        iVar7 = 0;
        *(undefined4 *)((long)&param_1->init_buf + 4) = 0;
        goto LAB_00acefa8;
      }
      *(undefined8 *)((long)&param_1->init_buf + 4) = 0x300000002;
LAB_00acf148:
      iVar7 = (*pcVar3)(param_1,*(undefined4 *)&param_1->init_msg);
      *(int *)&param_1->init_msg = iVar7;
      if (iVar7 == 2) goto LAB_00acf138;
      if (iVar7 != 1) goto LAB_00acf234;
LAB_00acf16c:
      if (((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) != 0) {
        dtls1_stop_timer(param_1);
      }
      param_1->state = 4;
      param_1->rstate = 0;
      iVar7 = 4;
    }
    if (iVar7 == 4) {
      pcVar16 = *(code **)&(param_1->ex_data).dummy;
      if (pcVar16 == (code *)0x0) {
        pcVar16 = *(code **)(param_1->mode + 0xf8);
      }
      bVar6 = *piVar18 != 0;
      uVar13 = *piVar15;
      pcVar1 = ossl_statem_client_write_transition;
      if (bVar6) {
        pcVar1 = ossl_statem_server_write_transition;
      }
      pcVar2 = ossl_statem_client_pre_work;
      if (bVar6) {
        pcVar2 = ossl_statem_server_pre_work;
      }
      pcVar3 = ossl_statem_client_post_work;
      if (bVar6) {
        pcVar3 = ossl_statem_server_post_work;
      }
      pcVar4 = ossl_statem_client_construct_message;
      if (bVar6) {
        pcVar4 = ossl_statem_server_construct_message;
      }
      if (pcVar16 != (code *)0x0) {
LAB_00acec78:
        if (uVar13 < 4) {
          do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(uVar13) {
            case 0:
              if (*piVar18 == 0) {
                uVar19 = 0x1001;
              }
              else {
                uVar19 = 0x2001;
              }
              (*pcVar16)(param_1,uVar19,1);
                    /* try { // try from 00aceda4 to 00bcedb3 has its CatchHandler @ 00acedcc */
              iVar7 = (*pcVar1)(param_1);
              if (iVar7 != 1) goto LAB_00aceba4;
              *(undefined8 *)&param_1->rstate = 0x300000001;
              break;
            case 1:
              goto switchD_00acec94_caseD_1;
            case 2:
              goto switchD_00acec94_caseD_2;
            default:
              uVar10 = *(undefined4 *)&param_1->init_buf;
              goto LAB_00aced7c;
            }
          } while( true );
        }
        goto LAB_00acf234;
      }
LAB_00aceddc:
      if (uVar13 < 4) {
        do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar13) {
          case 0:
            iVar7 = (*pcVar1)(param_1);
            if (iVar7 != 1) goto LAB_00aceba4;
            *(undefined8 *)&param_1->rstate = 0x300000001;
            break;
          case 1:
            goto switchD_00acedf8_caseD_1;
          case 2:
            goto switchD_00acedf8_caseD_2;
          default:
            uVar10 = *(undefined4 *)&param_1->init_buf;
            goto LAB_00aceefc;
          }
        } while( true );
      }
      goto LAB_00acf234;
    }
    if (iVar7 == 5) {
      param_1->state = 0;
      str = (ssl2_state_st *)0x0;
      uVar19 = 1;
      goto LAB_00acf23c;
    }
LAB_00acf1c8:
    param_1->state = 1;
LAB_00acf234:
    str = (ssl2_state_st *)0x0;
    goto LAB_00acf238;
  }
  *(undefined4 *)((long)&param_1->init_msg + 4) = 0;
LAB_00ace9c0:
  param_1->server = param_2;
  if (pcVar21 != (code *)0x0) {
    (*pcVar21)(param_1,0x10,1);
  }
  uVar13 = param_1->version;
  if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
    if ((uVar13 & 0xffffff00) != 0x300) {
      iVar7 = 0x44;
      iVar12 = 0x125;
      goto LAB_00aceb80;
    }
LAB_00acea5c:
    iVar7 = ssl_security(param_1,9,0,uVar13,0);
    if (iVar7 == 0) {
      iVar7 = 0x18c;
      iVar12 = 299;
      goto LAB_00aceb80;
    }
    if (param_1->s2 == (ssl2_state_st *)0x0) {
      str = (ssl2_state_st *)BUF_MEM_new();
      if ((str == (ssl2_state_st *)0x0) || (iVar7 = BUF_MEM_grow((BUF_MEM *)str,0x4000), iVar7 == 0)
         ) goto LAB_00acf238;
      param_1->s2 = str;
    }
    iVar7 = ssl3_setup_buffers(param_1);
    if (iVar7 != 0) {
      *(undefined4 *)&param_1->d1 = 0;
      *(undefined4 *)(*(long *)&param_1->read_ahead + 0xe8) = 0;
      iVar7 = ssl_init_wbio_buffer(param_1);
      if (iVar7 != 0) {
        if ((param_2 == 0) || (param_1->state != 2)) {
          iVar7 = ssl3_init_finished_mac(param_1);
          if (iVar7 != 0) {
            if (param_2 == 0) {
              *(int *)(param_1->mode + 0x68) = *(int *)(param_1->mode + 0x68) + 1;
              lVar14 = *(long *)&param_1->read_ahead;
              *(undefined8 *)(lVar14 + 0xb8) = 0;
              *(undefined8 *)(lVar14 + 0xb0) = 0;
              *(undefined8 *)(lVar14 + 200) = 0;
              *(undefined8 *)(lVar14 + 0xc0) = 0;
              *(undefined4 *)&param_1->param = 0;
              *(undefined4 *)(*(long *)&param_1->read_ahead + 0x288) = 0;
              if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) != 0) {
                param_1->packet_length = 1;
              }
            }
            else {
              if (param_1->state == 2) goto LAB_00acead4;
                    /* try { // try from 00acf304 to 00bcf3eb has its CatchHandler @ 00acf304
                       catch() { ... } // from try @ 00acf304 with catch @ 00acf304
                       catch() { ... } // from try @ 00acf404 with catch @ 00acf304 */
              *(int *)(param_1->mode + 0x74) = *(int *)(param_1->mode + 0x74) + 1;
            }
            goto LAB_00acf30c;
          }
        }
        else {
LAB_00acead4:
          if ((*(int *)(*(long *)&param_1->read_ahead + 0x3c4) != 0) ||
             ((*(byte *)((long)&param_1->tlsext_debug_arg + 6) >> 2 & 1) != 0)) {
            *(int *)(param_1->mode + 0x78) = *(int *)(param_1->mode + 0x78) + 1;
LAB_00acf30c:
            param_1->init_off = 1;
            iVar7 = 4;
            param_1->state = 4;
            param_1->rstate = 0;
            goto LAB_00acea38;
          }
          ERR_put_error(0x14,0x161,0x152,"ssl/statem/statem.c",0x161);
          ssl3_send_alert(param_1,2,0x28);
        }
        str = (ssl2_state_st *)0x0;
        param_1->state = 1;
        goto LAB_00acf238;
      }
    }
  }
  else {
    if (((uVar13 & 0xff00) == 0xfe00) || ((param_2 == 0 && ((uVar13 & 0xff00) == 0x100))))
    goto LAB_00acea5c;
    iVar7 = 0x44;
    iVar12 = 0x120;
LAB_00aceb80:
    ERR_put_error(0x14,0x161,iVar7,"ssl/statem/statem.c",iVar12);
  }
  str = (ssl2_state_st *)0x0;
LAB_00acf238:
  uVar19 = 0xffffffff;
LAB_00acf23c:
  *(int *)&param_1->packet = *(int *)&param_1->packet + -1;
  BUF_MEM_free((BUF_MEM *)str);
  if (pcVar21 != (code *)0x0) {
    if (param_2 == 0) {
      uVar11 = 0x1002;
    }
    else {
      uVar11 = 0x2002;
    }
    (*pcVar21)(param_1,uVar11,uVar19);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acf230 with catch @ 00acf274
                        */
  return uVar19;
switchD_00acec94_caseD_1:
  iVar7 = (*pcVar2)(param_1,*(undefined4 *)&param_1->init_buf);
  *(int *)&param_1->init_buf = iVar7;
  if (iVar7 != 2) goto LAB_00acef10;
  param_1->rstate = 2;
  iVar7 = (*pcVar4)(param_1);
  if (iVar7 == 0) goto LAB_00acf234;
switchD_00acec94_caseD_2:
  if ((((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) != 0) && (param_1->packet_length != 0)) {
    dtls1_start_timer(param_1);
  }
  iVar7 = *(int *)((long)&param_1->init_msg + 4);
  if ((iVar7 == 0x23) || (iVar7 == 0x10)) {
    if (((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) == 0) {
      iVar7 = ssl3_do_write(param_1,0x14);
    }
    else {
      iVar7 = dtls1_do_write(param_1,0x14);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aced48 with catch @ 00aced68
                        */
    }
  }
  else {
                    /* try { // try from 00aced48 to 00bced57 has its CatchHandler @ 00aced68 */
    iVar7 = (**(code **)(param_1->method->get_timeout + 0x78))(param_1);
  }
  if (iVar7 < 1) goto LAB_00acf234;
  uVar10 = 3;
  *(undefined8 *)&param_1->rstate = 0x300000003;
LAB_00aced7c:
  iVar7 = (*pcVar3)(param_1,uVar10);
  *(int *)&param_1->init_buf = iVar7;
  if (iVar7 != 2) goto LAB_00acef10;
  uVar13 = 0;
  *piVar15 = 0;
  goto LAB_00acec78;
switchD_00acedf8_caseD_1:
  iVar7 = (*pcVar2)(param_1,*(undefined4 *)&param_1->init_buf);
  *(int *)&param_1->init_buf = iVar7;
  if (iVar7 != 2) goto LAB_00acef10;
  param_1->rstate = 2;
  iVar7 = (*pcVar4)(param_1);
  if (iVar7 == 0) goto LAB_00acf234;
switchD_00acedf8_caseD_2:
  if ((((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) != 0) && (param_1->packet_length != 0)) {
    dtls1_start_timer(param_1);
  }
                    /* try { // try from 00acee78 to 00bceec7 has its CatchHandler @ 00acee78
                       catch() { ... } // from try @ 00acee78 with catch @ 00acee78
                       catch() { ... } // from try @ 00aceecc with catch @ 00acee78 */
  iVar7 = *(int *)((long)&param_1->init_msg + 4);
  if ((iVar7 == 0x23) || (iVar7 == 0x10)) {
    if (((byte)(*ppSVar20)->get_timeout[0x68] >> 3 & 1) == 0) {
      iVar7 = ssl3_do_write(param_1,0x14);
    }
    else {
      iVar7 = dtls1_do_write(param_1,0x14);
    }
  }
  else {
                    /* try { // try from 00aceec8 to 00bceecb has its CatchHandler @ 00acef70 */
                    /* try { // try from 00aceecc to 00bcef83 has its CatchHandler @ 00acee78 */
    iVar7 = (**(code **)(param_1->method->get_timeout + 0x78))(param_1);
  }
  if (iVar7 < 1) goto LAB_00acf234;
  uVar10 = 3;
  *(undefined8 *)&param_1->rstate = 0x300000003;
LAB_00aceefc:
  iVar7 = (*pcVar3)(param_1,uVar10);
  *(int *)&param_1->init_buf = iVar7;
  if (iVar7 != 2) goto LAB_00acef10;
  uVar13 = 0;
  *piVar15 = 0;
  goto LAB_00aceddc;
LAB_00acef10:
  if (iVar7 != 1) goto LAB_00acf234;
  iVar7 = 5;
  param_1->state = 5;
  goto LAB_00acebcc;
LAB_00aceba4:
  if (iVar7 != 2) goto LAB_00acf234;
  iVar7 = 3;
  param_1->state = 3;
  *(undefined4 *)((long)&param_1->init_buf + 4) = 0;
  goto LAB_00acebcc;
}



ulong dtls1_read_bytes(SSL *param_1,uint param_2,undefined4 *param_3,void *param_4,uint param_5,
                      int param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  pitem *item;
  BIO *pBVar7;
  SSL_CTX *pSVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  code *pcVar18;
  ulong uVar19;
  code *local_c8;
  char local_b8 [88];
  
  lVar11._0_4_ = param_1[1].sid_ctx_length;
  lVar11._4_1_ = param_1[1].sid_ctx[0];
  lVar11._5_1_ = param_1[1].sid_ctx[1];
  lVar11._6_1_ = param_1[1].sid_ctx[2];
  lVar11._7_1_ = param_1[1].sid_ctx[3];
  if ((lVar11 != 0) || (iVar5 = ssl3_setup_buffers(param_1), iVar5 != 0)) {
    if (((param_2 < 0x18) && ((1 << (ulong)(param_2 & 0x1f) & 0xc00001U) != 0)) &&
       ((param_2 == 0x17 || (param_6 == 0)))) {
      if (param_2 == 0x16) {
        lVar11 = *(long *)&param_1[6].sid_ctx_length;
        iVar5 = *(int *)(lVar11 + 0x6c);
        if (iVar5 != 0) {
          lVar13 = lVar11 + 0x60;
          if ((int)param_5 < 1) {
            uVar19 = 0;
LAB_00ab84e8:
            uVar15 = 0;
            do {
              puVar2 = (undefined1 *)(lVar13 + uVar15);
              uVar1 = uVar15 & 0xffffffff;
              uVar15 = uVar15 + 1;
              *(undefined1 *)(lVar11 + uVar1 + 0x60) = *puVar2;
              lVar11 = *(long *)&param_1[6].sid_ctx_length;
            } while ((uint)uVar15 < *(uint *)(lVar11 + 0x6c));
LAB_00ab850c:
            if ((int)uVar19 == 0) goto LAB_00ab851c;
          }
          else {
            uVar19 = 0;
            iVar10 = param_5 + 1;
            do {
              if (iVar5 == 0) goto LAB_00ab850c;
              iVar10 = iVar10 + -1;
              *(undefined1 *)((long)param_4 + uVar19) = *(undefined1 *)(lVar13 + uVar19);
              lVar16 = *(long *)&param_1[6].sid_ctx_length;
              uVar19 = uVar19 + 1;
              iVar5 = *(int *)(lVar16 + 0x6c) + -1;
              *(int *)(lVar16 + 0x6c) = iVar5;
            } while (1 < iVar10);
            if (iVar5 != 0) {
              lVar13 = lVar11 + uVar19 + 0x60;
              lVar11 = lVar16;
              goto LAB_00ab84e8;
            }
          }
          *param_3 = 0x16;
          goto LAB_00ab8458;
        }
      }
LAB_00ab851c:
      iVar5 = ossl_statem_get_in_handshake(param_1);
      if ((iVar5 == 0) && (iVar5 = SSL_in_init(param_1), iVar5 != 0)) {
        uVar6 = (*param_1->handshake_func)(param_1);
        uVar19 = (ulong)uVar6;
        if ((int)uVar6 < 0) goto LAB_00ab8458;
        if (uVar6 == 0) {
          iVar5 = 0xe5;
          iVar10 = 0x186;
          goto LAB_00ab8450;
        }
      }
      local_c8 = (code *)0x0;
LAB_00ab855c:
      do {
        param_1->rwstate = 1;
        iVar5 = SSL_is_init_finished(param_1);
        if (((iVar5 != 0) && (*(int *)&param_1[2].next_proto_negotiated == 0)) &&
           (item = pqueue_pop(*(pqueue *)(*(long *)&param_1[6].sid_ctx_length + 0x50)),
           item != (pitem *)0x0)) {
          plVar17 = item->data;
          SSL3_BUFFER_release(&param_1[1].sid_ctx_length);
          param_1[6].cipher_list = (stack_st_SSL_CIPHER *)*plVar17;
          *(int *)&param_1[6].cipher_list_by_id = (int)plVar17[1];
          lVar11 = plVar17[4];
          *(long *)(param_1[1].sid_ctx + 0x14) = plVar17[5];
          *(long *)(param_1[1].sid_ctx + 0xc) = lVar11;
          lVar11 = plVar17[2];
          *(long *)(param_1[1].sid_ctx + 4) = plVar17[3];
          param_1[1].sid_ctx_length = (int)lVar11;
          param_1[1].sid_ctx[0] = (char)((ulong)lVar11 >> 0x20);
          param_1[1].sid_ctx[1] = (char)((ulong)lVar11 >> 0x28);
          param_1[1].sid_ctx[2] = (char)((ulong)lVar11 >> 0x30);
          param_1[1].sid_ctx[3] = (char)((ulong)lVar11 >> 0x38);
          memcpy(&param_1[2].initial_ctx,plVar17 + 6,0x48);
          lVar11 = *plVar17;
          *(undefined2 *)((long)&param_1[6].write_hash + 6) = *(undefined2 *)(lVar11 + 9);
          *(undefined4 *)((long)&param_1[6].write_hash + 2) = *(undefined4 *)(lVar11 + 5);
          CRYPTO_free(item->data);
          pitem_free(item);
        }
        iVar5 = dtls1_handle_timeout(param_1);
      } while (0 < iVar5);
      if (((*(int *)&param_1[2].next_proto_negotiated == 0) ||
          (*(int *)((long)&param_1[1].compress + 4) == 0xf1)) &&
         (iVar5 = dtls1_get_record(param_1), iVar5 < 1)) {
        uVar15 = dtls1_read_failed(param_1,iVar5);
        uVar19 = uVar15 & 0xffffffff;
        if ((int)uVar15 < 1) goto LAB_00ab8458;
        goto LAB_00ab855c;
      }
      uVar6 = *(uint *)((long)&param_1[2].initial_ctx + 4);
      if ((uVar6 != 0x15) && (*(int *)&param_1[2].next_proto_negotiated != 0)) {
        *(undefined4 *)((long)&param_1[6].cert + 4) = 0;
      }
      if ((*(int *)(*(long *)&param_1->read_ahead + 0xe8) != 0) && (uVar6 != 0x16)) {
        iVar5 = dtls1_buffer_record(param_1,*(long *)&param_1[6].sid_ctx_length + 0x48,
                                    &param_1[3].method);
        if (iVar5 < 0) {
          iVar5 = 0x44;
          iVar10 = 0x1d4;
          goto LAB_00ab8450;
        }
        *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
        goto LAB_00ab855c;
      }
      if (((byte)param_1->shutdown >> 1 & 1) != 0) {
        uVar19 = 0;
        *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
        param_1->rwstate = 1;
        goto LAB_00ab8458;
      }
      if ((uVar6 == param_2) ||
         (((param_3 != (undefined4 *)0x0 && (param_2 == 0x16)) && (uVar6 == 0x14)))) {
        iVar5 = SSL_in_init(param_1);
        if (((param_2 != 0x17) || (iVar5 == 0)) || (*(long *)(param_1->sid_ctx + 0xc) != 0)) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)((long)&param_1[2].initial_ctx + 4);
          }
          if ((int)param_5 < 1) {
            uVar19 = (ulong)param_5;
          }
          else {
            uVar6 = *(uint *)&param_1[2].next_proto_negotiated;
            if (param_5 <= *(uint *)&param_1[2].next_proto_negotiated) {
              uVar6 = param_5;
            }
            uVar19 = (ulong)uVar6;
            memcpy(param_4,(void *)((long)&((param_1[2].srtp_profiles)->stack).num +
                                   (ulong)*(uint *)&param_1[2].next_proto_negotiated_len),uVar19);
            if (param_6 == 0) {
              iVar5 = *(int *)&param_1[2].next_proto_negotiated - uVar6;
              *(int *)&param_1[2].next_proto_negotiated = iVar5;
              *(uint *)&param_1[2].next_proto_negotiated_len =
                   *(int *)&param_1[2].next_proto_negotiated_len + uVar6;
              if (iVar5 == 0) {
                *(undefined4 *)((long)&param_1[1].compress + 4) = 0xf0;
                *(undefined4 *)&param_1[2].next_proto_negotiated_len = 0;
              }
            }
          }
          goto LAB_00ab8458;
        }
        iVar5 = 100;
        iVar10 = 500;
      }
      else {
        switch(uVar6) {
        case 0x14:
          goto switchD_00ab86b0_caseD_14;
        case 0x15:
          uVar19 = 2;
          lVar11 = *(long *)&param_1[6].sid_ctx_length + 0x58;
          puVar14 = (uint *)(*(long *)&param_1[6].sid_ctx_length + 0x5c);
          break;
        case 0x16:
          uVar19 = 0xc;
          lVar11 = *(long *)&param_1[6].sid_ctx_length + 0x60;
          puVar14 = (uint *)(*(long *)&param_1[6].sid_ctx_length + 0x6c);
          break;
        case 0x17:
          *(undefined4 *)(*(long *)&param_1->read_ahead + 0x108) = 2;
          pBVar7 = SSL_get_rbio(param_1);
          param_1->rwstate = 3;
          BIO_clear_flags(pBVar7,0xf);
          BIO_set_flags(pBVar7,9);
          goto LAB_00ab8454;
        default:
          iVar5 = 0xf5;
          iVar10 = 0x260;
          goto LAB_00ab8d30;
        }
        if (*(uint *)&param_1[2].next_proto_negotiated < (uint)uVar19) {
          *(undefined4 *)((long)&param_1[1].compress + 4) = 0xf0;
          *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
          goto LAB_00ab855c;
        }
        uVar6 = *(uint *)&param_1[2].next_proto_negotiated_len;
        uVar15 = 0;
        do {
          *(undefined1 *)(lVar11 + uVar15) =
               *(undefined1 *)((long)&((param_1[2].srtp_profiles)->stack).num + (ulong)uVar6);
          uVar15 = uVar15 + 1;
          uVar6 = *(int *)&param_1[2].next_proto_negotiated_len + 1;
          *(uint *)&param_1[2].next_proto_negotiated_len = uVar6;
          *(int *)&param_1[2].next_proto_negotiated = *(int *)&param_1[2].next_proto_negotiated + -1
          ;
        } while (uVar15 < uVar19);
        *puVar14 = (uint)uVar19;
switchD_00ab86b0_caseD_14:
        lVar11 = *(long *)&param_1[6].sid_ctx_length;
        if (((param_1->server == 0) && (0xb < *(uint *)(lVar11 + 0x6c))) &&
           ((*(char *)(lVar11 + 0x60) == '\0' &&
            ((param_1->ctx != (SSL_CTX *)0x0 && (*(long *)&(param_1->ctx->ex_data).dummy != 0))))))
        {
          *(undefined4 *)(lVar11 + 0x6c) = 0;
          if ((*(char *)(lVar11 + 0x61) == '\0') &&
             ((*(char *)(lVar11 + 0x62) == '\0' && (*(char *)(lVar11 + 99) == '\0')))) {
            if (param_1->msg_callback_arg != (code *)0x0) {
              (*param_1->msg_callback_arg)
                        (0,param_1->version,0x16,(char *)(lVar11 + 0x60),4,param_1,
                         *(undefined8 *)&param_1->hit);
            }
            iVar5 = SSL_is_init_finished(param_1);
            if (((iVar5 != 0) && ((**(byte **)&param_1->read_ahead & 1) == 0)) &&
               (*(int *)(*(byte **)&param_1->read_ahead + 0xfc) == 0)) {
              *(short *)(param_1->msg_callback + 0x10c) =
                   *(short *)(param_1->msg_callback + 0x10c) + 1;
              param_1->new_session = 1;
              ssl3_renegotiate(param_1);
              iVar5 = ssl3_renegotiate_check(param_1);
              if (iVar5 != 0) {
                uVar6 = (*param_1->handshake_func)(param_1);
                uVar19 = (ulong)uVar6;
                if ((int)uVar6 < 0) goto LAB_00ab8458;
                if (uVar6 == 0) {
                  iVar5 = 0xe5;
                  iVar10 = 0x2aa;
                  goto LAB_00ab8450;
                }
                if ((*(byte *)&param_1->tlsext_hostname >> 2 & 1) == 0) {
                  iVar5 = *(int *)(param_1[1].sid_ctx + 0x18);
joined_r0x00ab8960:
                  if (iVar5 == 0) {
                    param_1->rwstate = 3;
                    pBVar7 = SSL_get_rbio(param_1);
                    BIO_clear_flags(pBVar7,0xf);
                    BIO_set_flags(pBVar7,9);
                    goto LAB_00ab8454;
                  }
                }
              }
            }
            goto LAB_00ab855c;
          }
          ERR_put_error(0x14,0x102,0x69,"ssl/record/rec_layer_d1.c",0x292);
          uVar9 = 0x32;
          goto LAB_00ab8d38;
        }
        if (1 < *(uint *)(lVar11 + 0x5c)) {
          cVar3 = *(char *)(lVar11 + 0x58);
          *(undefined4 *)(lVar11 + 0x5c) = 0;
          bVar4 = *(byte *)(lVar11 + 0x59);
          uVar19 = (ulong)bVar4;
          if (param_1->msg_callback_arg != (code *)0x0) {
            (*param_1->msg_callback_arg)
                      (0,param_1->version,0x15,(char *)(lVar11 + 0x58),2,param_1,
                       *(undefined8 *)&param_1->hit);
          }
          pcVar18 = *(code **)&(param_1->ex_data).dummy;
          if (pcVar18 == (code *)0x0) {
            pcVar12 = *(code **)(param_1->mode + 0xf8);
            pcVar18 = local_c8;
            if (pcVar12 != (code *)0x0) {
              pcVar18 = pcVar12;
            }
            if (pcVar18 != (code *)0x0) goto LAB_00ab87e0;
            pcVar18 = (code *)0x0;
          }
          else {
LAB_00ab87e0:
            (*pcVar18)(param_1,0x4004,CONCAT11(cVar3,bVar4));
          }
          uVar6 = (uint)bVar4;
          if (cVar3 == '\x01') {
            *(uint *)(*(long *)&param_1->read_ahead + 0xec) = uVar6;
            iVar5 = *(int *)((long)&param_1[6].cert + 4) + 1;
            *(int *)((long)&param_1[6].cert + 4) = iVar5;
            if (iVar5 == 5) {
              iVar5 = 0x199;
              iVar10 = 0x2e3;
              goto LAB_00ab8d30;
            }
            local_c8 = pcVar18;
            if (uVar6 == 0) {
              param_1->shutdown = param_1->shutdown | 2;
              goto LAB_00ab8458;
            }
            goto LAB_00ab855c;
          }
          if (cVar3 == '\x02') {
            param_1->rwstate = 1;
            *(uint *)(*(long *)&param_1->read_ahead + 0xf0) = uVar6;
            ERR_put_error(0x14,0x102,uVar6 + 1000,"ssl/record/rec_layer_d1.c",0x31b);
            BIO_snprintf(local_b8,0x10,"%d",uVar19);
            ERR_add_error_data(2,"SSL alert number ",local_b8);
            pSVar8 = (SSL_CTX *)param_1[1].bbio;
            param_1->shutdown = param_1->shutdown | 2;
            SSL_CTX_remove_session(pSVar8,(SSL_SESSION *)param_1->ctx);
            uVar19 = 0;
            goto LAB_00ab8458;
          }
          ERR_put_error(0x14,0x102,0xf6,"ssl/record/rec_layer_d1.c",0x323);
          uVar9 = 0x2f;
          goto LAB_00ab8d38;
        }
        if ((param_1->shutdown & 1) != 0) {
          uVar19 = 0;
          param_1->rwstate = 1;
          *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
          goto LAB_00ab8458;
        }
        iVar5 = *(int *)((long)&param_1[2].initial_ctx + 4);
        if (iVar5 == 0x14) {
          *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
          goto LAB_00ab855c;
        }
        if (0xb < *(uint *)(lVar11 + 0x6c)) {
          iVar5 = ossl_statem_get_in_handshake(param_1);
          if (iVar5 == 0) {
            dtls1_get_message_header(param_1[2].srtp_profiles,local_b8);
            uVar19._0_4_ = param_1[3].version;
            uVar19._4_4_ = param_1[3].type;
            if (uVar19 == **(ushort **)&param_1[6].sid_ctx_length) {
              if (local_b8[0] == '\x14') {
                iVar5 = dtls1_check_timeout_num();
                if (iVar5 < 0) goto LAB_00ab8454;
                dtls1_retransmit_buffered_messages(param_1);
                *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
              }
              else {
                iVar5 = SSL_is_init_finished(param_1);
                if ((iVar5 != 0) && ((**(byte **)&param_1->read_ahead & 1) == 0)) {
                  ossl_statem_set_in_init(param_1,1);
                  param_1[1].init_off = 1;
                  param_1->new_session = 1;
                }
                uVar6 = (*param_1->handshake_func)(param_1);
                uVar19 = (ulong)uVar6;
                if ((int)uVar6 < 0) goto LAB_00ab8458;
                if (uVar6 == 0) {
                  iVar5 = 0xe5;
                  iVar10 = 0x35f;
                  goto LAB_00ab8450;
                }
                if ((*(byte *)&param_1->tlsext_hostname >> 2 & 1) == 0) {
                  iVar5 = *(int *)(param_1[1].sid_ctx + 0x18);
                  goto joined_r0x00ab8960;
                }
              }
            }
            else {
              *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
            }
            goto LAB_00ab855c;
          }
          iVar5 = *(int *)((long)&param_1[2].initial_ctx + 4);
        }
        if (iVar5 - 0x14U < 3) {
          iVar5 = 0x44;
          iVar10 = 0x38a;
        }
        else {
          if (iVar5 != 0x17) {
            if (param_1->version != 0x301) {
              iVar5 = 0xf5;
              iVar10 = 0x37f;
              goto LAB_00ab8d30;
            }
            *(undefined4 *)&param_1[2].next_proto_negotiated = 0;
            goto LAB_00ab855c;
          }
          if (((*(int *)(*(long *)&param_1->read_ahead + 0x108) != 0) &&
              (*(int *)(*(long *)&param_1->read_ahead + 0x100) != 0)) &&
             (iVar5 = ossl_statem_app_data_allowed(param_1), iVar5 != 0)) {
            *(undefined4 *)(*(long *)&param_1->read_ahead + 0x108) = 2;
            goto LAB_00ab8454;
          }
          iVar5 = 0xf5;
          iVar10 = 0x39b;
        }
      }
LAB_00ab8d30:
      ERR_put_error(0x14,0x102,iVar5,"ssl/record/rec_layer_d1.c",iVar10);
      uVar9 = 10;
LAB_00ab8d38:
      ssl3_send_alert(param_1,2,uVar9);
      goto LAB_00ab8454;
    }
    iVar5 = 0x44;
    iVar10 = 0x163;
LAB_00ab8450:
    ERR_put_error(0x14,0x102,iVar5,"ssl/record/rec_layer_d1.c",iVar10);
  }
LAB_00ab8454:
  uVar19 = 0xffffffff;
LAB_00ab8458:
  return uVar19 & 0xffffffff;
}


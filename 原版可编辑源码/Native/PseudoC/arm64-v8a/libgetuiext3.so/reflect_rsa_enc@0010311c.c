
undefined8 reflect_rsa_enc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78 [2];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_001036e4();
  if (lVar2 == 0) {
    uVar5 = 0;
    goto LAB_00103448;
  }
  lVar3 = (**(code **)(*param_1 + 0x538))(param_1,&DAT_0010ab0c);
  lVar4 = (**(code **)(*param_1 + 0x538))(param_1,"RSA/NONE/OAEPWithSHA1AndMGF1Padding");
  local_78[0] = lVar3;
  uVar5 = (**(code **)(*param_1 + 0x30))(param_1,"java/security/KeyFactory");
  uVar6 = (**(code **)(*param_1 + 0x388))
                    (param_1,uVar5,"getInstance","(Ljava/lang/String;)Ljava/security/KeyFactory;");
  lVar7 = (**(code **)(*param_1 + 0x3a0))(param_1,uVar5,uVar6,local_78);
  lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar8 == 0) {
    local_80 = lVar2;
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1,"java/security/spec/X509EncodedKeySpec");
    uVar6 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,"<init>","([B)V");
    lVar12 = (**(code **)(*param_1 + 0xf0))(param_1,uVar5,uVar6,&local_80);
    local_88 = lVar12;
    lVar8 = (**(code **)(*param_1 + 0x30))(param_1,"java/security/KeyFactory");
    if (lVar7 == 0) {
      uVar5 = (**(code **)(*param_1 + 0x388))
                        (param_1,lVar8,"generatePublic",
                         "(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;");
      pcVar11 = *(code **)(*param_1 + 0x3a0);
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x108))
                        (param_1,lVar8,"generatePublic",
                         "(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;");
      pcVar11 = *(code **)(*param_1 + 0x120);
      lVar8 = lVar7;
    }
    lVar8 = (*pcVar11)(param_1,lVar8,uVar5,&local_88);
    lVar13 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar13 != 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      thunk_EXT_FUN_00002bb0(3,"SECURITY_MODULE","create PublicKey instance failed.");
      goto LAB_0010339c;
    }
    local_90 = lVar4;
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1,"javax/crypto/Cipher");
    uVar6 = (**(code **)(*param_1 + 0x388))
                      (param_1,uVar5,"getInstance","(Ljava/lang/String;)Ljavax/crypto/Cipher;");
    lVar13 = (**(code **)(*param_1 + 0x3a0))(param_1,uVar5,uVar6,&local_90);
    lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar9 != 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      pcVar10 = "create Cipher instance failed.";
LAB_001035f0:
      thunk_EXT_FUN_00002bb0(3,"SECURITY_MODULE",pcVar10);
      goto LAB_001033a0;
    }
    local_a0[0] = 1;
    local_98 = lVar8;
    lVar9 = (**(code **)(*param_1 + 0x30))(param_1,"javax/crypto/Cipher");
    if (lVar13 == 0) {
      uVar5 = (**(code **)(*param_1 + 0x388))(param_1,lVar9,&DAT_0010a9dd,"(ILjava/security/Key;)V")
      ;
      pcVar11 = *(code **)(*param_1 + 0x478);
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x108))(param_1,lVar9,&DAT_0010a9dd,"(ILjava/security/Key;)V")
      ;
      pcVar11 = *(code **)(*param_1 + 0x1f8);
      lVar9 = lVar13;
    }
    (*pcVar11)(param_1,lVar9,uVar5,local_a0);
    lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar9 != 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      pcVar10 = "init Cipher instance with PublicKey failed.";
      goto LAB_001035f0;
    }
    local_a8 = param_3;
    lVar9 = (**(code **)(*param_1 + 0x30))(param_1,"javax/crypto/Cipher");
    if (lVar13 == 0) {
      uVar5 = (**(code **)(*param_1 + 0x388))(param_1,lVar9,"doFinal","([B)[B");
      pcVar11 = *(code **)(*param_1 + 0x3a0);
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x108))(param_1,lVar9,"doFinal","([B)[B");
      pcVar11 = *(code **)(*param_1 + 0x120);
      lVar9 = lVar13;
    }
    uVar5 = (*pcVar11)(param_1,lVar9,uVar5,&local_a8);
    lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar9 != 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      thunk_EXT_FUN_00002bb0(3,"SECURITY_MODULE","encrypt data with Cipher failed.");
    }
  }
  else {
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    thunk_EXT_FUN_00002bb0(3,"SECURITY_MODULE","create KeyFactory instance failed.");
    lVar12 = 0;
    lVar8 = 0;
LAB_0010339c:
    lVar13 = 0;
LAB_001033a0:
    uVar5 = 0;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,lVar2);
  if (lVar3 != 0) {
    (**(code **)(*param_1 + 0xb8))(param_1,lVar3);
  }
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0xb8))(param_1,lVar4);
  }
  if (lVar7 != 0) {
    (**(code **)(*param_1 + 0xb8))(param_1,lVar7);
  }
  if (lVar12 != 0) {
    (**(code **)(*param_1 + 0xb8))(param_1,lVar12);
  }
  if (lVar8 != 0) {
    (**(code **)(*param_1 + 0xb8))(param_1,lVar8);
  }
  if (lVar13 != 0) {
    (**(code **)(*param_1 + 0xb8))(param_1,lVar13);
  }
LAB_00103448:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar5;
  }
  uVar5 = thunk_EXT_FUN_00002bb0();
  return uVar5;
}


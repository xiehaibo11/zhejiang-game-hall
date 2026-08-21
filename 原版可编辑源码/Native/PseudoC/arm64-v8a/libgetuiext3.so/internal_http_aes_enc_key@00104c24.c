
undefined8 internal_http_aes_enc_key(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = thunk_EXT_FUN_00002bb0(DAT_0011d1c0);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = (**(code **)(*param_1 + 0x580))(param_1,0x10);
  (**(code **)(*param_1 + 0x680))(param_1,lVar3,0,0x10,lVar2);
  if (lVar3 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x558))(param_1,lVar3);
    if (iVar1 < 0x101) {
      uVar4 = thunk_EXT_FUN_00002bb0
                        (param_1,
                         "-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA38U5QJKfqpuJrZLFSnJf\nDUKHeTHLsTqby9M4APh5BePUrqOmk9KKMoGbxRrkMl79iHx8yJEfDGvTXiG23KLM\nMyhRHBzLGb3qv1TkLPftkg4cRdc1GEa4Zvr6wBC3HKiq5Rk9NwqJ3TF7SBf6A8nB\nKxzuPmok0ltyBtGpA7cMgRzJjdQ/3+yXfqRDREmDjU/w1sgV/XLDxVUe7jfmGtBj\nbgJzx1Ps5BPzoBYgHa5eeTHrfyhqPPGqwYYYYbPto2jqFOfu/TLTzMq59B9Zw4wO\n4JjS4mi2uM6N9rhlY6/ZNLCAWh5GDIQOU5NgbJqfKHOSVnexlQt/CXP8cNqg2nyg\nZwIDAQAB\n-----END PUBLIC KEY-----"
                         ,lVar3);
      goto LAB_00104ce0;
    }
    thunk_EXT_FUN_00002bb0(6,"SECURITY_MODULE","input data block size limit to 256 bytes");
  }
  uVar4 = 0;
LAB_00104ce0:
  (**(code **)(*param_1 + 0xb8))(param_1,lVar3);
  return uVar4;
}



undefined8 internal_rsa_enc(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x558))(param_1,param_2);
    if (iVar1 < 0x101) {
      uVar2 = thunk_EXT_FUN_00002bb0
                        (param_1,
                         "-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA38U5QJKfqpuJrZLFSnJf\nDUKHeTHLsTqby9M4APh5BePUrqOmk9KKMoGbxRrkMl79iHx8yJEfDGvTXiG23KLM\nMyhRHBzLGb3qv1TkLPftkg4cRdc1GEa4Zvr6wBC3HKiq5Rk9NwqJ3TF7SBf6A8nB\nKxzuPmok0ltyBtGpA7cMgRzJjdQ/3+yXfqRDREmDjU/w1sgV/XLDxVUe7jfmGtBj\nbgJzx1Ps5BPzoBYgHa5eeTHrfyhqPPGqwYYYYbPto2jqFOfu/TLTzMq59B9Zw4wO\n4JjS4mi2uM6N9rhlY6/ZNLCAWh5GDIQOU5NgbJqfKHOSVnexlQt/CXP8cNqg2nyg\nZwIDAQAB\n-----END PUBLIC KEY-----"
                         ,param_2);
      return uVar2;
    }
    thunk_EXT_FUN_00002bb0(6,"SECURITY_MODULE","input data block size limit to 256 bytes");
  }
  return 0;
}


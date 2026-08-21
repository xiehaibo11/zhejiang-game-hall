
long javaObjectCall_getClassName(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (jc_Object != 0) {
LAB_001108d8:
    if (jc_Class != 0) {
LAB_001108e8:
      if (jm_Object_getClass == 0) {
        jm_Object_getClass =
             (**(code **)(*param_1 + 0x108))(param_1,jc_Object,"getClass","()Ljava/lang/Class;");
        lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar1 == 0) {
          if (jm_Object_getClass != 0) goto LAB_001108f8;
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        pcVar3 = "obj get class error";
        goto LAB_00110d18;
      }
LAB_001108f8:
      if (jm_Class_getName == 0) {
        jm_Class_getName =
             (**(code **)(*param_1 + 0x108))(param_1,jc_Class,"getName","()Ljava/lang/String;");
        lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar1 == 0) {
          if (jm_Class_getName != 0) goto LAB_00110908;
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        pcVar3 = "obj get class name error";
      }
      else {
LAB_00110908:
        lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_Object_getClass);
        lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar2 == 0) {
          if (lVar1 != 0) {
            lVar1 = (**(code **)(*param_1 + 0x110))(param_1,lVar1,jm_Class_getName);
            lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
            if (lVar2 == 0) {
              if (lVar1 != 0) {
                lVar1 = (**(code **)(*param_1 + 0x548))(param_1,lVar1,0);
                lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
                if (lVar2 == 0) {
                  if (lVar1 != 0) {
                    return lVar1;
                  }
                }
                else {
                  log2Console(5,"eup","A Java exception has been caught.");
                  (**(code **)(*param_1 + 0x80))(param_1);
                  (**(code **)(*param_1 + 0x88))(param_1);
                }
                pcVar3 = "jstring to char fail!";
                goto LAB_00110d18;
              }
            }
            else {
              log2Console(5,"eup","A Java exception has been caught.");
              (**(code **)(*param_1 + 0x80))(param_1);
              (**(code **)(*param_1 + 0x88))(param_1);
            }
            pcVar3 = "call get calss fail!";
            goto LAB_00110d18;
          }
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        pcVar3 = "call get class fail!";
      }
LAB_00110d18:
      log2Console(6,"eup",pcVar3);
      return 0;
    }
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Class");
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (lVar1 == 0) goto LAB_00110a6c;
      jc_Class = (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
      lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar1 == 0) {
        if (jc_Class != 0) goto LAB_001108e8;
      }
      else {
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
      }
      pcVar3 = "new obj error %s ";
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00110a6c:
      pcVar3 = "find obj error %s ";
    }
    pcVar4 = "java/lang/Class";
    goto LAB_00110a84;
  }
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Object");
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar2 == 0) {
    if (lVar1 == 0) goto LAB_001109e8;
    jc_Object = (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
    lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar1 == 0) {
      if (jc_Object != 0) goto LAB_001108d8;
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar3 = "new cls error %s ";
  }
  else {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
LAB_001109e8:
    pcVar3 = "find cls error %s ";
  }
  pcVar4 = "java/lang/Object";
LAB_00110a84:
  log2Console(6,"eup",pcVar3,pcVar4);
  return 0;
}


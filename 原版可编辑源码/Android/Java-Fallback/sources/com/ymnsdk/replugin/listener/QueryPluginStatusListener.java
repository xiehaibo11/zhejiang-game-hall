package com.ymnsdk.replugin.listener;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface QueryPluginStatusListener {
    void onFailure(int r1, java.lang.String r2);

    void onSuccessAvailable(java.lang.String r1);

    void onSuccessUnAvailable(java.lang.String r1);
}

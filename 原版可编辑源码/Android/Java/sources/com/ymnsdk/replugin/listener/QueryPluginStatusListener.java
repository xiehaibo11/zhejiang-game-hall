package com.ymnsdk.replugin.listener;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface QueryPluginStatusListener {
    void onFailure(int i, String str);

    void onSuccessAvailable(String str);

    void onSuccessUnAvailable(String str);
}

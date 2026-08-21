package com.ymnsdk.replugin.net;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface HttpListener {
    void onComplete(String str);

    void onError(int i, String str);
}

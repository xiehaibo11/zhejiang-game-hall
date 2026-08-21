package com.bianfeng.ymnsdk.feature.protocol;

/* JADX INFO: loaded from: classes.dex */
public interface ICrashFeature {
    void leaveBreadcrumb(String str);

    void reportException(String str, String str2);

    void setCrashUserIdentifier(String str);
}

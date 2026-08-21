package com.bianfeng.ymnsdk.feature.protocol;

public interface ICrashFeature {
    void leaveBreadcrumb(java.lang.String r1);

    void reportException(java.lang.String r1, java.lang.String r2);

    void setCrashUserIdentifier(java.lang.String r1);
}

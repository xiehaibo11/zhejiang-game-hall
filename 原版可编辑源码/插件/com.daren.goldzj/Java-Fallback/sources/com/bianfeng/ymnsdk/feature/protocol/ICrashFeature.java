package com.bianfeng.ymnsdk.feature.protocol;

public interface ICrashFeature {
    void leaveBreadcrumb(String r1);

    void reportException(String r1, String r2);

    void setCrashUserIdentifier(String r1);
}

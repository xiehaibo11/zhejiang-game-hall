package com.huawei.hms.common.internal;

public interface AnyClient {

    public interface CallBack {
        void onCallback(com.huawei.hms.core.aidl.IMessageEntity r1, java.lang.String r2);
    }

    void connect(int r1);

    void connect(int r1, boolean r2);

    void disconnect();

    java.lang.String getSessionId();

    boolean isConnected();

    boolean isConnecting();

    void post(com.huawei.hms.core.aidl.IMessageEntity r1, java.lang.String r2, com.huawei.hms.common.internal.AnyClient.CallBack r3);
}

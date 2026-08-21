package com.huawei.hms.support.api.client;

public interface ApiClient {
    java.lang.String getAppID();

    android.content.Context getContext();

    java.lang.String getCpID();

    java.lang.String getPackageName();

    java.lang.String getSessionId();

    com.huawei.hms.support.api.client.SubAppInfo getSubAppInfo();

    java.lang.String getTransportName();

    boolean isConnected();
}

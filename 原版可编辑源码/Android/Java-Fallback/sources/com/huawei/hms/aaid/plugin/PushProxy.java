package com.huawei.hms.aaid.plugin;

public interface PushProxy {
    void deleteAllToken(android.content.Context r1) throws com.huawei.hms.common.ApiException;

    void deleteToken(android.content.Context r1, java.lang.String r2, java.lang.String r3) throws com.huawei.hms.common.ApiException;

    org.json.JSONObject getPlatform();

    java.lang.String getProxyType();

    void getToken(android.content.Context r1, java.lang.String r2, java.lang.String r3) throws com.huawei.hms.common.ApiException;

    com.huawei.hmf.tasks.Task<java.lang.Void> subscribe(android.content.Context r1, java.lang.String r2, java.lang.String r3);

    com.huawei.hmf.tasks.Task<java.lang.Void> turnOff(android.content.Context r1, java.lang.String r2);

    com.huawei.hmf.tasks.Task<java.lang.Void> turnOn(android.content.Context r1, java.lang.String r2);

    com.huawei.hmf.tasks.Task<java.lang.Void> unsubscribe(android.content.Context r1, java.lang.String r2, java.lang.String r3);
}

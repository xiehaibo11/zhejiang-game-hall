package com.huawei.hms.support.api.client;

public interface AidlApiClient extends com.huawei.hms.support.api.client.ApiClient {
    java.util.List<java.lang.String> getApiNameList();

    com.huawei.hms.core.aidl.d getService();
}

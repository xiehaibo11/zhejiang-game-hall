package com.huawei.updatesdk.service.otaupdate;

public interface CheckUpdateCallBack {
    void onMarketInstallInfo(android.content.Intent r1);

    void onMarketStoreError(int r1);

    void onUpdateInfo(android.content.Intent r1);

    void onUpdateStoreError(int r1);
}

package com.huawei.hms.activity;

public interface IBridgeActivityDelegate {
    int getRequestCode();

    void onBridgeActivityCreate(android.app.Activity r1);

    void onBridgeActivityDestroy();

    boolean onBridgeActivityResult(int r1, int r2, android.content.Intent r3);

    void onBridgeConfigurationChanged();

    void onKeyUp(int r1, android.view.KeyEvent r2);
}

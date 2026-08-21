package com.bianfeng.platform;

import android.app.Activity;
import android.content.Intent;
import com.bianfeng.ymnsdk.YmnSdkWrapper;

@Deprecated
public class PlatformSdkFix extends PlatformSdk {
    protected static PlatformSdkListener listener = new PlatformSdkListener() {
        @Override
        public void onCallBack(int i, String str) {
            YmnSdkWrapper.dispatchMessage(i, str);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public void dismissProgress() {
    }

    @Override
    public String getPlatformId() {
        return null;
    }

    @Override
    public String getPlatformName() {
        return null;
    }

    @Override
    public String getPlatformVersion() {
        return null;
    }

    @Override
    public String getSdkVersion() {
        return null;
    }

    @Override
    protected void hookSelf(Activity activity) {
    }

    @Override
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override
    public boolean isDebugMode() {
        return false;
    }

    @Override
    protected void loadProperties() {
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
    }

    @Override
    public void onNewIntent(Intent intent) {
    }

    @Override
    public void onPause() {
    }

    @Override
    public void onRestart() {
    }

    @Override
    public void onResume() {
    }

    @Override
    public void onStart() {
    }

    @Override
    public void onStop() {
    }

    @Override
    public void release() {
    }

    @Override
    public void setDebugMode(boolean z) {
    }

    @Override
    public void showProgress() {
    }
}

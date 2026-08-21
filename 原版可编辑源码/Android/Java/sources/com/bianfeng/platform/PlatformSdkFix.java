package com.bianfeng.platform;

import android.app.Activity;
import android.content.Intent;
import com.bianfeng.ymnsdk.YmnSdkWrapper;

@Deprecated
public class PlatformSdkFix extends PlatformSdk {
    protected static PlatformSdkListener listener = new PlatformSdkListener() {
        @Override
        public void onCallBack(int code, String msg) {
            YmnSdkWrapper.dispatchMessage(code, msg);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override
    protected void hookSelf(Activity activity) {
    }

    @Override
    protected void loadProperties() {
    }

    @Override
    public void onStart() {
    }

    @Override
    public void onRestart() {
    }

    @Override
    public void onPause() {
    }

    @Override
    public void onResume() {
    }

    @Override
    public void onStop() {
    }

    @Override
    public void release() {
    }

    @Override
    public void onNewIntent(Intent intent) {
    }

    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
    }

    @Override
    public String getSdkVersion() {
        return null;
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
    public void showProgress() {
    }

    @Override
    public void dismissProgress() {
    }

    @Override
    public boolean isDebugMode() {
        return false;
    }

    @Override
    public void setDebugMode(boolean debug) {
    }
}

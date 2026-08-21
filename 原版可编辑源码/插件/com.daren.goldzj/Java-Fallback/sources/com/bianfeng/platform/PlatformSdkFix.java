package com.bianfeng.platform;

import android.app.Activity;
import android.content.Intent;

@Deprecated
public class PlatformSdkFix extends PlatformSdk {
    protected static PlatformSdkListener listener;
    protected Activity activity;

    static {
        listener = new 1();
    }

    public PlatformSdkFix() {
    }

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
    protected void hookSelf(Activity r1) {
    }

    @Override
    public void init(Activity r1) {
        this.activity = r1;
    }

    @Override
    public boolean isDebugMode() {
        return false;
    }

    @Override
    protected void loadProperties() {
    }

    @Override
    public void onActivityResult(int r1, int r2, Intent r3) {
    }

    @Override
    public void onNewIntent(Intent r1) {
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
    public void setDebugMode(boolean r1) {
    }

    @Override
    public void showProgress() {
    }
}

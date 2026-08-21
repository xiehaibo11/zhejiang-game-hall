package com.bianfeng.platform;

import android.app.Activity;
import android.content.Intent;
import com.bianfeng.ymnsdk.YmnSdkWrapper;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class PlatformSdkFix extends PlatformSdk {
    protected static PlatformSdkListener listener = new PlatformSdkListener() { // from class: com.bianfeng.platform.PlatformSdkFix.1
        @Override // com.bianfeng.platform.PlatformSdkListener
        public void onCallBack(int code, String msg) {
            YmnSdkWrapper.dispatchMessage(code, msg);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override // com.bianfeng.platform.PlatformSdk
    protected void hookSelf(Activity activity) {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    protected void loadProperties() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void onStart() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void onRestart() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void onPause() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void onResume() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void onStop() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void release() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void onNewIntent(Intent intent) {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public String getSdkVersion() {
        return null;
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public String getPlatformId() {
        return null;
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public String getPlatformName() {
        return null;
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public String getPlatformVersion() {
        return null;
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void showProgress() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void dismissProgress() {
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public boolean isDebugMode() {
        return false;
    }

    @Override // com.bianfeng.platform.PlatformSdk
    public void setDebugMode(boolean debug) {
    }
}

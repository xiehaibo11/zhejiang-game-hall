package com.mbridge.msdk.scheme.applet;

import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.z;

public abstract class AppletSchemeCallBack implements IAppletSchemeCallBack {
    private static final String TAG = "AppletSchemeCallBack";

    protected abstract void onRequestFailed(int i, String str, String str2);

    protected abstract void onRequestStart();

    protected abstract void onRequestSuccess(String str);

    @Override
    public void onAppletSchemeRequestStart() {
        try {
            onRequestStart();
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.d(TAG, e.getMessage());
            }
        }
    }

    @Override
    public void onAppletSchemeRequestSuccess(String str) {
        try {
            onRequestSuccess(str);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.d(TAG, e.getMessage());
            }
        }
    }

    @Override
    public void onAppletSchemeRequestFailed(int i, String str, String str2) {
        try {
            onRequestFailed(i, str, str2);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.d(TAG, e.getMessage());
            }
        }
    }

    @Override
    public void onNetworkError(int i, String str, String str2) {
        try {
            onRequestFailed(i, str, str2);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.d(TAG, e.getMessage());
            }
        }
    }
}

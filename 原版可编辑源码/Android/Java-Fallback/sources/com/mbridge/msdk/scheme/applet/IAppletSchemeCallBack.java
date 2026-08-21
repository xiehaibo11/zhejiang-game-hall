package com.mbridge.msdk.scheme.applet;

interface IAppletSchemeCallBack extends java.io.Serializable {
    void onAppletSchemeRequestFailed(int r1, java.lang.String r2, java.lang.String r3);

    void onAppletSchemeRequestStart();

    void onAppletSchemeRequestSuccess(java.lang.String r1);

    void onNetworkError(int r1, java.lang.String r2, java.lang.String r3);
}

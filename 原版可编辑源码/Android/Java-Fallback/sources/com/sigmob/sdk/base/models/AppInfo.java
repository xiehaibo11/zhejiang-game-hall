package com.sigmob.sdk.base.models;

public class AppInfo {
    public final java.lang.String appVersion;
    public final java.lang.String os;
    public final java.lang.String sdkVersion;

    public AppInfo(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.sdkVersion = r1
            r0.appVersion = r2
            r0.os = r3
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "appInfo={sdkVersion='"
            r0.append(r1)
            java.lang.String r1 = r3.sdkVersion
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", appVersion='"
            r0.append(r2)
            java.lang.String r2 = r3.appVersion
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", os='"
            r0.append(r2)
            java.lang.String r2 = r3.os
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}

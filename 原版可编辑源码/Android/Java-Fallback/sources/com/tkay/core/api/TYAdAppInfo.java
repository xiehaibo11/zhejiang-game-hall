package com.tkay.core.api;

public abstract class TYAdAppInfo {
    public TYAdAppInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract java.lang.String getAppDownloadCount();

    public abstract java.lang.String getAppName();

    public abstract java.lang.String getAppPackageName();

    public abstract java.lang.String getAppPermissonUrl();

    public abstract java.lang.String getAppPrivacyUrl();

    public abstract long getAppSize();

    public abstract java.lang.String getAppVersion();

    public abstract java.lang.String getPublisher();

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Publisher: "
            r0.<init>(r1)
            java.lang.String r1 = r3.getPublisher()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = ""
            if (r1 == 0) goto L15
            r1 = r2
            goto L19
        L15:
            java.lang.String r1 = r3.getPublisher()
        L19:
            r0.append(r1)
            java.lang.String r1 = " | AppVersion: "
            r0.append(r1)
            java.lang.String r1 = r3.getAppVersion()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2d
            r1 = r2
            goto L31
        L2d:
            java.lang.String r1 = r3.getAppVersion()
        L31:
            r0.append(r1)
            java.lang.String r1 = " | AppPrivacyUrl: "
            r0.append(r1)
            java.lang.String r1 = r3.getAppPrivacyUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L45
            r1 = r2
            goto L49
        L45:
            java.lang.String r1 = r3.getAppPrivacyUrl()
        L49:
            r0.append(r1)
            java.lang.String r1 = " | AppPermissonUrl: "
            r0.append(r1)
            java.lang.String r1 = r3.getAppPermissonUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L5d
            r1 = r2
            goto L61
        L5d:
            java.lang.String r1 = r3.getAppPermissonUrl()
        L61:
            r0.append(r1)
            java.lang.String r1 = " | AppName: "
            r0.append(r1)
            java.lang.String r1 = r3.getAppName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L75
            r1 = r2
            goto L79
        L75:
            java.lang.String r1 = r3.getAppName()
        L79:
            r0.append(r1)
            java.lang.String r1 = " | AppPackageName: "
            r0.append(r1)
            java.lang.String r1 = r3.getAppPackageName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L8c
            goto L90
        L8c:
            java.lang.String r2 = r3.getAppPackageName()
        L90:
            r0.append(r2)
            java.lang.String r1 = " | AppSize: "
            r0.append(r1)
            long r1 = r3.getAppSize()
            r0.append(r1)
            java.lang.String r1 = " | AppDownloadCount: "
            r0.append(r1)
            java.lang.String r1 = r3.getAppDownloadCount()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}

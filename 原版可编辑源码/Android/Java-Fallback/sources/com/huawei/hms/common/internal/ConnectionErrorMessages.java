package com.huawei.hms.common.internal;

public class ConnectionErrorMessages {
    private static final java.util.Map<java.lang.String, java.lang.String> map = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.hms.common.internal.ConnectionErrorMessages.map = r0
            return
    }

    public ConnectionErrorMessages() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getErrorDialogButtonMessage(android.app.Activity r1, int r2) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto Ld
            android.content.Context r1 = r1.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r1)
        Ld:
            r1 = 1
            if (r2 == r1) goto L21
            r1 = 2
            if (r2 == r1) goto L1a
            java.lang.String r1 = "hms_confirm"
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r1)
            return r1
        L1a:
            java.lang.String r1 = "hms_update"
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r1)
            return r1
        L21:
            java.lang.String r1 = "hms_install"
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r1)
            return r1
    }

    public static java.lang.String getErrorMessage(android.app.Activity r1, int r2) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto Ld
            android.content.Context r1 = r1.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r1)
        Ld:
            java.lang.String r1 = "hms_update_title"
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r1)
            r0 = 1
            if (r2 == r0) goto L1a
            r0 = 2
            if (r2 == r0) goto L1a
            r1 = 0
        L1a:
            return r1
    }

    public static java.lang.String getErrorTitle(android.app.Activity r3, int r4) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto Ld
            android.content.Context r3 = r3.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r3)
        Ld:
            r3 = 1
            if (r4 == r3) goto L46
            r3 = 2
            if (r4 == r3) goto L3f
            r3 = 3
            if (r4 == r3) goto L38
            r3 = 9
            r0 = 0
            java.lang.String r1 = "HuaweiApiAvailability"
            if (r4 == r3) goto L32
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r2 = "Unexpected error code "
            r3.append(r2)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
            return r0
        L32:
            java.lang.String r3 = "Huawei Mobile Services is invalid. Cannot recover."
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
            return r0
        L38:
            java.lang.String r3 = "hms_bindfaildlg_message"
            java.lang.String r3 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r3)
            return r3
        L3f:
            java.lang.String r3 = "hms_update_message"
            java.lang.String r3 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r3)
            return r3
        L46:
            java.lang.String r3 = "hms_install_message"
            java.lang.String r3 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r3)
            return r3
    }
}

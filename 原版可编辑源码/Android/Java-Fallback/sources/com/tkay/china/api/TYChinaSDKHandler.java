package com.tkay.china.api;

public class TYChinaSDKHandler {
    private static boolean allowUserOaidSDK = true;


    static {
            return
    }

    public TYChinaSDKHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void handleInitOaidSDK(android.content.Context r2, com.tkay.china.api.OaidSDKCallbackListener r3) {
            boolean r0 = com.tkay.china.api.TYChinaSDKHandler.allowUserOaidSDK     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto Lc
            if (r3 == 0) goto Lb
            r2 = 0
            r0 = 0
            r3.OnSupport(r2, r0)     // Catch: java.lang.Throwable -> L1a
        Lb:
            return
        Lc:
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L1a
            r0 = 1
            com.tkay.china.api.TYChinaSDKHandler$1 r1 = new com.tkay.china.api.TYChinaSDKHandler$1     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1a
            com.bun.miitmdid.core.MdidSdkHelper.InitSdk(r2, r0, r1)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public static void requestPermissionIfNecessary(android.content.Context r5) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            java.lang.String r1 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            if (r5 == 0) goto L3d
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r1 < r2) goto L3d
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            r2 = 1000000000(0x3b9aca00, float:0.0047237873)
            int r1 = r1.nextInt(r2)
            android.content.Intent r2 = new android.content.Intent
            java.lang.Class<com.tkay.china.activity.TransparentActivity> r3 = com.tkay.china.activity.TransparentActivity.class
            r2.<init>(r5, r3)
            r3 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r4 = "type"
            r2.putExtra(r4, r3)
            java.lang.String r3 = "request_code"
            r2.putExtra(r3, r1)
            java.lang.String r1 = "permission_list"
            r2.putExtra(r1, r0)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r0)
            r5.startActivity(r2)
            return
        L3d:
            java.lang.String r5 = "PermissionManager"
            java.lang.String r0 = "Build.VERSION.SDK_INT below 23 does not require permission"
            android.util.Log.i(r5, r0)
            return
    }

    public static void setAllowUseMdidSDK(boolean r0) {
            com.tkay.china.api.TYChinaSDKHandler.allowUserOaidSDK = r0
            return
    }
}

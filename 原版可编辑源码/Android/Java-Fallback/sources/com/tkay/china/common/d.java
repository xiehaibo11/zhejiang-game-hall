package com.tkay.china.common;

public final class d {
    public static final java.lang.String a = "android.permission.READ_PHONE_STATE";
    public static final java.lang.String b = "android.permission.WRITE_EXTERNAL_STORAGE";

    public interface a {
        void a();
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.content.Context r3, com.tkay.china.common.d.a r4, java.lang.String... r5) {
            if (r3 == 0) goto L40
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L40
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            r1 = 1000000000(0x3b9aca00, float:0.0047237873)
            int r0 = r0.nextInt(r1)
            if (r4 == 0) goto L1f
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.tkay.china.common.d$a> r1 = com.tkay.china.activity.TransparentActivity.e
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            r1.put(r2, r4)
        L1f:
            android.content.Intent r4 = new android.content.Intent
            java.lang.Class<com.tkay.china.activity.TransparentActivity> r1 = com.tkay.china.activity.TransparentActivity.class
            r4.<init>(r3, r1)
            r1 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r2 = "type"
            r4.putExtra(r2, r1)
            java.lang.String r1 = "request_code"
            r4.putExtra(r1, r0)
            java.lang.String r0 = "permission_list"
            r4.putExtra(r0, r5)
            r5 = 268435456(0x10000000, float:2.524355E-29)
            r4.setFlags(r5)
            r3.startActivity(r4)
            return
        L40:
            java.lang.String r3 = "PermissionManager"
            java.lang.String r4 = "Build.VERSION.SDK_INT below 23 does not require permission"
            android.util.Log.i(r3, r4)
            return
    }

    public static boolean a(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            int r1 = android.support.v4.app.ActivityCompat.checkSelfPermission(r1, r2)     // Catch: java.lang.Throwable -> La
            if (r1 != 0) goto L9
            r1 = 1
            return r1
        L9:
            return r0
        La:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }
}

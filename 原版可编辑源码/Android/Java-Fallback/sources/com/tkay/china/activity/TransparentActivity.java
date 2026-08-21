package com.tkay.china.activity;

public class TransparentActivity extends android.app.Activity {
    public static final java.lang.String a = "type";
    public static final java.lang.String b = "request_code";
    public static final int c = 1000;
    public static final java.lang.String d = "permission_list";
    public static final java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.tkay.china.common.d.a> e = null;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.tkay.china.activity.TransparentActivity.e = r0
            return
    }

    public TransparentActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.content.Intent r4 = r3.getIntent()
            r0 = 0
            java.lang.String r1 = "type"
            int r1 = r4.getIntExtra(r1, r0)
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r1 != r2) goto L22
            java.lang.String r1 = "permission_list"
            java.lang.String[] r1 = r4.getStringArrayExtra(r1)
            java.lang.String r2 = "request_code"
            int r4 = r4.getIntExtra(r2, r0)
            android.support.v4.app.ActivityCompat.requestPermissions(r3, r1, r4)
            return
        L22:
            r3.finish()
            return
    }

    @Override
    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            super.onRequestPermissionsResult(r1, r2, r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.tkay.china.common.d$a> r2 = com.tkay.china.activity.TransparentActivity.e
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)
            java.lang.Object r2 = r2.get(r3)
            com.tkay.china.common.d$a r2 = (com.tkay.china.common.d.a) r2
            if (r2 == 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.tkay.china.common.d$a> r2 = com.tkay.china.activity.TransparentActivity.e
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2.remove(r1)
        L1a:
            r0.finish()
            return
    }
}

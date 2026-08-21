package com.reyun.tracking.sdk;

final class f implements com.reyun.tracking.utils.n {
    final java.util.Map a;

    f(java.util.Map r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a(int r4, java.lang.Object r5) {
            r3 = this;
            java.lang.String r4 = ""
            android.os.Handler r0 = com.reyun.tracking.sdk.Tracking.access$1000()
            if (r0 != 0) goto L9
            return
        L9:
            r0 = 0
            org.json.JSONObject r5 = (org.json.JSONObject) r5     // Catch: org.json.JSONException -> L14
            java.lang.String r2 = "ts"
            java.lang.String r5 = r5.getString(r2)     // Catch: org.json.JSONException -> L14
            goto L15
        L14:
            r5 = r4
        L15:
            if (r5 != r4) goto L18
            goto L22
        L18:
            long r4 = java.lang.Long.parseLong(r5)
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r4 - r0
        L22:
            android.os.Handler r4 = com.reyun.tracking.sdk.Tracking.access$1000()
            android.os.Message r4 = r4.obtainMessage()
            java.util.Map r5 = r3.a
            r4.obj = r5
            int r5 = (int) r0
            r4.arg1 = r5
            r5 = 2
            r4.what = r5
            android.os.Handler r5 = com.reyun.tracking.sdk.Tracking.access$1000()
            r5.sendMessage(r4)
            return
    }

    @Override
    public void a(java.lang.Throwable r1, java.lang.String r2) {
            r0 = this;
            android.os.Handler r1 = com.reyun.tracking.sdk.Tracking.access$1000()
            if (r1 != 0) goto L7
            return
        L7:
            android.os.Handler r1 = com.reyun.tracking.sdk.Tracking.access$1000()
            r2 = 0
            r1.removeCallbacksAndMessages(r2)
            android.os.Handler r1 = com.reyun.tracking.sdk.Tracking.access$1000()
            android.os.Message r1 = r1.obtainMessage()
            r2 = 1
            r1.what = r2
            java.util.Map r2 = r0.a
            r1.obj = r2
            android.os.Handler r2 = com.reyun.tracking.sdk.Tracking.access$1000()
            r2.sendMessage(r1)
            return
    }
}

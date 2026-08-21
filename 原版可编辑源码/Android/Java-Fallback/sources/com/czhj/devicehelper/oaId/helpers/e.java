package com.czhj.devicehelper.oaId.helpers;

public class e {
    private android.content.Context a;

    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public java.lang.String a() {
            r5 = this;
            java.lang.String r0 = "content://cn.nubia.identity/identity"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r1 = 0
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4d
            r3 = 17
            java.lang.String r4 = "getOAID"
            if (r2 <= r3) goto L2d
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L4d
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L4d
            android.content.ContentProviderClient r0 = r2.acquireContentProviderClient(r0)     // Catch: java.lang.Exception -> L4d
            android.os.Bundle r2 = r0.call(r4, r1, r1)     // Catch: java.lang.Exception -> L4d
            if (r0 == 0) goto L37
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4d
            r4 = 24
            if (r3 < r4) goto L29
            r0.close()     // Catch: java.lang.Exception -> L4d
            goto L37
        L29:
            r0.release()     // Catch: java.lang.Exception -> L4d
            goto L37
        L2d:
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L4d
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L4d
            android.os.Bundle r2 = r2.call(r0, r4, r1, r1)     // Catch: java.lang.Exception -> L4d
        L37:
            java.lang.String r0 = "code"
            r3 = -1
            int r0 = r2.getInt(r0, r3)     // Catch: java.lang.Exception -> L4d
            if (r0 != 0) goto L47
            java.lang.String r0 = "id"
            java.lang.String r0 = r2.getString(r0)     // Catch: java.lang.Exception -> L4d
            return r0
        L47:
            java.lang.String r0 = "message"
            r2.getString(r0)     // Catch: java.lang.Exception -> L4d
            return r1
        L4d:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            return r1
    }
}

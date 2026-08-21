package com.mbridge.msdk.optimize.a.a;

public final class d {
    private android.content.Context a;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public final java.lang.String a() {
            r5 = this;
            r0 = 0
            java.lang.String r1 = "content://cn.nubia.identity/identity"
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            r3 = 17
            java.lang.String r4 = "getOAID"
            if (r2 <= r3) goto L2d
            android.content.Context r2 = r5.a     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            android.content.ContentProviderClient r1 = r2.acquireContentProviderClient(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            android.os.Bundle r2 = r1.call(r4, r0, r0)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            if (r1 == 0) goto L37
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            r4 = 24
            if (r3 < r4) goto L29
            r1.close()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            goto L37
        L29:
            r1.release()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            goto L37
        L2d:
            android.content.Context r2 = r5.a     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
            android.os.Bundle r2 = r2.call(r1, r4, r0, r0)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
        L37:
            r1 = -1
            if (r2 == 0) goto L40
            java.lang.String r3 = "code"
            int r1 = r2.getInt(r3, r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
        L40:
            if (r1 != 0) goto L48
            java.lang.String r1 = "id"
            java.lang.String r0 = r2.getString(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4e
        L48:
            return r0
        L49:
            r1 = move-exception
            r1.printStackTrace()
            goto L52
        L4e:
            r1 = move-exception
            r1.printStackTrace()
        L52:
            return r0
    }
}

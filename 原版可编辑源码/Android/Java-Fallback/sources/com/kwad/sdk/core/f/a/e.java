package com.kwad.sdk.core.f.a;

public final class e {
    private android.content.Context mContext;

    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    public final java.lang.String getOAID() {
            r6 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "content://cn.nubia.identity/identity"
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Exception -> L60
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L60
            r3 = 17
            java.lang.String r4 = "getOAID"
            r5 = 0
            if (r2 <= r3) goto L2d
            android.content.Context r2 = r6.mContext     // Catch: java.lang.Exception -> L60
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L60
            android.content.ContentProviderClient r1 = r2.acquireContentProviderClient(r1)     // Catch: java.lang.Exception -> L60
            android.os.Bundle r2 = r1.call(r4, r5, r5)     // Catch: java.lang.Exception -> L60
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L60
            r4 = 24
            if (r3 < r4) goto L29
            r1.close()     // Catch: java.lang.Exception -> L60
            goto L37
        L29:
            r1.release()     // Catch: java.lang.Exception -> L60
            goto L37
        L2d:
            android.content.Context r2 = r6.mContext     // Catch: java.lang.Exception -> L60
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L60
            android.os.Bundle r2 = r2.call(r1, r4, r5, r5)     // Catch: java.lang.Exception -> L60
        L37:
            if (r2 == 0) goto L60
            java.lang.String r1 = "code"
            r3 = -1
            int r1 = r2.getInt(r1, r3)     // Catch: java.lang.Exception -> L60
            if (r1 != 0) goto L48
            java.lang.String r1 = "id"
            java.lang.String r0 = r2.getString(r1)     // Catch: java.lang.Exception -> L60
        L48:
            java.lang.String r1 = "message"
            java.lang.String r1 = r2.getString(r1)     // Catch: java.lang.Exception -> L60
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L60
            java.lang.String r3 = "getOAID oaid:"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L60
            r2.append(r0)     // Catch: java.lang.Exception -> L60
            java.lang.String r3 = "faledMsg:"
            r2.append(r3)     // Catch: java.lang.Exception -> L60
            r2.append(r1)     // Catch: java.lang.Exception -> L60
        L60:
            return r0
    }
}

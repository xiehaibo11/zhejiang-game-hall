package com.czhj.devicehelper.oaId.helpers;

public class d {
    private android.content.Context a;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private java.lang.String a(android.database.Cursor r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.isClosed()
            if (r1 == 0) goto Lb
            return r0
        Lb:
            r3.moveToFirst()
            java.lang.String r1 = "value"
            int r1 = r3.getColumnIndex(r1)
            if (r1 <= 0) goto L1a
            java.lang.String r0 = r3.getString(r1)
        L1a:
            return r0
    }

    private boolean a() {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L12
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L12
            if (r1 == 0) goto L12
            java.lang.String r2 = "com.meizu.flyme.openidsdk"
            android.content.pm.ProviderInfo r1 = r1.resolveContentProvider(r2, r0)     // Catch: java.lang.Exception -> L12
            if (r1 == 0) goto L12
            r0 = 1
        L12:
            return r0
    }

    public void a(com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r8) {
            r7 = this;
            boolean r0 = r7.a()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r0 = "content://com.meizu.flyme.openidsdk/"
            android.net.Uri r2 = android.net.Uri.parse(r0)
            android.content.Context r0 = r7.a
            android.content.ContentResolver r1 = r0.getContentResolver()
            r3 = 0
            r4 = 0
            java.lang.String r0 = "oaid"
            java.lang.String[] r5 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L2d
            r6 = 0
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r7.a(r0)     // Catch: java.lang.Throwable -> L2d
            if (r8 == 0) goto L29
            r8.OnIdsAvalid(r1)     // Catch: java.lang.Throwable -> L2d
        L29:
            r0.close()     // Catch: java.lang.Throwable -> L2d
            goto L35
        L2d:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r8)
        L35:
            return
    }
}

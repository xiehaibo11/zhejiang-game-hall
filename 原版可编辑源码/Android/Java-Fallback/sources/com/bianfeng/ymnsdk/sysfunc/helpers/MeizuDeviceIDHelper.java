package com.bianfeng.ymnsdk.sysfunc.helpers;

public class MeizuDeviceIDHelper {
    private android.content.Context mContext;

    public MeizuDeviceIDHelper(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    private java.lang.String getOaid(android.database.Cursor r3) {
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
            java.lang.String r1 = "code"
            int r1 = r3.getColumnIndex(r1)
            if (r1 <= 0) goto L25
            r3.getInt(r1)
        L25:
            java.lang.String r1 = "expired"
            int r1 = r3.getColumnIndex(r1)
            if (r1 <= 0) goto L30
            r3.getLong(r1)
        L30:
            return r0
    }

    public void getMeizuID(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater r8) {
            r7 = this;
            android.content.Context r0 = r7.mContext     // Catch: java.lang.Exception -> Ld
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = "com.meizu.flyme.openidsdk"
            r2 = 0
            r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> Ld
            goto L18
        Ld:
            r0 = move-exception
            java.lang.String r1 = "Wooo"
            java.lang.String r2 = "intentForID getMEIZID service not found;"
            android.util.Log.i(r1, r2)
            r0.printStackTrace()
        L18:
            java.lang.String r0 = "content://com.meizu.flyme.openidsdk/"
            android.net.Uri r2 = android.net.Uri.parse(r0)
            android.content.Context r0 = r7.mContext
            android.content.ContentResolver r1 = r0.getContentResolver()
            r3 = 0
            r4 = 0
            java.lang.String r0 = "oaid"
            java.lang.String[] r5 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L3e
            r6 = 0
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = r7.getOaid(r0)     // Catch: java.lang.Throwable -> L3e
            if (r8 == 0) goto L3a
            r8.OnIdsAvalid(r1)     // Catch: java.lang.Throwable -> L3e
        L3a:
            r0.close()     // Catch: java.lang.Throwable -> L3e
            goto L49
        L3e:
            r0 = move-exception
            if (r8 == 0) goto L46
            java.lang.String r1 = ""
            r8.OnIdsAvalid(r1)
        L46:
            r0.printStackTrace()
        L49:
            return
    }
}

package com.alipay.sdk.m.p0;

public class b {
    public static final java.lang.String b = "VMS_IDLG_SDK_DB";
    public static final java.lang.String c = "content://com.vivo.vms.IdProvider/IdentifierId";
    public static final java.lang.String d = "value";
    public static final java.lang.String e = "OAID";
    public static final java.lang.String f = "AAID";
    public static final java.lang.String g = "VAID";
    public static final java.lang.String h = "OAIDSTATUS";
    public static final int i = 0;
    public static final int j = 1;
    public static final int k = 2;
    public static final int l = 4;
    public android.content.Context a;

    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public java.lang.String a(int r8, java.lang.String r9) {
            r7 = this;
            r0 = 0
            if (r8 == 0) goto L41
            r1 = 1
            if (r8 == r1) goto L2b
            r1 = 2
            if (r8 == r1) goto L15
            r9 = 4
            if (r8 == r9) goto Le
            r2 = r0
            goto L48
        Le:
            java.lang.String r8 = "content://com.vivo.vms.IdProvider/IdentifierId/OAIDSTATUS"
            android.net.Uri r8 = android.net.Uri.parse(r8)
            goto L47
        L15:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/AAID_"
            r8.append(r1)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.net.Uri r8 = android.net.Uri.parse(r8)
            goto L47
        L2b:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/VAID_"
            r8.append(r1)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.net.Uri r8 = android.net.Uri.parse(r8)
            goto L47
        L41:
            java.lang.String r8 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r8 = android.net.Uri.parse(r8)
        L47:
            r2 = r8
        L48:
            android.content.Context r8 = r7.a
            android.content.ContentResolver r1 = r8.getContentResolver()
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            android.database.Cursor r8 = r1.query(r2, r3, r4, r5, r6)
            if (r8 == 0) goto L6d
            boolean r9 = r8.moveToNext()
            if (r9 == 0) goto L69
            java.lang.String r9 = "value"
            int r9 = r8.getColumnIndex(r9)
            java.lang.String r9 = r8.getString(r9)
            r0 = r9
        L69:
            r8.close()
            goto L74
        L6d:
            java.lang.String r8 = "VMS_IDLG_SDK_DB"
            java.lang.String r9 = "return cursor is null,return"
            android.util.Log.d(r8, r9)
        L74:
            return r0
    }
}

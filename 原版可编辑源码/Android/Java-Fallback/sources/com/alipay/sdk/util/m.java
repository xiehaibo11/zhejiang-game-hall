package com.alipay.sdk.util;

public class m {
    private static final java.lang.String a = "content://com.alipay.android.app.settings.data.ServerProvider/current_server";

    public m() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r1) {
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()
            if (r0 == 0) goto L9
            java.lang.String r1 = "https://mobilegw.alipaydev.com/mgw.htm"
            return r1
        L9:
            if (r1 != 0) goto Le
            java.lang.String r1 = com.alipay.sdk.cons.a.a
            return r1
        Le:
            java.lang.String r1 = com.alipay.sdk.cons.a.a
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L18
            java.lang.String r1 = com.alipay.sdk.cons.a.a
        L18:
            return r1
    }

    private static java.lang.String b(android.content.Context r6) {
            android.content.ContentResolver r0 = r6.getContentResolver()
            java.lang.String r6 = "content://com.alipay.android.app.settings.data.ServerProvider/current_server"
            android.net.Uri r1 = android.net.Uri.parse(r6)
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            android.database.Cursor r6 = r0.query(r1, r2, r3, r4, r5)
            r0 = 0
            if (r6 == 0) goto L2e
            int r1 = r6.getCount()
            if (r1 <= 0) goto L2e
            boolean r1 = r6.moveToFirst()
            if (r1 == 0) goto L2b
            java.lang.String r0 = "url"
            int r0 = r6.getColumnIndex(r0)
            java.lang.String r0 = r6.getString(r0)
        L2b:
            r6.close()
        L2e:
            return r0
    }
}

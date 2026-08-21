package com.alipay.sdk.widget;

public class e {
    private static boolean a;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.alipay.sdk.widget.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.app.AlertDialog.Builder a(android.content.Context r0, java.lang.String r1, java.lang.String r2, android.content.DialogInterface.OnClickListener r3, java.lang.String r4, android.content.DialogInterface.OnClickListener r5) {
            android.app.AlertDialog$Builder r1 = new android.app.AlertDialog$Builder
            r1.<init>(r0)
            boolean r0 = com.alipay.sdk.widget.e.a
            if (r0 == 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L14
            if (r5 == 0) goto L14
            r1.setPositiveButton(r4, r5)
        L14:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L36
            if (r3 == 0) goto L36
            r1.setNegativeButton(r2, r3)
            goto L36
        L20:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L2b
            if (r3 == 0) goto L2b
            r1.setPositiveButton(r2, r3)
        L2b:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L36
            if (r5 == 0) goto L36
            r1.setNegativeButton(r4, r5)
        L36:
            return r1
    }

    public static android.app.Dialog a(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, android.content.DialogInterface.OnClickListener r10, java.lang.String r11, android.content.DialogInterface.OnClickListener r12) {
            r0 = r6
            r1 = r7
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            android.app.AlertDialog$Builder r6 = a(r0, r1, r2, r3, r4, r5)
            r6.setTitle(r7)
            r6.setMessage(r8)
            android.app.AlertDialog r6 = r6.create()
            r7 = 0
            r6.setCanceledOnTouchOutside(r7)
            com.alipay.sdk.widget.f r7 = new com.alipay.sdk.widget.f
            r7.<init>()
            r6.setOnKeyListener(r7)
            r6.show()     // Catch: java.lang.Throwable -> L24
            goto L2a
        L24:
            r7 = move-exception
            java.lang.String r8 = "msp"
            com.alipay.sdk.util.c.a(r8, r7)
        L2a:
            return r6
    }
}

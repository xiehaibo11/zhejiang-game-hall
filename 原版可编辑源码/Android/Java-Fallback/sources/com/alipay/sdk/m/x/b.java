package com.alipay.sdk.m.x;

public class b {

    public static class a implements android.content.DialogInterface.OnKeyListener {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean onKey(android.content.DialogInterface r1, int r2, android.view.KeyEvent r3) {
                r0 = this;
                r1 = 4
                if (r2 != r1) goto L5
                r1 = 1
                goto L6
            L5:
                r1 = 0
            L6:
                return r1
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.app.AlertDialog.Builder a(android.content.Context r0, java.lang.String r1, java.lang.String r2, android.content.DialogInterface.OnClickListener r3, java.lang.String r4, android.content.DialogInterface.OnClickListener r5) {
            android.app.AlertDialog$Builder r1 = new android.app.AlertDialog$Builder
            r1.<init>(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L10
            if (r5 == 0) goto L10
            r1.setPositiveButton(r4, r5)
        L10:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1b
            if (r3 == 0) goto L1b
            r1.setNegativeButton(r2, r3)
        L1b:
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
            com.alipay.sdk.m.x.b$a r7 = new com.alipay.sdk.m.x.b$a
            r7.<init>()
            r6.setOnKeyListener(r7)
            r6.show()     // Catch: java.lang.Throwable -> L24
            goto L2c
        L24:
            r7 = move-exception
            java.lang.String r8 = "mspl"
            java.lang.String r9 = "showDialog "
            com.alipay.sdk.m.u.e.a(r8, r9, r7)
        L2c:
            return r6
    }
}

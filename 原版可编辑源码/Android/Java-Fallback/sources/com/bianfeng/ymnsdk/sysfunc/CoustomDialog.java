package com.bianfeng.ymnsdk.sysfunc;

public class CoustomDialog {




    public CoustomDialog() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void sysMessageBox(android.app.Activity r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r8) {
            java.lang.String r0 = "\\|"
            java.lang.String[] r7 = r7.split(r0)
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            r0.<init>(r4)
            r4 = 0
            r0.setCancelable(r4)
            int r1 = r7.length
            if (r1 <= 0) goto L21
            r2 = r7[r4]
            if (r2 == 0) goto L21
            r4 = r7[r4]
            com.bianfeng.ymnsdk.sysfunc.CoustomDialog$1 r2 = new com.bianfeng.ymnsdk.sysfunc.CoustomDialog$1
            r2.<init>(r8)
            r0.setPositiveButton(r4, r2)
            r4 = 1
        L21:
            if (r4 >= r1) goto L34
            r2 = r7[r4]
            if (r2 == 0) goto L34
            int r2 = r4 + 1
            r4 = r7[r4]
            com.bianfeng.ymnsdk.sysfunc.CoustomDialog$2 r3 = new com.bianfeng.ymnsdk.sysfunc.CoustomDialog$2
            r3.<init>(r8)
            r0.setNeutralButton(r4, r3)
            r4 = r2
        L34:
            if (r4 >= r1) goto L44
            r1 = r7[r4]
            if (r1 == 0) goto L44
            r4 = r7[r4]
            com.bianfeng.ymnsdk.sysfunc.CoustomDialog$3 r7 = new com.bianfeng.ymnsdk.sysfunc.CoustomDialog$3
            r7.<init>(r8)
            r0.setNegativeButton(r4, r7)
        L44:
            r0.setTitle(r5)
            r4 = 17301659(0x108009b, float:2.497969E-38)
            r0.setIcon(r4)
            r0.setMessage(r6)
            r0.show()
            return
    }
}

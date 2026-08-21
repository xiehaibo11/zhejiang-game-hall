package com.kuaishou.weapon.p0;

public class bw {
    private static java.lang.String a = "Y29tLmt3YWkud2VhcG9uLmNvbmp1cmU=\n";
    private static java.lang.String b = "Y29tLmt3YWkud2VhcG9uLmNvbmp1cmU=\n";

    static {
            r0 = 2
            java.lang.String r1 = "Y29tLmt3YWkud2VhcG9uLmNvbmp1cmU=\n"
            java.lang.String r1 = com.kuaishou.weapon.p0.c.b(r1, r0)
            com.kuaishou.weapon.p0.bw.a = r1
            java.lang.String r1 = com.kuaishou.weapon.p0.bw.b
            java.lang.String r0 = com.kuaishou.weapon.p0.c.b(r1, r0)
            com.kuaishou.weapon.p0.bw.b = r0
            return
    }

    public bw() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r5) {
            java.lang.String r0 = d(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "0"
            java.lang.String r2 = "1"
            if (r0 == 0) goto L10
            r0 = r1
            goto L11
        L10:
            r0 = r2
        L11:
            java.lang.String r3 = c(r5)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L28
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>(r1)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            goto L38
        L28:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            b(r5, r3)
            r5 = r0
        L38:
            return r5
    }

    public static void a(android.content.Context r2, java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L1a
            r1 = 23
            if (r0 < r1) goto L11
            android.content.Context r0 = r2.getApplicationContext()     // Catch: java.lang.Exception -> L1a
            boolean r0 = android.provider.Settings.System.canWrite(r0)     // Catch: java.lang.Exception -> L1a
            if (r0 != 0) goto L11
            return
        L11:
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L1a
            java.lang.String r0 = com.kuaishou.weapon.p0.bw.a     // Catch: java.lang.Exception -> L1a
            android.provider.Settings.System.putString(r2, r0, r3)     // Catch: java.lang.Exception -> L1a
        L1a:
            return
    }

    public static java.lang.String b(android.content.Context r3) {
            java.lang.String r0 = c(r3)
            java.lang.String r1 = d(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L15
            boolean r2 = android.text.TextUtils.equals(r0, r1)
            if (r2 == 0) goto L15
            return r0
        L15:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L1f
            b(r3, r0)
            return r0
        L1f:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L29
            a(r3, r1)
            return r1
        L29:
            java.lang.String r3 = ""
            return r3
    }

    public static void b(android.content.Context r0, java.lang.String r1) {
            com.kuaishou.weapon.p0.df r0 = com.kuaishou.weapon.p0.df.a(r0)
            r0.d(r1)
            return
    }

    public static java.lang.String c(android.content.Context r1) {
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = com.kuaishou.weapon.p0.bw.a     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = android.provider.Settings.System.getString(r1, r0)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String d(android.content.Context r0) {
            com.kuaishou.weapon.p0.df r0 = com.kuaishou.weapon.p0.df.a(r0)     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }
}

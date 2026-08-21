package com.czhj.devicehelper.cnadId;

public class a {

    static class 1 {
    }

    private static class a {
        private static final com.czhj.devicehelper.cnadId.a a = null;

        static {
                com.czhj.devicehelper.cnadId.a r0 = new com.czhj.devicehelper.cnadId.a
                r1 = 0
                r0.<init>(r1)
                com.czhj.devicehelper.cnadId.a.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.czhj.devicehelper.cnadId.a a() {
                com.czhj.devicehelper.cnadId.a r0 = com.czhj.devicehelper.cnadId.a.a.a
                return r0
        }
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    a(com.czhj.devicehelper.cnadId.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.czhj.devicehelper.cnadId.a a() {
            com.czhj.devicehelper.cnadId.a r0 = com.czhj.devicehelper.cnadId.a.a.a()
            return r0
    }

    private java.lang.String b(android.content.Context r2) {
            r1 = this;
            android.content.ContentResolver r2 = r2.getContentResolver()
            java.lang.String r0 = "ZHVzY2Lk"
            java.lang.String r2 = android.provider.Settings.System.getString(r2, r0)
            return r2
    }

    private java.lang.String c(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = r3.getPackageName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "_dna"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            java.lang.String r0 = "NA"
            java.lang.String r1 = "ZHVzY2Lk"
            java.lang.String r3 = r3.getString(r1, r0)
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L29
            r3 = 0
        L29:
            return r3
    }

    private java.lang.String d(android.content.Context r4) {
            r3 = this;
            java.lang.String r4 = "/sdcard/Android/ZHVzY2Lk"
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L35
            r1.<init>(r4)     // Catch: java.lang.Exception -> L35
            boolean r4 = r1.isDirectory()     // Catch: java.lang.Exception -> L35
            if (r4 != 0) goto L2f
            boolean r4 = r1.isFile()     // Catch: java.lang.Exception -> L35
            if (r4 != 0) goto L15
            goto L2f
        L15:
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L35
            r4.<init>(r1)     // Catch: java.lang.Exception -> L35
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L35
            r1.<init>(r4)     // Catch: java.lang.Exception -> L35
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L35
            r2.<init>(r1)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto L2b
            r0 = r1
        L2b:
            r4.close()     // Catch: java.lang.Exception -> L35
            goto L3d
        L2f:
            java.lang.String r4 = "The File doesn't not exist."
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Exception -> L35
            return r0
        L35:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L3d:
            return r0
    }

    public java.lang.String a(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = r1.b(r2)
            if (r0 == 0) goto L7
            return r0
        L7:
            java.lang.String r0 = r1.c(r2)
            if (r0 == 0) goto Le
            return r0
        Le:
            java.lang.String r2 = r1.d(r2)
            return r2
    }
}

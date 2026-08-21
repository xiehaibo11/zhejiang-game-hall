package com.tkay.core.common.l;

final class o {
    private final android.content.pm.PackageManager a;

    public enum a extends java.lang.Enum<com.tkay.core.common.l.o.a> {
        public static final com.tkay.core.common.l.o.a a = null;
        public static final com.tkay.core.common.l.o.a b = null;
        public static final com.tkay.core.common.l.o.a c = null;
        private static final com.tkay.core.common.l.o.a[] d = null;

        static {
                com.tkay.core.common.l.o$a r0 = new com.tkay.core.common.l.o$a
                r1 = 0
                java.lang.String r2 = "ENABLED"
                r0.<init>(r2, r1)
                com.tkay.core.common.l.o.a.a = r0
                com.tkay.core.common.l.o$a r0 = new com.tkay.core.common.l.o$a
                r2 = 1
                java.lang.String r3 = "DISABLED"
                r0.<init>(r3, r2)
                com.tkay.core.common.l.o.a.b = r0
                com.tkay.core.common.l.o$a r0 = new com.tkay.core.common.l.o$a
                r3 = 2
                java.lang.String r4 = "NOT_INSTALLED"
                r0.<init>(r4, r3)
                com.tkay.core.common.l.o.a.c = r0
                r4 = 3
                com.tkay.core.common.l.o$a[] r4 = new com.tkay.core.common.l.o.a[r4]
                com.tkay.core.common.l.o$a r5 = com.tkay.core.common.l.o.a.a
                r4[r1] = r5
                com.tkay.core.common.l.o$a r1 = com.tkay.core.common.l.o.a.b
                r4[r2] = r1
                r4[r3] = r0
                com.tkay.core.common.l.o.a.d = r4
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.tkay.core.common.l.o.a valueOf(java.lang.String r1) {
                java.lang.Class<com.tkay.core.common.l.o$a> r0 = com.tkay.core.common.l.o.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.tkay.core.common.l.o$a r1 = (com.tkay.core.common.l.o.a) r1
                return r1
        }

        public static com.tkay.core.common.l.o.a[] values() {
                com.tkay.core.common.l.o$a[] r0 = com.tkay.core.common.l.o.a.d
                java.lang.Object r0 = r0.clone()
                com.tkay.core.common.l.o$a[] r0 = (com.tkay.core.common.l.o.a[]) r0
                return r0
        }
    }

    public o(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r0.a = r1
            return
    }

    private static boolean a(android.content.Context r5) {
            r0 = 0
            if (r5 == 0) goto L39
            java.lang.String r1 = "activity"
            java.lang.Object r1 = r5.getSystemService(r1)     // Catch: java.lang.Exception -> L39
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1     // Catch: java.lang.Exception -> L39
            if (r1 != 0) goto Le
            return r0
        Le:
            java.util.List r1 = r1.getRunningAppProcesses()     // Catch: java.lang.Exception -> L39
            if (r1 != 0) goto L15
            return r0
        L15:
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L39
        L19:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L39
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L39
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2     // Catch: java.lang.Exception -> L39
            java.lang.String r3 = r2.processName     // Catch: java.lang.Exception -> L39
            java.lang.String r4 = r5.getPackageName()     // Catch: java.lang.Exception -> L39
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L39
            if (r3 == 0) goto L19
            int r2 = r2.importance     // Catch: java.lang.Exception -> L39
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 < r3) goto L19
            r5 = 1
            return r5
        L39:
            return r0
    }

    private static byte[] a(byte[] r1) {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            byte[] r1 = r0.digest(r1)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            return r1
        Lb:
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
    }

    private int c(java.lang.String r4) {
            r3 = this;
            r0 = 0
            android.content.pm.PackageManager r1 = r3.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            r2 = 16
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            if (r4 == 0) goto Le
            int r4 = r4.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            return r4
        Le:
            return r0
    }

    private java.lang.String d(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = ""
            android.content.pm.PackageManager r1 = r3.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            r2 = 16
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            if (r4 == 0) goto L13
            java.lang.String r1 = r4.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            if (r1 == 0) goto L13
            java.lang.String r4 = r4.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            return r4
        L13:
            return r0
    }

    private byte[] e(java.lang.String r4) {
            r3 = this;
            r0 = 0
            android.content.pm.PackageManager r1 = r3.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            r2 = 64
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            if (r4 == 0) goto L1d
            android.content.pm.Signature[] r1 = r4.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            if (r1 == 0) goto L1d
            android.content.pm.Signature[] r1 = r4.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            int r1 = r1.length     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            if (r1 <= 0) goto L1d
            android.content.pm.Signature[] r4 = r4.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            r4 = r4[r0]     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            byte[] r4 = r4.toByteArray()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            return r4
        L1d:
            byte[] r4 = new byte[r0]
            return r4
    }

    public final com.tkay.core.common.l.o.a a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            com.tkay.core.common.l.o$a r3 = com.tkay.core.common.l.o.a.c
            return r3
        L9:
            android.content.pm.PackageManager r0 = r2.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            r1 = 0
            android.content.pm.ApplicationInfo r3 = r0.getApplicationInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            boolean r3 = r3.enabled     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            if (r3 == 0) goto L17
            com.tkay.core.common.l.o$a r3 = com.tkay.core.common.l.o.a.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            return r3
        L17:
            com.tkay.core.common.l.o$a r3 = com.tkay.core.common.l.o.a.b     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            return r3
        L1a:
            com.tkay.core.common.l.o$a r3 = com.tkay.core.common.l.o.a.c
            return r3
    }

    public final java.lang.String b(java.lang.String r2) {
            r1 = this;
            byte[] r2 = r1.e(r2)
            if (r2 == 0) goto L12
            int r0 = r2.length
            if (r0 == 0) goto L12
            byte[] r2 = a(r2)
            java.lang.String r2 = com.tkay.core.common.l.k.a(r2)
            return r2
        L12:
            r2 = 0
            return r2
    }
}

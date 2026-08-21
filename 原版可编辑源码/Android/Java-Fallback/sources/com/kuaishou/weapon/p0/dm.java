package com.kuaishou.weapon.p0;

public final class dm {
    private static com.kuaishou.weapon.p0.dm.a a;

    public enum a extends java.lang.Enum<com.kuaishou.weapon.p0.dm.a> {
        public static final com.kuaishou.weapon.p0.dm.a a = null;
        public static final com.kuaishou.weapon.p0.dm.a b = null;
        public static final com.kuaishou.weapon.p0.dm.a c = null;
        private static final com.kuaishou.weapon.p0.dm.a[] d = null;

        static {
                com.kuaishou.weapon.p0.dm$a r0 = new com.kuaishou.weapon.p0.dm$a
                r1 = 0
                java.lang.String r2 = "UNKNOWN"
                r0.<init>(r2, r1)
                com.kuaishou.weapon.p0.dm.a.a = r0
                com.kuaishou.weapon.p0.dm$a r0 = new com.kuaishou.weapon.p0.dm$a
                r2 = 1
                java.lang.String r3 = "ARMEABI_V7A"
                r0.<init>(r3, r2)
                com.kuaishou.weapon.p0.dm.a.b = r0
                com.kuaishou.weapon.p0.dm$a r0 = new com.kuaishou.weapon.p0.dm$a
                r3 = 2
                java.lang.String r4 = "ARM64_V8A"
                r0.<init>(r4, r3)
                com.kuaishou.weapon.p0.dm.a.c = r0
                r4 = 3
                com.kuaishou.weapon.p0.dm$a[] r4 = new com.kuaishou.weapon.p0.dm.a[r4]
                com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.a
                r4[r1] = r5
                com.kuaishou.weapon.p0.dm$a r1 = com.kuaishou.weapon.p0.dm.a.b
                r4[r2] = r1
                r4[r3] = r0
                com.kuaishou.weapon.p0.dm.a.d = r4
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kuaishou.weapon.p0.dm.a valueOf(java.lang.String r1) {
                java.lang.Class<com.kuaishou.weapon.p0.dm$a> r0 = com.kuaishou.weapon.p0.dm.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kuaishou.weapon.p0.dm$a r1 = (com.kuaishou.weapon.p0.dm.a) r1
                return r1
        }

        public static com.kuaishou.weapon.p0.dm.a[] values() {
                com.kuaishou.weapon.p0.dm$a[] r0 = com.kuaishou.weapon.p0.dm.a.d
                java.lang.Object r0 = r0.clone()
                com.kuaishou.weapon.p0.dm$a[] r0 = (com.kuaishou.weapon.p0.dm.a[]) r0
                return r0
        }
    }

    private dm() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r0) {
            boolean r0 = b(r0)
            if (r0 == 0) goto L9
            java.lang.String r0 = "arm64-v8a"
            return r0
        L9:
            java.lang.String r0 = "armeabi-v7a"
            return r0
    }

    public static boolean b(android.content.Context r2) {
            r0 = 0
            com.kuaishou.weapon.p0.dm$a r2 = c(r2)     // Catch: java.lang.Throwable -> Lb
            com.kuaishou.weapon.p0.dm$a r1 = com.kuaishou.weapon.p0.dm.a.c     // Catch: java.lang.Throwable -> Lb
            if (r2 != r1) goto Lb
            r2 = 1
            return r2
        Lb:
            return r0
    }

    private static com.kuaishou.weapon.p0.dm.a c(android.content.Context r5) {
            com.kuaishou.weapon.p0.dm$a r0 = com.kuaishou.weapon.p0.dm.a
            if (r0 == 0) goto L5
            return r0
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L10
        Lb:
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.b
        Ld:
            com.kuaishou.weapon.p0.dm.a = r5
            goto L77
        L10:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r0 < r2) goto L1f
            boolean r5 = android.os.Process.is64Bit()
            if (r5 == 0) goto Lb
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.c
            goto Ld
        L1f:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L77
            java.lang.String r0 = "dalvik.system.VMRuntime"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "getRuntime"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "is64Bit"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.reflect.Method r3 = r0.getDeclaredMethod(r3, r4)     // Catch: java.lang.Throwable -> L56
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.Object r0 = r1.invoke(r0, r4)     // Catch: java.lang.Throwable -> L56
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.Object r0 = r3.invoke(r0, r1)     // Catch: java.lang.Throwable -> L56
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> L56
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> L56
            if (r0 == 0) goto L51
            com.kuaishou.weapon.p0.dm$a r0 = com.kuaishou.weapon.p0.dm.a.c     // Catch: java.lang.Throwable -> L56
            goto L53
        L51:
            com.kuaishou.weapon.p0.dm$a r0 = com.kuaishou.weapon.p0.dm.a.b     // Catch: java.lang.Throwable -> L56
        L53:
            com.kuaishou.weapon.p0.dm.a = r0     // Catch: java.lang.Throwable -> L56
            goto L77
        L56:
            r0 = move-exception
            r0.printStackTrace()
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()     // Catch: java.lang.Throwable -> L70
            java.lang.String r5 = r5.nativeLibraryDir     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = "arm64"
            boolean r5 = r5.contains(r0)     // Catch: java.lang.Throwable -> L70
            if (r5 == 0) goto L6d
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.c     // Catch: java.lang.Throwable -> L70
        L6a:
            com.kuaishou.weapon.p0.dm.a = r5     // Catch: java.lang.Throwable -> L70
            goto L77
        L6d:
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.a     // Catch: java.lang.Throwable -> L70
            goto L6a
        L70:
            r5 = move-exception
            r5.printStackTrace()
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.a
            goto Ld
        L77:
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a
            return r5
    }
}

package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class VMRuntimeCompat {
    private static final byte[] GET_LOCKER = null;
    private static volatile java.lang.Boolean sIs64Bit;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.loader2.VMRuntimeCompat.GET_LOCKER = r0
            return
    }

    public VMRuntimeCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getArtOatCpuType() {
            boolean r0 = is64Bit()
            if (r0 == 0) goto L9
            java.lang.String r0 = "arm64"
            goto Lb
        L9:
            java.lang.String r0 = "arm"
        Lb:
            return r0
    }

    public static boolean is64Bit() {
            java.lang.Boolean r0 = com.qihoo360.loader2.VMRuntimeCompat.sIs64Bit
            if (r0 == 0) goto Lb
            java.lang.Boolean r0 = com.qihoo360.loader2.VMRuntimeCompat.sIs64Bit
            boolean r0 = r0.booleanValue()
            return r0
        Lb:
            byte[] r0 = com.qihoo360.loader2.VMRuntimeCompat.GET_LOCKER
            monitor-enter(r0)
            java.lang.Boolean r1 = com.qihoo360.loader2.VMRuntimeCompat.sIs64Bit     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L1a
            java.lang.Boolean r1 = com.qihoo360.loader2.VMRuntimeCompat.sIs64Bit     // Catch: java.lang.Throwable -> L2c
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            return r1
        L1a:
            boolean r1 = is64BitImpl()     // Catch: java.lang.Throwable -> L2c
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L2c
            com.qihoo360.loader2.VMRuntimeCompat.sIs64Bit = r1     // Catch: java.lang.Throwable -> L2c
            java.lang.Boolean r1 = com.qihoo360.loader2.VMRuntimeCompat.sIs64Bit     // Catch: java.lang.Throwable -> L2c
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            return r1
        L2c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r1
    }

    private static boolean is64BitImpl() {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L42
            r2 = 21
            if (r1 >= r2) goto L8
            return r0
        L8:
            java.lang.String r1 = "dalvik.system.VMRuntime"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L42
            if (r1 != 0) goto L11
            return r0
        L11:
            java.lang.String r2 = "getRuntime"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L42
            java.lang.reflect.Method r2 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.Throwable -> L42
            if (r2 != 0) goto L1c
            return r0
        L1c:
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L42
            java.lang.Object r2 = r2.invoke(r3, r4)     // Catch: java.lang.Throwable -> L42
            if (r2 != 0) goto L26
            return r0
        L26:
            java.lang.String r3 = "is64Bit"
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L42
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r4)     // Catch: java.lang.Throwable -> L42
            if (r1 != 0) goto L31
            return r0
        L31:
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L42
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L42
            boolean r2 = r1 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> L42
            if (r2 == 0) goto L4a
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Throwable -> L42
            boolean r0 = r1.booleanValue()     // Catch: java.lang.Throwable -> L42
            return r0
        L42:
            r1 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L4a
            r1.printStackTrace()
        L4a:
            return r0
    }
}

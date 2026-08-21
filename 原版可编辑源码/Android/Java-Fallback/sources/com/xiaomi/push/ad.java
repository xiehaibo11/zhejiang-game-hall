package com.xiaomi.push;

public class ad {
    public static long a() {
            boolean r0 = b()
            r1 = 0
            if (r0 == 0) goto L9
            return r1
        L9:
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            if (r0 == 0) goto L32
            java.lang.String r3 = r0.getPath()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L1a
            goto L32
        L1a:
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Throwable -> L32
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L32
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L32
            int r0 = r3.getBlockSize()     // Catch: java.lang.Throwable -> L32
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L32
            int r0 = r3.getAvailableBlocks()     // Catch: java.lang.Throwable -> L32
            long r0 = (long) r0
            r2 = 4
            long r0 = r0 - r2
            long r4 = r4 * r0
            return r4
        L32:
            return r1
    }

    public static boolean a() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "removed"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r0 = 1
            return r0
    }

    public static boolean b() {
            r0 = 1
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> Ld
            java.lang.String r2 = "mounted"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> Ld
            r0 = r0 ^ r1
            return r0
        Ld:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "check SDCard is busy: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "XMPush-"
            android.util.Log.e(r2, r1)
            return r0
    }

    public static boolean c() {
            long r0 = a()
            r2 = 102400(0x19000, double:5.05923E-319)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public static boolean d() {
            boolean r0 = b()
            if (r0 != 0) goto L14
            boolean r0 = c()
            if (r0 != 0) goto L14
            boolean r0 = a()
            if (r0 != 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }
}

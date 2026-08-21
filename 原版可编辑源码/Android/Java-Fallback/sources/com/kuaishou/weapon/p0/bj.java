package com.kuaishou.weapon.p0;

public class bj {
    private static final java.lang.String a = "/proc/cpuinfo";

    public bj() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r2.<init>()     // Catch: java.lang.Throwable -> L43
            r2.append(r0)     // Catch: java.lang.Throwable -> L43
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = ";"
            if (r0 != 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L43
            r0.append(r1)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L43
            r2.append(r0)     // Catch: java.lang.Throwable -> L43
        L23:
            java.lang.String r0 = "ro.product.cpu.abilist"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> L43
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L3e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L43
            r1.append(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L43
            r2.append(r0)     // Catch: java.lang.Throwable -> L43
        L3e:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L43
            return r0
        L43:
            java.lang.String r0 = ""
            return r0
    }

    public static com.kuaishou.weapon.p0.bi b() {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L94
            java.lang.String r2 = "/proc/cpuinfo"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L94
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L94
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L94
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L91
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L91
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L8f
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L8f
            com.kuaishou.weapon.p0.bi r4 = new com.kuaishou.weapon.p0.bi     // Catch: java.lang.Throwable -> L97
            r4.<init>()     // Catch: java.lang.Throwable -> L97
            r5 = 0
        L1d:
            java.lang.String r6 = r3.readLine()     // Catch: java.lang.Throwable -> L97
            if (r6 == 0) goto L82
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L97
            if (r7 != 0) goto L1d
            java.lang.String r7 = "Processor"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L97
            java.lang.String r8 = ":"
            r9 = 1
            if (r7 == 0) goto L49
            java.lang.String[] r7 = r6.split(r8)     // Catch: java.lang.Throwable -> L97
            if (r7 == 0) goto L1d
            r7 = r7[r9]     // Catch: java.lang.Throwable -> L97
            java.lang.String r7 = r7.trim()     // Catch: java.lang.Throwable -> L97
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L97
            if (r10 != 0) goto L49
            r4.b(r7)     // Catch: java.lang.Throwable -> L97
        L49:
            java.lang.String r7 = "processor"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L97
            if (r7 == 0) goto L68
            java.lang.String[] r7 = r6.split(r8)     // Catch: java.lang.Throwable -> L97
            if (r7 == 0) goto L1d
            r7 = r7[r9]     // Catch: java.lang.Throwable -> L97
            java.lang.String r7 = r7.trim()     // Catch: java.lang.Throwable -> L97
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L97
            if (r10 != 0) goto L68
            int r5 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> L97
            int r5 = r5 + r9
        L68:
            java.lang.String r7 = "Hardware"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L97
            if (r7 == 0) goto L1d
            java.lang.String[] r6 = r6.split(r8)     // Catch: java.lang.Throwable -> L97
            if (r6 == 0) goto L1d
            r6 = r6[r9]     // Catch: java.lang.Throwable -> L97
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L97
            if (r7 != 0) goto L1d
            r4.a(r6)     // Catch: java.lang.Throwable -> L97
            goto L1d
        L82:
            r4.a(r5)     // Catch: java.lang.Throwable -> L97
            r3.close()
            r1.close()
            r2.close()
            return r4
        L8f:
            r3 = r0
            goto L97
        L91:
            r1 = r0
            r3 = r1
            goto L97
        L94:
            r1 = r0
            r2 = r1
            r3 = r2
        L97:
            if (r3 == 0) goto L9c
            r3.close()
        L9c:
            if (r1 == 0) goto La1
            r1.close()
        La1:
            if (r2 == 0) goto La6
            r2.close()
        La6:
            return r0
    }
}

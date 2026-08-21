package com.vivo.push.util;

public final class j {
    public static final boolean a = false;
    public static final boolean b = false;
    public static final boolean c = false;
    public static final boolean d = false;
    private static java.lang.reflect.Method e;
    private static java.lang.String f;
    private static java.lang.String g;

    static {
            java.lang.String r0 = "rom_1.0"
            boolean r0 = b(r0)
            com.vivo.push.util.j.a = r0
            java.lang.String r0 = "rom_2.0"
            boolean r0 = b(r0)
            com.vivo.push.util.j.b = r0
            java.lang.String r0 = "rom_2.5"
            boolean r0 = b(r0)
            com.vivo.push.util.j.c = r0
            java.lang.String r0 = "rom_3.0"
            boolean r0 = b(r0)
            com.vivo.push.util.j.d = r0
            r0 = 0
            com.vivo.push.util.j.f = r0
            com.vivo.push.util.j.g = r0
            return
    }

    public static synchronized java.lang.String a() {
            java.lang.Class<com.vivo.push.util.j> r0 = com.vivo.push.util.j.class
            monitor-enter(r0)
            java.lang.String r1 = com.vivo.push.util.j.f     // Catch: java.lang.Throwable -> L96
            r2 = 0
            if (r1 != 0) goto L5a
            java.lang.String r1 = com.vivo.push.util.j.g     // Catch: java.lang.Throwable -> L96
            if (r1 != 0) goto L5a
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r3 = "get"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            com.vivo.push.util.j.e = r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            r1.setAccessible(r8)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.reflect.Method r1 = com.vivo.push.util.j.e     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r5 = "ro.vivo.rom"
            r3[r7] = r5     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r5 = "@><@"
            r3[r8] = r5     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            com.vivo.push.util.j.f = r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.reflect.Method r1 = com.vivo.push.util.j.e     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r4 = "ro.vivo.rom.version"
            r3[r7] = r4     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r4 = "@><@"
            r3[r8] = r4     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            com.vivo.push.util.j.g = r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            goto L5a
        L53:
            java.lang.String r1 = "Device"
            java.lang.String r3 = "getRomCode error"
            com.vivo.push.util.p.b(r1, r3)     // Catch: java.lang.Throwable -> L96
        L5a:
            java.lang.String r1 = "Device"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = "sRomProperty1 : "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = com.vivo.push.util.j.f     // Catch: java.lang.Throwable -> L96
            r3.append(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = " ; sRomProperty2 : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = com.vivo.push.util.j.g     // Catch: java.lang.Throwable -> L96
            r3.append(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L96
            com.vivo.push.util.p.d(r1, r3)     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = com.vivo.push.util.j.f     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L96
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L96
            if (r3 != 0) goto L87
            monitor-exit(r0)
            return r1
        L87:
            java.lang.String r1 = com.vivo.push.util.j.g     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L96
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L96
            monitor-exit(r0)
            if (r3 != 0) goto L95
            return r1
        L95:
            return r2
        L96:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 2
            java.lang.String r2 = "rom_([\\d]*).?([\\d]*)"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2, r0)
            java.util.regex.Matcher r4 = r2.matcher(r4)
            boolean r2 = r4.find()
            if (r2 == 0) goto L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 1
            java.lang.String r3 = r4.group(r2)
            r1.append(r3)
            java.lang.String r3 = r4.group(r0)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L33
            java.lang.String r4 = "0"
            goto L3c
        L33:
            java.lang.String r4 = r4.group(r0)
            r0 = 0
            java.lang.String r4 = r4.substring(r0, r2)
        L3c:
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            return r4
        L44:
            return r1
    }

    public static java.lang.String a(java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = "get"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L20
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L20
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L20
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L20
            r2[r5] = r6     // Catch: java.lang.Exception -> L20
            java.lang.Object r6 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L20
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L20
            goto L25
        L20:
            r6 = move-exception
            r6.printStackTrace()
            r6 = r7
        L25:
            if (r6 == 0) goto L2f
            int r0 = r6.length()
            if (r0 != 0) goto L2e
            goto L2f
        L2e:
            r7 = r6
        L2f:
            return r7
    }

    public static boolean b() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            java.lang.String r2 = "Device"
            if (r0 == 0) goto L11
            java.lang.String r0 = "Build.MANUFACTURER is null"
            com.vivo.push.util.p.d(r2, r0)
            return r1
        L11:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "Build.MANUFACTURER is "
            r0.<init>(r3)
            java.lang.String r3 = android.os.Build.MANUFACTURER
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.p.d(r2, r0)
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r2 = "bbk"
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L42
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r2 = "vivo"
            boolean r0 = r0.startsWith(r2)
            if (r0 == 0) goto L41
            goto L42
        L41:
            return r1
        L42:
            r0 = 1
            return r0
    }

    private static boolean b(java.lang.String r4) {
            java.lang.String r0 = ""
            java.lang.String r1 = "ro.vivo.rom"
            java.lang.String r1 = com.vivo.push.util.z.b(r1, r0)
            java.lang.String r2 = "ro.vivo.rom.version"
            java.lang.String r0 = com.vivo.push.util.z.b(r2, r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "ro.vivo.rom = "
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r3 = " ; ro.vivo.rom.version = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Device"
            com.vivo.push.util.p.d(r3, r2)
            if (r1 == 0) goto L31
            boolean r1 = r1.contains(r4)
            if (r1 != 0) goto L39
        L31:
            if (r0 == 0) goto L3b
            boolean r4 = r0.contains(r4)
            if (r4 == 0) goto L3b
        L39:
            r4 = 1
            return r4
        L3b:
            r4 = 0
            return r4
    }
}

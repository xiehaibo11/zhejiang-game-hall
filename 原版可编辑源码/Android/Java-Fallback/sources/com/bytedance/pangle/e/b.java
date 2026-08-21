package com.bytedance.pangle.e;

public final class b {
    public static int a = 1;
    public static int b = 2;

    static {
            return
    }

    public static android.content.SharedPreferences a(android.content.Context r2) {
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "plugin_oat_info"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            return r2
    }

    public static java.lang.String a() {
            java.lang.String r0 = "dalvik.system.VMRuntime"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = "getCurrentInstructionSet"
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L12
            java.lang.Object r0 = com.bytedance.pangle.util.MethodUtils.invokeStaticMethod(r0, r1, r2)     // Catch: java.lang.Exception -> L12
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L12
            goto L17
        L12:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        L17:
            return r0
    }

    public static java.lang.String a(java.lang.String r4) {
            java.lang.String r0 = "/"
            int r0 = r4.lastIndexOf(r0)
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
            java.lang.String r0 = "."
            int r0 = r4.lastIndexOf(r0)
            java.lang.String r0 = r4.substring(r0)
            int r1 = android.os.Build.VERSION.SDK_INT
            java.lang.String r2 = ".dex"
            r3 = 26
            if (r1 < r3) goto L21
            java.lang.String r1 = ".odex"
            goto L22
        L21:
            r1 = r2
        L22:
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L4d
            java.lang.String r2 = ".zip"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L49
            java.lang.String r2 = ".apk"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L39
            goto L49
        L39:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            goto L4d
        L49:
            java.lang.String r4 = r4.replace(r0, r1)
        L4d:
            return r4
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            int r0 = com.bytedance.pangle.e.b.a
            java.lang.String[] r1 = a(r1, r2, r0)
            com.bytedance.pangle.e.a.a(r1)
            return
    }

    public static boolean a(java.lang.String r6, java.lang.String... r7) {
            int r0 = r7.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto L2e
            r3 = r7[r2]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            java.lang.String r5 = java.io.File.separator
            r4.append(r5)
            java.lang.String r3 = a(r3)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            boolean r3 = r4.exists()
            if (r3 != 0) goto L2b
            return r1
        L2b:
            int r2 = r2 + 1
            goto L3
        L2e:
            r6 = 1
            return r6
    }

    public static boolean a(java.lang.String... r4) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 > 0) goto L1c
            r2 = r4[r0]
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            boolean r2 = r3.exists()
            if (r2 == 0) goto L1b
            boolean r2 = com.bytedance.pangle.e.h.a(r3)
            if (r2 != 0) goto L18
            goto L1b
        L18:
            int r1 = r1 + 1
            goto L2
        L1b:
            return r0
        L1c:
            r4 = 1
            return r4
    }

    static java.lang.String[] a(java.lang.String r3, java.lang.String r4, int r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "dex2oat"
            r0.add(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r1 < r2) goto L22
            java.lang.String r1 = "--runtime-arg"
            r0.add(r1)
            java.lang.String r2 = "-classpath"
            r0.add(r2)
            r0.add(r1)
            java.lang.String r1 = "&"
            r0.add(r1)
        L22:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "--instruction-set="
            r1.<init>(r2)
            java.lang.String r2 = a()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.add(r1)
            int r1 = com.bytedance.pangle.e.b.a
            if (r5 != r1) goto L4d
            boolean r5 = com.bytedance.pangle.util.i.h()
            if (r5 == 0) goto L47
            java.lang.String r5 = "--compiler-filter=quicken"
            r0.add(r5)
            goto L56
        L47:
            java.lang.String r5 = "--compiler-filter=interpret-only"
            r0.add(r5)
            goto L56
        L4d:
            int r1 = com.bytedance.pangle.e.b.b
            if (r5 != r1) goto L56
            java.lang.String r5 = "--compiler-filter=speed"
            r0.add(r5)
        L56:
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r5 = "--dex-file="
            java.lang.String r3 = r5.concat(r3)
            r0.add(r3)
            java.lang.String r3 = java.lang.String.valueOf(r4)
            java.lang.String r4 = "--oat-file="
            java.lang.String r3 = r4.concat(r3)
            r0.add(r3)
            int r3 = r0.size()
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.Object[] r3 = r0.toArray(r3)
            java.lang.String[] r3 = (java.lang.String[]) r3
            return r3
    }

    public static java.lang.String b(java.lang.String r4) {
            java.lang.String r0 = "."
            int r0 = r4.lastIndexOf(r0)
            java.lang.String r0 = r4.substring(r0)
            int r1 = android.os.Build.VERSION.SDK_INT
            java.lang.String r2 = ".dex"
            r3 = 26
            if (r1 < r3) goto L15
            java.lang.String r1 = ".odex"
            goto L16
        L15:
            r1 = r2
        L16:
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L1d
            return r0
        L1d:
            java.lang.String r2 = ".zip"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L3e
            java.lang.String r2 = ".apk"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L2e
            goto L3e
        L2e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            return r4
        L3e:
            return r1
    }
}

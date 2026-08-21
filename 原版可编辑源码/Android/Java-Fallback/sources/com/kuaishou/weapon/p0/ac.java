package com.kuaishou.weapon.p0;

public class ac {
    public ac() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(int r5, int r6) {
            r4 = this;
            r0 = 26
            java.lang.String r1 = "u:r:untrusted_app"
            if (r6 >= r0) goto L7
            return r1
        L7:
            java.lang.String r2 = ":s0"
            if (r5 < r6) goto L1b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
        L10:
            r5.append(r1)
            r5.append(r2)
        L16:
            java.lang.String r5 = r5.toString()
            return r5
        L1b:
            if (r5 >= r0) goto L2b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            java.lang.String r6 = "_25:s0"
        L27:
            r5.append(r6)
            goto L16
        L2b:
            r3 = 27
            if (r6 != r3) goto L37
            if (r5 < r0) goto L67
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            goto L10
        L37:
            r2 = 28
            java.lang.String r3 = "_27:s0"
            if (r6 == r2) goto L5f
            r2 = 29
            if (r6 != r2) goto L42
            goto L5f
        L42:
            r0 = 30
            if (r6 != r0) goto L67
            if (r5 < r2) goto L53
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            java.lang.String r6 = "_29:s0"
            goto L27
        L53:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
        L58:
            r5.append(r1)
            r5.append(r3)
            goto L16
        L5f:
            if (r5 < r0) goto L67
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            goto L58
        L67:
            return r1
    }

    public boolean a() {
            r2 = this;
            int r0 = android.os.Process.myUid()
            r1 = 100000(0x186a0, float:1.4013E-40)
            int r0 = r0 / r1
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public boolean a(android.content.Context r3) {
            r2 = this;
            java.io.File r3 = r3.getFilesDir()     // Catch: java.lang.Throwable -> L2c
            java.io.File r3 = r3.getParentFile()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> L2c
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r1.<init>()     // Catch: java.lang.Throwable -> L2c
            r1.append(r3)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Throwable -> L2c
            r1.append(r3)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = ".."
            r1.append(r3)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L2c
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L2c
            boolean r3 = r0.canRead()     // Catch: java.lang.Throwable -> L2c
            return r3
        L2c:
            r3 = 0
            return r3
    }

    public java.lang.String b(android.content.Context r1) {
            r0 = this;
            java.io.File r1 = r1.getFilesDir()     // Catch: java.lang.Throwable -> Ld
            java.io.File r1 = r1.getParentFile()     // Catch: java.lang.Throwable -> Ld
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            java.lang.String r1 = ""
            return r1
    }

    public java.lang.String c(android.content.Context r9) {
            r8 = this;
            java.lang.String r0 = "/data/data"
            r1 = 0
            java.lang.String r2 = "android.app.ActivityThread"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r3 = "currentActivityThread"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L8c
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L8c
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L8c
            java.lang.Object r2 = r2.invoke(r1, r3)     // Catch: java.lang.Throwable -> L8c
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r4 = "mPackages"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L8c
            r4 = 1
            r3.setAccessible(r4)     // Catch: java.lang.Throwable -> L8c
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Throwable -> L8c
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L8c
            if (r2 == 0) goto L8c
            int r3 = r2.size()     // Catch: java.lang.Throwable -> L8c
            if (r3 <= 0) goto L8c
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L8c
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L8c
        L3c:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L8c
            if (r3 == 0) goto L8c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L8c
            int r5 = r5.length()     // Catch: java.lang.Throwable -> L8c
            if (r5 <= r4) goto L3c
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L8c
            java.lang.String r6 = r9.getPackageName()     // Catch: java.lang.Throwable -> L8c
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L8c
            if (r5 != 0) goto L3c
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L8c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8c
            r6.<init>()     // Catch: java.lang.Throwable -> L8c
            r6.append(r0)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r7 = java.io.File.separator     // Catch: java.lang.Throwable -> L8c
            r6.append(r7)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L8c
            r6.append(r7)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L8c
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L8c
            boolean r6 = r5.exists()     // Catch: java.lang.Throwable -> L8c
            if (r6 == 0) goto L3c
            boolean r5 = r5.canWrite()     // Catch: java.lang.Throwable -> L8c
            if (r5 == 0) goto L3c
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Throwable -> L8c
            return r9
        L8c:
            return r1
    }

    public org.json.JSONArray d(android.content.Context r9) {
            r8 = this;
            java.lang.String r0 = ".dex"
            java.lang.String r1 = ".so"
            r2 = 0
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Lb2
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r5 = "/proc/self/maps"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lb2
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lb2
            java.util.HashSet r4 = new java.util.HashSet     // Catch: java.lang.Throwable -> Lb3
            r4.<init>()     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = r9.getPackageName()     // Catch: java.lang.Throwable -> Lb3
        L1a:
            java.lang.String r5 = r3.readLine()     // Catch: java.lang.Throwable -> Lb3
            if (r5 == 0) goto L9f
            java.lang.String r6 = "@Hw"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r6 != 0) goto L1a
            java.lang.String r6 = ".apk@classes.dex"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r6 != 0) goto L1a
            java.lang.String r6 = "WebViewGoogle"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r6 != 0) goto L1a
            java.lang.String r6 = "FeatureFramework"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r6 != 0) goto L1a
            java.lang.String r6 = "framework@oppo"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r6 != 0) goto L1a
            java.lang.String r6 = "framework@mediatek"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r6 != 0) goto L1a
            int r6 = r4.size()     // Catch: java.lang.Throwable -> Lb3
            r7 = 15
            if (r6 > r7) goto L9f
            boolean r6 = r5.contains(r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r7 = "/data/"
            if (r6 != 0) goto L7e
            boolean r6 = r5.contains(r7)     // Catch: java.lang.Throwable -> Lb3
            if (r6 == 0) goto L7e
            boolean r6 = r5.contains(r1)     // Catch: java.lang.Throwable -> Lb3
            if (r6 == 0) goto L7e
            int r6 = r5.indexOf(r7)     // Catch: java.lang.Throwable -> Lb3
            int r7 = r5.indexOf(r1)     // Catch: java.lang.Throwable -> Lb3
            int r7 = r7 + 3
            java.lang.String r5 = r5.substring(r6, r7)     // Catch: java.lang.Throwable -> Lb3
        L7a:
            r4.add(r5)     // Catch: java.lang.Throwable -> Lb3
            goto L1a
        L7e:
            boolean r6 = r5.contains(r9)     // Catch: java.lang.Throwable -> Lb3
            if (r6 != 0) goto L1a
            boolean r6 = r5.contains(r7)     // Catch: java.lang.Throwable -> Lb3
            if (r6 == 0) goto L1a
            boolean r6 = r5.contains(r0)     // Catch: java.lang.Throwable -> Lb3
            if (r6 == 0) goto L1a
            int r6 = r5.indexOf(r7)     // Catch: java.lang.Throwable -> Lb3
            int r7 = r5.indexOf(r0)     // Catch: java.lang.Throwable -> Lb3
            int r7 = r7 + 4
            java.lang.String r5 = r5.substring(r6, r7)     // Catch: java.lang.Throwable -> Lb3
            goto L7a
        L9f:
            int r9 = r4.size()     // Catch: java.lang.Throwable -> Lb3
            if (r9 <= 0) goto Lae
            org.json.JSONArray r9 = new org.json.JSONArray     // Catch: java.lang.Throwable -> Lb3
            r9.<init>(r4)     // Catch: java.lang.Throwable -> Lb3
            r3.close()     // Catch: java.io.IOException -> Lad
        Lad:
            return r9
        Lae:
            r3.close()     // Catch: java.io.IOException -> Lb6
            goto Lb6
        Lb2:
            r3 = r2
        Lb3:
            if (r3 == 0) goto Lb6
            goto Lae
        Lb6:
            return r2
    }

    public int e(android.content.Context r8) {
            r7 = this;
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Ld2
            r2 = 26
            if (r1 < r2) goto Lcd
            java.io.File r8 = r8.getFilesDir()     // Catch: java.lang.Throwable -> Ld2
            java.io.File r8 = r8.getParentFile()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r8 = r8.getAbsolutePath()     // Catch: java.lang.Throwable -> Ld2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r2 = "fk_w_"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Ld2
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Ld2
            r1.append(r2)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Ld2
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Ld2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld2
            r3.<init>()     // Catch: java.lang.Throwable -> Ld2
            r3.append(r8)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r8 = java.io.File.separator     // Catch: java.lang.Throwable -> Ld2
            r3.append(r8)     // Catch: java.lang.Throwable -> Ld2
            r3.append(r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Throwable -> Ld2
            r2.<init>(r8)     // Catch: java.lang.Throwable -> Ld2
            java.io.FileDescriptor r8 = r2.getFD()     // Catch: java.lang.Throwable -> Ld3
            java.lang.Class r3 = r8.getClass()     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r4 = "descriptor"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> Ld3
            r4 = 1
            r3.setAccessible(r4)     // Catch: java.lang.Throwable -> Ld3
            r3.get(r8)     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r5 = "/proc/self/fd/%d"
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Ld3
            java.lang.Object r8 = r3.get(r8)     // Catch: java.lang.Throwable -> Ld3
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Throwable -> Ld3
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> Ld3
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> Ld3
            r6[r0] = r8     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r8 = java.lang.String.format(r5, r6)     // Catch: java.lang.Throwable -> Ld3
            java.lang.String[] r3 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> Ld3
            java.nio.file.Path r8 = java.nio.file.Paths.get(r8, r3)     // Catch: java.lang.Throwable -> Ld3
            java.nio.file.Path r8 = java.nio.file.Files.readSymbolicLink(r8)     // Catch: java.lang.Throwable -> Ld3
            java.io.File r8 = r8.toFile()     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r8 = r8.getAbsolutePath()     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Throwable -> Ld3
            int r3 = r8.lastIndexOf(r3)     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r3 = r8.substring(r3)     // Catch: java.lang.Throwable -> Ld3
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld3
            r5.<init>()     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r6 = java.io.File.separator     // Catch: java.lang.Throwable -> Ld3
            r5.append(r6)     // Catch: java.lang.Throwable -> Ld3
            r5.append(r1)     // Catch: java.lang.Throwable -> Ld3
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Ld3
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> Ld3
            if (r3 != 0) goto La2
            r2.close()     // Catch: java.lang.Exception -> La1
        La1:
            return r4
        La2:
            java.lang.String r3 = ""
            java.lang.String r1 = r8.replace(r1, r3)     // Catch: java.lang.Throwable -> Ld3
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Ld3
            r3.<init>(r1)     // Catch: java.lang.Throwable -> Ld3
            java.io.File r1 = r3.getParentFile()     // Catch: java.lang.Throwable -> Ld3
            boolean r1 = r1.canRead()     // Catch: java.lang.Throwable -> Ld3
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Ld3
            r3.<init>(r8)     // Catch: java.lang.Throwable -> Ld3
            boolean r8 = r3.exists()     // Catch: java.lang.Throwable -> Ld3
            if (r8 == 0) goto Lc3
            r3.delete()     // Catch: java.lang.Throwable -> Ld3
        Lc3:
            if (r1 == 0) goto Lc9
            r2.close()     // Catch: java.lang.Exception -> Lc8
        Lc8:
            return r4
        Lc9:
            r2.close()     // Catch: java.lang.Exception -> Lcc
        Lcc:
            return r0
        Lcd:
            boolean r8 = r7.a(r8)     // Catch: java.lang.Throwable -> Ld2
            return r8
        Ld2:
            r2 = 0
        Ld3:
            if (r2 == 0) goto Ld8
            r2.close()     // Catch: java.lang.Exception -> Ld8
        Ld8:
            return r0
    }

    public boolean f(android.content.Context r5) {
            r4 = this;
            r0 = 0
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()     // Catch: java.lang.Exception -> L33
            int r5 = r5.targetSdkVersion     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = "android.os.SELinux"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = "getContext"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L33
            java.lang.reflect.Method r2 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.Exception -> L33
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L33
            java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L33
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L33
            java.lang.String r5 = r4.a(r5, r2)     // Catch: java.lang.Exception -> L33
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L33
            if (r2 == 0) goto L2a
            return r0
        L2a:
            boolean r5 = r1.startsWith(r5)     // Catch: java.lang.Exception -> L33
            if (r5 == 0) goto L31
            return r0
        L31:
            r5 = 1
            return r5
        L33:
            return r0
    }
}

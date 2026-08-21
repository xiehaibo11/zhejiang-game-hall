package com.bytedance.pangle.e;

public final class d implements com.bytedance.pangle.e.f.a {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(java.lang.String r1, java.lang.String r2) {
            int r0 = com.bytedance.pangle.e.b.b     // Catch: java.lang.Exception -> Lb
            java.lang.String[] r1 = com.bytedance.pangle.e.b.a(r1, r2, r0)     // Catch: java.lang.Exception -> Lb
            boolean r1 = com.bytedance.pangle.e.a.a(r1)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = 0
            return r1
    }

    @Override
    public final boolean a(java.lang.String r6, int r7) {
            r5 = this;
            java.lang.String r0 = com.bytedance.pangle.d.c.b(r6, r7)
            java.lang.String r1 = java.lang.String.valueOf(r0)
            java.lang.String r2 = "full DexOpt:"
            java.lang.String r1 = r2.concat(r1)
            java.lang.String r2 = "Zeus/install_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r2, r1)
            java.lang.String r6 = com.bytedance.pangle.d.c.c(r6, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r6)
            java.lang.String r1 = java.io.File.separator
            r7.append(r1)
            java.lang.String r1 = "compFully"
            r7.append(r1)
            java.lang.String r1 = com.bytedance.pangle.e.b.b(r0)
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r6 = java.io.File.separator
            r1.append(r6)
            java.lang.String r6 = com.bytedance.pangle.e.b.a(r0)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            boolean r0 = a(r0, r7)
            r1 = 0
            if (r0 == 0) goto La5
            java.io.File r0 = new java.io.File
            r0.<init>(r7)
            boolean r3 = r0.exists()
            if (r3 == 0) goto L66
            java.io.File r3 = new java.io.File
            r3.<init>(r6)
            r0.renameTo(r3)
        L66:
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            if (r0 < r3) goto L6f
            java.lang.String r0 = ".odex"
            goto L71
        L6f:
            java.lang.String r0 = ".dex"
        L71:
            java.io.File r3 = new java.io.File
            java.lang.String r4 = ".vdex"
            java.lang.String r7 = r7.replace(r0, r4)
            r3.<init>(r7)
            boolean r7 = r3.exists()
            if (r7 == 0) goto L8e
            java.io.File r7 = new java.io.File
            java.lang.String r0 = r6.replace(r0, r4)
            r7.<init>(r0)
            r3.renameTo(r7)
        L8e:
            r7 = 1
            java.lang.String[] r7 = new java.lang.String[r7]
            r7[r1] = r6
            boolean r6 = com.bytedance.pangle.e.b.a(r7)
            java.lang.String r7 = java.lang.String.valueOf(r6)
            java.lang.String r0 = "full DexOpt result:"
            java.lang.String r7 = r0.concat(r7)
            com.bytedance.pangle.log.ZeusLogger.i(r2, r7)
            return r6
        La5:
            return r1
    }
}

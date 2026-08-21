package com.igexin.a;

final class k implements com.igexin.a.f {
    k() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(java.lang.String r1) {
            r0 = this;
            java.lang.System.loadLibrary(r1)
            return
    }

    @Override
    public java.lang.String[] a() {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Le
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            int r0 = r0.length
            if (r0 <= 0) goto Le
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            return r0
        Le:
            java.lang.String r0 = android.os.Build.CPU_ABI2
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L24
            r0 = 2
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r3 = android.os.Build.CPU_ABI
            r0[r1] = r3
            java.lang.String r1 = android.os.Build.CPU_ABI2
            r0[r2] = r1
            return r0
        L24:
            java.lang.String[] r0 = new java.lang.String[r2]
            java.lang.String r2 = android.os.Build.CPU_ABI
            r0[r1] = r2
            return r0
    }

    @Override
    public void b(java.lang.String r1) {
            r0 = this;
            java.lang.System.load(r1)
            return
    }

    @Override
    public java.lang.String c(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "lib"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L11
            java.lang.String r0 = ".so"
            boolean r0 = r2.endsWith(r0)
            if (r0 == 0) goto L11
            return r2
        L11:
            java.lang.String r2 = java.lang.System.mapLibraryName(r2)
            return r2
    }

    @Override
    public java.lang.String d(java.lang.String r3) {
            r2 = this;
            int r0 = r3.length()
            r1 = 3
            int r0 = r0 - r1
            java.lang.String r3 = r3.substring(r1, r0)
            return r3
    }
}

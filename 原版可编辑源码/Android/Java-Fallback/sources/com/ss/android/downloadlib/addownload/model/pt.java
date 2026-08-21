package com.ss.android.downloadlib.addownload.model;

public class pt {
    private static final int[] pt = null;
    private static final java.lang.String[] q = null;
    private static volatile com.ss.android.downloadlib.addownload.model.pt rg;
    private final java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt.rg> df;

    static class 1 {
    }

    public static class rg {
        public final int df;
        public final long pp;
        public final java.lang.String pt;
        public final java.lang.String q;
        public final java.lang.String rg;

        private rg(java.lang.String r1, int r2, java.lang.String r3, java.lang.String r4, long r5) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                r0.df = r2
                r1 = 0
                if (r3 == 0) goto Lf
                java.lang.String r2 = r3.toLowerCase()
                goto L10
            Lf:
                r2 = r1
            L10:
                r0.q = r2
                if (r4 == 0) goto L18
                java.lang.String r1 = r4.toLowerCase()
            L18:
                r0.pt = r1
                r0.pp = r5
                return
        }

        rg(java.lang.String r1, int r2, java.lang.String r3, java.lang.String r4, long r5, com.ss.android.downloadlib.addownload.model.pt.1 r7) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }
    }

    static {
            java.lang.String r0 = "com"
            java.lang.String r1 = "android"
            java.lang.String r2 = "ss"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.ss.android.downloadlib.addownload.model.pt.q = r0
            r0 = 6
            int[] r0 = new int[r0]
            r0 = {x0016: FILL_ARRAY_DATA , data: [3101, 3102, 3103, 3201, 3202, 3203} // fill-array
            com.ss.android.downloadlib.addownload.model.pt.pt = r0
            return
    }

    private pt() {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.df = r0
            return
    }

    private void df() {
            r8 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r2 = r8.df
            monitor-enter(r2)
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r3 = r8.df     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L2a
        Ld:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r4 == 0) goto L28
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L2a
            com.ss.android.downloadlib.addownload.model.pt$rg r4 = (com.ss.android.downloadlib.addownload.model.pt.rg) r4     // Catch: java.lang.Throwable -> L2a
            long r4 = r4.pp     // Catch: java.lang.Throwable -> L2a
            long r4 = r0 - r4
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L28
            r3.remove()     // Catch: java.lang.Throwable -> L2a
            goto Ld
        L28:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2a
            throw r0
    }

    private com.ss.android.downloadlib.addownload.model.pt.rg q(java.lang.String r12) {
            r11 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Throwable -> L29
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L29
            r1 = 0
            android.content.pm.PackageInfo r1 = r0.getPackageInfo(r12, r1)     // Catch: java.lang.Throwable -> L29
            if (r1 == 0) goto L2d
            com.ss.android.downloadlib.addownload.model.pt$rg r10 = new com.ss.android.downloadlib.addownload.model.pt$rg     // Catch: java.lang.Throwable -> L29
            int r4 = r1.versionCode     // Catch: java.lang.Throwable -> L29
            java.lang.String r5 = r1.versionName     // Catch: java.lang.Throwable -> L29
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L29
            java.lang.CharSequence r0 = r0.getApplicationLabel(r1)     // Catch: java.lang.Throwable -> L29
            r6 = r0
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L29
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L29
            r9 = 0
            r2 = r10
            r3 = r12
            r2.<init>(r3, r4, r5, r6, r7, r9)     // Catch: java.lang.Throwable -> L29
            return r10
        L29:
            r12 = move-exception
            r12.printStackTrace()
        L2d:
            r12 = 0
            return r12
    }

    public static com.ss.android.downloadlib.addownload.model.pt rg() {
            com.ss.android.downloadlib.addownload.model.pt r0 = com.ss.android.downloadlib.addownload.model.pt.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.addownload.model.pt> r0 = com.ss.android.downloadlib.addownload.model.pt.class
            monitor-enter(r0)
            com.ss.android.downloadlib.addownload.model.pt r1 = com.ss.android.downloadlib.addownload.model.pt.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.addownload.model.pt r1 = new com.ss.android.downloadlib.addownload.model.pt     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.addownload.model.pt.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.addownload.model.pt r0 = com.ss.android.downloadlib.addownload.model.pt.rg
            return r0
    }

    private static boolean rg(java.lang.String r12, java.lang.String r13) {
            java.lang.String r0 = "\\."
            r1 = 0
            java.lang.String[] r12 = r12.split(r0)     // Catch: java.lang.Throwable -> L5e
            java.lang.String[] r13 = r13.split(r0)     // Catch: java.lang.Throwable -> L5e
            int r0 = r12.length     // Catch: java.lang.Throwable -> L5e
            if (r0 == 0) goto L5d
            int r0 = r13.length     // Catch: java.lang.Throwable -> L5e
            if (r0 != 0) goto L12
            goto L5d
        L12:
            int r0 = r12.length     // Catch: java.lang.Throwable -> L5e
            r2 = r1
            r3 = r2
            r4 = r3
        L16:
            if (r2 >= r0) goto L62
            r5 = r12[r2]     // Catch: java.lang.Throwable -> L5e
            java.lang.String[] r6 = com.ss.android.downloadlib.addownload.model.pt.q     // Catch: java.lang.Throwable -> L5e
            int r7 = r6.length     // Catch: java.lang.Throwable -> L5e
            r8 = r1
        L1e:
            r9 = 1
            if (r8 >= r7) goto L3b
            r10 = r6[r8]     // Catch: java.lang.Throwable -> L5e
            boolean r11 = r10.equals(r5)     // Catch: java.lang.Throwable -> L5e
            if (r11 == 0) goto L38
            int r6 = r13.length     // Catch: java.lang.Throwable -> L5e
            if (r3 >= r6) goto L36
            r6 = r13[r3]     // Catch: java.lang.Throwable -> L5e
            boolean r6 = r10.equals(r6)     // Catch: java.lang.Throwable -> L5e
            if (r6 == 0) goto L36
            int r3 = r3 + 1
        L36:
            r6 = r9
            goto L3c
        L38:
            int r8 = r8 + 1
            goto L1e
        L3b:
            r6 = r1
        L3c:
            if (r6 != 0) goto L5a
            r6 = r4
            r4 = r3
        L40:
            int r7 = r13.length     // Catch: java.lang.Throwable -> L5e
            if (r3 >= r7) goto L58
            r7 = r13[r3]     // Catch: java.lang.Throwable -> L5e
            boolean r7 = r5.equals(r7)     // Catch: java.lang.Throwable -> L5e
            if (r7 == 0) goto L55
            if (r3 != r4) goto L4f
            int r4 = r4 + 1
        L4f:
            int r6 = r6 + 1
            r7 = 2
            if (r6 < r7) goto L55
            return r9
        L55:
            int r3 = r3 + 1
            goto L40
        L58:
            r3 = r4
            r4 = r6
        L5a:
            int r2 = r2 + 1
            goto L16
        L5d:
            return r1
        L5e:
            r12 = move-exception
            r12.printStackTrace()
        L62:
            return r1
    }

    public android.util.Pair<com.ss.android.downloadlib.addownload.model.pt.rg, java.lang.Integer> df(com.ss.android.downloadad.api.rg.df r18) {
            r17 = this;
            r1 = r17
            r2 = 0
            if (r18 != 0) goto L6
            return r2
        L6:
            r17.df()     // Catch: java.lang.Throwable -> L152
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r0 = r1.df     // Catch: java.lang.Throwable -> L152
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L152
            if (r0 == 0) goto L12
            return r2
        L12:
            java.lang.String r0 = r18.ms()     // Catch: java.lang.Throwable -> L152
            java.lang.String r3 = r18.pp()     // Catch: java.lang.Throwable -> L152
            java.lang.String r4 = r18.oy()     // Catch: java.lang.Throwable -> L152
            int r5 = r18.g()     // Catch: java.lang.Throwable -> L152
            int[] r6 = com.ss.android.downloadlib.addownload.model.pt.pt     // Catch: java.lang.Throwable -> L152
            int r6 = r6.length     // Catch: java.lang.Throwable -> L152
            com.ss.android.downloadlib.addownload.model.pt$rg[] r7 = new com.ss.android.downloadlib.addownload.model.pt.rg[r6]     // Catch: java.lang.Throwable -> L152
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r8 = r1.df     // Catch: java.lang.Throwable -> L152
            monitor-enter(r8)     // Catch: java.lang.Throwable -> L152
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r9 = r1.df     // Catch: java.lang.Throwable -> L14f
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Throwable -> L14f
            r10 = r2
        L31:
            boolean r11 = r9.hasNext()     // Catch: java.lang.Throwable -> L14f
            r12 = 0
            if (r11 == 0) goto L135
            java.lang.Object r11 = r9.next()     // Catch: java.lang.Throwable -> L14f
            com.ss.android.downloadlib.addownload.model.pt$rg r11 = (com.ss.android.downloadlib.addownload.model.pt.rg) r11     // Catch: java.lang.Throwable -> L14f
            long r13 = r11.pp     // Catch: java.lang.Throwable -> L14f
            long r15 = r18.d()     // Catch: java.lang.Throwable -> L14f
            int r13 = (r13 > r15 ? 1 : (r13 == r15 ? 0 : -1))
            if (r13 >= 0) goto L49
            goto L31
        L49:
            boolean r13 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto L68
            if (r10 != 0) goto L55
            android.content.pm.PackageInfo r10 = com.ss.android.downloadlib.utils.b.rg(r18)     // Catch: java.lang.Throwable -> L14f
        L55:
            if (r10 == 0) goto L68
            android.content.Context r13 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Throwable -> L68
            android.content.pm.PackageManager r13 = r13.getPackageManager()     // Catch: java.lang.Throwable -> L68
            android.content.pm.ApplicationInfo r14 = r10.applicationInfo     // Catch: java.lang.Throwable -> L68
            java.lang.CharSequence r13 = r13.getApplicationLabel(r14)     // Catch: java.lang.Throwable -> L68
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Throwable -> L68
            r0 = r13
        L68:
            boolean r13 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto L9b
            java.lang.String r13 = r11.pt     // Catch: java.lang.Throwable -> L14f
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto L9b
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r13 = r11.pt     // Catch: java.lang.Throwable -> L14f
            boolean r13 = r0.equals(r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto L86
            r7[r12] = r11     // Catch: java.lang.Throwable -> L14f
            goto L135
        L86:
            java.lang.String r13 = r11.pt     // Catch: java.lang.Throwable -> L14f
            boolean r13 = r0.contains(r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto L96
            java.lang.String r13 = r11.pt     // Catch: java.lang.Throwable -> L14f
            boolean r13 = r13.contains(r0)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto L9b
        L96:
            r0 = 1
            r7[r0] = r11     // Catch: java.lang.Throwable -> L14f
            goto L135
        L9b:
            boolean r13 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto Lab
            if (r10 != 0) goto La7
            android.content.pm.PackageInfo r10 = com.ss.android.downloadlib.utils.b.rg(r18)     // Catch: java.lang.Throwable -> L14f
        La7:
            if (r10 == 0) goto Lab
            java.lang.String r3 = r10.packageName     // Catch: java.lang.Throwable -> L14f
        Lab:
            boolean r13 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto Le5
            java.lang.String r13 = r11.rg     // Catch: java.lang.Throwable -> L14f
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto Le5
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r13 = r11.rg     // Catch: java.lang.Throwable -> L14f
            boolean r13 = r3.contains(r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto Le1
            java.lang.String r13 = r11.rg     // Catch: java.lang.Throwable -> L14f
            boolean r13 = r13.contains(r3)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto Lce
            goto Le1
        Lce:
            r12 = 3
            r13 = r7[r12]     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto Ld5
            goto L31
        Ld5:
            java.lang.String r13 = r11.rg     // Catch: java.lang.Throwable -> L14f
            boolean r13 = rg(r3, r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto Le5
            r7[r12] = r11     // Catch: java.lang.Throwable -> L14f
            goto L31
        Le1:
            r0 = 2
            r7[r0] = r11     // Catch: java.lang.Throwable -> L14f
            goto L135
        Le5:
            r12 = 4
            r13 = r7[r12]     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto Lec
            goto L31
        Lec:
            boolean r13 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto Lfc
            if (r10 != 0) goto Lf8
            android.content.pm.PackageInfo r10 = com.ss.android.downloadlib.utils.b.rg(r18)     // Catch: java.lang.Throwable -> L14f
        Lf8:
            if (r10 == 0) goto Lfc
            java.lang.String r4 = r10.versionName     // Catch: java.lang.Throwable -> L14f
        Lfc:
            boolean r13 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto L11a
            java.lang.String r13 = r11.q     // Catch: java.lang.Throwable -> L14f
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 != 0) goto L11a
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r13 = r11.q     // Catch: java.lang.Throwable -> L14f
            boolean r13 = r4.equals(r13)     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto L11a
            r7[r12] = r11     // Catch: java.lang.Throwable -> L14f
            goto L31
        L11a:
            r12 = 5
            r13 = r7[r12]     // Catch: java.lang.Throwable -> L14f
            if (r13 == 0) goto L121
            goto L31
        L121:
            if (r5 > 0) goto L12d
            if (r10 != 0) goto L129
            android.content.pm.PackageInfo r10 = com.ss.android.downloadlib.utils.b.rg(r18)     // Catch: java.lang.Throwable -> L14f
        L129:
            if (r10 == 0) goto L12d
            int r5 = r10.versionCode     // Catch: java.lang.Throwable -> L14f
        L12d:
            int r13 = r11.df     // Catch: java.lang.Throwable -> L14f
            if (r5 != r13) goto L31
            r7[r12] = r11     // Catch: java.lang.Throwable -> L14f
            goto L31
        L135:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L14f
        L136:
            if (r12 >= r6) goto L156
            r0 = r7[r12]     // Catch: java.lang.Throwable -> L152
            if (r0 == 0) goto L14c
            android.util.Pair r0 = new android.util.Pair     // Catch: java.lang.Throwable -> L152
            r3 = r7[r12]     // Catch: java.lang.Throwable -> L152
            int[] r4 = com.ss.android.downloadlib.addownload.model.pt.pt     // Catch: java.lang.Throwable -> L152
            r4 = r4[r12]     // Catch: java.lang.Throwable -> L152
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L152
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L152
            return r0
        L14c:
            int r12 = r12 + 1
            goto L136
        L14f:
            r0 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L14f
            throw r0     // Catch: java.lang.Throwable -> L152
        L152:
            r0 = move-exception
            r0.printStackTrace()
        L156:
            return r2
    }

    public void df(java.lang.String r4) {
            r3 = this;
            r3.df()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto La
            return
        La:
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r0 = r3.df
            monitor-enter(r0)
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r1 = r3.df     // Catch: java.lang.Throwable -> L2e
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2e
        L13:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L2c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2e
            com.ss.android.downloadlib.addownload.model.pt$rg r2 = (com.ss.android.downloadlib.addownload.model.pt.rg) r2     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = r2.rg     // Catch: java.lang.Throwable -> L2e
            boolean r2 = r4.equals(r2)     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L13
            r1.remove()     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            throw r4
    }

    public com.ss.android.downloadlib.addownload.model.pt.rg rg(com.ss.android.downloadad.api.rg.df r9) {
            r8 = this;
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            r8.df()
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r1 = r8.df
            monitor-enter(r1)
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r2 = r8.df     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L2a
        L10:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r3 == 0) goto L28
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L2a
            com.ss.android.downloadlib.addownload.model.pt$rg r3 = (com.ss.android.downloadlib.addownload.model.pt.rg) r3     // Catch: java.lang.Throwable -> L2a
            long r4 = r3.pp     // Catch: java.lang.Throwable -> L2a
            long r6 = r9.d()     // Catch: java.lang.Throwable -> L2a
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L10
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2a
            return r3
        L28:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2a
            return r0
        L2a:
            r9 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2a
            throw r9
    }

    public void rg(java.lang.String r3) {
            r2 = this;
            r2.df()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto La
            return
        La:
            com.ss.android.downloadlib.addownload.model.pt$rg r3 = r2.q(r3)
            if (r3 == 0) goto L1d
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r0 = r2.df
            monitor-enter(r0)
            java.util.LinkedList<com.ss.android.downloadlib.addownload.model.pt$rg> r1 = r2.df     // Catch: java.lang.Throwable -> L1a
            r1.add(r3)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            goto L1d
        L1a:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r3
        L1d:
            return
    }
}

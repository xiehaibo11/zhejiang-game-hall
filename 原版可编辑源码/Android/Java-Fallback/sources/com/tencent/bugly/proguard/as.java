package com.tencent.bugly.proguard;

public final class as {
    public static int a;
    private static final java.util.Map<java.lang.Integer, android.util.Pair<java.lang.String, java.lang.String>> h = null;
    private static final java.util.ArrayList<com.tencent.bugly.proguard.as.a> i = null;
    private static final java.util.Map<java.lang.Integer, java.lang.Integer> j = null;
    private static final java.util.Map<java.lang.Integer, java.lang.String> k = null;
    private static final java.util.Map<java.lang.Integer, java.lang.String> l = null;
    protected final android.content.Context b;
    protected final com.tencent.bugly.proguard.ai c;
    protected final com.tencent.bugly.proguard.w d;
    protected final com.tencent.bugly.proguard.ac e;
    protected com.tencent.bugly.proguard.aw f;
    protected com.tencent.bugly.BuglyStrategy.a g;







    static abstract class a {
        final int a;

        private a(int r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        a(int r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        abstract boolean a();
    }

    static class b extends com.tencent.bugly.proguard.as.a {
        private b() {
                r2 = this;
                r0 = 3
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r1 = this;
                com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
                boolean r0 = r0.k()
                return r0
        }
    }

    static class c extends com.tencent.bugly.proguard.as.a {
        private c() {
                r2 = this;
                r0 = 7
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        c(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    static class d extends com.tencent.bugly.proguard.as.a {
        private d() {
                r2 = this;
                r0 = 2
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        d(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    static class e extends com.tencent.bugly.proguard.as.a {
        private e() {
                r1 = this;
                r0 = 0
                r1.<init>(r0, r0)
                return
        }

        e(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r1 = this;
                com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
                boolean r0 = r0.j()
                return r0
        }
    }

    static class f extends com.tencent.bugly.proguard.as.a {
        private f() {
                r2 = this;
                r0 = 5
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        f(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r1 = this;
                com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
                int r0 = r0.B
                r0 = r0 & 2
                if (r0 <= 0) goto Lc
                r0 = 1
                return r0
            Lc:
                r0 = 0
                return r0
        }
    }

    static class g extends com.tencent.bugly.proguard.as.a {
        private g() {
                r2 = this;
                r0 = 6
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        g(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r2 = this;
                com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
                int r0 = r0.B
                r1 = 1
                r0 = r0 & r1
                if (r0 <= 0) goto Lb
                return r1
            Lb:
                r0 = 0
                return r0
        }
    }

    static class h extends com.tencent.bugly.proguard.as.a {
        private h() {
                r2 = this;
                r0 = 1
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        h(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r1 = this;
                com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
                boolean r0 = r0.j()
                return r0
        }
    }

    static class i extends com.tencent.bugly.proguard.as.a {
        private i() {
                r2 = this;
                r0 = 4
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        i(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        final boolean a() {
                r1 = this;
                com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
                int r0 = r0.B
                r0 = r0 & 4
                if (r0 <= 0) goto Lc
                r0 = 1
                return r0
            Lc:
                r0 = 0
                return r0
        }
    }

    static {
            com.tencent.bugly.proguard.as$1 r0 = new com.tencent.bugly.proguard.as$1
            r0.<init>()
            com.tencent.bugly.proguard.as.h = r0
            com.tencent.bugly.proguard.as$2 r0 = new com.tencent.bugly.proguard.as$2
            r0.<init>()
            com.tencent.bugly.proguard.as.i = r0
            com.tencent.bugly.proguard.as$3 r0 = new com.tencent.bugly.proguard.as$3
            r0.<init>()
            com.tencent.bugly.proguard.as.j = r0
            com.tencent.bugly.proguard.as$4 r0 = new com.tencent.bugly.proguard.as$4
            r0.<init>()
            com.tencent.bugly.proguard.as.k = r0
            com.tencent.bugly.proguard.as$5 r0 = new com.tencent.bugly.proguard.as$5
            r0.<init>()
            com.tencent.bugly.proguard.as.l = r0
            return
    }

    public as(android.content.Context r2, com.tencent.bugly.proguard.ai r3, com.tencent.bugly.proguard.w r4, com.tencent.bugly.proguard.ac r5, com.tencent.bugly.BuglyStrategy.a r6) {
            r1 = this;
            r1.<init>()
            r0 = 1004(0x3ec, float:1.407E-42)
            com.tencent.bugly.proguard.as.a = r0
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r1.e = r5
            r1.g = r6
            r2 = 0
            r1.f = r2
            return
    }

    private static com.tencent.bugly.crashreport.crash.CrashDetailBean a(android.database.Cursor r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "_dt"
            int r1 = r4.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L28
            byte[] r1 = r4.getBlob(r1)     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L11
            return r0
        L11:
            java.lang.String r2 = "_id"
            int r2 = r4.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L28
            long r2 = r4.getLong(r2)     // Catch: java.lang.Throwable -> L28
            android.os.Parcelable$Creator<com.tencent.bugly.crashreport.crash.CrashDetailBean> r4 = com.tencent.bugly.crashreport.crash.CrashDetailBean.CREATOR     // Catch: java.lang.Throwable -> L28
            java.lang.Object r4 = com.tencent.bugly.proguard.ap.a(r1, r4)     // Catch: java.lang.Throwable -> L28
            com.tencent.bugly.crashreport.crash.CrashDetailBean r4 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r4     // Catch: java.lang.Throwable -> L28
            if (r4 == 0) goto L27
            r4.a = r2     // Catch: java.lang.Throwable -> L28
        L27:
            return r4
        L28:
            r4 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r4)
            if (r1 != 0) goto L32
            r4.printStackTrace()
        L32:
            return r0
    }

    private static com.tencent.bugly.crashreport.crash.CrashDetailBean a(java.util.List<com.tencent.bugly.proguard.ar> r6, com.tencent.bugly.crashreport.crash.CrashDetailBean r7) {
            boolean r0 = r6.isEmpty()
            if (r0 == 0) goto L7
            return r7
        L7:
            r0 = 0
            java.util.ArrayList r1 = new java.util.ArrayList
            r2 = 10
            r1.<init>(r2)
            java.util.Iterator r2 = r6.iterator()
        L13:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L27
            java.lang.Object r3 = r2.next()
            com.tencent.bugly.proguard.ar r3 = (com.tencent.bugly.proguard.ar) r3
            boolean r4 = r3.e
            if (r4 == 0) goto L13
            r1.add(r3)
            goto L13
        L27:
            boolean r2 = r1.isEmpty()
            r3 = 0
            if (r2 != 0) goto L46
            java.util.List r1 = c(r1)
            if (r1 == 0) goto L46
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto L46
            java.util.Collections.sort(r1)
            java.lang.Object r0 = r1.get(r3)
            com.tencent.bugly.crashreport.crash.CrashDetailBean r0 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r0
            a(r0, r1)
        L46:
            r1 = 1
            if (r0 != 0) goto L52
            r7.j = r1
            r7.t = r3
            java.lang.String r0 = ""
            r7.s = r0
            r0 = r7
        L52:
            b(r0, r6)
            long r2 = r0.r
            long r4 = r7.r
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 == 0) goto L92
            java.lang.String r6 = r0.s
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            long r3 = r7.r
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            boolean r6 = r6.contains(r2)
            if (r6 != 0) goto L92
            int r6 = r0.t
            int r6 = r6 + r1
            r0.t = r6
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = r0.s
            r6.append(r1)
            long r1 = r7.r
            r6.append(r1)
            java.lang.String r7 = "\n"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r0.s = r6
        L92:
            return r0
    }

    private static com.tencent.bugly.proguard.bn a(java.lang.String r6, android.content.Context r7, java.lang.String r8) {
            java.lang.String r0 = "del tmp"
            r1 = 0
            r2 = 0
            if (r8 == 0) goto Ld3
            if (r7 != 0) goto La
            goto Ld3
        La:
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]
            r4[r2] = r8
            java.lang.String r5 = "zip %s"
            com.tencent.bugly.proguard.al.c(r5, r4)
            java.io.File r4 = new java.io.File
            r4.<init>(r8)
            java.io.File r8 = new java.io.File
            java.io.File r7 = r7.getCacheDir()
            r8.<init>(r7, r6)
            boolean r6 = com.tencent.bugly.proguard.ap.a(r4, r8)
            if (r6 != 0) goto L30
            java.lang.Object[] r6 = new java.lang.Object[r2]
            java.lang.String r7 = "zip fail!"
            com.tencent.bugly.proguard.al.d(r7, r6)
            return r1
        L30:
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream
            r6.<init>()
            java.io.FileInputStream r7 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L86 java.lang.Throwable -> L89
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L86 java.lang.Throwable -> L89
            r4 = 4096(0x1000, float:5.74E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
        L3e:
            int r5 = r7.read(r4)     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            if (r5 <= 0) goto L4b
            r6.write(r4, r2, r5)     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            r6.flush()     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            goto L3e
        L4b:
            byte[] r6 = r6.toByteArray()     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            java.lang.String r4 = "read bytes :%d"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            int r5 = r6.length     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            r3[r2] = r5     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            com.tencent.bugly.proguard.al.c(r4, r3)     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            com.tencent.bugly.proguard.bn r3 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            r4 = 2
            java.lang.String r5 = r8.getName()     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            r3.<init>(r4, r5, r6)     // Catch: java.lang.Throwable -> L84 java.lang.Throwable -> Lb3
            r7.close()     // Catch: java.io.IOException -> L6b
            goto L75
        L6b:
            r6 = move-exception
            boolean r7 = com.tencent.bugly.proguard.al.a(r6)
            if (r7 != 0) goto L75
            r6.printStackTrace()
        L75:
            boolean r6 = r8.exists()
            if (r6 == 0) goto L83
            java.lang.Object[] r6 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r0, r6)
            r8.delete()
        L83:
            return r3
        L84:
            r6 = move-exception
            goto L8b
        L86:
            r6 = move-exception
            r7 = r1
            goto Lb4
        L89:
            r6 = move-exception
            r7 = r1
        L8b:
            boolean r3 = com.tencent.bugly.proguard.al.a(r6)     // Catch: java.lang.Throwable -> Lb3
            if (r3 != 0) goto L94
            r6.printStackTrace()     // Catch: java.lang.Throwable -> Lb3
        L94:
            if (r7 == 0) goto La4
            r7.close()     // Catch: java.io.IOException -> L9a
            goto La4
        L9a:
            r6 = move-exception
            boolean r7 = com.tencent.bugly.proguard.al.a(r6)
            if (r7 != 0) goto La4
            r6.printStackTrace()
        La4:
            boolean r6 = r8.exists()
            if (r6 == 0) goto Lb2
            java.lang.Object[] r6 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r0, r6)
            r8.delete()
        Lb2:
            return r1
        Lb3:
            r6 = move-exception
        Lb4:
            if (r7 == 0) goto Lc4
            r7.close()     // Catch: java.io.IOException -> Lba
            goto Lc4
        Lba:
            r7 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r7)
            if (r1 != 0) goto Lc4
            r7.printStackTrace()
        Lc4:
            boolean r7 = r8.exists()
            if (r7 == 0) goto Ld2
            java.lang.Object[] r7 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r0, r7)
            r8.delete()
        Ld2:
            throw r6
        Ld3:
            java.lang.Object[] r6 = new java.lang.Object[r2]
            java.lang.String r7 = "rqdp{  createZipAttachment sourcePath == null || context == null ,pls check}"
            com.tencent.bugly.proguard.al.d(r7, r6)
            return r1
    }

    private static com.tencent.bugly.proguard.bo a(android.content.Context r7, com.tencent.bugly.crashreport.crash.CrashDetailBean r8, com.tencent.bugly.proguard.aa r9) {
            r0 = 0
            r1 = 0
            if (r7 == 0) goto L1f0
            if (r8 == 0) goto L1f0
            if (r9 != 0) goto La
            goto L1f0
        La:
            com.tencent.bugly.proguard.bo r2 = new com.tencent.bugly.proguard.bo
            r2.<init>()
            java.lang.String r3 = e(r8)
            r2.a = r3
            long r3 = r8.r
            r2.b = r3
            java.lang.String r3 = r8.n
            r2.c = r3
            java.lang.String r3 = r8.o
            r2.d = r3
            java.lang.String r3 = r8.p
            r2.e = r3
            java.lang.String r3 = r8.q
            r2.g = r3
            java.util.Map<java.lang.String, java.lang.String> r3 = r8.z
            r2.h = r3
            java.lang.String r3 = r8.c
            r2.i = r3
            r2.j = r0
            java.lang.String r3 = r8.m
            r2.l = r3
            java.lang.String r3 = r8.e
            r2.m = r3
            java.lang.String r3 = r8.B
            r2.f = r3
            r2.n = r0
            java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> r3 = r8.h
            if (r3 == 0) goto L96
            java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> r3 = r8.h
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L4e
            goto L96
        L4e:
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> r3 = r8.h
            int r3 = r3.size()
            r0.<init>(r3)
            java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> r3 = r8.h
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L63:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L96
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            com.tencent.bugly.proguard.bl r5 = new com.tencent.bugly.proguard.bl
            r5.<init>()
            java.lang.Object r6 = r4.getValue()
            com.tencent.bugly.crashreport.common.info.PlugInBean r6 = (com.tencent.bugly.crashreport.common.info.PlugInBean) r6
            java.lang.String r6 = r6.a
            r5.a = r6
            java.lang.Object r6 = r4.getValue()
            com.tencent.bugly.crashreport.common.info.PlugInBean r6 = (com.tencent.bugly.crashreport.common.info.PlugInBean) r6
            java.lang.String r6 = r6.c
            r5.c = r6
            java.lang.Object r4 = r4.getValue()
            com.tencent.bugly.crashreport.common.info.PlugInBean r4 = (com.tencent.bugly.crashreport.common.info.PlugInBean) r4
            java.lang.String r4 = r4.b
            r5.e = r4
            r0.add(r5)
            goto L63
        L96:
            r2.p = r0
            r0 = 1
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.util.ArrayList<com.tencent.bugly.proguard.bl> r4 = r2.o
            r3[r1] = r4
            java.lang.String r4 = "libInfo %s"
            com.tencent.bugly.proguard.al.c(r4, r3)
            java.util.ArrayList r3 = new java.util.ArrayList
            r4 = 20
            r3.<init>(r4)
            a(r3, r8)
            java.lang.String r4 = r8.w
            a(r3, r4)
            java.lang.String r4 = r8.x
            b(r3, r4)
            java.lang.String r4 = r8.Z
            c(r3, r4)
            java.lang.String r4 = r8.aa
            a(r3, r4, r7)
            byte[] r4 = r8.y
            a(r3, r4)
            a(r3, r8, r7)
            b(r3, r8, r7)
            java.util.List<java.lang.String> r7 = r9.L
            a(r3, r7)
            byte[] r7 = r8.Y
            b(r3, r7)
            r2.q = r3
            boolean r7 = r8.j
            if (r7 == 0) goto Le1
            int r7 = r8.t
            r2.k = r7
        Le1:
            java.util.Map r7 = a(r8, r9)
            r2.r = r7
            java.util.HashMap r7 = new java.util.HashMap
            r7.<init>()
            r2.s = r7
            java.util.Map<java.lang.String, java.lang.String> r7 = r8.S
            if (r7 == 0) goto L114
            java.util.Map<java.lang.String, java.lang.String> r7 = r8.S
            int r7 = r7.size()
            if (r7 <= 0) goto L114
            java.util.Map<java.lang.String, java.lang.String> r7 = r2.s
            java.util.Map<java.lang.String, java.lang.String> r3 = r8.S
            r7.putAll(r3)
            java.lang.Object[] r7 = new java.lang.Object[r0]
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.s
            int r3 = r3.size()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r7[r1] = r3
            java.lang.String r3 = "setted message size %d"
            com.tencent.bugly.proguard.al.a(r3, r7)
        L114:
            java.util.Map<java.lang.String, java.lang.String> r7 = r2.s
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "pss:"
            r3.<init>(r4)
            long r4 = r8.I
            r3.append(r4)
            java.lang.String r4 = " vss:"
            r3.append(r4)
            long r4 = r8.J
            r3.append(r4)
            java.lang.String r4 = " javaHeap:"
            r3.append(r4)
            long r4 = r8.K
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.Object[] r4 = new java.lang.Object[r1]
            com.tencent.bugly.proguard.al.c(r3, r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r4 = r8.I
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "SDK_UPLOAD_U1"
            r7.put(r4, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r4 = r8.J
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "SDK_UPLOAD_U2"
            r7.put(r4, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r4 = r8.K
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "SDK_UPLOAD_U3"
            r7.put(r4, r3)
            r7 = 12
            java.lang.Object[] r7 = new java.lang.Object[r7]
            java.lang.String r3 = r8.n
            r7[r1] = r3
            java.lang.String r3 = r8.c
            r7[r0] = r3
            r3 = 2
            java.lang.String r9 = r9.d()
            r7[r3] = r9
            r9 = 3
            long r3 = r8.r
            long r5 = r8.Q
            long r3 = r3 - r5
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r5
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r7[r9] = r3
            r9 = 4
            boolean r3 = r8.k
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r7[r9] = r3
            r9 = 5
            boolean r3 = r8.R
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r7[r9] = r3
            r9 = 6
            boolean r3 = r8.j
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r7[r9] = r3
            r9 = 7
            int r3 = r8.b
            if (r3 != r0) goto L1bb
            goto L1bc
        L1bb:
            r0 = 0
        L1bc:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r7[r9] = r0
            r9 = 8
            int r0 = r8.t
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r7[r9] = r0
            r9 = 9
            java.lang.String r0 = r8.s
            r7[r9] = r0
            r9 = 10
            boolean r8 = r8.d
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)
            r7[r9] = r8
            r8 = 11
            java.util.Map<java.lang.String, java.lang.String> r9 = r2.r
            int r9 = r9.size()
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            r7[r8] = r9
            java.lang.String r8 = "%s rid:%s sess:%s ls:%ds isR:%b isF:%b isM:%b isN:%b mc:%d ,%s ,isUp:%b ,vm:%d"
            com.tencent.bugly.proguard.al.c(r8, r7)
            return r2
        L1f0:
            java.lang.Object[] r7 = new java.lang.Object[r1]
            java.lang.String r8 = "enExp args == null"
            com.tencent.bugly.proguard.al.d(r8, r7)
            return r0
    }

    private static com.tencent.bugly.proguard.bp a(android.content.Context r3, java.util.List<com.tencent.bugly.crashreport.crash.CrashDetailBean> r4, com.tencent.bugly.proguard.aa r5) {
            if (r3 == 0) goto L34
            if (r4 == 0) goto L34
            int r0 = r4.size()
            if (r0 == 0) goto L34
            if (r5 != 0) goto Ld
            goto L34
        Ld:
            com.tencent.bugly.proguard.bp r0 = new com.tencent.bugly.proguard.bp
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.a = r1
            java.util.Iterator r4 = r4.iterator()
        L1d:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r4.next()
            com.tencent.bugly.crashreport.crash.CrashDetailBean r1 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r1
            java.util.ArrayList<com.tencent.bugly.proguard.bo> r2 = r0.a
            com.tencent.bugly.proguard.bo r1 = a(r3, r1, r5)
            r2.add(r1)
            goto L1d
        L33:
            return r0
        L34:
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = "enEXPPkg args == null!"
            com.tencent.bugly.proguard.al.d(r4, r3)
            r3 = 0
            return r3
    }

    public static java.util.List<com.tencent.bugly.crashreport.crash.CrashDetailBean> a() {
            com.tencent.bugly.proguard.ac r0 = com.tencent.bugly.proguard.ac.a()
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r0.c()
            r1 = 0
            r2 = 0
            if (r0 != 0) goto L14
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r2 = "have not synced remote!"
            com.tencent.bugly.proguard.al.d(r2, r0)
            return r1
        L14:
            boolean r0 = r0.f
            if (r0 != 0) goto L27
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r3 = "Crashreport remote closed, please check your APP ID correct and Version available, then uninstall and reinstall your app."
            com.tencent.bugly.proguard.al.d(r3, r0)
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r2 = "[init] WARNING! Crashreport closed by server, please check your APP ID correct and Version available, then uninstall and reinstall your app."
            com.tencent.bugly.proguard.al.b(r2, r0)
            return r1
        L27:
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = com.tencent.bugly.proguard.ap.b()
            java.util.List r0 = b()
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]
            int r8 = r0.size()
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r7[r2] = r8
            java.lang.String r2 = "Size of crash list loaded from DB: %s"
            com.tencent.bugly.proguard.al.c(r2, r7)
            if (r0 == 0) goto L109
            int r2 = r0.size()
            if (r2 > 0) goto L4f
            goto L109
        L4f:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r7 = a(r0)
            r1.addAll(r7)
            r0.removeAll(r1)
            java.util.Iterator r7 = r0.iterator()
        L67:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto Lbd
            java.lang.Object r8 = r7.next()
            com.tencent.bugly.proguard.ar r8 = (com.tencent.bugly.proguard.ar) r8
            long r9 = r8.b
            long r11 = com.tencent.bugly.proguard.at.j
            long r11 = r5 - r11
            int r13 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r13 >= 0) goto L87
            r2.add(r8)
            r7.remove()
            r1.add(r8)
            goto L67
        L87:
            boolean r9 = r8.d
            r10 = 86400000(0x5265c00, double:4.2687272E-316)
            if (r9 == 0) goto La5
            long r12 = r8.b
            long r9 = r3 - r10
            int r11 = (r12 > r9 ? 1 : (r12 == r9 ? 0 : -1))
            if (r11 < 0) goto L9a
            r7.remove()
            goto L67
        L9a:
            boolean r9 = r8.e
            if (r9 != 0) goto L67
            r7.remove()
            r1.add(r8)
            goto L67
        La5:
            int r9 = r8.f
            long r12 = (long) r9
            r14 = 3
            int r9 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r9 < 0) goto L67
            long r12 = r8.b
            long r9 = r3 - r10
            int r11 = (r12 > r9 ? 1 : (r12 == r9 ? 0 : -1))
            if (r11 >= 0) goto L67
            r7.remove()
            r1.add(r8)
            goto L67
        Lbd:
            b(r2)
            int r2 = r1.size()
            if (r2 <= 0) goto Lc9
            d(r1)
        Lc9:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.List r0 = c(r0)
            if (r0 == 0) goto Lff
            int r2 = r0.size()
            if (r2 <= 0) goto Lff
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.b()
            java.lang.String r2 = r2.o
            java.util.Iterator r3 = r0.iterator()
        Le4:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto Lff
            java.lang.Object r4 = r3.next()
            com.tencent.bugly.crashreport.crash.CrashDetailBean r4 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r4
            java.lang.String r5 = r4.f
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto Le4
            r3.remove()
            r1.add(r4)
            goto Le4
        Lff:
            int r2 = r1.size()
            if (r2 <= 0) goto L108
            e(r1)
        L108:
            return r0
        L109:
            return r1
    }

    private static java.util.List<com.tencent.bugly.proguard.ar> a(java.util.List<com.tencent.bugly.proguard.ar> r9) {
            if (r9 == 0) goto L36
            int r0 = r9.size()
            if (r0 != 0) goto L9
            goto L36
        L9:
            long r0 = java.lang.System.currentTimeMillis()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Iterator r9 = r9.iterator()
        L16:
            boolean r3 = r9.hasNext()
            if (r3 == 0) goto L35
            java.lang.Object r3 = r9.next()
            com.tencent.bugly.proguard.ar r3 = (com.tencent.bugly.proguard.ar) r3
            boolean r4 = r3.d
            if (r4 == 0) goto L16
            long r4 = r3.b
            r6 = 86400000(0x5265c00, double:4.2687272E-316)
            long r6 = r0 - r6
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 > 0) goto L16
            r2.add(r3)
            goto L16
        L35:
            return r2
        L36:
            r9 = 0
            return r9
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(com.tencent.bugly.crashreport.crash.CrashDetailBean r6, com.tencent.bugly.proguard.aa r7) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 30
            r0.<init>(r1)
            java.lang.String r1 = "A9"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r6.C     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A11"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r6.D     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A10"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r6.E     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A23"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r6.f     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A7"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            r7.getClass()     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A6"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = com.tencent.bugly.proguard.aa.n()     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A5"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.m()     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A22"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.g()     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A2"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r6.G     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A1"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r6.F     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A24"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.k     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A17"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r6.H     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A25"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.g()     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A15"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.q()     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A13"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.Boolean r3 = r7.r()     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A34"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r6.A     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = r7.G     // Catch: java.lang.Exception -> L28a
            if (r1 == 0) goto L158
            java.lang.String r1 = "productIdentify"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.G     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
        L158:
            java.lang.String r1 = "A26"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r6.L     // Catch: java.lang.Exception -> L28a
            java.lang.String r4 = "utf-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r4)     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            int r1 = r6.b     // Catch: java.lang.Exception -> L28a
            r2 = 1
            if (r1 != r2) goto L1af
            java.lang.String r1 = "A27"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r3.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r4 = r6.O     // Catch: java.lang.Exception -> L28a
            r3.append(r4)     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A28"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r3.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r4 = r6.N     // Catch: java.lang.Exception -> L28a
            r3.append(r4)     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A29"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r3.<init>()     // Catch: java.lang.Exception -> L28a
            boolean r4 = r6.k     // Catch: java.lang.Exception -> L28a
            r3.append(r4)     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L28a
        L1af:
            java.lang.String r1 = "A30"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r3.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r4 = r6.P     // Catch: java.lang.Exception -> L28a
            r3.append(r4)     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A18"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r3.<init>()     // Catch: java.lang.Exception -> L28a
            long r4 = r6.Q     // Catch: java.lang.Exception -> L28a
            r3.append(r4)     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "A36"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r3.<init>()     // Catch: java.lang.Exception -> L28a
            boolean r4 = r6.R     // Catch: java.lang.Exception -> L28a
            if (r4 != 0) goto L1e1
            goto L1e2
        L1e1:
            r2 = 0
        L1e2:
            r3.append(r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F02"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r7.z     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F03"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r7.A     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F04"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.d()     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F05"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r7.B     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F06"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.y     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F08"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.E     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F09"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            java.lang.String r3 = r7.F     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L28a
            java.lang.String r1 = "F10"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28a
            r2.<init>()     // Catch: java.lang.Exception -> L28a
            long r3 = r7.C     // Catch: java.lang.Exception -> L28a
            r2.append(r3)     // Catch: java.lang.Exception -> L28a
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Exception -> L28a
            r0.put(r1, r7)     // Catch: java.lang.Exception -> L28a
            a(r0, r6)     // Catch: java.lang.Exception -> L28a
            goto L291
        L28a:
            r6 = move-exception
            r6.printStackTrace()
            com.tencent.bugly.proguard.al.a(r6)
        L291:
            return r0
    }

    private static void a(com.tencent.bugly.crashreport.crash.CrashDetailBean r9, java.util.List<com.tencent.bugly.crashreport.crash.CrashDetailBean> r10) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            r1 = 1
            r2 = 1
        L9:
            int r3 = r10.size()
            if (r2 >= r3) goto L42
            java.lang.Object r3 = r10.get(r2)
            com.tencent.bugly.crashreport.crash.CrashDetailBean r3 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r3
            java.lang.String r4 = r3.s
            if (r4 == 0) goto L3f
            java.lang.String r3 = r3.s
            java.lang.String r4 = "\n"
            java.lang.String[] r3 = r3.split(r4)
            if (r3 == 0) goto L3f
            int r5 = r3.length
            r6 = 0
        L25:
            if (r6 >= r5) goto L3f
            r7 = r3[r6]
            java.lang.String r8 = r9.s
            boolean r8 = r8.contains(r7)
            if (r8 != 0) goto L3c
            int r8 = r9.t
            int r8 = r8 + r1
            r9.t = r8
            r0.append(r7)
            r0.append(r4)
        L3c:
            int r6 = r6 + 1
            goto L25
        L3f:
            int r2 = r2 + 1
            goto L9
        L42:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = r9.s
            r10.append(r1)
            java.lang.String r0 = r0.toString()
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            r9.s = r10
            return
    }

    private static void a(com.tencent.bugly.crashreport.crash.CrashDetailBean r7, java.util.Map<java.lang.String, java.lang.String> r8) {
            r0 = 0
            if (r8 == 0) goto Lba
            boolean r1 = r8.isEmpty()
            if (r1 == 0) goto Lb
            goto Lba
        Lb:
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            int r2 = r8.size()
            r1.<init>(r2)
            r7.S = r1
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L1e:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto Lb9
            java.lang.Object r1 = r8.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = com.tencent.bugly.proguard.ap.b(r2)
            if (r2 != 0) goto L1e
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            int r3 = r2.length()
            r4 = 1
            r5 = 2
            r6 = 100
            if (r3 <= r6) goto L59
            java.lang.String r2 = r2.substring(r0, r6)
            java.lang.Object[] r3 = new java.lang.Object[r5]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r3[r0] = r6
            r3[r4] = r2
            java.lang.String r6 = "setted key length is over limit %d substring to %s"
            com.tencent.bugly.proguard.al.d(r6, r3)
        L59:
            java.lang.Object r3 = r1.getValue()
            java.lang.String r3 = (java.lang.String) r3
            boolean r3 = com.tencent.bugly.proguard.ap.b(r3)
            if (r3 != 0) goto L99
            java.lang.Object r3 = r1.getValue()
            java.lang.String r3 = (java.lang.String) r3
            int r3 = r3.length()
            r6 = 100000(0x186a0, float:1.4013E-40)
            if (r3 <= r6) goto L99
            java.lang.Object r3 = r1.getValue()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            int r1 = r1.length()
            int r1 = r1 - r6
            java.lang.String r1 = r3.substring(r1)
            java.lang.Object[] r3 = new java.lang.Object[r5]
            r3[r0] = r2
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r3[r4] = r6
            java.lang.String r6 = "setted %s value length is over limit %d substring"
            com.tencent.bugly.proguard.al.d(r6, r3)
            goto L9f
        L99:
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
        L9f:
            java.util.Map<java.lang.String, java.lang.String> r3 = r7.S
            r3.put(r2, r1)
            java.lang.Object[] r3 = new java.lang.Object[r5]
            r3[r0] = r2
            int r1 = r1.length()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3[r4] = r1
            java.lang.String r1 = "add setted key %s value size:%d"
            com.tencent.bugly.proguard.al.a(r1, r3)
            goto L1e
        Lb9:
            return
        Lba:
            java.lang.Object[] r7 = new java.lang.Object[r0]
            java.lang.String r8 = "extra map is empty. CrashBean won't have userDatas."
            com.tencent.bugly.proguard.al.d(r8, r7)
            return
    }

    public static void a(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, com.tencent.bugly.crashreport.crash.CrashDetailBean r12) {
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            if (r0 != 0) goto L7
            return
        L7:
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = "#++++++++++Record By Bugly++++++++++#"
            com.tencent.bugly.proguard.al.e(r3, r2)
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = "# You can use Bugly(http:\\\\bugly.qq.com) to get more Crash Detail!"
            com.tencent.bugly.proguard.al.e(r3, r2)
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = r0.c
            r3[r1] = r4
            java.lang.String r4 = "# PKG NAME: %s"
            com.tencent.bugly.proguard.al.e(r4, r3)
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = r0.o
            r3[r1] = r4
            java.lang.String r4 = "# APP VER: %s"
            com.tencent.bugly.proguard.al.e(r4, r3)
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = r0.h
            r3[r1] = r4
            java.lang.String r4 = "# SDK VER: %s"
            com.tencent.bugly.proguard.al.e(r4, r3)
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.util.Date r4 = new java.util.Date
            com.tencent.bugly.proguard.aa r5 = com.tencent.bugly.proguard.aa.b()
            long r5 = r5.a
            r4.<init>(r5)
            java.lang.String r4 = com.tencent.bugly.proguard.ap.a(r4)
            r3[r1] = r4
            java.lang.String r4 = "# LAUNCH TIME: %s"
            com.tencent.bugly.proguard.al.e(r4, r3)
            java.lang.Object[] r3 = new java.lang.Object[r2]
            r3[r1] = r7
            java.lang.String r7 = "# CRASH TYPE: %s"
            com.tencent.bugly.proguard.al.e(r7, r3)
            java.lang.Object[] r7 = new java.lang.Object[r2]
            r7[r1] = r8
            java.lang.String r8 = "# CRASH TIME: %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
            java.lang.Object[] r7 = new java.lang.Object[r2]
            r7[r1] = r9
            java.lang.String r8 = "# CRASH PROCESS: %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
            java.lang.Object[] r7 = new java.lang.Object[r2]
            boolean r8 = r0.a()
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)
            r7[r1] = r8
            java.lang.String r8 = "# CRASH FOREGROUND: %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
            java.lang.Object[] r7 = new java.lang.Object[r2]
            r7[r1] = r10
            java.lang.String r8 = "# CRASH THREAD: %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
            if (r12 == 0) goto L132
            java.lang.Object[] r7 = new java.lang.Object[r2]
            java.lang.String r8 = r12.c
            r7[r1] = r8
            java.lang.String r8 = "# REPORT ID: %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
            r7 = 2
            java.lang.Object[] r8 = new java.lang.Object[r7]
            java.lang.String r9 = r0.h()
            r8[r1] = r9
            java.lang.Boolean r9 = r0.r()
            boolean r9 = r9.booleanValue()
            if (r9 == 0) goto La8
            java.lang.String r9 = "ROOTED"
            goto Laa
        La8:
            java.lang.String r9 = "UNROOT"
        Laa:
            r8[r2] = r9
            java.lang.String r9 = "# CRASH DEVICE: %s %s"
            com.tencent.bugly.proguard.al.e(r9, r8)
            r8 = 3
            java.lang.Object[] r9 = new java.lang.Object[r8]
            long r3 = r12.C
            java.lang.Long r10 = java.lang.Long.valueOf(r3)
            r9[r1] = r10
            long r3 = r12.D
            java.lang.Long r10 = java.lang.Long.valueOf(r3)
            r9[r2] = r10
            long r3 = r12.E
            java.lang.Long r10 = java.lang.Long.valueOf(r3)
            r9[r7] = r10
            java.lang.String r10 = "# RUNTIME AVAIL RAM:%d ROM:%d SD:%d"
            com.tencent.bugly.proguard.al.e(r10, r9)
            java.lang.Object[] r9 = new java.lang.Object[r8]
            long r3 = r12.F
            java.lang.Long r10 = java.lang.Long.valueOf(r3)
            r9[r1] = r10
            long r3 = r12.G
            java.lang.Long r10 = java.lang.Long.valueOf(r3)
            r9[r2] = r10
            long r3 = r12.H
            java.lang.Long r10 = java.lang.Long.valueOf(r3)
            r9[r7] = r10
            java.lang.String r10 = "# RUNTIME TOTAL RAM:%d ROM:%d SD:%d"
            com.tencent.bugly.proguard.al.e(r10, r9)
            java.lang.String r9 = r12.O
            boolean r9 = com.tencent.bugly.proguard.ap.b(r9)
            if (r9 != 0) goto L108
            java.lang.Object[] r7 = new java.lang.Object[r7]
            java.lang.String r8 = r12.O
            r7[r1] = r8
            java.lang.String r8 = r12.N
            r7[r2] = r8
            java.lang.String r8 = "# EXCEPTION FIRED BY %s %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
            goto L132
        L108:
            int r7 = r12.b
            if (r7 != r8) goto L132
            java.lang.Object[] r7 = new java.lang.Object[r2]
            java.util.Map<java.lang.String, java.lang.String> r8 = r12.T
            if (r8 != 0) goto L115
            java.lang.String r8 = "null"
            goto L12b
        L115:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.util.Map<java.lang.String, java.lang.String> r9 = r12.T
            java.lang.String r10 = "BUGLY_CR_01"
            java.lang.Object r9 = r9.get(r10)
            java.lang.String r9 = (java.lang.String) r9
            r8.append(r9)
            java.lang.String r8 = r8.toString()
        L12b:
            r7[r1] = r8
            java.lang.String r8 = "# EXCEPTION ANR MESSAGE:\n %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
        L132:
            boolean r7 = com.tencent.bugly.proguard.ap.b(r11)
            if (r7 != 0) goto L144
            java.lang.Object[] r7 = new java.lang.Object[r1]
            java.lang.String r8 = "# CRASH STACK: "
            com.tencent.bugly.proguard.al.e(r8, r7)
            java.lang.Object[] r7 = new java.lang.Object[r1]
            com.tencent.bugly.proguard.al.e(r11, r7)
        L144:
            java.lang.Object[] r7 = new java.lang.Object[r1]
            java.lang.String r8 = "#++++++++++++++++++++++++++++++++++++++++++#"
            com.tencent.bugly.proguard.al.e(r8, r7)
            return
    }

    private static void a(java.util.ArrayList<com.tencent.bugly.proguard.bn> r4, com.tencent.bugly.crashreport.crash.CrashDetailBean r5) {
            boolean r0 = r5.j
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r0 = r5.s
            if (r0 == 0) goto L2c
            java.lang.String r0 = r5.s
            int r0 = r0.length()
            if (r0 <= 0) goto L2c
            com.tencent.bugly.proguard.bn r0 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L25
            r1 = 1
            java.lang.String r2 = "alltimes.txt"
            java.lang.String r5 = r5.s     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = "utf-8"
            byte[] r5 = r5.getBytes(r3)     // Catch: java.lang.Exception -> L25
            r0.<init>(r1, r2, r5)     // Catch: java.lang.Exception -> L25
            r4.add(r0)     // Catch: java.lang.Exception -> L25
            return
        L25:
            r4 = move-exception
            r4.printStackTrace()
            com.tencent.bugly.proguard.al.a(r4)
        L2c:
            return
    }

    private static void a(java.util.ArrayList<com.tencent.bugly.proguard.bn> r7, com.tencent.bugly.crashreport.crash.CrashDetailBean r8, android.content.Context r9) {
            java.lang.String r0 = "BUGLY_CR_01"
            int r1 = r8.b
            r2 = 3
            if (r1 == r2) goto L8
            return
        L8:
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.util.Map<java.lang.String, java.lang.String> r3 = r8.T
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "crashBean.anrMessages:%s"
            com.tencent.bugly.proguard.al.c(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = r8.T     // Catch: java.lang.Exception -> L6c
            if (r2 == 0) goto L53
            java.util.Map<java.lang.String, java.lang.String> r2 = r8.T     // Catch: java.lang.Exception -> L6c
            boolean r2 = r2.containsKey(r0)     // Catch: java.lang.Exception -> L6c
            if (r2 == 0) goto L53
            java.util.Map<java.lang.String, java.lang.String> r2 = r8.T     // Catch: java.lang.Exception -> L6c
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L6c
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2     // Catch: java.lang.Exception -> L6c
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L6c
            if (r2 != 0) goto L4e
            com.tencent.bugly.proguard.bn r2 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = "anrMessage.txt"
            java.util.Map<java.lang.String, java.lang.String> r5 = r8.T     // Catch: java.lang.Exception -> L6c
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Exception -> L6c
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L6c
            java.lang.String r6 = "utf-8"
            byte[] r5 = r5.getBytes(r6)     // Catch: java.lang.Exception -> L6c
            r2.<init>(r1, r3, r5)     // Catch: java.lang.Exception -> L6c
            r7.add(r2)     // Catch: java.lang.Exception -> L6c
            java.lang.String r1 = "attach anr message"
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L6c
            com.tencent.bugly.proguard.al.c(r1, r2)     // Catch: java.lang.Exception -> L6c
        L4e:
            java.util.Map<java.lang.String, java.lang.String> r1 = r8.T     // Catch: java.lang.Exception -> L6c
            r1.remove(r0)     // Catch: java.lang.Exception -> L6c
        L53:
            java.lang.String r0 = r8.v     // Catch: java.lang.Exception -> L6c
            if (r0 == 0) goto L6b
            java.lang.String r0 = "trace.zip"
            java.lang.String r8 = r8.v     // Catch: java.lang.Exception -> L6c
            com.tencent.bugly.proguard.bn r8 = a(r0, r9, r8)     // Catch: java.lang.Exception -> L6c
            if (r8 == 0) goto L6b
            java.lang.String r9 = "attach traces"
            java.lang.Object[] r0 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L6c
            com.tencent.bugly.proguard.al.c(r9, r0)     // Catch: java.lang.Exception -> L6c
            r7.add(r8)     // Catch: java.lang.Exception -> L6c
        L6b:
            return
        L6c:
            r7 = move-exception
            r7.printStackTrace()
            com.tencent.bugly.proguard.al.a(r7)
            return
    }

    private static void a(java.util.ArrayList<com.tencent.bugly.proguard.bn> r4, java.lang.String r5) {
            if (r5 == 0) goto L1b
            com.tencent.bugly.proguard.bn r0 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L14
            r1 = 1
            java.lang.String r2 = "log.txt"
            java.lang.String r3 = "utf-8"
            byte[] r5 = r5.getBytes(r3)     // Catch: java.lang.Exception -> L14
            r0.<init>(r1, r2, r5)     // Catch: java.lang.Exception -> L14
            r4.add(r0)     // Catch: java.lang.Exception -> L14
            return
        L14:
            r4 = move-exception
            r4.printStackTrace()
            com.tencent.bugly.proguard.al.a(r4)
        L1b:
            return
    }

    private static void a(java.util.ArrayList<com.tencent.bugly.proguard.bn> r1, java.lang.String r2, android.content.Context r3) {
            if (r2 == 0) goto L1a
            java.lang.String r0 = "backupRecord.zip"
            com.tencent.bugly.proguard.bn r2 = a(r0, r3, r2)     // Catch: java.lang.Exception -> L16
            if (r2 == 0) goto L15
            java.lang.String r3 = "attach backup record"
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L16
            com.tencent.bugly.proguard.al.c(r3, r0)     // Catch: java.lang.Exception -> L16
            r1.add(r2)     // Catch: java.lang.Exception -> L16
        L15:
            return
        L16:
            r1 = move-exception
            com.tencent.bugly.proguard.al.a(r1)
        L1a:
            return
    }

    private static void a(java.util.ArrayList<com.tencent.bugly.proguard.bn> r4, java.util.List<java.lang.String> r5) {
            if (r5 == 0) goto L43
            boolean r0 = r5.isEmpty()
            if (r0 != 0) goto L43
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r5 = r5.iterator()
        L11:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r5.next()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            goto L11
        L21:
            com.tencent.bugly.proguard.bn r5 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L3f
            r1 = 1
            java.lang.String r2 = "martianlog.txt"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L3f
            java.lang.String r3 = "utf-8"
            byte[] r0 = r0.getBytes(r3)     // Catch: java.lang.Exception -> L3f
            r5.<init>(r1, r2, r0)     // Catch: java.lang.Exception -> L3f
            r4.add(r5)     // Catch: java.lang.Exception -> L3f
            java.lang.String r4 = "attach pageTracingList"
            r5 = 0
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L3f
            com.tencent.bugly.proguard.al.c(r4, r5)     // Catch: java.lang.Exception -> L3f
            return
        L3f:
            r4 = move-exception
            r4.printStackTrace()
        L43:
            return
    }

    private static void a(java.util.ArrayList<com.tencent.bugly.proguard.bn> r3, byte[] r4) {
            if (r4 == 0) goto L1d
            int r0 = r4.length
            if (r0 <= 0) goto L1d
            com.tencent.bugly.proguard.bn r0 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L19
            r1 = 2
            java.lang.String r2 = "buglylog.zip"
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Exception -> L19
            java.lang.String r4 = "attach user log"
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L19
            com.tencent.bugly.proguard.al.c(r4, r1)     // Catch: java.lang.Exception -> L19
            r3.add(r0)     // Catch: java.lang.Exception -> L19
            return
        L19:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L1d:
            return
    }

    static void a(java.util.List r14, boolean r15, long r16, java.lang.String r18, java.lang.String r19) {
            if (r14 == 0) goto L4e
            boolean r0 = r14.isEmpty()
            if (r0 != 0) goto L4e
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r1 = r14.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L47
            java.lang.Object r2 = r1.next()
            com.tencent.bugly.crashreport.crash.CrashDetailBean r2 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r2
            java.util.Map<java.lang.Integer, java.lang.String> r3 = com.tencent.bugly.proguard.as.l
            int r4 = r2.b
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.Object r3 = r3.get(r4)
            r6 = r3
            java.lang.String r6 = (java.lang.String) r6
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 != 0) goto L11
            com.tencent.bugly.proguard.ag$c r3 = new com.tencent.bugly.proguard.ag$c
            java.lang.String r5 = r2.c
            long r7 = r2.r
            r4 = r3
            r9 = r15
            r10 = r16
            r12 = r18
            r13 = r19
            r4.<init>(r5, r6, r7, r9, r10, r12, r13)
            r0.add(r3)
            goto L11
        L47:
            com.tencent.bugly.proguard.ag r1 = com.tencent.bugly.proguard.ag.a.a()
            r1.a(r0)
        L4e:
            return
    }

    private static void a(java.util.Map<java.lang.String, java.lang.String> r4, com.tencent.bugly.crashreport.crash.CrashDetailBean r5) {
            int r0 = r5.U
            if (r0 < 0) goto L17
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.U
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "C01"
            r4.put(r1, r0)
        L17:
            int r0 = r5.V
            if (r0 < 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.V
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "C02"
            r4.put(r1, r0)
        L2e:
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.W
            if (r0 == 0) goto L6c
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.W
            int r0 = r0.size()
            if (r0 <= 0) goto L6c
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.W
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L44:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L6c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "C03_"
            r2.<init>(r3)
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.Object r1 = r1.getValue()
            r4.put(r2, r1)
            goto L44
        L6c:
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.X
            if (r0 == 0) goto Laa
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.X
            int r0 = r0.size()
            if (r0 <= 0) goto Laa
            java.util.Map<java.lang.String, java.lang.String> r5 = r5.X
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L82:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto Laa
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "C04_"
            r1.<init>(r2)
            java.lang.Object r2 = r0.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object r0 = r0.getValue()
            r4.put(r1, r0)
            goto L82
        Laa:
            return
    }

    public static void a(boolean r9, java.util.List<com.tencent.bugly.crashreport.crash.CrashDetailBean> r10) {
            r0 = 0
            if (r10 == 0) goto La1
            int r1 = r10.size()
            if (r1 <= 0) goto La1
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r9)
            r2[r0] = r3
            java.lang.String r3 = "up finish update state %b"
            com.tencent.bugly.proguard.al.c(r3, r2)
            java.util.Iterator r2 = r10.iterator()
        L1b:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L78
            java.lang.Object r3 = r2.next()
            com.tencent.bugly.crashreport.crash.CrashDetailBean r3 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r3
            r4 = 4
            java.lang.Object[] r5 = new java.lang.Object[r4]
            java.lang.String r6 = r3.c
            r5[r0] = r6
            int r6 = r3.l
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r5[r1] = r6
            boolean r6 = r3.d
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r7 = 2
            r5[r7] = r6
            boolean r6 = r3.j
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r8 = 3
            r5[r8] = r6
            java.lang.String r6 = "pre uid:%s uc:%d re:%b me:%b"
            com.tencent.bugly.proguard.al.c(r6, r5)
            int r5 = r3.l
            int r5 = r5 + r1
            r3.l = r5
            r3.d = r9
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r5 = r3.c
            r4[r0] = r5
            int r5 = r3.l
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r1] = r5
            boolean r5 = r3.d
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)
            r4[r7] = r5
            boolean r3 = r3.j
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r4[r8] = r3
            java.lang.String r3 = "set uid:%s uc:%d re:%b me:%b"
            com.tencent.bugly.proguard.al.c(r3, r4)
            goto L1b
        L78:
            java.util.Iterator r2 = r10.iterator()
        L7c:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L90
            java.lang.Object r3 = r2.next()
            com.tencent.bugly.crashreport.crash.CrashDetailBean r3 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r3
            com.tencent.bugly.proguard.at r4 = com.tencent.bugly.proguard.at.a()
            r4.a(r3)
            goto L7c
        L90:
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r10 = r10.size()
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r1[r0] = r10
            java.lang.String r10 = "update state size %d"
            com.tencent.bugly.proguard.al.c(r10, r1)
        La1:
            if (r9 != 0) goto Laa
            java.lang.Object[] r9 = new java.lang.Object[r0]
            java.lang.String r10 = "[crash] upload fail."
            com.tencent.bugly.proguard.al.b(r10, r9)
        Laa:
            return
    }

    private static boolean a(com.tencent.bugly.crashreport.crash.CrashDetailBean r4, java.util.List<com.tencent.bugly.proguard.ar> r5, java.util.List<com.tencent.bugly.proguard.ar> r6) {
            java.util.Iterator r5 = r5.iterator()
            r0 = 0
        L5:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r5.next()
            com.tencent.bugly.proguard.ar r1 = (com.tencent.bugly.proguard.ar) r1
            java.lang.String r2 = r4.u
            java.lang.String r3 = r1.c
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L5
            boolean r2 = r1.e
            if (r2 == 0) goto L20
            r0 = 1
        L20:
            r6.add(r1)
            goto L5
        L24:
            return r0
    }

    private static boolean a(java.lang.String r5) {
            java.lang.String r0 = com.tencent.bugly.proguard.at.r
            r1 = 0
            if (r0 == 0) goto L4a
            java.lang.String r0 = com.tencent.bugly.proguard.at.r
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L4a
            java.lang.String r0 = "Crash regular filter for crash stack is: %s"
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L31
            java.lang.String r4 = com.tencent.bugly.proguard.at.r     // Catch: java.lang.Exception -> L31
            r3[r1] = r4     // Catch: java.lang.Exception -> L31
            com.tencent.bugly.proguard.al.c(r0, r3)     // Catch: java.lang.Exception -> L31
            java.lang.String r0 = com.tencent.bugly.proguard.at.r     // Catch: java.lang.Exception -> L31
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)     // Catch: java.lang.Exception -> L31
            java.util.regex.Matcher r5 = r0.matcher(r5)     // Catch: java.lang.Exception -> L31
            boolean r5 = r5.find()     // Catch: java.lang.Exception -> L31
            if (r5 == 0) goto L4a
            java.lang.String r5 = "This crash matches the regular filter string set. It will not be record and upload."
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L31
            com.tencent.bugly.proguard.al.d(r5, r0)     // Catch: java.lang.Exception -> L31
            return r2
        L31:
            r5 = move-exception
            com.tencent.bugly.proguard.al.a(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r0 = "Failed to compile "
            r5.<init>(r0)
            java.lang.String r0 = com.tencent.bugly.proguard.at.r
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.tencent.bugly.proguard.al.d(r5, r0)
        L4a:
            return r1
    }

    private static com.tencent.bugly.proguard.ar b(android.database.Cursor r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            com.tencent.bugly.proguard.ar r1 = new com.tencent.bugly.proguard.ar     // Catch: java.lang.Throwable -> L5c
            r1.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "_id"
            int r2 = r5.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L5c
            long r2 = r5.getLong(r2)     // Catch: java.lang.Throwable -> L5c
            r1.a = r2     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "_tm"
            int r2 = r5.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L5c
            long r2 = r5.getLong(r2)     // Catch: java.lang.Throwable -> L5c
            r1.b = r2     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "_s1"
            int r2 = r5.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = r5.getString(r2)     // Catch: java.lang.Throwable -> L5c
            r1.c = r2     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "_up"
            int r2 = r5.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L5c
            int r2 = r5.getInt(r2)     // Catch: java.lang.Throwable -> L5c
            r3 = 0
            r4 = 1
            if (r2 != r4) goto L3d
            r2 = 1
            goto L3e
        L3d:
            r2 = 0
        L3e:
            r1.d = r2     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "_me"
            int r2 = r5.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L5c
            int r2 = r5.getInt(r2)     // Catch: java.lang.Throwable -> L5c
            if (r2 != r4) goto L4d
            r3 = 1
        L4d:
            r1.e = r3     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "_uc"
            int r2 = r5.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L5c
            int r5 = r5.getInt(r2)     // Catch: java.lang.Throwable -> L5c
            r1.f = r5     // Catch: java.lang.Throwable -> L5c
            return r1
        L5c:
            r5 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r5)
            if (r1 != 0) goto L66
            r5.printStackTrace()
        L66:
            return r0
    }

    private static java.util.List<com.tencent.bugly.proguard.ar> b() {
            java.lang.String r0 = "t_cr"
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
            java.lang.String r3 = "_id"
            java.lang.String r4 = "_tm"
            java.lang.String r5 = "_s1"
            java.lang.String r6 = "_up"
            java.lang.String r7 = "_me"
            java.lang.String r8 = "_uc"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4, r5, r6, r7, r8}     // Catch: java.lang.Throwable -> Lb7 java.lang.Throwable -> Lba
            com.tencent.bugly.proguard.w r4 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> Lb7 java.lang.Throwable -> Lba
            android.database.Cursor r3 = r4.a(r0, r3, r2)     // Catch: java.lang.Throwable -> Lb7 java.lang.Throwable -> Lba
            if (r3 != 0) goto L28
            if (r3 == 0) goto L27
            r3.close()
        L27:
            return r2
        L28:
            int r2 = r3.getCount()     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            if (r2 > 0) goto L34
            if (r3 == 0) goto L33
            r3.close()
        L33:
            return r1
        L34:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            r2.<init>()     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            java.lang.String r4 = "_id in ("
            r2.append(r4)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            r4 = 0
            r5 = 0
        L40:
            boolean r6 = r3.moveToNext()     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            java.lang.String r7 = ","
            if (r6 == 0) goto L6d
            com.tencent.bugly.proguard.ar r6 = b(r3)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            if (r6 == 0) goto L52
            r1.add(r6)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            goto L40
        L52:
            java.lang.String r6 = "_id"
            int r6 = r3.getColumnIndex(r6)     // Catch: java.lang.Throwable -> L65 java.lang.Throwable -> Lb2
            long r8 = r3.getLong(r6)     // Catch: java.lang.Throwable -> L65 java.lang.Throwable -> Lb2
            r2.append(r8)     // Catch: java.lang.Throwable -> L65 java.lang.Throwable -> Lb2
            r2.append(r7)     // Catch: java.lang.Throwable -> L65 java.lang.Throwable -> Lb2
            int r5 = r5 + 1
            goto L40
        L65:
            java.lang.String r6 = "unknown id!"
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            com.tencent.bugly.proguard.al.d(r6, r7)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            goto L40
        L6d:
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            boolean r6 = r6.contains(r7)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            if (r6 == 0) goto L85
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            int r7 = r2.lastIndexOf(r7)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            java.lang.String r2 = r2.substring(r4, r7)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            r6.<init>(r2)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            r2 = r6
        L85:
            java.lang.String r6 = ")"
            r2.append(r6)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            r2.setLength(r4)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            if (r5 <= 0) goto Lac
            com.tencent.bugly.proguard.w r2 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            int r2 = r2.a(r0, r6)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            java.lang.String r5 = "deleted %s illegal data %d"
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            r6[r4] = r0     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            r2 = 1
            r6[r2] = r0     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
            com.tencent.bugly.proguard.al.d(r5, r6)     // Catch: java.lang.Throwable -> Lb2 java.lang.Throwable -> Lb4
        Lac:
            if (r3 == 0) goto Lb1
            r3.close()
        Lb1:
            return r1
        Lb2:
            r0 = move-exception
            goto Lca
        Lb4:
            r0 = move-exception
            r2 = r3
            goto Lbb
        Lb7:
            r0 = move-exception
            r3 = r2
            goto Lca
        Lba:
            r0 = move-exception
        Lbb:
            boolean r3 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> Lb7
            if (r3 != 0) goto Lc4
            r0.printStackTrace()     // Catch: java.lang.Throwable -> Lb7
        Lc4:
            if (r2 == 0) goto Lc9
            r2.close()
        Lc9:
            return r1
        Lca:
            if (r3 == 0) goto Lcf
            r3.close()
        Lcf:
            throw r0
    }

    private static void b(com.tencent.bugly.crashreport.crash.CrashDetailBean r6, java.util.List<com.tencent.bugly.proguard.ar> r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 64
            r0.<init>(r1)
            java.util.Iterator r7 = r7.iterator()
        Lb:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L46
            java.lang.Object r1 = r7.next()
            com.tencent.bugly.proguard.ar r1 = (com.tencent.bugly.proguard.ar) r1
            boolean r2 = r1.e
            if (r2 != 0) goto Lb
            boolean r2 = r1.d
            if (r2 != 0) goto Lb
            java.lang.String r2 = r6.s
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r4 = r1.b
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            boolean r2 = r2.contains(r3)
            if (r2 != 0) goto Lb
            int r2 = r6.t
            int r2 = r2 + 1
            r6.t = r2
            long r1 = r1.b
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            goto Lb
        L46:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = r6.s
            r7.append(r1)
            java.lang.String r0 = r0.toString()
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.s = r7
            return
    }

    private static void b(java.util.ArrayList<com.tencent.bugly.proguard.bn> r2, com.tencent.bugly.crashreport.crash.CrashDetailBean r3, android.content.Context r4) {
            int r0 = r3.b
            r1 = 1
            if (r0 == r1) goto L6
            return
        L6:
            java.lang.String r0 = r3.v
            if (r0 == 0) goto L24
            java.lang.String r0 = "tomb.zip"
            java.lang.String r3 = r3.v     // Catch: java.lang.Exception -> L20
            com.tencent.bugly.proguard.bn r3 = a(r0, r4, r3)     // Catch: java.lang.Exception -> L20
            if (r3 == 0) goto L1f
            java.lang.String r4 = "attach tombs"
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L20
            com.tencent.bugly.proguard.al.c(r4, r0)     // Catch: java.lang.Exception -> L20
            r2.add(r3)     // Catch: java.lang.Exception -> L20
        L1f:
            return
        L20:
            r2 = move-exception
            com.tencent.bugly.proguard.al.a(r2)
        L24:
            return
    }

    private static void b(java.util.ArrayList<com.tencent.bugly.proguard.bn> r4, java.lang.String r5) {
            if (r5 == 0) goto L1b
            com.tencent.bugly.proguard.bn r0 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L14
            r1 = 1
            java.lang.String r2 = "jniLog.txt"
            java.lang.String r3 = "utf-8"
            byte[] r5 = r5.getBytes(r3)     // Catch: java.lang.Exception -> L14
            r0.<init>(r1, r2, r5)     // Catch: java.lang.Exception -> L14
            r4.add(r0)     // Catch: java.lang.Exception -> L14
            return
        L14:
            r4 = move-exception
            r4.printStackTrace()
            com.tencent.bugly.proguard.al.a(r4)
        L1b:
            return
    }

    private static void b(java.util.ArrayList<com.tencent.bugly.proguard.bn> r3, byte[] r4) {
            if (r4 == 0) goto L1d
            int r0 = r4.length
            if (r0 <= 0) goto L1d
            com.tencent.bugly.proguard.bn r0 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L19
            r1 = 1
            java.lang.String r2 = "userExtraByteData"
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Exception -> L19
            r3.add(r0)     // Catch: java.lang.Exception -> L19
            java.lang.String r3 = "attach extraData"
            r4 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L19
            com.tencent.bugly.proguard.al.c(r3, r4)     // Catch: java.lang.Exception -> L19
            return
        L19:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L1d:
            return
    }

    private static void b(java.util.List<com.tencent.bugly.proguard.ar> r13) {
            java.util.List r13 = c(r13)
            if (r13 == 0) goto L62
            boolean r0 = r13.isEmpty()
            if (r0 == 0) goto Ld
            goto L62
        Ld:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r13 = r13.iterator()
        L16:
            boolean r1 = r13.hasNext()
            if (r1 == 0) goto L5b
            java.lang.Object r1 = r13.next()
            com.tencent.bugly.crashreport.crash.CrashDetailBean r1 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r1
            java.util.Map<java.lang.Integer, java.lang.String> r2 = com.tencent.bugly.proguard.as.l
            int r3 = r1.b
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Object r2 = r2.get(r3)
            r5 = r2
            java.lang.String r5 = (java.lang.String) r5
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L16
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String r4 = r1.c
            r2[r3] = r4
            r3 = 1
            r2[r3] = r5
            java.lang.String r3 = "find expired data,crashId:%s eventType:%s"
            com.tencent.bugly.proguard.al.c(r3, r2)
            com.tencent.bugly.proguard.ag$c r2 = new com.tencent.bugly.proguard.ag$c
            java.lang.String r4 = r1.c
            long r6 = r1.r
            r8 = 0
            r9 = 0
            r12 = 0
            java.lang.String r11 = "expired"
            r3 = r2
            r3.<init>(r4, r5, r6, r8, r9, r11, r12)
            r0.add(r2)
            goto L16
        L5b:
            com.tencent.bugly.proguard.ag r13 = com.tencent.bugly.proguard.ag.a.a()
            r13.a(r0)
        L62:
            return
    }

    private boolean b(com.tencent.bugly.crashreport.crash.CrashDetailBean r9, java.util.List<com.tencent.bugly.proguard.ar> r10, java.util.List<com.tencent.bugly.proguard.ar> r11) {
            r8 = this;
            int r0 = r9.b
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Lb
            if (r0 != r1) goto L9
            goto Lb
        L9:
            r3 = 0
            goto Lc
        Lb:
            r3 = 1
        Lc:
            r4 = 3
            if (r0 != r4) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            boolean r4 = com.tencent.bugly.proguard.p.c
            if (r4 != 0) goto L1f
            if (r0 != 0) goto L1c
            if (r3 != 0) goto L1c
            r0 = 1
            goto L20
        L1c:
            boolean r0 = com.tencent.bugly.proguard.at.e
            goto L20
        L1f:
            r0 = 0
        L20:
            if (r0 != 0) goto L23
            return r2
        L23:
            java.util.ArrayList r0 = new java.util.ArrayList
            r3 = 10
            r0.<init>(r3)
            boolean r10 = a(r9, r10, r0)
            if (r10 != 0) goto L38
            int r10 = r0.size()     // Catch: java.lang.Exception -> L6d
            int r3 = com.tencent.bugly.proguard.at.d     // Catch: java.lang.Exception -> L6d
            if (r10 < r3) goto L78
        L38:
            java.lang.String r10 = "same crash occur too much do merged!"
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L6d
            com.tencent.bugly.proguard.al.a(r10, r3)     // Catch: java.lang.Exception -> L6d
            com.tencent.bugly.crashreport.crash.CrashDetailBean r9 = a(r0, r9)     // Catch: java.lang.Exception -> L6d
            java.util.Iterator r10 = r0.iterator()     // Catch: java.lang.Exception -> L6d
        L47:
            boolean r0 = r10.hasNext()     // Catch: java.lang.Exception -> L6d
            if (r0 == 0) goto L5f
            java.lang.Object r0 = r10.next()     // Catch: java.lang.Exception -> L6d
            com.tencent.bugly.proguard.ar r0 = (com.tencent.bugly.proguard.ar) r0     // Catch: java.lang.Exception -> L6d
            long r3 = r0.a     // Catch: java.lang.Exception -> L6d
            long r5 = r9.a     // Catch: java.lang.Exception -> L6d
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 == 0) goto L47
            r11.add(r0)     // Catch: java.lang.Exception -> L6d
            goto L47
        L5f:
            r8.b(r9)     // Catch: java.lang.Exception -> L6d
            d(r11)     // Catch: java.lang.Exception -> L6d
            java.lang.String r9 = "[crash] save crash success. For this device crash many times, it will not upload crashes immediately"
            java.lang.Object[] r10 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L6d
            com.tencent.bugly.proguard.al.b(r9, r10)     // Catch: java.lang.Exception -> L6d
            return r1
        L6d:
            r9 = move-exception
            com.tencent.bugly.proguard.al.a(r9)
            java.lang.Object[] r9 = new java.lang.Object[r2]
            java.lang.String r10 = "Failed to merge crash."
            com.tencent.bugly.proguard.al.d(r10, r9)
        L78:
            return r2
    }

    private static android.content.ContentValues c(com.tencent.bugly.crashreport.crash.CrashDetailBean r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L64
            r1.<init>()     // Catch: java.lang.Throwable -> L64
            long r2 = r7.a     // Catch: java.lang.Throwable -> L64
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L1c
            java.lang.String r2 = "_id"
            long r3 = r7.a     // Catch: java.lang.Throwable -> L64
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L64
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L64
        L1c:
            java.lang.String r2 = "_tm"
            long r3 = r7.r     // Catch: java.lang.Throwable -> L64
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L64
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = "_s1"
            java.lang.String r3 = r7.u     // Catch: java.lang.Throwable -> L64
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = "_up"
            boolean r3 = r7.d     // Catch: java.lang.Throwable -> L64
            r4 = 1
            r5 = 0
            if (r3 == 0) goto L38
            r3 = 1
            goto L39
        L38:
            r3 = 0
        L39:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L64
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = "_me"
            boolean r3 = r7.j     // Catch: java.lang.Throwable -> L64
            if (r3 == 0) goto L47
            goto L48
        L47:
            r4 = 0
        L48:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L64
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = "_uc"
            int r3 = r7.l     // Catch: java.lang.Throwable -> L64
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L64
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = "_dt"
            byte[] r7 = com.tencent.bugly.proguard.ap.a(r7)     // Catch: java.lang.Throwable -> L64
            r1.put(r2, r7)     // Catch: java.lang.Throwable -> L64
            return r1
        L64:
            r7 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r7)
            if (r1 != 0) goto L6e
            r7.printStackTrace()
        L6e:
            return r0
    }

    private static java.util.List<com.tencent.bugly.crashreport.crash.CrashDetailBean> c(java.util.List<com.tencent.bugly.proguard.ar> r10) {
            java.lang.String r0 = "t_cr"
            r1 = 0
            if (r10 == 0) goto Lf9
            int r2 = r10.size()
            if (r2 != 0) goto Ld
            goto Lf9
        Ld:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "_id in ("
            r2.append(r3)
            java.util.Iterator r10 = r10.iterator()
        L1b:
            boolean r4 = r10.hasNext()
            java.lang.String r5 = ","
            if (r4 == 0) goto L32
            java.lang.Object r4 = r10.next()
            com.tencent.bugly.proguard.ar r4 = (com.tencent.bugly.proguard.ar) r4
            long r6 = r4.a
            r2.append(r6)
            r2.append(r5)
            goto L1b
        L32:
            java.lang.String r10 = r2.toString()
            boolean r10 = r10.contains(r5)
            r4 = 0
            if (r10 == 0) goto L4b
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            int r6 = r2.lastIndexOf(r5)
            java.lang.String r2 = r2.substring(r4, r6)
            r10.<init>(r2)
            goto L4c
        L4b:
            r10 = r2
        L4c:
            java.lang.String r2 = ")"
            r10.append(r2)
            java.lang.String r6 = r10.toString()
            r10.setLength(r4)
            com.tencent.bugly.proguard.w r7 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> Lde java.lang.Throwable -> Le1
            android.database.Cursor r6 = r7.a(r0, r1, r6)     // Catch: java.lang.Throwable -> Lde java.lang.Throwable -> Le1
            if (r6 != 0) goto L68
            if (r6 == 0) goto L67
            r6.close()
        L67:
            return r1
        L68:
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            r7.<init>()     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            r10.append(r3)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            r3 = 0
        L71:
            boolean r8 = r6.moveToNext()     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            if (r8 == 0) goto L9c
            com.tencent.bugly.crashreport.crash.CrashDetailBean r8 = a(r6)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            if (r8 == 0) goto L81
            r7.add(r8)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            goto L71
        L81:
            java.lang.String r8 = "_id"
            int r8 = r6.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> Lf2
            long r8 = r6.getLong(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> Lf2
            r10.append(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> Lf2
            r10.append(r5)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> Lf2
            int r3 = r3 + 1
            goto L71
        L94:
            java.lang.String r8 = "unknown id!"
            java.lang.Object[] r9 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            com.tencent.bugly.proguard.al.d(r8, r9)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            goto L71
        L9c:
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            boolean r8 = r8.contains(r5)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            if (r8 == 0) goto Lb4
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            int r5 = r10.lastIndexOf(r5)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            java.lang.String r10 = r10.substring(r4, r5)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            r8.<init>(r10)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            r10 = r8
        Lb4:
            r10.append(r2)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            if (r3 <= 0) goto Ld6
            com.tencent.bugly.proguard.w r2 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            int r10 = r2.a(r0, r10)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            java.lang.String r2 = "deleted %s illegal data %d"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            r3[r4] = r0     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            r0 = 1
            r3[r0] = r10     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
            com.tencent.bugly.proguard.al.d(r2, r3)     // Catch: java.lang.Throwable -> Ldc java.lang.Throwable -> Lf2
        Ld6:
            if (r6 == 0) goto Ldb
            r6.close()
        Ldb:
            return r7
        Ldc:
            r10 = move-exception
            goto Le3
        Lde:
            r10 = move-exception
            r6 = r1
            goto Lf3
        Le1:
            r10 = move-exception
            r6 = r1
        Le3:
            boolean r0 = com.tencent.bugly.proguard.al.a(r10)     // Catch: java.lang.Throwable -> Lf2
            if (r0 != 0) goto Lec
            r10.printStackTrace()     // Catch: java.lang.Throwable -> Lf2
        Lec:
            if (r6 == 0) goto Lf1
            r6.close()
        Lf1:
            return r1
        Lf2:
            r10 = move-exception
        Lf3:
            if (r6 == 0) goto Lf8
            r6.close()
        Lf8:
            throw r10
        Lf9:
            return r1
    }

    private static void c(java.util.ArrayList<com.tencent.bugly.proguard.bn> r4, java.lang.String r5) {
            boolean r0 = com.tencent.bugly.proguard.ap.b(r5)
            if (r0 != 0) goto L27
            com.tencent.bugly.proguard.bn r0 = new com.tencent.bugly.proguard.bn     // Catch: java.lang.Exception -> L20
            r1 = 1
            java.lang.String r2 = "crashInfos.txt"
            java.lang.String r3 = "utf-8"
            byte[] r5 = r5.getBytes(r3)     // Catch: java.lang.Exception -> L20
            r0.<init>(r1, r2, r5)     // Catch: java.lang.Exception -> L20
            java.lang.String r5 = "attach crash infos"
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L20
            com.tencent.bugly.proguard.al.c(r5, r1)     // Catch: java.lang.Exception -> L20
            r4.add(r0)     // Catch: java.lang.Exception -> L20
            return
        L20:
            r4 = move-exception
            r4.printStackTrace()
            com.tencent.bugly.proguard.al.a(r4)
        L27:
            return
    }

    private static void d(java.util.List<com.tencent.bugly.proguard.ar> r6) {
            java.lang.String r0 = "t_cr"
            if (r6 == 0) goto L6e
            int r1 = r6.size()
            if (r1 != 0) goto Lb
            goto L6e
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "_id in ("
            r1.append(r2)
            java.util.Iterator r6 = r6.iterator()
        L19:
            boolean r2 = r6.hasNext()
            java.lang.String r3 = ","
            if (r2 == 0) goto L30
            java.lang.Object r2 = r6.next()
            com.tencent.bugly.proguard.ar r2 = (com.tencent.bugly.proguard.ar) r2
            long r4 = r2.a
            r1.append(r4)
            r1.append(r3)
            goto L19
        L30:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            int r2 = r1.lastIndexOf(r3)
            r3 = 0
            java.lang.String r1 = r1.substring(r3, r2)
            r6.<init>(r1)
            java.lang.String r1 = ")"
            r6.append(r1)
            java.lang.String r1 = r6.toString()
            r6.setLength(r3)
            com.tencent.bugly.proguard.w r6 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L64
            int r6 = r6.a(r0, r1)     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = "deleted %s data %d"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L64
            r2[r3] = r0     // Catch: java.lang.Throwable -> L64
            r0 = 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L64
            r2[r0] = r6     // Catch: java.lang.Throwable -> L64
            com.tencent.bugly.proguard.al.c(r1, r2)     // Catch: java.lang.Throwable -> L64
            return
        L64:
            r6 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r6)
            if (r0 != 0) goto L6e
            r6.printStackTrace()
        L6e:
            return
    }

    private boolean d(com.tencent.bugly.crashreport.crash.CrashDetailBean r9) {
            r8 = this;
            r0 = 1
            r1 = 0
            java.lang.String r2 = "save eup logs"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Ldd
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Ldd
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r3 = r2.e()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r4 = r2.o     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r5 = r9.A     // Catch: java.lang.Throwable -> Ldd
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r7 = "#--------\npackage:"
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Ldd
            r6.append(r3)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r3 = "\nversion:"
            r6.append(r3)     // Catch: java.lang.Throwable -> Ldd
            r6.append(r4)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r3 = "\nsdk:"
            r6.append(r3)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r2.h     // Catch: java.lang.Throwable -> Ldd
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "\nprocess:"
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            r6.append(r5)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "\ndate:"
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.util.Date r2 = new java.util.Date     // Catch: java.lang.Throwable -> Ldd
            long r3 = r9.r     // Catch: java.lang.Throwable -> Ldd
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = com.tencent.bugly.proguard.ap.a(r2)     // Catch: java.lang.Throwable -> Ldd
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "\ntype:"
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r9.n     // Catch: java.lang.Throwable -> Ldd
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "\nmessage:"
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r9.o     // Catch: java.lang.Throwable -> Ldd
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "\nstack:\n"
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r9.q     // Catch: java.lang.Throwable -> Ldd
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "\neupID:"
            r6.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r9 = r9.c     // Catch: java.lang.Throwable -> Ldd
            r6.append(r9)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r9 = "\n"
            r6.append(r9)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r9 = r6.toString()     // Catch: java.lang.Throwable -> Ldd
            r2 = 0
            java.lang.String r3 = com.tencent.bugly.proguard.at.m     // Catch: java.lang.Throwable -> Ldd
            if (r3 != 0) goto Lb1
            java.lang.String r3 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r4 = "mounted"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> Ldd
            if (r3 == 0) goto Lc6
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> Ldd
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
            r3.<init>()     // Catch: java.lang.Throwable -> Ldd
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "/Tencent/"
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            android.content.Context r2 = r8.b     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> Ldd
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Ldd
            goto Lc6
        Lb1:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r3 = com.tencent.bugly.proguard.at.m     // Catch: java.lang.Throwable -> Ldd
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Ldd
            boolean r3 = r2.isFile()     // Catch: java.lang.Throwable -> Ldd
            if (r3 == 0) goto Lc2
            java.io.File r2 = r2.getParentFile()     // Catch: java.lang.Throwable -> Ldd
        Lc2:
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> Ldd
        Lc6:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
            r3.<init>()     // Catch: java.lang.Throwable -> Ldd
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "/euplog.txt"
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Ldd
            int r3 = com.tencent.bugly.proguard.at.n     // Catch: java.lang.Throwable -> Ldd
            com.tencent.bugly.proguard.am.a(r2, r9, r3)     // Catch: java.lang.Throwable -> Ldd
            return r0
        Ldd:
            r9 = move-exception
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = r9.toString()
            r0[r1] = r2
            java.lang.String r2 = "rqdp{  save error} %s"
            com.tencent.bugly.proguard.al.d(r2, r0)
            boolean r0 = com.tencent.bugly.proguard.al.a(r9)
            if (r0 != 0) goto Lf4
            r9.printStackTrace()
        Lf4:
            return r1
    }

    private static java.lang.String e(com.tencent.bugly.crashreport.crash.CrashDetailBean r4) {
            java.lang.String r0 = ""
            java.util.Map<java.lang.Integer, android.util.Pair<java.lang.String, java.lang.String>> r1 = com.tencent.bugly.proguard.as.h     // Catch: java.lang.Exception -> L32
            int r2 = r4.b     // Catch: java.lang.Exception -> L32
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L32
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L32
            android.util.Pair r1 = (android.util.Pair) r1     // Catch: java.lang.Exception -> L32
            if (r1 != 0) goto L24
            java.lang.String r1 = "crash type error! %d"
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L32
            r3 = 0
            int r4 = r4.b     // Catch: java.lang.Exception -> L32
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L32
            r2[r3] = r4     // Catch: java.lang.Exception -> L32
            com.tencent.bugly.proguard.al.e(r1, r2)     // Catch: java.lang.Exception -> L32
            return r0
        L24:
            boolean r4 = r4.j     // Catch: java.lang.Exception -> L32
            if (r4 == 0) goto L2d
            java.lang.Object r4 = r1.first     // Catch: java.lang.Exception -> L32
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L32
            return r4
        L2d:
            java.lang.Object r4 = r1.second     // Catch: java.lang.Exception -> L32
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L32
            return r4
        L32:
            r4 = move-exception
            com.tencent.bugly.proguard.al.a(r4)
            return r0
    }

    private static void e(java.util.List<com.tencent.bugly.crashreport.crash.CrashDetailBean> r4) {
            java.lang.String r0 = "t_cr"
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L9
            return
        L9:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56
            r1.<init>()     // Catch: java.lang.Throwable -> L56
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L56
        L12:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Throwable -> L56
            if (r2 == 0) goto L29
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.crashreport.crash.CrashDetailBean r2 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r2     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = " or _id = "
            r1.append(r3)     // Catch: java.lang.Throwable -> L56
            long r2 = r2.a     // Catch: java.lang.Throwable -> L56
            r1.append(r2)     // Catch: java.lang.Throwable -> L56
            goto L12
        L29:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L56
            int r2 = r4.length()     // Catch: java.lang.Throwable -> L56
            if (r2 <= 0) goto L38
            r2 = 4
            java.lang.String r4 = r4.substring(r2)     // Catch: java.lang.Throwable -> L56
        L38:
            r2 = 0
            r1.setLength(r2)     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.proguard.w r1 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L56
            int r4 = r1.a(r0, r4)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "deleted %s data %d"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L56
            r3[r2] = r0     // Catch: java.lang.Throwable -> L56
            r0 = 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L56
            r3[r0] = r4     // Catch: java.lang.Throwable -> L56
            com.tencent.bugly.proguard.al.c(r1, r3)     // Catch: java.lang.Throwable -> L56
            return
        L56:
            r4 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r4)
            if (r0 != 0) goto L60
            r4.printStackTrace()
        L60:
            return
    }

    public final void a(com.tencent.bugly.crashreport.crash.CrashDetailBean r2) {
            r1 = this;
            int r2 = r2.b
            if (r2 == 0) goto L21
            r0 = 1
            if (r2 == r0) goto L16
            r0 = 3
            if (r2 == r0) goto Lb
            goto L2c
        Lb:
            com.tencent.bugly.proguard.at r2 = com.tencent.bugly.proguard.at.a()
            boolean r2 = r2.k()
            if (r2 != 0) goto L2c
            return
        L16:
            com.tencent.bugly.proguard.at r2 = com.tencent.bugly.proguard.at.a()
            boolean r2 = r2.j()
            if (r2 != 0) goto L2c
            return
        L21:
            com.tencent.bugly.proguard.at r2 = com.tencent.bugly.proguard.at.a()
            boolean r2 = r2.j()
            if (r2 != 0) goto L2c
            return
        L2c:
            com.tencent.bugly.proguard.aw r2 = r1.f
            if (r2 == 0) goto L38
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r0 = "Calling 'onCrashHandleEnd' of RQD crash listener."
            com.tencent.bugly.proguard.al.c(r0, r2)
        L38:
            return
    }

    public final void a(java.util.List<com.tencent.bugly.crashreport.crash.CrashDetailBean> r19, long r20, boolean r22, boolean r23, boolean r24) {
            r18 = this;
            r7 = r18
            r0 = r19
            android.content.Context r1 = r7.b
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            boolean r1 = r1.f
            r8 = 0
            if (r1 != 0) goto L17
            java.lang.Object[] r0 = new java.lang.Object[r8]
            java.lang.String r1 = "warn: not upload process"
            com.tencent.bugly.proguard.al.d(r1, r0)
            return
        L17:
            com.tencent.bugly.proguard.ai r1 = r7.c
            if (r1 != 0) goto L23
            java.lang.Object[] r0 = new java.lang.Object[r8]
            java.lang.String r1 = "warn: upload manager is null"
            com.tencent.bugly.proguard.al.d(r1, r0)
            return
        L23:
            if (r24 != 0) goto L35
            int r2 = com.tencent.bugly.proguard.at.a
            boolean r1 = r1.b(r2)
            if (r1 != 0) goto L35
            java.lang.Object[] r0 = new java.lang.Object[r8]
            java.lang.String r1 = "warn: not crashHappen or not should upload"
            com.tencent.bugly.proguard.al.d(r1, r0)
            return
        L35:
            com.tencent.bugly.proguard.ac r1 = r7.e
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r1 = r1.c()
            boolean r2 = r1.f
            if (r2 != 0) goto L4e
            java.lang.Object[] r0 = new java.lang.Object[r8]
            java.lang.String r1 = "remote report is disable!"
            com.tencent.bugly.proguard.al.d(r1, r0)
            java.lang.Object[] r0 = new java.lang.Object[r8]
            java.lang.String r1 = "[crash] server closed bugly in this app. please check your appid if is correct, and re-install it"
            com.tencent.bugly.proguard.al.b(r1, r0)
            return
        L4e:
            if (r0 == 0) goto Ld0
            int r2 = r19.size()
            if (r2 != 0) goto L58
            goto Ld0
        L58:
            java.lang.String r12 = r1.r     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r13 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.b     // Catch: java.lang.Throwable -> Lb7
            android.content.Context r1 = r7.b     // Catch: java.lang.Throwable -> Lb7
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> Lb7
            com.tencent.bugly.proguard.bp r1 = a(r1, r0, r2)     // Catch: java.lang.Throwable -> Lb7
            if (r1 != 0) goto L70
            java.lang.String r0 = "create eupPkg fail!"
            java.lang.Object[] r1 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lb7
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> Lb7
            return
        L70:
            byte[] r1 = com.tencent.bugly.proguard.ae.a(r1)     // Catch: java.lang.Throwable -> Lb7
            if (r1 != 0) goto L7e
            java.lang.String r0 = "send encode fail!"
            java.lang.Object[] r1 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lb7
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> Lb7
            return
        L7e:
            android.content.Context r2 = r7.b     // Catch: java.lang.Throwable -> Lb7
            r3 = 830(0x33e, float:1.163E-42)
            com.tencent.bugly.proguard.bq r11 = com.tencent.bugly.proguard.ae.a(r2, r3, r1)     // Catch: java.lang.Throwable -> Lb7
            if (r11 != 0) goto L90
            java.lang.String r0 = "request package is null."
            java.lang.Object[] r1 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lb7
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> Lb7
            return
        L90:
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb7
            com.tencent.bugly.proguard.as$6 r14 = new com.tencent.bugly.proguard.as$6     // Catch: java.lang.Throwable -> Lb7
            r1 = r14
            r2 = r18
            r5 = r19
            r6 = r22
            r1.<init>(r2, r3, r5, r6)     // Catch: java.lang.Throwable -> Lb7
            if (r22 == 0) goto Lae
            com.tencent.bugly.proguard.ai r9 = r7.c     // Catch: java.lang.Throwable -> Lb7
            int r10 = com.tencent.bugly.proguard.as.a     // Catch: java.lang.Throwable -> Lb7
            r15 = r20
            r17 = r23
            r9.a(r10, r11, r12, r13, r14, r15, r17)     // Catch: java.lang.Throwable -> Lb7
            return
        Lae:
            com.tencent.bugly.proguard.ai r9 = r7.c     // Catch: java.lang.Throwable -> Lb7
            int r10 = com.tencent.bugly.proguard.as.a     // Catch: java.lang.Throwable -> Lb7
            r15 = 0
            r9.a(r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> Lb7
            return
        Lb7:
            r0 = move-exception
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r0.toString()
            r1[r8] = r2
            java.lang.String r2 = "req cr error %s"
            com.tencent.bugly.proguard.al.e(r2, r1)
            boolean r1 = com.tencent.bugly.proguard.al.b(r0)
            if (r1 != 0) goto Lcf
            r0.printStackTrace()
        Lcf:
            return
        Ld0:
            java.lang.Object[] r0 = new java.lang.Object[r8]
            java.lang.String r1 = "warn: crashList is null or crashList num is 0"
            com.tencent.bugly.proguard.al.d(r1, r0)
            return
    }

    public final boolean a(com.tencent.bugly.crashreport.crash.CrashDetailBean r20, boolean r21) {
            r19 = this;
            r1 = r19
            r2 = r20
            java.lang.String r3 = "t_cr"
            r4 = 1
            r5 = 0
            if (r2 != 0) goto L12
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r2 = "CrashBean is null, won't handle."
            com.tencent.bugly.proguard.al.d(r2, r0)
            return r4
        L12:
            r19.b(r20)
            r6 = 2
            if (r21 == 0) goto L16b
            if (r2 == 0) goto L16b
            com.tencent.bugly.BuglyStrategy$a r0 = r1.g
            if (r0 != 0) goto L22
            com.tencent.bugly.proguard.aw r0 = r1.f
            if (r0 == 0) goto L16b
        L22:
            java.util.ArrayList<com.tencent.bugly.proguard.as$a> r0 = com.tencent.bugly.proguard.as.i
            java.util.Iterator r0 = r0.iterator()
        L28:
            boolean r7 = r0.hasNext()
            if (r7 == 0) goto L44
            java.lang.Object r7 = r0.next()
            com.tencent.bugly.proguard.as$a r7 = (com.tencent.bugly.proguard.as.a) r7
            int r8 = r7.a
            int r9 = r2.b
            if (r8 != r9) goto L3c
            r8 = 1
            goto L3d
        L3c:
            r8 = 0
        L3d:
            if (r8 == 0) goto L28
            boolean r0 = r7.a()
            goto L45
        L44:
            r0 = 0
        L45:
            if (r0 != 0) goto L50
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r7 = "Should not call back."
            com.tencent.bugly.proguard.al.c(r7, r0)
            goto L16b
        L50:
            java.util.Map<java.lang.Integer, java.lang.Integer> r0 = com.tencent.bugly.proguard.as.j     // Catch: java.lang.Throwable -> L150
            int r7 = r2.b     // Catch: java.lang.Throwable -> L150
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L150
            boolean r0 = r0.containsKey(r7)     // Catch: java.lang.Throwable -> L150
            if (r0 != 0) goto L75
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L150
            java.lang.String r7 = "Cannot get crash type for crashBean type:"
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L150
            int r7 = r2.b     // Catch: java.lang.Throwable -> L150
            r0.append(r7)     // Catch: java.lang.Throwable -> L150
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L150
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.d(r0, r7)     // Catch: java.lang.Throwable -> L150
            goto L16b
        L75:
            java.util.Map<java.lang.Integer, java.lang.Integer> r0 = com.tencent.bugly.proguard.as.j     // Catch: java.lang.Throwable -> L150
            int r7 = r2.b     // Catch: java.lang.Throwable -> L150
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L150
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Throwable -> L150
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L150
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.aw r7 = r1.f     // Catch: java.lang.Throwable -> L150
            r8 = 0
            if (r7 == 0) goto Lae
            java.lang.String r7 = "Calling 'onCrashHandleStart' of RQD crash listener."
            java.lang.Object[] r9 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.c(r7, r9)     // Catch: java.lang.Throwable -> L150
            java.lang.String r7 = "Calling 'getCrashExtraMessage' of RQD crash listener."
            java.lang.Object[] r9 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.c(r7, r9)     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.aw r7 = r1.f     // Catch: java.lang.Throwable -> L150
            java.lang.String r7 = r7.b()     // Catch: java.lang.Throwable -> L150
            if (r7 == 0) goto Lc6
            java.util.HashMap r9 = new java.util.HashMap     // Catch: java.lang.Throwable -> L150
            r9.<init>(r4)     // Catch: java.lang.Throwable -> L150
            java.lang.String r10 = "userData"
            r9.put(r10, r7)     // Catch: java.lang.Throwable -> L150
            r7 = r9
            goto Lc7
        Lae:
            com.tencent.bugly.BuglyStrategy$a r7 = r1.g     // Catch: java.lang.Throwable -> L150
            if (r7 == 0) goto Lc6
            java.lang.String r7 = "Calling 'onCrashHandleStart' of Bugly crash listener."
            java.lang.Object[] r9 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.c(r7, r9)     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.BuglyStrategy$a r7 = r1.g     // Catch: java.lang.Throwable -> L150
            java.lang.String r9 = r2.n     // Catch: java.lang.Throwable -> L150
            java.lang.String r10 = r2.o     // Catch: java.lang.Throwable -> L150
            java.lang.String r11 = r2.q     // Catch: java.lang.Throwable -> L150
            java.util.Map r7 = r7.onCrashHandleStart(r0, r9, r10, r11)     // Catch: java.lang.Throwable -> L150
            goto Lc7
        Lc6:
            r7 = r8
        Lc7:
            a(r2, r7)     // Catch: java.lang.Throwable -> L150
            java.lang.String r7 = "[crash callback] start user's callback:onCrashHandleStart2GetExtraDatas()"
            java.lang.Object[] r9 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.a(r7, r9)     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.aw r7 = r1.f     // Catch: java.lang.Throwable -> L150
            if (r7 == 0) goto Le3
            java.lang.String r0 = "Calling 'getCrashExtraData' of RQD crash listener."
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.c(r0, r7)     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.aw r0 = r1.f     // Catch: java.lang.Throwable -> L150
            byte[] r8 = r0.a()     // Catch: java.lang.Throwable -> L150
            goto Lfa
        Le3:
            com.tencent.bugly.BuglyStrategy$a r7 = r1.g     // Catch: java.lang.Throwable -> L150
            if (r7 == 0) goto Lfa
            java.lang.String r7 = "Calling 'onCrashHandleStart2GetExtraDatas' of Bugly crash listener."
            java.lang.Object[] r8 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.c(r7, r8)     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.BuglyStrategy$a r7 = r1.g     // Catch: java.lang.Throwable -> L150
            java.lang.String r8 = r2.n     // Catch: java.lang.Throwable -> L150
            java.lang.String r9 = r2.o     // Catch: java.lang.Throwable -> L150
            java.lang.String r10 = r2.q     // Catch: java.lang.Throwable -> L150
            byte[] r8 = r7.onCrashHandleStart2GetExtraDatas(r0, r8, r9, r10)     // Catch: java.lang.Throwable -> L150
        Lfa:
            if (r8 != 0) goto L104
            java.lang.String r0 = "extra user byte is null. CrashBean won't have userExtraByteDatas."
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.d(r0, r7)     // Catch: java.lang.Throwable -> L150
            goto L135
        L104:
            int r0 = r8.length     // Catch: java.lang.Throwable -> L150
            r7 = 100000(0x186a0, float:1.4013E-40)
            if (r0 > r7) goto L10d
            r2.Y = r8     // Catch: java.lang.Throwable -> L150
            goto L127
        L10d:
            java.lang.String r0 = "extra bytes size %d is over limit %d will drop over part"
            java.lang.Object[] r9 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L150
            int r10 = r8.length     // Catch: java.lang.Throwable -> L150
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L150
            r9[r5] = r10     // Catch: java.lang.Throwable -> L150
            java.lang.Integer r10 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L150
            r9[r4] = r10     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.d(r0, r9)     // Catch: java.lang.Throwable -> L150
            byte[] r0 = java.util.Arrays.copyOf(r8, r7)     // Catch: java.lang.Throwable -> L150
            r2.Y = r0     // Catch: java.lang.Throwable -> L150
        L127:
            java.lang.String r0 = "add extra bytes %d "
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L150
            int r8 = r8.length     // Catch: java.lang.Throwable -> L150
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L150
            r7[r5] = r8     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.a(r0, r7)     // Catch: java.lang.Throwable -> L150
        L135:
            com.tencent.bugly.proguard.aw r0 = r1.f     // Catch: java.lang.Throwable -> L150
            if (r0 == 0) goto L16b
            java.lang.String r0 = "Calling 'onCrashSaving' of RQD crash listener."
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.c(r0, r7)     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.aw r0 = r1.f     // Catch: java.lang.Throwable -> L150
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L150
            if (r0 != 0) goto L16b
            java.lang.String r0 = "Crash listener 'onCrashSaving' return 'false' thus will not handle this crash."
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L150
            com.tencent.bugly.proguard.al.d(r0, r7)     // Catch: java.lang.Throwable -> L150
            goto L16b
        L150:
            r0 = move-exception
            java.lang.Object[] r7 = new java.lang.Object[r4]
            java.lang.Class r8 = r0.getClass()
            java.lang.String r8 = r8.getName()
            r7[r5] = r8
            java.lang.String r8 = "crash handle callback something wrong! %s"
            com.tencent.bugly.proguard.al.d(r8, r7)
            boolean r7 = com.tencent.bugly.proguard.al.a(r0)
            if (r7 != 0) goto L16b
            r0.printStackTrace()
        L16b:
            boolean r0 = com.tencent.bugly.proguard.ab.r()
            if (r0 != 0) goto L17b
            int r0 = com.tencent.bugly.proguard.at.f
            java.lang.String r7 = com.tencent.bugly.proguard.at.k
            java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0, r7)
            r2.w = r0
        L17b:
            java.lang.String r0 = r2.q
            java.lang.String r7 = com.tencent.bugly.proguard.at.q
            if (r7 == 0) goto L1a5
            java.lang.String r7 = com.tencent.bugly.proguard.at.q
            boolean r7 = r7.isEmpty()
            if (r7 != 0) goto L1a5
            java.lang.Object[] r7 = new java.lang.Object[r4]
            java.lang.String r8 = com.tencent.bugly.proguard.at.q
            r7[r5] = r8
            java.lang.String r8 = "Crash filter for crash stack is: %s"
            com.tencent.bugly.proguard.al.c(r8, r7)
            java.lang.String r7 = com.tencent.bugly.proguard.at.q
            boolean r0 = r0.contains(r7)
            if (r0 == 0) goto L1a5
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r7 = "This crash contains the filter string set. It will not be record and upload."
            com.tencent.bugly.proguard.al.d(r7, r0)
            r0 = 1
            goto L1a6
        L1a5:
            r0 = 0
        L1a6:
            if (r0 == 0) goto L1a9
            return r4
        L1a9:
            java.lang.String r0 = r2.q
            boolean r0 = a(r0)
            if (r0 == 0) goto L1b2
            return r4
        L1b2:
            int r0 = r2.b
            if (r0 == r6) goto L1df
            com.tencent.bugly.proguard.y r0 = new com.tencent.bugly.proguard.y
            r0.<init>()
            r0.b = r4
            java.lang.String r7 = r2.A
            r0.c = r7
            java.lang.String r7 = r2.B
            r0.d = r7
            long r7 = r2.r
            r0.e = r7
            com.tencent.bugly.proguard.w r7 = com.tencent.bugly.proguard.w.a()
            r7.b(r4)
            com.tencent.bugly.proguard.w r7 = com.tencent.bugly.proguard.w.a()
            r7.a(r0)
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r7 = "[crash] a crash occur, handling..."
            com.tencent.bugly.proguard.al.b(r7, r0)
            goto L1e6
        L1df:
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r7 = "[crash] a caught exception occur, handling..."
            com.tencent.bugly.proguard.al.b(r7, r0)
        L1e6:
            java.util.List r7 = b()
            java.util.ArrayList r8 = new java.util.ArrayList
            r0 = 10
            r8.<init>(r0)
            if (r7 == 0) goto L252
            int r0 = r7.size()
            if (r0 <= 0) goto L252
            java.util.List r0 = a(r7)
            r8.addAll(r0)
            r7.removeAll(r8)
            int r0 = r7.size()
            long r9 = (long) r0
            r11 = 20
            int r0 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r0 <= 0) goto L24b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r9 = "_id in ("
            r0.append(r9)
            java.lang.String r9 = "SELECT _id FROM t_cr order by _id limit 5"
            r0.append(r9)
            java.lang.String r9 = ")"
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r0.setLength(r5)
            com.tencent.bugly.proguard.w r0 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L241
            int r0 = r0.a(r3, r9)     // Catch: java.lang.Throwable -> L241
            java.lang.String r9 = "deleted first record %s data %d"
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L241
            r6[r5] = r3     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L241
            r6[r4] = r0     // Catch: java.lang.Throwable -> L241
            com.tencent.bugly.proguard.al.c(r9, r6)     // Catch: java.lang.Throwable -> L241
            goto L24b
        L241:
            r0 = move-exception
            boolean r3 = com.tencent.bugly.proguard.al.a(r0)
            if (r3 != 0) goto L24b
            r0.printStackTrace()
        L24b:
            boolean r0 = r1.b(r2, r7, r8)
            if (r0 == 0) goto L252
            return r4
        L252:
            r19.b(r20)
            java.util.Map<java.lang.Integer, java.lang.String> r0 = com.tencent.bugly.proguard.as.k
            int r3 = r2.b
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Object r0 = r0.get(r3)
            r11 = r0
            java.lang.String r11 = (java.lang.String) r11
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L282
            com.tencent.bugly.proguard.ag r0 = com.tencent.bugly.proguard.ag.a.a()
            com.tencent.bugly.proguard.ag$c r3 = new com.tencent.bugly.proguard.ag$c
            java.lang.String r10 = r2.c
            long r12 = r2.r
            r14 = 1
            r15 = 0
            r18 = 0
            java.lang.String r17 = "realtime"
            r9 = r3
            r9.<init>(r10, r11, r12, r14, r15, r17, r18)
            r0.a(r3)
        L282:
            d(r8)
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r2 = "[crash] save crash success"
            com.tencent.bugly.proguard.al.b(r2, r0)
            return r5
    }

    public final void b(com.tencent.bugly.crashreport.crash.CrashDetailBean r7) {
            r6 = this;
            if (r7 != 0) goto L3
            return
        L3:
            android.content.ContentValues r0 = c(r7)
            if (r0 == 0) goto L27
            com.tencent.bugly.proguard.w r1 = com.tencent.bugly.proguard.w.a()
            r2 = 0
            java.lang.String r3 = "t_cr"
            long r0 = r1.a(r3, r0, r2)
            r4 = 0
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 < 0) goto L27
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "insert %s success!"
            com.tencent.bugly.proguard.al.c(r3, r2)
            r7.a = r0
        L27:
            boolean r0 = com.tencent.bugly.proguard.at.l
            if (r0 == 0) goto L2e
            r6.d(r7)
        L2e:
            return
    }

    public final void b(com.tencent.bugly.crashreport.crash.CrashDetailBean r11, boolean r12) {
            r10 = this;
            boolean r0 = com.tencent.bugly.proguard.at.o
            r1 = 0
            if (r0 == 0) goto L26
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r2 = "try to upload right now"
            com.tencent.bugly.proguard.al.a(r2, r0)
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r4.add(r11)
            r5 = 3000(0xbb8, double:1.482E-320)
            int r11 = r11.b
            r0 = 7
            if (r11 != r0) goto L1e
            r1 = 1
            r8 = 1
            goto L1f
        L1e:
            r8 = 0
        L1f:
            r3 = r10
            r7 = r12
            r9 = r12
            r3.a(r4, r5, r7, r8, r9)
            return
        L26:
            java.lang.Object[] r11 = new java.lang.Object[r1]
            java.lang.String r12 = "do not upload spot crash right now, crash would be uploaded when app next start"
            com.tencent.bugly.proguard.al.a(r12, r11)
            return
    }
}

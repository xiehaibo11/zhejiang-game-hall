package com.tencent.bugly.proguard;

public final class r {
    private static boolean e = true;
    private android.content.Context a;
    private long b;
    private int c;
    private boolean d;



    class a implements java.lang.Runnable {
        final com.tencent.bugly.proguard.r a;
        private boolean b;
        private com.tencent.bugly.crashreport.biz.UserInfoBean c;

        public a(com.tencent.bugly.proguard.r r1, com.tencent.bugly.crashreport.biz.UserInfoBean r2, boolean r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.c = r2
                r0.b = r3
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tencent.bugly.proguard.r r0 = r3.a
                boolean r0 = com.tencent.bugly.proguard.r.a(r0)
                if (r0 != 0) goto L9
                return
            L9:
                com.tencent.bugly.crashreport.biz.UserInfoBean r0 = r3.c     // Catch: java.lang.Throwable -> L2b
                if (r0 == 0) goto L21
                com.tencent.bugly.crashreport.biz.UserInfoBean r0 = r3.c     // Catch: java.lang.Throwable -> L2b
                com.tencent.bugly.proguard.r.a(r0)     // Catch: java.lang.Throwable -> L2b
                java.lang.String r0 = "[UserInfo] Record user info."
                r1 = 0
                java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L2b
                com.tencent.bugly.proguard.al.c(r0, r2)     // Catch: java.lang.Throwable -> L2b
                com.tencent.bugly.proguard.r r0 = r3.a     // Catch: java.lang.Throwable -> L2b
                com.tencent.bugly.crashreport.biz.UserInfoBean r2 = r3.c     // Catch: java.lang.Throwable -> L2b
                com.tencent.bugly.proguard.r.a(r0, r2, r1)     // Catch: java.lang.Throwable -> L2b
            L21:
                boolean r0 = r3.b     // Catch: java.lang.Throwable -> L2b
                if (r0 == 0) goto L2a
                com.tencent.bugly.proguard.r r0 = r3.a     // Catch: java.lang.Throwable -> L2b
                r0.b()     // Catch: java.lang.Throwable -> L2b
            L2a:
                return
            L2b:
                r0 = move-exception
                boolean r1 = com.tencent.bugly.proguard.al.a(r0)
                if (r1 != 0) goto L35
                r0.printStackTrace()
            L35:
                return
        }
    }

    class b implements java.lang.Runnable {
        final com.tencent.bugly.proguard.r a;

        b(com.tencent.bugly.proguard.r r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                long r0 = java.lang.System.currentTimeMillis()
                com.tencent.bugly.proguard.r r2 = r6.a
                long r2 = com.tencent.bugly.proguard.r.b(r2)
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 >= 0) goto L27
                com.tencent.bugly.proguard.ak r2 = com.tencent.bugly.proguard.ak.a()
                com.tencent.bugly.proguard.r$b r3 = new com.tencent.bugly.proguard.r$b
                com.tencent.bugly.proguard.r r4 = r6.a
                r3.<init>(r4)
                com.tencent.bugly.proguard.r r4 = r6.a
                long r4 = com.tencent.bugly.proguard.r.b(r4)
                long r4 = r4 - r0
                r0 = 5000(0x1388, double:2.4703E-320)
                long r4 = r4 + r0
                r2.a(r3, r4)
                return
            L27:
                com.tencent.bugly.proguard.r r0 = r6.a
                r1 = 3
                r2 = 0
                r0.a(r1, r2)
                com.tencent.bugly.proguard.r r0 = r6.a
                r0.a()
                return
        }
    }

    class c implements java.lang.Runnable {
        final com.tencent.bugly.proguard.r a;
        private long b;

        public c(com.tencent.bugly.proguard.r r3, long r4) {
                r2 = this;
                r2.a = r3
                r2.<init>()
                r0 = 21600000(0x1499700, double:1.0671818E-316)
                r2.b = r0
                r2.b = r4
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tencent.bugly.proguard.r r0 = r3.a
                r0.b()
                com.tencent.bugly.proguard.r r0 = r3.a
                long r1 = r3.b
                r0.a(r1)
                return
        }
    }

    static {
            return
    }

    public r(android.content.Context r2, boolean r3) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.d = r0
            r1.a = r2
            r1.d = r3
            return
    }

    private static int a(java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> r9) {
            long r0 = java.lang.System.currentTimeMillis()
            java.util.Iterator r9 = r9.iterator()
            r2 = 0
        L9:
            boolean r3 = r9.hasNext()
            if (r3 == 0) goto L32
            java.lang.Object r3 = r9.next()
            com.tencent.bugly.crashreport.biz.UserInfoBean r3 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r3
            long r4 = r3.e
            r6 = 600000(0x927c0, double:2.964394E-318)
            long r6 = r0 - r6
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 <= 0) goto L9
            int r4 = r3.b
            r5 = 1
            if (r4 == r5) goto L2f
            int r4 = r3.b
            r5 = 4
            if (r4 == r5) goto L2f
            int r3 = r3.b
            r4 = 3
            if (r3 != r4) goto L9
        L2f:
            int r2 = r2 + 1
            goto L9
        L32:
            return r2
    }

    private static com.tencent.bugly.crashreport.biz.UserInfoBean a(android.database.Cursor r4) {
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
            android.os.Parcelable$Creator<com.tencent.bugly.crashreport.biz.UserInfoBean> r4 = com.tencent.bugly.crashreport.biz.UserInfoBean.CREATOR     // Catch: java.lang.Throwable -> L28
            java.lang.Object r4 = com.tencent.bugly.proguard.ap.a(r1, r4)     // Catch: java.lang.Throwable -> L28
            com.tencent.bugly.crashreport.biz.UserInfoBean r4 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r4     // Catch: java.lang.Throwable -> L28
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

    public static java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> a(java.lang.String r8) {
            java.lang.String r0 = "t_ui"
            r1 = 0
            boolean r2 = com.tencent.bugly.proguard.ap.b(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            if (r2 == 0) goto Lb
            r8 = r1
            goto L1e
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            java.lang.String r3 = "_pc = '"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            r2.append(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            java.lang.String r8 = "'"
            r2.append(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
        L1e:
            com.tencent.bugly.proguard.w r2 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            android.database.Cursor r8 = r2.a(r0, r1, r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            if (r8 != 0) goto L2e
            if (r8 == 0) goto L2d
            r8.close()
        L2d:
            return r1
        L2e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r2.<init>()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r3.<init>()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
        L38:
            boolean r4 = r8.moveToNext()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r5 = 0
            if (r4 == 0) goto L64
            com.tencent.bugly.crashreport.biz.UserInfoBean r4 = a(r8)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            if (r4 == 0) goto L49
            r3.add(r4)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            goto L38
        L49:
            java.lang.String r4 = "_id"
            int r4 = r8.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            long r6 = r8.getLong(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            java.lang.String r4 = " or _id = "
            r2.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            r2.append(r6)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            goto L38
        L5c:
            java.lang.String r4 = "[Database] unknown id."
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            com.tencent.bugly.proguard.al.d(r4, r5)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            goto L38
        L64:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            int r4 = r2.length()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            if (r4 <= 0) goto L8c
            r4 = 4
            java.lang.String r2 = r2.substring(r4)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            com.tencent.bugly.proguard.w r4 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            int r2 = r4.a(r0, r2)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            java.lang.String r4 = "[Database] deleted %s error data %d"
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r6[r5] = r0     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r0 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r6[r0] = r2     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            com.tencent.bugly.proguard.al.d(r4, r6)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
        L8c:
            if (r8 == 0) goto L91
            r8.close()
        L91:
            return r3
        L92:
            r0 = move-exception
            goto L99
        L94:
            r0 = move-exception
            r8 = r1
            goto La9
        L97:
            r0 = move-exception
            r8 = r1
        L99:
            boolean r2 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> La8
            if (r2 != 0) goto La2
            r0.printStackTrace()     // Catch: java.lang.Throwable -> La8
        La2:
            if (r8 == 0) goto La7
            r8.close()
        La7:
            return r1
        La8:
            r0 = move-exception
        La9:
            if (r8 == 0) goto Lae
            r8.close()
        Lae:
            throw r0
    }

    static void a(com.tencent.bugly.crashreport.biz.UserInfoBean r1) {
            if (r1 == 0) goto Le
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            if (r0 == 0) goto Le
            java.lang.String r0 = r0.d()
            r1.j = r0
        Le:
            return
    }

    private void a(com.tencent.bugly.crashreport.biz.UserInfoBean r8, boolean r9) {
            r7 = this;
            if (r8 != 0) goto L3
            return
        L3:
            r0 = 0
            r1 = 1
            if (r9 != 0) goto L33
            int r9 = r8.b
            if (r9 == r1) goto L33
            android.content.Context r9 = r7.a
            com.tencent.bugly.proguard.aa r9 = com.tencent.bugly.proguard.aa.a(r9)
            java.lang.String r9 = r9.d
            java.util.List r9 = a(r9)
            if (r9 == 0) goto L33
            int r2 = r9.size()
            r3 = 20
            if (r2 < r3) goto L33
            java.lang.Object[] r8 = new java.lang.Object[r1]
            int r9 = r9.size()
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            r8[r0] = r9
            java.lang.String r9 = "[UserInfo] There are too many user info in local: %d"
            com.tencent.bugly.proguard.al.a(r9, r8)
            return
        L33:
            android.content.ContentValues r9 = b(r8)
            com.tencent.bugly.proguard.w r2 = com.tencent.bugly.proguard.w.a()
            r3 = 0
            java.lang.String r4 = "t_ui"
            long r2 = r2.a(r4, r9, r3)
            r5 = 0
            int r9 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r9 < 0) goto L5a
            r9 = 2
            java.lang.Object[] r9 = new java.lang.Object[r9]
            r9[r0] = r4
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            r9[r1] = r0
            java.lang.String r0 = "[Database] insert %s success with ID: %d"
            com.tencent.bugly.proguard.al.c(r0, r9)
            r8.a = r2
        L5a:
            return
    }

    static void a(com.tencent.bugly.proguard.r r0, com.tencent.bugly.crashreport.biz.UserInfoBean r1, boolean r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.tencent.bugly.proguard.r r0, boolean r1) {
            r0.a(r1)
            return
    }

    private static void a(java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> r10, java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> r11) {
            int r0 = r10.size()
            int r0 = r0 + (-20)
            if (r0 <= 0) goto L50
            r1 = 0
            r2 = 0
        La:
            int r3 = r10.size()
            int r3 = r3 + (-1)
            if (r2 >= r3) goto L44
            int r3 = r2 + 1
            r4 = r3
        L15:
            int r5 = r10.size()
            if (r4 >= r5) goto L42
            java.lang.Object r5 = r10.get(r2)
            com.tencent.bugly.crashreport.biz.UserInfoBean r5 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r5
            long r5 = r5.e
            java.lang.Object r7 = r10.get(r4)
            com.tencent.bugly.crashreport.biz.UserInfoBean r7 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r7
            long r7 = r7.e
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 <= 0) goto L3f
            java.lang.Object r5 = r10.get(r2)
            com.tencent.bugly.crashreport.biz.UserInfoBean r5 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r5
            java.lang.Object r6 = r10.get(r4)
            r10.set(r2, r6)
            r10.set(r4, r5)
        L3f:
            int r4 = r4 + 1
            goto L15
        L42:
            r2 = r3
            goto La
        L44:
            if (r1 >= r0) goto L50
            java.lang.Object r2 = r10.get(r1)
            r11.add(r2)
            int r1 = r1 + 1
            goto L44
        L50:
            return
    }

    private void a(java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> r12, boolean r13) {
            r11 = this;
            boolean r13 = r11.b(r13)
            r0 = 0
            r1 = 1
            if (r13 != 0) goto L2a
            long r2 = java.lang.System.currentTimeMillis()
            java.util.Iterator r12 = r12.iterator()
        L10:
            boolean r13 = r12.hasNext()
            if (r13 == 0) goto L22
            java.lang.Object r13 = r12.next()
            com.tencent.bugly.crashreport.biz.UserInfoBean r13 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r13
            r13.f = r2
            r11.a(r13, r1)
            goto L10
        L22:
            java.lang.Object[] r12 = new java.lang.Object[r0]
            java.lang.String r13 = "uploadCheck failed"
            com.tencent.bugly.proguard.al.d(r13, r12)
            return
        L2a:
            int r13 = r11.c
            r2 = 2
            if (r13 != r1) goto L31
            r13 = 1
            goto L32
        L31:
            r13 = 2
        L32:
            r3 = 0
            if (r12 == 0) goto L1c8
            int r4 = r12.size()
            if (r4 != 0) goto L3d
            goto L1c8
        L3d:
            com.tencent.bugly.proguard.aa r4 = com.tencent.bugly.proguard.aa.b()
            if (r4 != 0) goto L45
            goto L1c8
        L45:
            r4.o()
            com.tencent.bugly.proguard.bv r5 = new com.tencent.bugly.proguard.bv
            r5.<init>()
            java.lang.String r6 = r4.d
            r5.b = r6
            java.lang.String r6 = r4.g()
            r5.c = r6
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.Iterator r7 = r12.iterator()
        L60:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto L76
            java.lang.Object r8 = r7.next()
            com.tencent.bugly.crashreport.biz.UserInfoBean r8 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r8
            com.tencent.bugly.proguard.bu r8 = com.tencent.bugly.proguard.ae.a(r8)
            if (r8 == 0) goto L60
            r6.add(r8)
            goto L60
        L76:
            r5.d = r6
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            r5.e = r6
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r4.getClass()
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A7"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = com.tencent.bugly.proguard.aa.n()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A6"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = r4.m()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A5"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            long r8 = r4.k()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A2"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            long r8 = r4.k()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A1"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = r4.k
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A24"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            long r8 = r4.l()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A17"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = r4.q()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A15"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.Boolean r8 = r4.r()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "A13"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = r4.E
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "F08"
            r6.put(r8, r7)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = r4.F
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "F09"
            r6.put(r8, r7)
            java.util.Map r4 = r4.y()
            if (r4 == 0) goto L1b0
            int r6 = r4.size()
            if (r6 <= 0) goto L1b0
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L186:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L1b0
            java.lang.Object r6 = r4.next()
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6
            java.util.Map<java.lang.String, java.lang.String> r7 = r5.e
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "C04_"
            r8.<init>(r9)
            java.lang.Object r9 = r6.getKey()
            java.lang.String r9 = (java.lang.String) r9
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.Object r6 = r6.getValue()
            r7.put(r8, r6)
            goto L186
        L1b0:
            if (r13 == r1) goto L1c5
            if (r13 == r2) goto L1c2
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.Integer r13 = java.lang.Integer.valueOf(r13)
            r2[r0] = r13
            java.lang.String r13 = "unknown up type %d "
            com.tencent.bugly.proguard.al.e(r13, r2)
            goto L1c8
        L1c2:
            r5.a = r2
            goto L1c7
        L1c5:
            r5.a = r1
        L1c7:
            r3 = r5
        L1c8:
            if (r3 != 0) goto L1d2
            java.lang.Object[] r12 = new java.lang.Object[r0]
            java.lang.String r13 = "[UserInfo] Failed to create UserInfoPackage."
            com.tencent.bugly.proguard.al.d(r13, r12)
            return
        L1d2:
            byte[] r13 = com.tencent.bugly.proguard.ae.a(r3)
            if (r13 != 0) goto L1e0
            java.lang.Object[] r12 = new java.lang.Object[r0]
            java.lang.String r13 = "[UserInfo] Failed to encode data."
            com.tencent.bugly.proguard.al.d(r13, r12)
            return
        L1e0:
            android.content.Context r2 = r11.a
            r3 = 840(0x348, float:1.177E-42)
            com.tencent.bugly.proguard.bq r6 = com.tencent.bugly.proguard.ae.a(r2, r3, r13)
            if (r6 != 0) goto L1f2
            java.lang.Object[] r12 = new java.lang.Object[r0]
            java.lang.String r13 = "[UserInfo] Request package is null."
            com.tencent.bugly.proguard.al.d(r13, r12)
            return
        L1f2:
            com.tencent.bugly.proguard.r$1 r9 = new com.tencent.bugly.proguard.r$1
            r9.<init>(r11, r12)
            com.tencent.bugly.proguard.ac r12 = com.tencent.bugly.proguard.ac.a()
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r12 = r12.c()
            java.lang.String r7 = r12.q
            java.lang.String r8 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.a
            com.tencent.bugly.proguard.ai r4 = com.tencent.bugly.proguard.ai.a()
            r5 = 1001(0x3e9, float:1.403E-42)
            int r12 = r11.c
            if (r12 != r1) goto L20f
            r10 = 1
            goto L210
        L20f:
            r10 = 0
        L210:
            r4.a(r5, r6, r7, r8, r9, r10)
            return
    }

    private synchronized void a(boolean r8) {
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.d     // Catch: java.lang.Throwable -> L92
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L9
        L7:
            r0 = 0
            goto L27
        L9:
            com.tencent.bugly.proguard.ai r0 = com.tencent.bugly.proguard.ai.a()     // Catch: java.lang.Throwable -> L92
            if (r0 != 0) goto L10
            goto L7
        L10:
            com.tencent.bugly.proguard.ac r3 = com.tencent.bugly.proguard.ac.a()     // Catch: java.lang.Throwable -> L92
            if (r3 != 0) goto L17
            goto L7
        L17:
            boolean r3 = r3.b()     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L26
            r3 = 1001(0x3e9, float:1.403E-42)
            boolean r0 = r0.b(r3)     // Catch: java.lang.Throwable -> L92
            if (r0 != 0) goto L26
            goto L7
        L26:
            r0 = 1
        L27:
            if (r0 != 0) goto L2b
            monitor-exit(r7)
            return
        L2b:
            android.content.Context r0 = r7.a     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = r0.d     // Catch: java.lang.Throwable -> L92
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L92
            r3.<init>()     // Catch: java.lang.Throwable -> L92
            java.util.List r0 = a(r0)     // Catch: java.lang.Throwable -> L92
            if (r0 == 0) goto L5b
            a(r0, r3)     // Catch: java.lang.Throwable -> L92
            b(r0, r3)     // Catch: java.lang.Throwable -> L92
            int r4 = a(r0)     // Catch: java.lang.Throwable -> L92
            r5 = 15
            if (r4 <= r5) goto L60
            java.lang.String r5 = "[UserInfo] Upload user info too many times in 10 min: %d"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L92
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L92
            r6[r2] = r4     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.d(r5, r6)     // Catch: java.lang.Throwable -> L92
            r4 = 0
            goto L61
        L5b:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L92
            r0.<init>()     // Catch: java.lang.Throwable -> L92
        L60:
            r4 = 1
        L61:
            int r5 = r3.size()     // Catch: java.lang.Throwable -> L92
            if (r5 <= 0) goto L6a
            b(r3)     // Catch: java.lang.Throwable -> L92
        L6a:
            if (r4 == 0) goto L89
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L92
            if (r3 != 0) goto L73
            goto L89
        L73:
            java.lang.String r3 = "[UserInfo] Upload user info(size: %d)"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L92
            int r4 = r0.size()     // Catch: java.lang.Throwable -> L92
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L92
            r1[r2] = r4     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.c(r3, r1)     // Catch: java.lang.Throwable -> L92
            r7.a(r0, r8)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r7)
            return
        L89:
            java.lang.String r8 = "[UserInfo] There is no user info in local database."
            java.lang.Object[] r0 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.c(r8, r0)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r7)
            return
        L92:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    static boolean a(com.tencent.bugly.proguard.r r0) {
            boolean r0 = r0.d
            return r0
    }

    static long b(com.tencent.bugly.proguard.r r2) {
            long r0 = r2.b
            return r0
    }

    private static android.content.ContentValues b(com.tencent.bugly.crashreport.biz.UserInfoBean r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L4e
            r1.<init>()     // Catch: java.lang.Throwable -> L4e
            long r2 = r7.a     // Catch: java.lang.Throwable -> L4e
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L1c
            java.lang.String r2 = "_id"
            long r3 = r7.a     // Catch: java.lang.Throwable -> L4e
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L4e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4e
        L1c:
            java.lang.String r2 = "_tm"
            long r3 = r7.e     // Catch: java.lang.Throwable -> L4e
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L4e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "_ut"
            long r3 = r7.f     // Catch: java.lang.Throwable -> L4e
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L4e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "_tp"
            int r3 = r7.b     // Catch: java.lang.Throwable -> L4e
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L4e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "_pc"
            java.lang.String r3 = r7.c     // Catch: java.lang.Throwable -> L4e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "_dt"
            byte[] r7 = com.tencent.bugly.proguard.ap.a(r7)     // Catch: java.lang.Throwable -> L4e
            r1.put(r2, r7)     // Catch: java.lang.Throwable -> L4e
            return r1
        L4e:
            r7 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r7)
            if (r1 != 0) goto L58
            r7.printStackTrace()
        L58:
            return r0
    }

    private static void b(java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> r6) {
            java.lang.String r0 = "t_ui"
            int r1 = r6.size()
            if (r1 != 0) goto L9
            return
        L9:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
            r3 = 0
        L10:
            int r4 = r6.size()
            if (r3 >= r4) goto L2d
            r4 = 50
            if (r3 >= r4) goto L2d
            java.lang.Object r4 = r6.get(r3)
            com.tencent.bugly.crashreport.biz.UserInfoBean r4 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r4
            java.lang.String r5 = " or _id = "
            r1.append(r5)
            long r4 = r4.a
            r1.append(r4)
            int r3 = r3 + 1
            goto L10
        L2d:
            java.lang.String r6 = r1.toString()
            int r3 = r6.length()
            if (r3 <= 0) goto L3c
            r3 = 4
            java.lang.String r6 = r6.substring(r3)
        L3c:
            r1.setLength(r2)
            com.tencent.bugly.proguard.w r1 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L59
            int r6 = r1.a(r0, r6)     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = "[Database] deleted %s data %d"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L59
            r3[r2] = r0     // Catch: java.lang.Throwable -> L59
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L59
            r0 = 1
            r3[r0] = r6     // Catch: java.lang.Throwable -> L59
            com.tencent.bugly.proguard.al.c(r1, r3)     // Catch: java.lang.Throwable -> L59
            return
        L59:
            r6 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r6)
            if (r0 != 0) goto L63
            r6.printStackTrace()
        L63:
            return
    }

    private static void b(java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> r6, java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> r7) {
            java.util.Iterator r6 = r6.iterator()
        L4:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L29
            java.lang.Object r0 = r6.next()
            com.tencent.bugly.crashreport.biz.UserInfoBean r0 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r0
            long r1 = r0.f
            r3 = -1
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L4
            r6.remove()
            long r1 = r0.e
            long r3 = com.tencent.bugly.proguard.ap.b()
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 >= 0) goto L4
            r7.add(r0)
            goto L4
        L29:
            return
    }

    private boolean b(boolean r15) {
            r14 = this;
            boolean r0 = com.tencent.bugly.proguard.r.e
            r1 = 1
            if (r0 != 0) goto L6
            return r1
        L6:
            java.io.File r0 = new java.io.File
            android.content.Context r2 = r14.a
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r3 = "bugly_last_us_up_tm"
            r0.<init>(r2, r3)
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 1024(0x400, double:5.06E-321)
            r6 = 0
            if (r15 == 0) goto L24
            java.lang.String r15 = java.lang.String.valueOf(r2)
            com.tencent.bugly.proguard.am.a(r0, r15, r4, r6)
            return r1
        L24:
            boolean r15 = r0.exists()
            if (r15 != 0) goto L32
            java.lang.String r15 = java.lang.String.valueOf(r2)
            com.tencent.bugly.proguard.am.a(r0, r15, r4, r6)
            goto L96
        L32:
            java.io.BufferedReader r15 = com.tencent.bugly.proguard.ap.a(r0)
            if (r15 == 0) goto L91
            java.lang.String r7 = r15.readLine()     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            java.lang.String r7 = r7.trim()     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            long r7 = r7.longValue()     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            int r9 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r9 < 0) goto L58
            long r9 = r2 - r7
            r11 = 86400000(0x5265c00, double:4.2687272E-316)
            int r13 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r13 <= 0) goto L56
            goto L58
        L56:
            r9 = 1
            goto L59
        L58:
            r9 = 0
        L59:
            if (r9 == 0) goto L66
            long r7 = r2 - r7
            r9 = 300000(0x493e0, double:1.482197E-318)
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 >= 0) goto L66
            r1 = 0
            goto L91
        L66:
            java.lang.String r7 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            com.tencent.bugly.proguard.am.a(r0, r7, r4, r6)     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            goto L91
        L6e:
            r0 = move-exception
            goto L86
        L70:
            r7 = move-exception
            com.tencent.bugly.proguard.al.b(r7)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L6e
            com.tencent.bugly.proguard.am.a(r0, r2, r4, r6)     // Catch: java.lang.Throwable -> L6e
            if (r15 == 0) goto L96
            r15.close()     // Catch: java.lang.Exception -> L81
            goto L96
        L81:
            r15 = move-exception
            com.tencent.bugly.proguard.al.a(r15)
            goto L96
        L86:
            if (r15 == 0) goto L90
            r15.close()     // Catch: java.lang.Exception -> L8c
            goto L90
        L8c:
            r15 = move-exception
            com.tencent.bugly.proguard.al.a(r15)
        L90:
            throw r0
        L91:
            if (r15 == 0) goto L96
            r15.close()     // Catch: java.lang.Exception -> L81
        L96:
            return r1
    }

    public final void a() {
            r6 = this;
            long r0 = com.tencent.bugly.proguard.ap.b()
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            long r0 = r0 + r2
            r6.b = r0
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.r$b r1 = new com.tencent.bugly.proguard.r$b
            r1.<init>(r6)
            long r2 = r6.b
            long r4 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r4
            r4 = 5000(0x1388, double:2.4703E-320)
            long r2 = r2 + r4
            r0.a(r1, r2)
            return
    }

    public final void a(int r7, boolean r8) {
            r6 = this;
            com.tencent.bugly.proguard.ac r0 = com.tencent.bugly.proguard.ac.a()
            r1 = 0
            r2 = 3
            r3 = 1
            if (r0 == 0) goto L1d
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r0.c()
            boolean r0 = r0.g
            if (r0 != 0) goto L1d
            if (r7 == r3) goto L1d
            if (r7 == r2) goto L1d
            java.lang.Object[] r7 = new java.lang.Object[r1]
            java.lang.String r8 = "UserInfo is disable"
            com.tencent.bugly.proguard.al.e(r8, r7)
            return
        L1d:
            if (r7 == r3) goto L21
            if (r7 != r2) goto L26
        L21:
            int r0 = r6.c
            int r0 = r0 + r3
            r6.c = r0
        L26:
            android.content.Context r0 = r6.a
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            com.tencent.bugly.crashreport.biz.UserInfoBean r2 = new com.tencent.bugly.crashreport.biz.UserInfoBean
            r2.<init>()
            r2.b = r7
            java.lang.String r4 = r0.d
            r2.c = r4
            java.lang.String r4 = r0.f()
            r2.d = r4
            long r4 = java.lang.System.currentTimeMillis()
            r2.e = r4
            r4 = -1
            r2.f = r4
            java.lang.String r4 = r0.o
            r2.n = r4
            if (r7 != r3) goto L4e
            r1 = 1
        L4e:
            r2.o = r1
            boolean r7 = r0.a()
            r2.l = r7
            java.lang.String r7 = r0.y
            r2.m = r7
            long r3 = r0.z
            r2.g = r3
            long r3 = r0.A
            r2.h = r3
            long r3 = r0.B
            r2.i = r3
            long r3 = r0.C
            r2.k = r3
            java.util.Map r7 = r0.t()
            r2.r = r7
            java.util.Map r7 = r0.y()
            r2.s = r7
            int r7 = r0.z()
            r2.p = r7
            int r7 = r0.x
            r2.q = r7
            com.tencent.bugly.proguard.ak r7 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.r$a r0 = new com.tencent.bugly.proguard.r$a
            r0.<init>(r6, r2, r8)
            r1 = 0
            r7.a(r0, r1)
            return
    }

    public final void a(long r3) {
            r2 = this;
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.r$c r1 = new com.tencent.bugly.proguard.r$c
            r1.<init>(r2, r3)
            r0.a(r1, r3)
            return
    }

    public final void b() {
            r2 = this;
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            if (r0 == 0) goto Le
            com.tencent.bugly.proguard.r$2 r1 = new com.tencent.bugly.proguard.r$2
            r1.<init>(r2)
            r0.a(r1)
        Le:
            return
    }
}

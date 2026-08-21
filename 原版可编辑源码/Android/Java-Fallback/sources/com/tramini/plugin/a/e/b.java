package com.tramini.plugin.a.e;

public final class b extends com.tramini.plugin.a.e.f {

    final class 1 implements java.lang.Runnable {
        final android.webkit.WebView a;
        final java.util.concurrent.ExecutorService b;
        final java.lang.String[] c;


        1(android.webkit.WebView r1, java.util.concurrent.ExecutorService r2, java.lang.String[] r3) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                android.webkit.WebView r0 = r2.a     // Catch: java.lang.Throwable -> L1b
                if (r0 != 0) goto L11
                java.util.concurrent.ExecutorService r0 = r2.b     // Catch: java.lang.Throwable -> L1b
                monitor-enter(r0)     // Catch: java.lang.Throwable -> L1b
                java.util.concurrent.ExecutorService r1 = r2.b     // Catch: java.lang.Throwable -> Le
                r1.notifyAll()     // Catch: java.lang.Throwable -> Le
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
                goto L11
            Le:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
                throw r1     // Catch: java.lang.Throwable -> L1b
            L11:
                android.webkit.WebView r0 = r2.a     // Catch: java.lang.Throwable -> L1b
                com.tramini.plugin.a.e.b$1$1 r1 = new com.tramini.plugin.a.e.b$1$1     // Catch: java.lang.Throwable -> L1b
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L1b
                r0.post(r1)     // Catch: java.lang.Throwable -> L1b
            L1b:
                return
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r33, java.lang.String r34, java.lang.String r35, long r36, long r38, org.json.JSONObject r40, java.lang.String r41, org.json.JSONArray r42, java.lang.String r43) {
            r0 = r33
            r12 = r40
            r13 = r42
            r14 = r43
            java.lang.String r15 = "2"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = r34
            r1.append(r2)
            java.lang.Class r2 = r33.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ","
            r1.append(r2)
            java.lang.String r11 = r1.toString()
            org.json.JSONObject r10 = new org.json.JSONObject
            r10.<init>()
            r16 = 0
            boolean r1 = r14.equals(r15)     // Catch: java.lang.Throwable -> L2ae
            java.lang.String r9 = "i_lr"
            java.lang.String r8 = "all"
            java.lang.String r6 = "pkg"
            r7 = 0
            java.lang.String r4 = ""
            if (r1 == 0) goto Lbb
            boolean r1 = r0 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L2ae
            if (r1 == 0) goto Lb4
            r1 = r0
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L2ae
            int r1 = r1.getChildCount()     // Catch: java.lang.Throwable -> L2ae
            if (r1 <= 0) goto Lb4
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L2ae
            android.view.View r0 = r0.getChildAt(r7)     // Catch: java.lang.Throwable -> L2ae
            boolean r1 = r0 instanceof android.webkit.WebView     // Catch: java.lang.Throwable -> L2ae
            if (r1 == 0) goto La5
            android.webkit.WebView r0 = (android.webkit.WebView) r0     // Catch: java.lang.Throwable -> L2ae
            r2 = r36
            r17 = r15
            r14 = r38
            java.lang.String r0 = a(r0, r2, r14)     // Catch: java.lang.Throwable -> L2ae
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2ae
            if (r1 != 0) goto La7
            r1 = r4
            r2 = r1
            r3 = r2
        L6a:
            int r5 = r42.length()     // Catch: java.lang.Throwable -> L2ae
            if (r7 >= r5) goto Lab
            java.lang.String r5 = r13.optString(r7)     // Catch: java.lang.Throwable -> L2ae
            java.lang.String r11 = r12.optString(r5)     // Catch: java.lang.Throwable -> L2ae
            boolean r14 = android.text.TextUtils.equals(r11, r6)     // Catch: java.lang.Throwable -> L2ae
            if (r14 == 0) goto L80
            r2 = r5
            goto La2
        L80:
            boolean r14 = android.text.TextUtils.equals(r11, r8)     // Catch: java.lang.Throwable -> L2ae
            if (r14 == 0) goto L88
            r3 = r5
            goto La2
        L88:
            boolean r14 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> La2
            if (r14 != 0) goto La2
            java.lang.String r11 = d(r11, r0)     // Catch: java.lang.Throwable -> La2
            boolean r14 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> La2
            if (r14 != 0) goto L9b
            r10.put(r5, r11)     // Catch: java.lang.Throwable -> La2
        L9b:
            boolean r5 = android.text.TextUtils.equals(r5, r9)     // Catch: java.lang.Throwable -> La2
            if (r5 == 0) goto La2
            r1 = r11
        La2:
            int r7 = r7 + 1
            goto L6a
        La5:
            r17 = r15
        La7:
            r0 = r4
            r1 = r0
            r2 = r1
            r3 = r2
        Lab:
            r6 = r3
            r5 = r4
            r27 = r10
            r3 = r0
            r0 = r5
            r4 = r1
            goto L204
        Lb4:
            r17 = r15
        Lb6:
            r0 = r4
            r27 = r10
            goto L1ff
        Lbb:
            r2 = r36
            r17 = r15
            r14 = r38
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2ae
            r1.<init>()     // Catch: java.lang.Throwable -> L2ae
            java.lang.Class r5 = r33.getClass()     // Catch: java.lang.Throwable -> L2ae
            a(r5, r1)     // Catch: java.lang.Throwable -> L2ae
            int r5 = r1.size()     // Catch: java.lang.Throwable -> L2ae
            java.lang.reflect.Field[] r14 = new java.lang.reflect.Field[r5]     // Catch: java.lang.Throwable -> L2ae
            r1.toArray(r14)     // Catch: java.lang.Throwable -> L2ae
            if (r5 == 0) goto Lb6
            r18 = r4
            r19 = r18
            r20 = r19
            r21 = r20
            r15 = r7
            r1 = r16
        Le3:
            if (r15 >= r5) goto L1f2
            r1 = r14[r15]     // Catch: java.lang.Throwable -> L2ae
            r7 = 1
            r1.setAccessible(r7)     // Catch: java.lang.Throwable -> L2ae
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L2ae
            r7 = r35
            org.json.JSONObject r0 = c(r1, r7)     // Catch: java.lang.Throwable -> L2ae
            if (r0 == 0) goto L192
            java.lang.String r2 = "xml"
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Throwable -> L177
            java.lang.String r18 = b(r1)     // Catch: java.lang.Throwable -> L177
            java.lang.String r3 = "html"
            java.lang.String r3 = r0.optString(r3)     // Catch: java.lang.Throwable -> L177
            boolean r22 = android.text.TextUtils.isEmpty(r41)     // Catch: java.lang.Throwable -> L177
            if (r22 != 0) goto L11e
            r29 = r14
            r14 = r41
            java.lang.String r22 = r0.optString(r14)     // Catch: java.lang.Throwable -> L118
            r30 = r22
            goto L124
        L118:
            r31 = r4
            r32 = r5
            goto L17f
        L11e:
            r29 = r14
            r14 = r41
            r30 = r4
        L124:
            r31 = r4
            r32 = r5
            r4 = 0
        L129:
            int r5 = r42.length()     // Catch: java.lang.Throwable -> L17f
            if (r4 >= r5) goto L17f
            java.lang.String r5 = r13.optString(r4)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r7 = r12.optString(r5)     // Catch: java.lang.Throwable -> L17f
            boolean r22 = android.text.TextUtils.equals(r7, r6)     // Catch: java.lang.Throwable -> L17f
            if (r22 == 0) goto L140
            r20 = r5
            goto L172
        L140:
            boolean r22 = android.text.TextUtils.equals(r7, r8)     // Catch: java.lang.Throwable -> L17f
            if (r22 == 0) goto L149
            r21 = r5
            goto L172
        L149:
            boolean r22 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L172
            if (r22 != 0) goto L172
            r22 = r7
            r23 = r1
            r24 = r0
            r25 = r2
            r26 = r18
            r27 = r3
            r28 = r30
            java.lang.String r7 = a(r22, r23, r24, r25, r26, r27, r28)     // Catch: java.lang.Throwable -> L172
            boolean r22 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L172
            if (r22 != 0) goto L16a
            r10.put(r5, r7)     // Catch: java.lang.Throwable -> L172
        L16a:
            boolean r5 = android.text.TextUtils.equals(r5, r9)     // Catch: java.lang.Throwable -> L172
            if (r5 == 0) goto L172
            r19 = r7
        L172:
            int r4 = r4 + 1
            r7 = r35
            goto L129
        L177:
            r31 = r4
            r32 = r5
            r29 = r14
            r14 = r41
        L17f:
            r34 = r0
            r23 = r6
            r25 = r8
            r26 = r9
            r27 = r10
            r28 = r11
            r0 = r31
            r22 = r32
            r24 = 0
            goto L1d7
        L192:
            r31 = r4
            r32 = r5
            r29 = r14
            r14 = r41
            if (r1 == 0) goto L17f
            java.lang.Class r2 = r1.getClass()     // Catch: java.lang.Throwable -> L2ae
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L2ae
            boolean r2 = r11.contains(r2)     // Catch: java.lang.Throwable -> L2ae
            if (r2 != 0) goto L17f
            r2 = r11
            r3 = r35
            r7 = r31
            r22 = r32
            r4 = r36
            r34 = r0
            r23 = r6
            r0 = r7
            r24 = 0
            r6 = r38
            r25 = r8
            r8 = r40
            r26 = r9
            r9 = r41
            r27 = r10
            r10 = r42
            r28 = r11
            r11 = r43
            com.tramini.plugin.a.c.a r1 = a(r1, r2, r3, r4, r6, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L2ae
            if (r1 == 0) goto L1d7
            org.json.JSONObject r2 = r1.a     // Catch: java.lang.Throwable -> L2ae
            if (r2 == 0) goto L1d7
            return r1
        L1d7:
            int r15 = r15 + 1
            r1 = r34
            r2 = r36
            r4 = r0
            r5 = r22
            r6 = r23
            r7 = r24
            r8 = r25
            r9 = r26
            r10 = r27
            r11 = r28
            r14 = r29
            r0 = r33
            goto Le3
        L1f2:
            r0 = r4
            r27 = r10
            r3 = r0
            r5 = r18
            r4 = r19
            r2 = r20
            r6 = r21
            goto L206
        L1ff:
            r2 = r0
            r3 = r2
            r4 = r3
            r5 = r4
            r6 = r5
        L204:
            r1 = r16
        L206:
            com.tramini.plugin.a.c.a r7 = new com.tramini.plugin.a.c.a     // Catch: java.lang.Throwable -> L2ae
            r7.<init>()     // Catch: java.lang.Throwable -> L2ae
            int r8 = r27.length()     // Catch: java.lang.Throwable -> L2ae
            if (r8 <= 0) goto L26b
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2ae
            if (r0 != 0) goto L22d
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2ae
            if (r0 != 0) goto L22d
            java.lang.String r0 = a(r4)     // Catch: java.lang.Throwable -> L2ae
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2ae
            if (r4 != 0) goto L22d
            r4 = r27
            r4.put(r2, r0)     // Catch: java.lang.Throwable -> L2ae
            goto L22f
        L22d:
            r4 = r27
        L22f:
            r2 = r43
            r8 = r17
            boolean r0 = r2.equals(r8)     // Catch: java.lang.Throwable -> L2ae
            if (r0 == 0) goto L251
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2ae
            if (r0 != 0) goto L268
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L2ae
            if (r0 != 0) goto L268
            byte[] r0 = r3.getBytes()     // Catch: java.lang.Throwable -> L2ae
            java.lang.String r0 = com.tramini.plugin.a.g.c.a(r0)     // Catch: java.lang.Throwable -> L2ae
            r4.put(r6, r0)     // Catch: java.lang.Throwable -> L2ae
            goto L268
        L251:
            if (r1 == 0) goto L268
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L2ae
            if (r0 != 0) goto L268
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L2ae
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L2ae
            java.lang.String r0 = com.tramini.plugin.a.g.c.a(r0)     // Catch: java.lang.Throwable -> L2ae
            r4.put(r6, r0)     // Catch: java.lang.Throwable -> L2ae
        L268:
            r7.a = r4     // Catch: java.lang.Throwable -> L2ae
            return r7
        L26b:
            r2 = r43
            r8 = r17
            boolean r2 = r2.equals(r8)     // Catch: java.lang.Throwable -> L2ae
            java.lang.String r4 = "1"
            if (r2 == 0) goto L28d
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2ae
            if (r1 == 0) goto L285
            com.tramini.plugin.a.c.a$a r1 = new com.tramini.plugin.a.c.a$a     // Catch: java.lang.Throwable -> L2ae
            r1.<init>(r4, r0)     // Catch: java.lang.Throwable -> L2ae
            r7.b = r1     // Catch: java.lang.Throwable -> L2ae
            goto L2ad
        L285:
            com.tramini.plugin.a.c.a$a r0 = new com.tramini.plugin.a.c.a$a     // Catch: java.lang.Throwable -> L2ae
            r0.<init>(r8, r3)     // Catch: java.lang.Throwable -> L2ae
            r7.b = r0     // Catch: java.lang.Throwable -> L2ae
            goto L2ad
        L28d:
            if (r1 != 0) goto L297
            com.tramini.plugin.a.c.a$a r1 = new com.tramini.plugin.a.c.a$a     // Catch: java.lang.Throwable -> L2ae
            r1.<init>(r4, r0)     // Catch: java.lang.Throwable -> L2ae
            r7.b = r1     // Catch: java.lang.Throwable -> L2ae
            goto L2ad
        L297:
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2ae
            if (r0 != 0) goto L2a2
            java.lang.String r0 = "obj_source_html"
            r1.put(r0, r5)     // Catch: java.lang.Throwable -> L2ae
        L2a2:
            com.tramini.plugin.a.c.a$a r0 = new com.tramini.plugin.a.c.a$a     // Catch: java.lang.Throwable -> L2ae
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2ae
            r0.<init>(r8, r1)     // Catch: java.lang.Throwable -> L2ae
            r7.b = r0     // Catch: java.lang.Throwable -> L2ae
        L2ad:
            return r7
        L2ae:
            return r16
    }

    public static com.tramini.plugin.a.c.a a(org.json.JSONObject r12, com.tramini.plugin.a.c.c r13, java.lang.String r14, java.lang.String r15) {
            java.lang.String r0 = "in_na"
            java.lang.String r0 = r12.optString(r0)
            java.lang.Object r1 = a(r0, r14)
            java.lang.String r14 = "tobj_k"
            java.lang.String r3 = r12.optString(r14)
            java.lang.String r14 = "bwt"
            r4 = 10000(0x2710, double:4.9407E-320)
            long r4 = r12.optLong(r14, r4)
            java.lang.String r14 = "bswt"
            r6 = 2000(0x7d0, double:9.88E-321)
            long r6 = r12.optLong(r14, r6)
            java.lang.String r14 = "bu_k"
            java.lang.String r9 = r12.optString(r14)
            org.json.JSONArray r10 = r13.e
            java.lang.String r2 = ""
            r8 = r12
            r11 = r15
            com.tramini.plugin.a.c.a r12 = a(r1, r2, r3, r4, r6, r8, r9, r10, r11)
            return r12
    }

    private static java.lang.String a(android.webkit.WebView r3, long r4, long r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 >= r1) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.Thread.sleep(r4)     // Catch: java.lang.InterruptedException -> Lc
        Lc:
            r0 = 2
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            r1 = 1
            java.lang.String[] r1 = new java.lang.String[r1]
            com.tramini.plugin.a.e.b$1 r2 = new com.tramini.plugin.a.e.b$1     // Catch: java.lang.Throwable -> L1c
            r2.<init>(r3, r0, r1)     // Catch: java.lang.Throwable -> L1c
            r0.submit(r2)     // Catch: java.lang.Throwable -> L1c
        L1c:
            monitor-enter(r0)     // Catch: java.lang.Exception -> L33
            long r4 = r4 + r6
            r0.wait(r4)     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            r0.shutdown()     // Catch: java.lang.Exception -> L33
            r3 = 0
            r4 = r1[r3]     // Catch: java.lang.Exception -> L33
            if (r4 == 0) goto L2d
            r3 = r1[r3]     // Catch: java.lang.Exception -> L33
            return r3
        L2d:
            java.lang.String r3 = ""
            return r3
        L30:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Exception -> L33
            throw r3     // Catch: java.lang.Exception -> L33
        L33:
            java.lang.String r3 = ""
            return r3
    }

    private static java.lang.String a(java.lang.Object r4) {
            if (r4 == 0) goto L3c
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3c
            r0.<init>()     // Catch: java.lang.Throwable -> L3c
            java.lang.Class r1 = r4.getClass()     // Catch: java.lang.Throwable -> L3c
            a(r1, r0)     // Catch: java.lang.Throwable -> L3c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3c
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3c
            java.lang.reflect.Field r1 = (java.lang.reflect.Field) r1     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L12
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L12
            boolean r2 = r1 instanceof java.lang.String     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L12
            r2 = r1
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = ".mp4"
            boolean r2 = r2.endsWith(r3)     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L12
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L3c
            return r1
        L3c:
            java.lang.String r4 = ""
            return r4
    }

    private static java.lang.String a(java.lang.String r8, java.lang.Object r9, org.json.JSONObject r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L162
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L162
            r8 = 0
            r2 = r0
        L9:
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L162
            if (r8 >= r3) goto L162
            org.json.JSONObject r3 = r1.optJSONObject(r8)     // Catch: java.lang.Throwable -> L162
            if (r3 == 0) goto L15e
            java.lang.String r4 = "action"
            r5 = -1
            int r4 = r3.optInt(r4, r5)     // Catch: java.lang.Throwable -> L162
            java.lang.String r5 = "param"
            java.lang.String r3 = r3.optString(r5, r0)     // Catch: java.lang.Throwable -> L162
            r5 = 1
            if (r4 == r5) goto L151
            r6 = 2
            if (r4 == r6) goto L14a
            r7 = 19
            if (r4 == r7) goto L13f
            r7 = 21
            if (r4 == r7) goto L124
            r5 = 29
            if (r4 == r5) goto L119
            r5 = 39
            if (r4 == r5) goto L10e
            r5 = 41
            if (r4 == r5) goto L103
            switch(r4) {
                case 11: goto Lf8;
                case 12: goto Lce;
                case 13: goto Lc2;
                default: goto L3f;
            }     // Catch: java.lang.Throwable -> L162
        L3f:
            switch(r4) {
                case 31: goto La5;
                case 32: goto L88;
                case 33: goto L44;
                case 34: goto L61;
                default: goto L42;
            }     // Catch: java.lang.Throwable -> L162
        L42:
            goto L157
        L44:
            boolean r4 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L162
            java.lang.String r4 = "<(img|IMG).*?"
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L162
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r4 = "(.*?)(/>|></img>|>)"
            r2.append(r4)     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = com.tramini.plugin.a.e.f.a(r13, r2, r6)     // Catch: java.lang.Throwable -> L162
        L61:
            boolean r4 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L162
            java.lang.String r4 = "("
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L162
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r4 = ")(http.*?)("
            r2.append(r4)     // Catch: java.lang.Throwable -> L162
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r3 = ")"
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = com.tramini.plugin.a.e.f.a(r13, r2, r6)     // Catch: java.lang.Throwable -> L162
            goto L157
        L88:
            boolean r4 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L162
            r2.<init>()     // Catch: java.lang.Throwable -> L162
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r3 = "=(\"|')(.*?)(\"|')"
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = com.tramini.plugin.a.e.f.a(r13, r2, r6)     // Catch: java.lang.Throwable -> L162
            goto L157
        La5:
            boolean r4 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L162
            r2.<init>()     // Catch: java.lang.Throwable -> L162
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r3 = ".*?\\>(.*?)(</span>|</div>)"
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = com.tramini.plugin.a.e.f.c(r13, r2)     // Catch: java.lang.Throwable -> L162
            goto L157
        Lc2:
            boolean r4 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.String r2 = com.tramini.plugin.a.e.f.d.b(r11, r3)     // Catch: java.lang.Throwable -> L162
            goto L157
        Lce:
            boolean r4 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L162
            r2.<init>()     // Catch: java.lang.Throwable -> L162
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r3 = "=\"(.*?)\""
            r2.append(r3)     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L162
            java.lang.String r2 = com.tramini.plugin.a.e.f.c(r11, r2)     // Catch: java.lang.Throwable -> L162
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L162
            if (r3 != 0) goto Lf6
            java.lang.String r3 = "\""
            java.lang.String r2 = r2.replace(r3, r0)     // Catch: java.lang.Throwable -> L162
            goto L157
        Lf6:
            r2 = r0
            goto L157
        Lf8:
            boolean r4 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.String r2 = com.tramini.plugin.a.e.f.d.a(r11, r3)     // Catch: java.lang.Throwable -> L162
            goto L157
        L103:
            boolean r4 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.String r2 = com.tramini.plugin.a.e.f.b.a(r14, r3)     // Catch: java.lang.Throwable -> L162
            goto L157
        L10e:
            boolean r4 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.String r2 = com.tramini.plugin.a.e.f.b.a(r13, r3)     // Catch: java.lang.Throwable -> L162
            goto L157
        L119:
            boolean r4 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.String r2 = com.tramini.plugin.a.e.f.b.a(r12, r3)     // Catch: java.lang.Throwable -> L162
            goto L157
        L124:
            boolean r4 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            r2 = 34
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r3, r2)     // Catch: java.lang.Throwable -> L162
            java.util.regex.Matcher r2 = r2.matcher(r12)     // Catch: java.lang.Throwable -> L162
            boolean r3 = r2.find()     // Catch: java.lang.Throwable -> L162
            if (r3 == 0) goto Lf6
            java.lang.String r2 = r2.group(r5)     // Catch: java.lang.Throwable -> L162
            goto L157
        L13f:
            boolean r4 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L162
            if (r4 != 0) goto L15e
            java.lang.String r2 = com.tramini.plugin.a.e.f.b.a(r11, r3)     // Catch: java.lang.Throwable -> L162
            goto L157
        L14a:
            if (r9 == 0) goto L15e
            java.lang.String r2 = a(r9)     // Catch: java.lang.Throwable -> L162
            goto L157
        L151:
            if (r10 == 0) goto L15e
            java.lang.String r2 = r10.optString(r3, r0)     // Catch: java.lang.Throwable -> L162
        L157:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L162
            if (r3 != 0) goto L15e
            return r2
        L15e:
            int r8 = r8 + 1
            goto L9
        L162:
            return r0
    }

    private static java.lang.String b(java.lang.Object r4) {
            if (r4 == 0) goto L3c
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3c
            r0.<init>()     // Catch: java.lang.Throwable -> L3c
            java.lang.Class r1 = r4.getClass()     // Catch: java.lang.Throwable -> L3c
            a(r1, r0)     // Catch: java.lang.Throwable -> L3c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3c
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3c
            java.lang.reflect.Field r1 = (java.lang.reflect.Field) r1     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L12
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L12
            boolean r2 = r1 instanceof java.lang.String     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L12
            r2 = r1
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = "<!DOCTYPE html>"
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L12
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L3c
            return r1
        L3c:
            java.lang.String r4 = ""
            return r4
    }

    private static org.json.JSONObject c(java.lang.Object r4, java.lang.String r5) {
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.Class r1 = r4.getClass()     // Catch: java.lang.Throwable -> L3e
            a(r1, r0)     // Catch: java.lang.Throwable -> L3e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3e
        L10:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3e
            java.lang.reflect.Field r1 = (java.lang.reflect.Field) r1     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L10
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L3e
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L10
            boolean r2 = r1 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> L3e
            if (r2 == 0) goto L10
            r2 = r1
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = ""
            java.lang.String r2 = r2.optString(r5, r3)     // Catch: java.lang.Throwable -> L3e
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3e
            if (r2 != 0) goto L10
            org.json.JSONObject r1 = (org.json.JSONObject) r1     // Catch: java.lang.Throwable -> L3e
            return r1
        L3e:
            r4 = 0
            return r4
    }

    private static java.lang.String d(java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L3b
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L3b
            r6 = 0
            r2 = r0
        L9:
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L3b
            if (r6 >= r3) goto L3b
            org.json.JSONObject r3 = r1.optJSONObject(r6)     // Catch: java.lang.Throwable -> L3b
            if (r3 == 0) goto L38
            java.lang.String r4 = "action"
            r5 = -1
            int r4 = r3.optInt(r4, r5)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r5 = "param"
            java.lang.String r3 = r3.optString(r5, r0)     // Catch: java.lang.Throwable -> L3b
            r5 = 101(0x65, float:1.42E-43)
            if (r4 == r5) goto L27
            goto L31
        L27:
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L3b
            if (r4 != 0) goto L38
            java.lang.String r2 = com.tramini.plugin.a.e.f.b.a(r7, r3)     // Catch: java.lang.Throwable -> L3b
        L31:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3b
            if (r3 != 0) goto L38
            return r2
        L38:
            int r6 = r6 + 1
            goto L9
        L3b:
            return r0
    }
}

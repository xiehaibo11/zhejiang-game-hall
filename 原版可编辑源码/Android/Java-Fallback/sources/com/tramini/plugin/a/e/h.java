package com.tramini.plugin.a.e;

public final class h extends com.tramini.plugin.a.e.f {

    final class 1 implements com.tramini.plugin.a.e.f.c {
        final java.lang.String a;
        final java.lang.String b;

        1(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.<init>()
                return
        }

        @Override
        public final boolean a(java.lang.Object r1) {
                r0 = this;
                boolean r1 = r1 instanceof java.util.Map
                return r1
        }

        @Override
        public final com.tramini.plugin.a.e.f.a b(java.lang.Object r3) {
                r2 = this;
                java.util.Map r3 = (java.util.Map) r3
                if (r3 == 0) goto L3f
                int r0 = r3.size()
                if (r0 != 0) goto Lb
                goto L3f
            Lb:
                java.lang.String r0 = r2.a
                boolean r0 = r3.containsKey(r0)
                if (r0 == 0) goto L3a
                java.lang.String r0 = r2.a
                java.lang.Object r3 = r3.get(r0)
                if (r3 != 0) goto L20
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a()
                return r3
            L20:
                java.lang.Class r0 = r3.getClass()
                java.lang.String r0 = r0.getName()
                java.lang.String r1 = r2.b
                boolean r0 = r0.contains(r1)
                if (r0 == 0) goto L35
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a(r3)
                return r3
            L35:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.b(r3)
                return r3
            L3a:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a()
                return r3
            L3f:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a()
                return r3
        }
    }

    final class 2 implements com.tramini.plugin.a.e.f.c {
        final java.lang.String a;

        2(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean a(java.lang.Object r1) {
                r0 = this;
                boolean r1 = r1 instanceof java.util.Map
                return r1
        }

        @Override
        public final com.tramini.plugin.a.e.f.a b(java.lang.Object r3) {
                r2 = this;
                java.util.Map r3 = (java.util.Map) r3
                if (r3 == 0) goto L49
                int r0 = r3.size()
                if (r0 != 0) goto Lb
                goto L49
            Lb:
                java.util.Set r3 = r3.entrySet()
                java.util.Iterator r3 = r3.iterator()
                boolean r0 = r3.hasNext()
                if (r0 == 0) goto L44
                java.lang.Object r3 = r3.next()
                java.util.Map$Entry r3 = (java.util.Map.Entry) r3
                java.lang.Object r3 = r3.getValue()
                if (r3 != 0) goto L2a
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a()
                return r3
            L2a:
                java.lang.Class r0 = r3.getClass()
                java.lang.String r0 = r0.getSimpleName()
                java.lang.String r1 = r2.a
                boolean r0 = r0.contains(r1)
                if (r0 == 0) goto L3f
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a(r3)
                return r3
            L3f:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.b(r3)
                return r3
            L44:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a()
                return r3
            L49:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a()
                return r3
        }
    }

    final class 3 implements com.tramini.plugin.a.e.f.c {
        final java.lang.String a;
        final java.lang.String b;

        3(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.<init>()
                return
        }

        @Override
        public final boolean a(java.lang.Object r2) {
                r1 = this;
                java.lang.Class r2 = r2.getClass()
                java.lang.String r2 = r2.getName()
                java.lang.String r0 = r1.a
                boolean r2 = r2.startsWith(r0)
                return r2
        }

        @Override
        public final com.tramini.plugin.a.e.f.a b(java.lang.Object r3) {
                r2 = this;
                java.lang.String r0 = r2.b     // Catch: java.lang.Throwable -> L1e
                if (r0 == 0) goto L19
                java.lang.String r0 = r2.b     // Catch: java.lang.Throwable -> L1e
                java.lang.Class r1 = r3.getClass()     // Catch: java.lang.Throwable -> L1e
                java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L1e
                boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L1e
                if (r0 == 0) goto L19
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a(r3)     // Catch: java.lang.Throwable -> L1e
                return r3
            L19:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.b(r3)     // Catch: java.lang.Throwable -> L1e
                return r3
            L1e:
                com.tramini.plugin.a.e.f$a r3 = com.tramini.plugin.a.e.f.a.a()
                return r3
        }
    }

    final class 4 implements com.tramini.plugin.a.e.f.c {
        final java.lang.String a;
        final java.lang.String b;
        final java.lang.StringBuffer c;
        final java.lang.String d;


        4(java.lang.String r1, java.lang.String r2, java.lang.StringBuffer r3, java.lang.String r4) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.<init>()
                return
        }

        @Override
        public final boolean a(java.lang.Object r1) {
                r0 = this;
                boolean r1 = r1 instanceof java.util.Map
                return r1
        }

        @Override
        public final com.tramini.plugin.a.e.f.a b(java.lang.Object r4) {
                r3 = this;
                java.util.Map r4 = (java.util.Map) r4     // Catch: java.lang.Throwable -> L3e
                if (r4 == 0) goto L39
                int r0 = r4.size()     // Catch: java.lang.Throwable -> L3e
                if (r0 > 0) goto Lb
                goto L39
            Lb:
                java.lang.String r0 = r3.a     // Catch: java.lang.Throwable -> L3e
                boolean r0 = r4.containsKey(r0)     // Catch: java.lang.Throwable -> L3e
                if (r0 == 0) goto L34
                java.lang.String r0 = r3.a     // Catch: java.lang.Throwable -> L3e
                java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L3e
                if (r4 != 0) goto L20
                com.tramini.plugin.a.e.f$a r4 = com.tramini.plugin.a.e.f.a.a()     // Catch: java.lang.Throwable -> L3e
                return r4
            L20:
                java.lang.String r0 = r3.b     // Catch: java.lang.Throwable -> L3e
                java.lang.StringBuffer r1 = r3.c     // Catch: java.lang.Throwable -> L3e
                com.tramini.plugin.a.e.h$4$1 r2 = new com.tramini.plugin.a.e.h$4$1     // Catch: java.lang.Throwable -> L3e
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L3e
                java.lang.Object r4 = com.tramini.plugin.a.e.f.a(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L3e
                if (r4 == 0) goto L3e
                com.tramini.plugin.a.e.f$a r4 = com.tramini.plugin.a.e.f.a.a(r4)     // Catch: java.lang.Throwable -> L3e
                return r4
            L34:
                com.tramini.plugin.a.e.f$a r4 = com.tramini.plugin.a.e.f.a.a()     // Catch: java.lang.Throwable -> L3e
                return r4
            L39:
                com.tramini.plugin.a.e.f$a r4 = com.tramini.plugin.a.e.f.a.a()     // Catch: java.lang.Throwable -> L3e
                return r4
            L3e:
                com.tramini.plugin.a.e.f$a r4 = com.tramini.plugin.a.e.f.a.a()
                return r4
        }
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, org.json.JSONObject r12, org.json.JSONArray r13) {
            r0 = 0
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L4b
            r1.<init>()     // Catch: java.lang.Throwable -> L4b
            com.tramini.plugin.a.e.h$1 r2 = new com.tramini.plugin.a.e.h$1     // Catch: java.lang.Throwable -> L4b
            r2.<init>(r8, r5)     // Catch: java.lang.Throwable -> L4b
            java.lang.Object r3 = a(r3, r4, r1, r2)     // Catch: java.lang.Throwable -> L4b
            if (r3 != 0) goto L13
            r3 = r0
            goto L21
        L13:
            java.lang.StringBuffer r5 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L4b
            r5.<init>()     // Catch: java.lang.Throwable -> L4b
            com.tramini.plugin.a.e.h$2 r1 = new com.tramini.plugin.a.e.h$2     // Catch: java.lang.Throwable -> L4b
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L4b
            java.lang.Object r3 = a(r3, r4, r5, r1)     // Catch: java.lang.Throwable -> L4b
        L21:
            if (r3 != 0) goto L24
            return r0
        L24:
            java.lang.StringBuffer r4 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L4b
            r4.<init>()     // Catch: java.lang.Throwable -> L4b
            com.tramini.plugin.a.e.h$3 r5 = new com.tramini.plugin.a.e.h$3     // Catch: java.lang.Throwable -> L4b
            r5.<init>(r7, r9)     // Catch: java.lang.Throwable -> L4b
            java.lang.Object r5 = a(r3, r7, r4, r5)     // Catch: java.lang.Throwable -> L4b
            if (r5 == 0) goto L35
            goto L43
        L35:
            java.lang.StringBuffer r5 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L4b
            r5.<init>()     // Catch: java.lang.Throwable -> L4b
            com.tramini.plugin.a.e.h$4 r6 = new com.tramini.plugin.a.e.h$4     // Catch: java.lang.Throwable -> L4b
            r6.<init>(r8, r7, r4, r9)     // Catch: java.lang.Throwable -> L4b
            java.lang.Object r5 = a(r3, r7, r5, r6)     // Catch: java.lang.Throwable -> L4b
        L43:
            if (r5 != 0) goto L46
            return r0
        L46:
            com.tramini.plugin.a.c.a r3 = a(r5, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L4b
            return r3
        L4b:
            r3 = move-exception
            r3.printStackTrace()
            return r0
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r18, java.lang.String r19, java.lang.String r20, org.json.JSONObject r21, org.json.JSONArray r22) {
            r0 = 0
            java.lang.String r1 = ":"
            r2 = r20
            java.lang.String[] r1 = r2.split(r1)     // Catch: java.lang.Throwable -> Lf2
            int r2 = r1.length     // Catch: java.lang.Throwable -> Lf2
            r3 = 2
            if (r2 == r3) goto Le
            return r0
        Le:
            r2 = 0
            java.lang.Object r3 = b(r18, r19)     // Catch: java.lang.Exception -> L26 java.lang.Throwable -> Lf2
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Exception -> L26 java.lang.Throwable -> Lf2
            r5 = r0
            r4 = r2
        L17:
            int r6 = r3.size()     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> Lf2
            if (r4 >= r6) goto L27
            java.lang.Object r5 = r3.get(r4)     // Catch: java.lang.Exception -> L27 java.lang.Throwable -> Lf2
            if (r5 != 0) goto L27
            int r4 = r4 + 1
            goto L17
        L26:
            r5 = r0
        L27:
            r3 = r1[r2]     // Catch: java.lang.Throwable -> Lf2
            java.lang.Object r3 = b(r5, r3)     // Catch: java.lang.Throwable -> Lf2
            r4 = 1
            r1 = r1[r4]     // Catch: java.lang.Throwable -> Lf2
            java.lang.Object r1 = a(r3, r1)     // Catch: java.lang.Throwable -> Lf2
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf2
            r3.<init>()     // Catch: java.lang.Throwable -> Lf2
            r6 = r2
        L3a:
            int r7 = r22.length()     // Catch: java.lang.Throwable -> Lf2
            if (r6 >= r7) goto Le4
            r7 = r22
            java.lang.String r8 = r7.optString(r6)     // Catch: java.lang.Throwable -> Lf2
            r9 = r21
            java.lang.String r10 = r9.optString(r8)     // Catch: java.lang.Throwable -> Lf2
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L52
            if (r11 == 0) goto L58
        L52:
            r11 = r18
        L54:
            r17 = r1
            goto Ldb
        L58:
            r11 = r18
            java.lang.Object r12 = b(r11, r10)     // Catch: java.lang.Throwable -> L54
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Throwable -> L54
            boolean r13 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L54
            if (r13 != 0) goto L6a
            r3.put(r8, r12)     // Catch: java.lang.Throwable -> L54
            goto L54
        L6a:
            java.lang.Object r12 = b(r5, r10)     // Catch: java.lang.Throwable -> L54
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Throwable -> L54
            boolean r13 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L54
            if (r13 != 0) goto L7a
            r3.put(r8, r12)     // Catch: java.lang.Throwable -> L54
            goto L54
        L7a:
            boolean r12 = r1 instanceof java.lang.String     // Catch: java.lang.Throwable -> L54
            if (r12 == 0) goto L54
            java.lang.String r12 = r1.toString()     // Catch: java.lang.Throwable -> L54
            org.json.JSONArray r13 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L54
            r13.<init>(r10)     // Catch: java.lang.Throwable -> L54
            r10 = r2
            r14 = r10
        L89:
            int r15 = r13.length()     // Catch: java.lang.Throwable -> L54
            if (r10 >= r15) goto L54
            java.lang.String r15 = r13.optString(r10)     // Catch: java.lang.Throwable -> L54
            java.util.regex.Pattern r15 = java.util.regex.Pattern.compile(r15)     // Catch: java.lang.Throwable -> L54
            java.util.regex.Matcher r15 = r15.matcher(r12)     // Catch: java.lang.Throwable -> L54
        L9b:
            boolean r16 = r15.find()     // Catch: java.lang.Throwable -> L54
            if (r16 == 0) goto Lcf
            java.lang.String r2 = r15.group()     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = ">"
            int r4 = r2.indexOf(r4)     // Catch: java.lang.Throwable -> L54
            java.lang.String r0 = "<"
            int r0 = r2.indexOf(r0)     // Catch: java.lang.Throwable -> L54
            r17 = r1
            r1 = -1
            if (r4 == r1) goto Lc9
            if (r0 == r1) goto Lc9
            int r4 = r4 + 1
            java.lang.String r0 = r2.substring(r4, r0)     // Catch: java.lang.Throwable -> Ldb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ldb
            if (r1 != 0) goto Lc9
            r3.put(r8, r0)     // Catch: java.lang.Throwable -> Ldb
            r14 = 1
            goto Ld1
        Lc9:
            r1 = r17
            r0 = 0
            r2 = 0
            r4 = 1
            goto L9b
        Lcf:
            r17 = r1
        Ld1:
            if (r14 != 0) goto Ldb
            int r10 = r10 + 1
            r1 = r17
            r0 = 0
            r2 = 0
            r4 = 1
            goto L89
        Ldb:
            int r6 = r6 + 1
            r1 = r17
            r0 = 0
            r2 = 0
            r4 = 1
            goto L3a
        Le4:
            int r0 = r3.length()     // Catch: java.lang.Throwable -> Lf2
            if (r0 <= 0) goto Lf2
            com.tramini.plugin.a.c.a r0 = new com.tramini.plugin.a.c.a     // Catch: java.lang.Throwable -> Lf2
            r0.<init>()     // Catch: java.lang.Throwable -> Lf2
            r0.a = r3     // Catch: java.lang.Throwable -> Lf2
            return r0
        Lf2:
            r0 = 0
            return r0
    }

    public static com.tramini.plugin.a.c.a a(org.json.JSONObject r26, com.tramini.plugin.a.c.c r27, java.lang.String r28) {
            r11 = r26
            java.lang.String r0 = "pre1"
            java.lang.String r12 = r11.optString(r0)
            java.lang.String r0 = "pre2"
            java.lang.String r13 = r11.optString(r0)
            java.lang.String r0 = "clna"
            java.lang.String r0 = r11.optString(r0)
            java.lang.String r1 = "mena"
            java.lang.String r14 = r11.optString(r1)
            java.lang.String r1 = "adaptna"
            java.lang.String r15 = r11.optString(r1)
            java.lang.String r1 = "ctrlna"
            java.lang.String r16 = r11.optString(r1)
            java.lang.String r1 = "in_na"
            java.lang.String r1 = r11.optString(r1)
            java.lang.String r2 = "objna_arr"
            java.lang.String r17 = r11.optString(r2)
            java.lang.String r2 = "obj2na"
            java.lang.String r18 = r11.optString(r2)
            java.lang.String r2 = "html"
            java.lang.String r19 = r11.optString(r2)
            r2 = r28
            java.lang.Object r1 = d(r1, r2)
            boolean r2 = r1 instanceof java.lang.String
            r20 = 0
            if (r2 == 0) goto L4f
            java.lang.String r1 = (java.lang.String) r1
            r21 = r1
            goto L51
        L4f:
            r21 = r20
        L51:
            boolean r1 = android.text.TextUtils.isEmpty(r21)
            if (r1 == 0) goto L58
            return r20
        L58:
            java.lang.String r1 = ","
            java.lang.String[] r10 = r0.split(r1)
            int r9 = r10.length
            r0 = 0
            r8 = r0
        L61:
            if (r8 >= r9) goto L9c
            r0 = r10[r8]
            java.lang.Object r0 = b(r0, r14)
            if (r0 == 0) goto L8f
            r7 = r27
            org.json.JSONArray r6 = r7.e
            r1 = r12
            r2 = r16
            r3 = r15
            r4 = r13
            r5 = r21
            r22 = r6
            r6 = r17
            r7 = r18
            r23 = r8
            r8 = r19
            r24 = r9
            r9 = r26
            r25 = r10
            r10 = r22
            com.tramini.plugin.a.c.a r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            if (r0 == 0) goto L95
            return r0
        L8f:
            r23 = r8
            r24 = r9
            r25 = r10
        L95:
            int r8 = r23 + 1
            r9 = r24
            r10 = r25
            goto L61
        L9c:
            return r20
    }

    private static java.lang.Object a(java.lang.Object r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            com.tramini.plugin.a.e.h$3 r1 = new com.tramini.plugin.a.e.h$3
            r1.<init>(r4, r6)
            java.lang.Object r1 = a(r3, r4, r0, r1)
            if (r1 == 0) goto L11
            return r1
        L11:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            com.tramini.plugin.a.e.h$4 r2 = new com.tramini.plugin.a.e.h$4
            r2.<init>(r5, r4, r0, r6)
            java.lang.Object r3 = a(r3, r4, r1, r2)
            return r3
    }

    private static java.lang.Object a(java.lang.Object r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            com.tramini.plugin.a.e.h$1 r1 = new com.tramini.plugin.a.e.h$1
            r1.<init>(r4, r5)
            java.lang.Object r2 = a(r2, r3, r0, r1)
            if (r2 != 0) goto L12
            r2 = 0
            return r2
        L12:
            java.lang.StringBuffer r4 = new java.lang.StringBuffer
            r4.<init>()
            com.tramini.plugin.a.e.h$2 r5 = new com.tramini.plugin.a.e.h$2
            r5.<init>(r6)
            java.lang.Object r2 = a(r2, r3, r4, r5)
            return r2
    }

    private static java.lang.Object d(java.lang.String r6, java.lang.String r7) {
            r0 = 0
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Throwable -> L45
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L45
            java.lang.reflect.Method r6 = r6.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L45
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L45
            java.lang.Object r6 = r6.invoke(r0, r1)     // Catch: java.lang.Throwable -> L45
            java.lang.Class r1 = r6.getClass()     // Catch: java.lang.Throwable -> L45
            java.lang.reflect.Field[] r1 = r1.getDeclaredFields()     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L45
            int r3 = r1.length     // Catch: java.lang.Throwable -> L45
        L1f:
            if (r2 >= r3) goto L45
            r4 = r1[r2]     // Catch: java.lang.Throwable -> L45
            r5 = 1
            r4.setAccessible(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.Object r5 = r4.get(r6)     // Catch: java.lang.Throwable -> L45
            boolean r5 = r5 instanceof java.util.Map     // Catch: java.lang.Throwable -> L45
            if (r5 == 0) goto L42
            java.lang.Object r4 = r4.get(r6)     // Catch: java.lang.Throwable -> L45
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.lang.Throwable -> L45
            if (r4 == 0) goto L42
            boolean r5 = r4.containsKey(r7)     // Catch: java.lang.Throwable -> L45
            if (r5 == 0) goto L42
            java.lang.Object r6 = r4.get(r7)     // Catch: java.lang.Throwable -> L45
            return r6
        L42:
            int r2 = r2 + 1
            goto L1f
        L45:
            return r0
    }
}

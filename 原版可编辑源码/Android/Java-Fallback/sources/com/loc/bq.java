package com.loc;

public final class bq {
    public static volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq.c> a;
    public static volatile java.util.List<java.lang.String> b;
    private static volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq.b> c;
    private static java.util.Random d;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> e;
    private static java.util.List<com.loc.bz> f;

    private static class a {
        java.lang.String a;
        int b;
        double c;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static class b {
        com.loc.bu a;
        long b;

        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static class c {
        java.util.Map<java.lang.String, java.util.List<com.loc.bq.a>> a;
        java.util.Map<java.lang.String, java.lang.String> b;

        private c() {
                r2 = this;
                r2.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r1 = 8
                r0.<init>(r1)
                r2.a = r0
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>(r1)
                r2.b = r0
                return
        }

        c(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L29
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L29
            L12:
                com.loc.bq$c r5 = (com.loc.bq.c) r5
                java.util.Map<java.lang.String, java.util.List<com.loc.bq$a>> r2 = r4.a
                java.util.Map<java.lang.String, java.util.List<com.loc.bq$a>> r3 = r5.a
                boolean r2 = r2.equals(r3)
                if (r2 == 0) goto L29
                java.util.Map<java.lang.String, java.lang.String> r2 = r4.b
                java.util.Map<java.lang.String, java.lang.String> r5 = r5.b
                boolean r5 = r2.equals(r5)
                if (r5 == 0) goto L29
                return r0
            L29:
                return r1
        }

        public final int hashCode() {
                r3 = this;
                java.util.Map<java.lang.String, java.util.List<com.loc.bq$a>> r0 = r3.a
                r1 = 0
                if (r0 == 0) goto La
                int r0 = r0.hashCode()
                goto Lb
            La:
                r0 = 0
            Lb:
                java.util.Map<java.lang.String, java.lang.String> r2 = r3.b
                if (r2 == 0) goto L13
                int r1 = r2.hashCode()
            L13:
                int r0 = r0 + r1
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 8
            r0.<init>(r1)
            com.loc.bq.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            com.loc.bq.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>(r1)
            com.loc.bq.c = r0
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            com.loc.bq.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>(r1)
            com.loc.bq.e = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 16
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            com.loc.bq.f = r0
            return
    }

    public static synchronized java.lang.String a(java.lang.String r4, java.lang.String r5) throws com.loc.k {
            java.lang.Class<com.loc.bq> r0 = com.loc.bq.class
            monitor-enter(r0)
            java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            if (r1 != 0) goto L8f
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            if (r1 == 0) goto L14
            goto L8f
        L14:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            java.util.List<java.lang.String> r2 = com.loc.bq.b     // Catch: java.lang.Throwable -> L4e
            if (r2 != 0) goto L27
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L4e
            r3 = 8
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L4e
            java.util.List r2 = java.util.Collections.synchronizedList(r2)     // Catch: java.lang.Throwable -> L4e
            com.loc.bq.b = r2     // Catch: java.lang.Throwable -> L4e
        L27:
            if (r1 != 0) goto L2a
            goto L56
        L2a:
            java.util.List<java.lang.String> r2 = com.loc.bq.b     // Catch: java.lang.Throwable -> L4e
            boolean r2 = r2.contains(r5)     // Catch: java.lang.Throwable -> L4e
            if (r2 == 0) goto L33
            goto L56
        L33:
            java.util.List<java.lang.String> r2 = com.loc.bq.b     // Catch: java.lang.Throwable -> L4e
            r2.add(r5)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "Yb3Blbl9odHRwX2NvbnRyb2w"
            java.lang.String r1 = com.loc.bd.a(r1, r2, r5)     // Catch: java.lang.Throwable -> L4e
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L4e
            if (r2 == 0) goto L45
            goto L56
        L45:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4e
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L4e
            a(r5, r2)     // Catch: java.lang.Throwable -> L4e
            goto L56
        L4e:
            r1 = move-exception
            java.lang.String r2 = "hlUtil"
            java.lang.String r3 = "llhl"
            com.loc.as.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
        L56:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r1 = com.loc.bq.a     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            if (r1 == 0) goto L8d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r1 = com.loc.bq.a     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            if (r1 > 0) goto L63
            goto L8d
        L63:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r1 = com.loc.bq.a     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            boolean r1 = r1.containsKey(r5)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            if (r1 != 0) goto L6d
            monitor-exit(r0)
            return r4
        L6d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r1 = com.loc.bq.a     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            com.loc.bq$c r1 = (com.loc.bq.c) r1     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            if (r1 != 0) goto L79
            monitor-exit(r0)
            return r4
        L79:
            boolean r2 = a(r4, r1, r5)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            if (r2 != 0) goto L85
            java.lang.String r4 = b(r4, r1, r5)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            monitor-exit(r0)
            return r4
        L85:
            com.loc.k r5 = new com.loc.k     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            java.lang.String r1 = "服务QPS超限"
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
            throw r5     // Catch: java.lang.Throwable -> L91 com.loc.k -> L9b
        L8d:
            monitor-exit(r0)
            return r4
        L8f:
            monitor-exit(r0)
            return r4
        L91:
            r5 = move-exception
            java.lang.String r1 = "hlUtil"
            java.lang.String r2 = "pcr"
            com.loc.as.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L9d
            monitor-exit(r0)
            return r4
        L9b:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L9d
        L9d:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L9f
        L9f:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static void a() {
            android.content.Context r0 = com.loc.m.c     // Catch: java.lang.Throwable -> Lc
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List r1 = b()     // Catch: java.lang.Throwable -> Lc
            com.loc.ca.a(r1, r0)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    private static void a(com.loc.bq.c r12, org.json.JSONObject r13) {
            java.lang.String r0 = "/"
            java.lang.String r1 = "block"
            org.json.JSONArray r13 = r13.optJSONArray(r1)     // Catch: java.lang.Throwable -> L90
            if (r13 != 0) goto Lb
            return
        Lb:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L90
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L90
            r2 = 0
            r3 = 0
        L14:
            int r4 = r13.length()     // Catch: java.lang.Throwable -> L90
            if (r3 >= r4) goto L8d
            org.json.JSONObject r4 = r13.optJSONObject(r3)     // Catch: java.lang.Throwable -> L90
            if (r4 == 0) goto L8a
            java.lang.String r5 = "api"
            java.lang.String r5 = r4.optString(r5)     // Catch: java.lang.Throwable -> L90
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L90
            if (r6 != 0) goto L8a
            boolean r6 = r5.startsWith(r0)     // Catch: java.lang.Throwable -> L90
            if (r6 != 0) goto L3a
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = r0.concat(r5)     // Catch: java.lang.Throwable -> L90
        L3a:
            boolean r6 = r5.endsWith(r0)     // Catch: java.lang.Throwable -> L90
            if (r6 == 0) goto L4a
            int r6 = r5.length()     // Catch: java.lang.Throwable -> L90
            int r6 = r6 + (-1)
            java.lang.String r5 = r5.substring(r2, r6)     // Catch: java.lang.Throwable -> L90
        L4a:
            java.lang.String r6 = "periods"
            org.json.JSONArray r4 = r4.optJSONArray(r6)     // Catch: java.lang.Throwable -> L90
            if (r13 == 0) goto L8a
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L90
            r6.<init>()     // Catch: java.lang.Throwable -> L90
            r7 = 0
        L58:
            int r8 = r4.length()     // Catch: java.lang.Throwable -> L90
            if (r7 >= r8) goto L87
            org.json.JSONObject r8 = r4.optJSONObject(r7)     // Catch: java.lang.Throwable -> L90
            if (r8 == 0) goto L84
            com.loc.bq$a r9 = new com.loc.bq$a     // Catch: java.lang.Throwable -> L90
            r9.<init>(r2)     // Catch: java.lang.Throwable -> L90
            java.lang.String r10 = "begin"
            java.lang.String r10 = r8.optString(r10)     // Catch: java.lang.Throwable -> L90
            r9.a = r10     // Catch: java.lang.Throwable -> L90
            java.lang.String r10 = "duration"
            int r10 = r8.optInt(r10)     // Catch: java.lang.Throwable -> L90
            r9.b = r10     // Catch: java.lang.Throwable -> L90
            java.lang.String r10 = "percent"
            double r10 = r8.optDouble(r10)     // Catch: java.lang.Throwable -> L90
            r9.c = r10     // Catch: java.lang.Throwable -> L90
            r6.add(r9)     // Catch: java.lang.Throwable -> L90
        L84:
            int r7 = r7 + 1
            goto L58
        L87:
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L90
        L8a:
            int r3 = r3 + 1
            goto L14
        L8d:
            r12.a = r1     // Catch: java.lang.Throwable -> L90
            return
        L90:
            r12 = move-exception
            java.lang.String r13 = "hlUtil"
            java.lang.String r0 = "pbr"
            com.loc.as.a(r12, r13, r0)
            return
    }

    public static synchronized void a(com.loc.w r4, org.json.JSONObject r5) {
            java.lang.Class<com.loc.bq> r0 = com.loc.bq.class
            monitor-enter(r0)
            if (r4 != 0) goto L7
            monitor-exit(r0)
            return
        L7:
            java.lang.String r4 = r4.a()     // Catch: java.lang.Throwable -> L3b
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L13
            monitor-exit(r0)
            return
        L13:
            if (r5 != 0) goto L18
            a(r4)     // Catch: java.lang.Throwable -> L3b
        L18:
            java.lang.String r1 = "able"
            r2 = 0
            java.lang.String r1 = r5.optString(r1, r2)     // Catch: java.lang.Throwable -> L3b
            r2 = 0
            boolean r1 = com.loc.m.a(r1, r2)     // Catch: java.lang.Throwable -> L3b
            if (r1 != 0) goto L2b
            a(r4)     // Catch: java.lang.Throwable -> L3b
            monitor-exit(r0)
            return
        L2b:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "Yb3Blbl9odHRwX2NvbnRyb2w"
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L3b
            com.loc.bd.a(r1, r2, r4, r3)     // Catch: java.lang.Throwable -> L3b
            a(r4, r5)     // Catch: java.lang.Throwable -> L3b
            monitor-exit(r0)
            return
        L3b:
            r4 = move-exception
            java.lang.String r5 = "hlUtil"
            java.lang.String r1 = "par"
            com.loc.as.a(r4, r5, r1)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r0)
            return
        L45:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static synchronized void a(java.lang.String r3) {
            java.lang.Class<com.loc.bq> r0 = com.loc.bq.class
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r1 = com.loc.bq.a     // Catch: java.lang.Throwable -> L20
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L10
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r1 = com.loc.bq.a     // Catch: java.lang.Throwable -> L20
            r1.remove(r3)     // Catch: java.lang.Throwable -> L20
        L10:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "Yb3Blbl9odHRwX2NvbnRyb2w"
            android.content.SharedPreferences$Editor r1 = com.loc.bd.a(r1, r2)     // Catch: java.lang.Throwable -> L20
            com.loc.bd.a(r1, r3)     // Catch: java.lang.Throwable -> L20
            com.loc.bd.a(r1)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r0)
            return
        L20:
            r3 = move-exception
            java.lang.String r1 = "hlUtil"
            java.lang.String r2 = "rc"
            com.loc.as.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r0)
            return
        L2a:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private static void a(java.lang.String r2, com.loc.bq.c r3) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r0 = com.loc.bq.a     // Catch: java.lang.Throwable -> L13
            if (r0 != 0) goto Ld
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L13
            r1 = 8
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L13
            com.loc.bq.a = r0     // Catch: java.lang.Throwable -> L13
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$c> r0 = com.loc.bq.a     // Catch: java.lang.Throwable -> L13
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r2 = move-exception
            java.lang.String r3 = "hlUtil"
            java.lang.String r0 = "ucr"
            com.loc.as.a(r2, r3, r0)
            return
    }

    private static void a(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            android.content.Context r0 = com.loc.m.c     // Catch: java.lang.Throwable -> L88
            if (r0 == 0) goto L88
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L88
            if (r1 == 0) goto Lc
            goto L88
        Lc:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r1 = com.loc.bq.e     // Catch: java.lang.Throwable -> L88
            if (r1 != 0) goto L19
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L88
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L88
            com.loc.bq.e = r1     // Catch: java.lang.Throwable -> L88
        L19:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r1 = com.loc.bq.e     // Catch: java.lang.Throwable -> L88
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L88
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r2 = com.loc.bq.e     // Catch: java.lang.Throwable -> L85
            boolean r2 = r2.containsKey(r6)     // Catch: java.lang.Throwable -> L85
            if (r2 == 0) goto L26
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L85
            return
        L26:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r2 = com.loc.bq.e     // Catch: java.lang.Throwable -> L85
            r2.put(r6, r7)     // Catch: java.lang.Throwable -> L85
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L85
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L88
            r1.<init>()     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = "timestamp"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L88
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = "type"
            java.lang.Integer r3 = com.loc.ag.j     // Catch: java.lang.Throwable -> L88
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = "name"
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = "version"
            java.lang.String r5 = com.loc.ag.a(r5)     // Catch: java.lang.Throwable -> L88
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L88
            java.lang.String r5 = "hostname"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r2.<init>()     // Catch: java.lang.Throwable -> L88
            r2.append(r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = "#"
            r2.append(r6)     // Catch: java.lang.Throwable -> L88
            r2.append(r7)     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L88
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L88
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L73
            return
        L73:
            com.loc.bz r6 = new com.loc.bz     // Catch: java.lang.Throwable -> L88
            java.lang.String r7 = "core"
            java.lang.String r1 = "2.0"
            java.lang.String r2 = "O005"
            r6.<init>(r0, r7, r1, r2)     // Catch: java.lang.Throwable -> L88
            r6.a(r5)     // Catch: java.lang.Throwable -> L88
            com.loc.ca.a(r6, r0)     // Catch: java.lang.Throwable -> L88
            return
        L85:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L85
            throw r5     // Catch: java.lang.Throwable -> L88
        L88:
            return
    }

    private static void a(java.lang.String r2, org.json.JSONObject r3) {
            com.loc.bq$c r0 = new com.loc.bq$c     // Catch: java.lang.Throwable -> L1b
            r1 = 0
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1b
            a(r0, r3)     // Catch: java.lang.Throwable -> L1b
            b(r0, r3)     // Catch: java.lang.Throwable -> L1b
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.b     // Catch: java.lang.Throwable -> L1b
            if (r3 != 0) goto L18
            java.util.Map<java.lang.String, java.util.List<com.loc.bq$a>> r3 = r0.a     // Catch: java.lang.Throwable -> L1b
            if (r3 != 0) goto L18
            a(r2)     // Catch: java.lang.Throwable -> L1b
            return
        L18:
            a(r2, r0)     // Catch: java.lang.Throwable -> L1b
        L1b:
            return
    }

    public static void a(java.net.URL r11, com.loc.bu r12) {
            java.lang.String r0 = "nb"
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r1 = com.loc.bq.c     // Catch: java.lang.Throwable -> L7e
            if (r1 != 0) goto Lf
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L7e
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L7e
            com.loc.bq.c = r1     // Catch: java.lang.Throwable -> L7e
        Lf:
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r12.b     // Catch: java.lang.Throwable -> L7e
            if (r1 == 0) goto L7e
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r12.b     // Catch: java.lang.Throwable -> L7e
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L7e
            if (r1 == 0) goto L7e
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r12.b     // Catch: java.lang.Throwable -> L7e
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Throwable -> L7e
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L7e
            if (r0 == 0) goto L7e
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L7e
            if (r1 > 0) goto L2c
            goto L7e
        L2c:
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L7e
            java.lang.String r2 = "#"
            java.lang.String[] r0 = r0.split(r2)     // Catch: java.lang.Throwable -> L7e
            int r2 = r0.length     // Catch: java.lang.Throwable -> L7e
            r3 = 2
            if (r2 >= r3) goto L3e
            return
        L3e:
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L7e
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L7e
            r4 = 1
            r0 = r0[r4]     // Catch: java.lang.Throwable -> L7e
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L7e
            long r5 = (long) r0     // Catch: java.lang.Throwable -> L7e
            com.loc.bq$b r0 = new com.loc.bq$b     // Catch: java.lang.Throwable -> L7e
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L7e
            r0.a = r12     // Catch: java.lang.Throwable -> L7e
            r7 = 0
            int r12 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r12 > 0) goto L5b
            r5 = 30
        L5b:
            long r7 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L7e
            r9 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r9
            long r7 = r7 + r5
            r0.b = r7     // Catch: java.lang.Throwable -> L7e
            if (r2 != r4) goto L70
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r11 = com.loc.bq.c     // Catch: java.lang.Throwable -> L7e
            java.lang.String r12 = "app"
            r11.put(r12, r0)     // Catch: java.lang.Throwable -> L7e
            return
        L70:
            if (r2 != r3) goto L7e
            if (r11 == 0) goto L7e
            java.lang.String r11 = r11.getPath()     // Catch: java.lang.Throwable -> L7e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r12 = com.loc.bq.c     // Catch: java.lang.Throwable -> L7e
            r12.put(r11, r0)     // Catch: java.lang.Throwable -> L7e
        L7e:
            return
    }

    public static void a(boolean r5, java.lang.String r6) {
            android.content.Context r0 = com.loc.m.c     // Catch: java.lang.Throwable -> L4d
            if (r0 == 0) goto L4d
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto Lb
            goto L4d
        Lb:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4d
            r1.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "timestamp"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4d
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L4d
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "type"
            if (r5 == 0) goto L27
            java.lang.Integer r5 = com.loc.ag.g     // Catch: java.lang.Throwable -> L4d
        L23:
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L4d
            goto L2a
        L27:
            java.lang.Integer r5 = com.loc.ag.f     // Catch: java.lang.Throwable -> L4d
            goto L23
        L2a:
            java.lang.String r5 = "name"
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r5 = "version"
            java.lang.String r6 = com.loc.ag.a(r6)     // Catch: java.lang.Throwable -> L4d
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L4d
            com.loc.bz r6 = new com.loc.bz     // Catch: java.lang.Throwable -> L4d
            java.lang.String r1 = "core"
            java.lang.String r2 = "2.0"
            java.lang.String r3 = "O005"
            r6.<init>(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L4d
            r6.a(r5)     // Catch: java.lang.Throwable -> L4d
            com.loc.ca.a(r6, r0)     // Catch: java.lang.Throwable -> L4d
        L4d:
            return
    }

    private static void a(boolean r5, java.lang.String r6, java.lang.String r7, int r8) {
            android.content.Context r0 = com.loc.m.c     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L93
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L93
            if (r1 != 0) goto L93
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L12
            goto L93
        L12:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L93
            r1.<init>()     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = "timestamp"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L93
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = com.loc.ag.a(r6)     // Catch: java.lang.Throwable -> L93
            if (r5 == 0) goto L2e
            java.lang.String r5 = "type"
            java.lang.Integer r3 = com.loc.ag.i     // Catch: java.lang.Throwable -> L93
        L2a:
            r1.put(r5, r3)     // Catch: java.lang.Throwable -> L93
            goto L33
        L2e:
            java.lang.String r5 = "type"
            java.lang.Integer r3 = com.loc.ag.h     // Catch: java.lang.Throwable -> L93
            goto L2a
        L33:
            java.lang.String r5 = "name"
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = "version"
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L93
            android.net.Uri r5 = android.net.Uri.parse(r7)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = r5.getPath()     // Catch: java.lang.Throwable -> L93
            java.lang.String r6 = "uri"
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = "blockLevel"
            r1.put(r5, r8)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L93
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L93
            if (r6 == 0) goto L5a
            return
        L5a:
            com.loc.bz r6 = new com.loc.bz     // Catch: java.lang.Throwable -> L93
            java.lang.String r7 = "core"
            java.lang.String r8 = "2.0"
            java.lang.String r1 = "O005"
            r6.<init>(r0, r7, r8, r1)     // Catch: java.lang.Throwable -> L93
            r6.a(r5)     // Catch: java.lang.Throwable -> L93
            java.util.List<com.loc.bz> r5 = com.loc.bq.f     // Catch: java.lang.Throwable -> L93
            if (r5 != 0) goto L79
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L93
            r7 = 16
            r5.<init>(r7)     // Catch: java.lang.Throwable -> L93
            java.util.List r5 = java.util.Collections.synchronizedList(r5)     // Catch: java.lang.Throwable -> L93
            com.loc.bq.f = r5     // Catch: java.lang.Throwable -> L93
        L79:
            java.util.List<com.loc.bz> r5 = com.loc.bq.f     // Catch: java.lang.Throwable -> L93
            monitor-enter(r5)     // Catch: java.lang.Throwable -> L93
            java.util.List<com.loc.bz> r7 = com.loc.bq.f     // Catch: java.lang.Throwable -> L90
            r7.add(r6)     // Catch: java.lang.Throwable -> L90
            java.util.List<com.loc.bz> r6 = com.loc.bq.f     // Catch: java.lang.Throwable -> L90
            int r6 = r6.size()     // Catch: java.lang.Throwable -> L90
            r7 = 15
            if (r6 < r7) goto L8e
            a()     // Catch: java.lang.Throwable -> L90
        L8e:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L90
            return
        L90:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L90
            throw r6     // Catch: java.lang.Throwable -> L93
        L93:
            return
    }

    private static boolean a(com.loc.bq.a r9) {
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            double r1 = r9.c
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto Ld
            return r0
        Ld:
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = r9.a
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L6b
            int r3 = r9.b
            if (r3 <= 0) goto L6b
            java.lang.String r3 = r9.a
            java.lang.String r4 = "HH:mm:ss"
            java.util.Calendar r3 = com.loc.x.a(r3, r4)
            long r3 = r3.getTimeInMillis()
            long r3 = r1 - r3
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L6b
            int r5 = r9.b
            int r5 = r5 * 1000
            long r5 = (long) r5
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 >= 0) goto L6b
            double r3 = r9.c
            r5 = 0
            r7 = 1
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 != 0) goto L44
            return r7
        L44:
            java.util.Random r3 = com.loc.bq.d
            if (r3 != 0) goto L4f
            java.util.Random r3 = new java.util.Random
            r3.<init>()
            com.loc.bq.d = r3
        L4f:
            java.util.Random r3 = com.loc.bq.d
            java.util.UUID r4 = java.util.UUID.randomUUID()
            int r4 = r4.hashCode()
            long r4 = (long) r4
            long r4 = r4 + r1
            r3.setSeed(r4)
            java.util.Random r1 = com.loc.bq.d
            double r1 = r1.nextDouble()
            double r3 = r9.c
            int r9 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r9 <= 0) goto L6b
            return r7
        L6b:
            return r0
    }

    private static boolean a(java.lang.String r4, com.loc.bq.c r5, java.lang.String r6) {
            r0 = 0
            java.util.Map<java.lang.String, java.util.List<com.loc.bq$a>> r5 = r5.a     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L58
            int r1 = r5.size()     // Catch: java.lang.Throwable -> L59
            if (r1 > 0) goto Lc
            goto L58
        Lc:
            java.lang.String r1 = "*"
            boolean r1 = r5.containsKey(r1)     // Catch: java.lang.Throwable -> L59
            r2 = 1
            if (r1 == 0) goto L39
            java.util.Set r5 = r5.entrySet()     // Catch: java.lang.Throwable -> L59
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L59
        L1d:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L59
            if (r1 == 0) goto L61
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L59
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L59
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L59
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Throwable -> L59
            boolean r1 = a(r1)     // Catch: java.lang.Throwable -> L59
            if (r1 == 0) goto L1d
            a(r0, r6, r4, r2)     // Catch: java.lang.Throwable -> L59
            return r2
        L39:
            android.net.Uri r1 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L59
            boolean r3 = r5.containsKey(r1)     // Catch: java.lang.Throwable -> L59
            if (r3 == 0) goto L61
            java.lang.Object r5 = r5.get(r1)     // Catch: java.lang.Throwable -> L59
            java.util.List r5 = (java.util.List) r5     // Catch: java.lang.Throwable -> L59
            boolean r5 = a(r5)     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L61
            r5 = 2
            a(r0, r6, r4, r5)     // Catch: java.lang.Throwable -> L59
            return r2
        L58:
            return r0
        L59:
            r4 = move-exception
            java.lang.String r5 = "hlUtil"
            java.lang.String r6 = "inb"
            com.loc.as.a(r4, r5, r6)
        L61:
            return r0
    }

    private static boolean a(java.util.List<com.loc.bq.a> r2) {
            r0 = 0
            if (r2 == 0) goto L22
            int r1 = r2.size()
            if (r1 > 0) goto La
            goto L22
        La:
            java.util.Iterator r2 = r2.iterator()
        Le:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r2.next()
            com.loc.bq$a r1 = (com.loc.bq.a) r1
            boolean r1 = a(r1)
            if (r1 == 0) goto Le
            r2 = 1
            return r2
        L22:
            return r0
    }

    public static com.loc.bu b(java.lang.String r10, java.lang.String r11) {
            java.lang.String r0 = "app"
            r1 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r2 = com.loc.bq.c     // Catch: java.lang.Throwable -> L6a
            if (r2 != 0) goto L8
            return r1
        L8:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r2 = com.loc.bq.c     // Catch: java.lang.Throwable -> L6a
            boolean r2 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L6a
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L34
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r2 = com.loc.bq.c     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L6a
            com.loc.bq$b r2 = (com.loc.bq.b) r2     // Catch: java.lang.Throwable -> L6a
            long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L6a
            long r7 = r2.b     // Catch: java.lang.Throwable -> L6a
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 > 0) goto L2e
            com.loc.bu r0 = r2.a     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L2a
            r0.e = r3     // Catch: java.lang.Throwable -> L6a
        L2a:
            a(r4, r11, r10, r4)     // Catch: java.lang.Throwable -> L6a
            return r0
        L2e:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r10 = com.loc.bq.c     // Catch: java.lang.Throwable -> L6a
            r10.remove(r0)     // Catch: java.lang.Throwable -> L6a
            goto L6a
        L34:
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L3b
            return r1
        L3b:
            android.net.Uri r0 = android.net.Uri.parse(r10)     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L6a
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L6a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r2 = com.loc.bq.c     // Catch: java.lang.Throwable -> L6a
            boolean r2 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L6a
            if (r2 == 0) goto L6a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.bq$b> r2 = com.loc.bq.c     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L6a
            com.loc.bq$b r2 = (com.loc.bq.b) r2     // Catch: java.lang.Throwable -> L6a
            long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L6a
            long r7 = r2.b     // Catch: java.lang.Throwable -> L6a
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 > 0) goto L2e
            com.loc.bu r0 = r2.a     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L65
            r0.e = r3     // Catch: java.lang.Throwable -> L6a
        L65:
            r2 = 2
            a(r4, r11, r10, r2)     // Catch: java.lang.Throwable -> L6a
            return r0
        L6a:
            return r1
    }

    private static java.lang.String b(java.lang.String r3, com.loc.bq.c r4, java.lang.String r5) {
            java.util.Map<java.lang.String, java.lang.String> r4 = r4.b     // Catch: java.lang.Throwable -> L30
            if (r4 == 0) goto L2f
            int r0 = r4.size()     // Catch: java.lang.Throwable -> L30
            if (r0 > 0) goto Lb
            goto L2f
        Lb:
            android.net.Uri r0 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = r0.getAuthority()     // Catch: java.lang.Throwable -> L30
            boolean r2 = r4.containsKey(r1)     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L38
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L30
            android.net.Uri$Builder r0 = r0.buildUpon()     // Catch: java.lang.Throwable -> L30
            android.net.Uri$Builder r0 = r0.authority(r4)     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L30
            a(r5, r1, r4)     // Catch: java.lang.Throwable -> L30
            goto L38
        L2f:
            return r3
        L30:
            r4 = move-exception
            java.lang.String r5 = "hlUtil"
            java.lang.String r0 = "pdr"
            com.loc.as.a(r4, r5, r0)
        L38:
            return r3
    }

    public static java.util.List<com.loc.bz> b() {
            r0 = 0
            java.util.List<com.loc.bz> r1 = com.loc.bq.f     // Catch: java.lang.Throwable -> L2c
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L2c
            java.util.List<com.loc.bz> r2 = com.loc.bq.f     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L20
            java.util.List<com.loc.bz> r2 = com.loc.bq.f     // Catch: java.lang.Throwable -> L22
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L22
            if (r2 <= 0) goto L20
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L22
            r2.<init>()     // Catch: java.lang.Throwable -> L22
            java.util.List<com.loc.bz> r0 = com.loc.bq.f     // Catch: java.lang.Throwable -> L2a
            r2.addAll(r0)     // Catch: java.lang.Throwable -> L2a
            java.util.List<com.loc.bz> r0 = com.loc.bq.f     // Catch: java.lang.Throwable -> L2a
            r0.clear()     // Catch: java.lang.Throwable -> L2a
            r0 = r2
        L20:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L22
            goto L2c
        L22:
            r2 = move-exception
            r3 = r2
            r2 = r0
            r0 = r3
        L26:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2a
            throw r0     // Catch: java.lang.Throwable -> L28
        L28:
            r0 = r2
            goto L2c
        L2a:
            r0 = move-exception
            goto L26
        L2c:
            return r0
    }

    private static void b(com.loc.bq.c r6, org.json.JSONObject r7) {
            java.lang.String r0 = "domainMap"
            org.json.JSONObject r7 = r7.optJSONObject(r0)     // Catch: java.lang.Throwable -> L2f
            if (r7 != 0) goto L9
            return
        L9:
            org.json.JSONArray r0 = r7.names()     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto L10
            return
        L10:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L2f
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2f
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L2f
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2c
            java.lang.String r4 = r0.optString(r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r5 = r7.optString(r4)     // Catch: java.lang.Throwable -> L2f
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L2f
            int r3 = r3 + 1
            goto L1c
        L2c:
            r6.b = r1     // Catch: java.lang.Throwable -> L2f
            return
        L2f:
            r6 = move-exception
            java.lang.String r7 = "hlUtil"
            java.lang.String r0 = "pdr"
            com.loc.as.a(r6, r7, r0)
            return
    }
}

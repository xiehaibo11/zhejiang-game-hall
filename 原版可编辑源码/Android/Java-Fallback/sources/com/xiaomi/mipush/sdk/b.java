package com.xiaomi.mipush.sdk;

public class b {
    private static volatile com.xiaomi.mipush.sdk.b a;
    private android.content.Context a;
    private com.xiaomi.mipush.sdk.b.a a;
    java.lang.String a;
    private java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b.a> a;

    public class a {
        public int a;
        private android.content.Context a;
        public java.lang.String a;
        public boolean a;
        public java.lang.String b;
        public boolean b;
        public java.lang.String c;
        public java.lang.String d;
        public java.lang.String e;
        public java.lang.String f;
        public java.lang.String g;
        public java.lang.String h;

        public a(android.content.Context r3) {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.a = r0
                r1 = 0
                r2.b = r1
                r2.a = r0
                r2.a = r3
                return
        }

        public static com.xiaomi.mipush.sdk.b.a a(android.content.Context r1, java.lang.String r2) {
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5b
                r0.<init>(r2)     // Catch: java.lang.Throwable -> L5b
                com.xiaomi.mipush.sdk.b$a r2 = new com.xiaomi.mipush.sdk.b$a     // Catch: java.lang.Throwable -> L5b
                r2.<init>(r1)     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "appId"
                java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L5b
                r2.a = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "appToken"
                java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L5b
                r2.b = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "regId"
                java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L5b
                r2.c = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "regSec"
                java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L5b
                r2.d = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "devId"
                java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L5b
                r2.f = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "vName"
                java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L5b
                r2.e = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "valid"
                boolean r1 = r0.getBoolean(r1)     // Catch: java.lang.Throwable -> L5b
                r2.a = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "paused"
                boolean r1 = r0.getBoolean(r1)     // Catch: java.lang.Throwable -> L5b
                r2.b = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "envType"
                int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L5b
                r2.a = r1     // Catch: java.lang.Throwable -> L5b
                java.lang.String r1 = "regResource"
                java.lang.String r1 = r0.getString(r1)     // Catch: java.lang.Throwable -> L5b
                r2.g = r1     // Catch: java.lang.Throwable -> L5b
                return r2
            L5b:
                r1 = move-exception
                com.xiaomi.channel.commonutils.logger.b.a(r1)
                r1 = 0
                return r1
        }

        private java.lang.String a() {
                r2 = this;
                android.content.Context r0 = r2.a
                java.lang.String r1 = r0.getPackageName()
                java.lang.String r0 = com.xiaomi.push.h.a(r0, r1)
                return r0
        }

        public static java.lang.String a(com.xiaomi.mipush.sdk.b.a r3) {
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L50
                r0.<init>()     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "appId"
                java.lang.String r2 = r3.a     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "appToken"
                java.lang.String r2 = r3.b     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "regId"
                java.lang.String r2 = r3.c     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "regSec"
                java.lang.String r2 = r3.d     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "devId"
                java.lang.String r2 = r3.f     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "vName"
                java.lang.String r2 = r3.e     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "valid"
                boolean r2 = r3.a     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "paused"
                boolean r2 = r3.b     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "envType"
                int r2 = r3.a     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L50
                java.lang.String r1 = "regResource"
                java.lang.String r3 = r3.g     // Catch: java.lang.Throwable -> L50
                r0.put(r1, r3)     // Catch: java.lang.Throwable -> L50
                java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L50
                return r3
            L50:
                r3 = move-exception
                com.xiaomi.channel.commonutils.logger.b.a(r3)
                r3 = 0
                return r3
        }

        public void a() {
                r2 = this;
                android.content.Context r0 = r2.a
                android.content.SharedPreferences r0 = com.xiaomi.mipush.sdk.b.a(r0)
                android.content.SharedPreferences$Editor r0 = r0.edit()
                android.content.SharedPreferences$Editor r0 = r0.clear()
                r0.commit()
                r0 = 0
                r2.a = r0
                r2.b = r0
                r2.c = r0
                r2.d = r0
                r2.f = r0
                r2.e = r0
                r1 = 0
                r2.a = r1
                r2.b = r1
                r2.h = r0
                r0 = 1
                r2.a = r0
                return
        }

        public void a(int r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.c = r1
                r0.d = r2
                android.content.Context r1 = r0.a
                java.lang.String r1 = com.xiaomi.push.j.j(r1)
                r0.f = r1
                java.lang.String r1 = r0.a()
                r0.e = r1
                r1 = 1
                r0.a = r1
                return
        }

        public void a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
                r2 = this;
                r2.a = r3
                r2.b = r4
                r2.g = r5
                android.content.Context r3 = r2.a
                android.content.SharedPreferences r3 = com.xiaomi.mipush.sdk.b.a(r3)
                android.content.SharedPreferences$Editor r3 = r3.edit()
                java.lang.String r0 = r2.a
                java.lang.String r1 = "appId"
                r3.putString(r1, r0)
                java.lang.String r0 = "appToken"
                r3.putString(r0, r4)
                java.lang.String r4 = "regResource"
                r3.putString(r4, r5)
                r3.commit()
                return
        }

        public void a(boolean r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public boolean a() {
                r2 = this;
                java.lang.String r0 = r2.a
                java.lang.String r1 = r2.b
                boolean r0 = r2.a(r0, r1)
                return r0
        }

        public boolean a(java.lang.String r8, java.lang.String r9) {
                r7 = this;
                java.lang.String r0 = r7.a
                boolean r8 = android.text.TextUtils.equals(r0, r8)
                java.lang.String r0 = r7.b
                boolean r9 = android.text.TextUtils.equals(r0, r9)
                java.lang.String r0 = r7.c
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r1 = 1
                r0 = r0 ^ r1
                java.lang.String r2 = r7.d
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                r2 = r2 ^ r1
                java.lang.String r3 = r7.f
                android.content.Context r4 = r7.a
                java.lang.String r4 = com.xiaomi.push.j.j(r4)
                boolean r3 = android.text.TextUtils.equals(r3, r4)
                r4 = 0
                if (r3 != 0) goto L3b
                java.lang.String r3 = r7.f
                android.content.Context r5 = r7.a
                java.lang.String r5 = com.xiaomi.push.j.i(r5)
                boolean r3 = android.text.TextUtils.equals(r3, r5)
                if (r3 == 0) goto L39
                goto L3b
            L39:
                r3 = r4
                goto L3c
            L3b:
                r3 = r1
            L3c:
                if (r8 == 0) goto L48
                if (r9 == 0) goto L48
                if (r0 == 0) goto L48
                if (r2 == 0) goto L48
                if (r3 == 0) goto L48
                r5 = r1
                goto L49
            L48:
                r5 = r4
            L49:
                if (r5 != 0) goto L78
                r6 = 5
                java.lang.Object[] r6 = new java.lang.Object[r6]
                java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)
                r6[r4] = r8
                java.lang.Boolean r8 = java.lang.Boolean.valueOf(r9)
                r6[r1] = r8
                r8 = 2
                java.lang.Boolean r9 = java.lang.Boolean.valueOf(r0)
                r6[r8] = r9
                r8 = 3
                java.lang.Boolean r9 = java.lang.Boolean.valueOf(r2)
                r6[r8] = r9
                r8 = 4
                java.lang.Boolean r9 = java.lang.Boolean.valueOf(r3)
                r6[r8] = r9
                java.lang.String r8 = "register invalid, aid=%s;atn=%s;rid=%s;rse=%s;did=%s"
                java.lang.String r8 = java.lang.String.format(r8, r6)
                com.xiaomi.channel.commonutils.logger.b.e(r8)
            L78:
                return r5
        }

        public void b() {
                r3 = this;
                r0 = 0
                r3.a = r0
                android.content.Context r0 = r3.a
                android.content.SharedPreferences r0 = com.xiaomi.mipush.sdk.b.a(r0)
                android.content.SharedPreferences$Editor r0 = r0.edit()
                boolean r1 = r3.a
                java.lang.String r2 = "valid"
                android.content.SharedPreferences$Editor r0 = r0.putBoolean(r2, r1)
                r0.commit()
                return
        }

        public void b(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                r3 = this;
                r3.c = r4
                r3.d = r5
                android.content.Context r0 = r3.a
                java.lang.String r0 = com.xiaomi.push.j.j(r0)
                r3.f = r0
                java.lang.String r0 = r3.a()
                r3.e = r0
                r0 = 1
                r3.a = r0
                r3.h = r6
                android.content.Context r1 = r3.a
                android.content.SharedPreferences r1 = com.xiaomi.mipush.sdk.b.a(r1)
                android.content.SharedPreferences$Editor r1 = r1.edit()
                java.lang.String r2 = "regId"
                r1.putString(r2, r4)
                java.lang.String r4 = "regSec"
                r1.putString(r4, r5)
                java.lang.String r4 = r3.f
                java.lang.String r5 = "devId"
                r1.putString(r5, r4)
                java.lang.String r4 = r3.a()
                java.lang.String r5 = "vName"
                r1.putString(r5, r4)
                java.lang.String r4 = "valid"
                r1.putBoolean(r4, r0)
                java.lang.String r4 = "appRegion"
                r1.putString(r4, r6)
                r1.commit()
                return
        }

        public void c(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.g = r3
                return
        }
    }

    private b(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.c()
            return
    }

    public static android.content.SharedPreferences a(android.content.Context r2) {
            java.lang.String r0 = "mipush"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            return r2
    }

    public static com.xiaomi.mipush.sdk.b a(android.content.Context r2) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.mipush.sdk.b> r0 = com.xiaomi.mipush.sdk.b.class
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.mipush.sdk.b r1 = new com.xiaomi.mipush.sdk.b     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.mipush.sdk.b.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a
            return r2
    }

    private void c() {
            r6 = this;
            com.xiaomi.mipush.sdk.b$a r0 = new com.xiaomi.mipush.sdk.b$a
            android.content.Context r1 = r6.a
            r0.<init>(r1)
            r6.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r6.a = r0
            android.content.Context r0 = r6.a
            android.content.SharedPreferences r0 = a(r0)
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            r2 = 0
            java.lang.String r3 = "appId"
            java.lang.String r3 = r0.getString(r3, r2)
            r1.a = r3
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r3 = "appToken"
            java.lang.String r3 = r0.getString(r3, r2)
            r1.b = r3
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r3 = "regId"
            java.lang.String r3 = r0.getString(r3, r2)
            r1.c = r3
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r3 = "regSec"
            java.lang.String r3 = r0.getString(r3, r2)
            r1.d = r3
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r3 = "devId"
            java.lang.String r4 = r0.getString(r3, r2)
            r1.f = r4
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r1 = r1.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L76
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r1 = r1.f
            boolean r1 = com.xiaomi.push.j.a(r1)
            if (r1 == 0) goto L76
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            android.content.Context r4 = r6.a
            java.lang.String r4 = com.xiaomi.push.j.j(r4)
            r1.f = r4
            android.content.SharedPreferences$Editor r1 = r0.edit()
            com.xiaomi.mipush.sdk.b$a r4 = r6.a
            java.lang.String r4 = r4.f
            android.content.SharedPreferences$Editor r1 = r1.putString(r3, r4)
            r1.commit()
        L76:
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r3 = "vName"
            java.lang.String r3 = r0.getString(r3, r2)
            r1.e = r3
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            r3 = 1
            java.lang.String r4 = "valid"
            boolean r4 = r0.getBoolean(r4, r3)
            r1.a = r4
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            r4 = 0
            java.lang.String r5 = "paused"
            boolean r4 = r0.getBoolean(r5, r4)
            r1.b = r4
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r4 = "envType"
            int r3 = r0.getInt(r4, r3)
            r1.a = r3
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r3 = "regResource"
            java.lang.String r3 = r0.getString(r3, r2)
            r1.g = r3
            com.xiaomi.mipush.sdk.b$a r1 = r6.a
            java.lang.String r3 = "appRegion"
            java.lang.String r0 = r0.getString(r3, r2)
            r1.h = r0
            return
    }

    public int a() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            int r0 = r0.a
            return r0
    }

    public com.xiaomi.mipush.sdk.b.a a(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b$a> r0 = r2.a
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L11
            java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b$a> r0 = r2.a
            java.lang.Object r3 = r0.get(r3)
            com.xiaomi.mipush.sdk.b$a r3 = (com.xiaomi.mipush.sdk.b.a) r3
            return r3
        L11:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "hybrid_app_info_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.content.Context r0 = r2.a
            android.content.SharedPreferences r0 = a(r0)
            boolean r1 = r0.contains(r3)
            if (r1 != 0) goto L30
            r3 = 0
            return r3
        L30:
            java.lang.String r1 = ""
            java.lang.String r0 = r0.getString(r3, r1)
            android.content.Context r1 = r2.a
            com.xiaomi.mipush.sdk.b$a r0 = com.xiaomi.mipush.sdk.b.a.a(r1, r0)
            java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b$a> r1 = r2.a
            r1.put(r3, r0)
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.a
            return r0
    }

    public void a() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            r0.a()
            return
    }

    public void a(int r3) {
            r2 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r2.a
            r0.a(r3)
            android.content.Context r0 = r2.a
            android.content.SharedPreferences r0 = a(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "envType"
            android.content.SharedPreferences$Editor r3 = r0.putInt(r1, r3)
            r3.commit()
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.a
            android.content.SharedPreferences r0 = a(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "vName"
            r0.putString(r1, r3)
            r0.commit()
            com.xiaomi.mipush.sdk.b$a r0 = r2.a
            r0.e = r3
            return
    }

    public void a(java.lang.String r3, com.xiaomi.mipush.sdk.b.a r4) {
            r2 = this;
            java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b$a> r0 = r2.a
            r0.put(r3, r4)
            java.lang.String r4 = com.xiaomi.mipush.sdk.b.a.a(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "hybrid_app_info_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.content.Context r0 = r2.a
            android.content.SharedPreferences r0 = a(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r3 = r0.putString(r3, r4)
            r3.commit()
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            r0.a(r2, r3, r4)
            return
    }

    public void a(boolean r3) {
            r2 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r2.a
            r0.a(r3)
            android.content.Context r0 = r2.a
            android.content.SharedPreferences r0 = a(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "paused"
            android.content.SharedPreferences$Editor r3 = r0.putBoolean(r1, r3)
            r3.commit()
            return
    }

    public boolean a() {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.String r1 = r0.getPackageName()
            java.lang.String r0 = com.xiaomi.push.h.a(r0, r1)
            com.xiaomi.mipush.sdk.b$a r1 = r2.a
            java.lang.String r1 = r1.e
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            r0 = r0 ^ 1
            return r0
    }

    public boolean a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            boolean r2 = r0.a(r2, r3)
            return r2
    }

    public boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r4 = r1.a(r4)
            if (r4 == 0) goto L18
            java.lang.String r0 = r4.a
            boolean r2 = android.text.TextUtils.equals(r2, r0)
            if (r2 == 0) goto L18
            java.lang.String r2 = r4.b
            boolean r2 = android.text.TextUtils.equals(r3, r2)
            if (r2 == 0) goto L18
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    public java.lang.String b() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.b
            return r0
    }

    public void b() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            r0.b()
            return
    }

    public void b(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.xiaomi.mipush.sdk.b$a> r0 = r2.a
            r0.remove(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "hybrid_app_info_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.content.Context r0 = r2.a
            android.content.SharedPreferences r0 = a(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r3 = r0.remove(r3)
            r3.commit()
            return
    }

    public void b(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            r0.b(r2, r3, r4)
            return
    }

    public boolean b() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            boolean r0 = r0.a()
            if (r0 != 0) goto Lf
            java.lang.String r0 = "Don't send message before initialization succeeded!"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.c
            return r0
    }

    public boolean c() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            boolean r0 = r0.a()
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.d
            return r0
    }

    public boolean d() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2a
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2a
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2a
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2a
            r0 = 1
            goto L2b
        L2a:
            r0 = 0
        L2b:
            return r0
    }

    public java.lang.String e() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.g
            return r0
    }

    public boolean e() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            boolean r0 = r0.b
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            java.lang.String r0 = r0.h
            return r0
    }

    public boolean f() {
            r1 = this;
            com.xiaomi.mipush.sdk.b$a r0 = r1.a
            boolean r0 = r0.a
            r0 = r0 ^ 1
            return r0
    }
}

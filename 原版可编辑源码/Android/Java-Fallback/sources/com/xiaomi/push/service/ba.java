package com.xiaomi.push.service;

public class ba {
    private static volatile com.xiaomi.push.service.ba a;
    protected android.content.SharedPreferences a;
    private java.util.HashSet<com.xiaomi.push.service.ba.a> a;
    protected android.content.SharedPreferences b;

    public abstract class a implements java.lang.Runnable {
        private java.lang.String mDescription;
        private int mId;

        public a(int r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.mId = r1
                r0.mDescription = r2
                return
        }

        public boolean equals(java.lang.Object r3) {
                r2 = this;
                boolean r0 = r3 instanceof com.xiaomi.push.service.ba.a
                r1 = 0
                if (r0 == 0) goto Le
                int r0 = r2.mId
                com.xiaomi.push.service.ba$a r3 = (com.xiaomi.push.service.ba.a) r3
                int r3 = r3.mId
                if (r0 != r3) goto Le
                r1 = 1
            Le:
                return r1
        }

        public int hashCode() {
                r1 = this;
                int r0 = r1.mId
                return r0
        }

        protected abstract void onCallback();

        @Override
        public final void run() {
                r0 = this;
                r0.onCallback()
                return
        }
    }

    private ba(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.a = r0
            r0 = 0
            java.lang.String r1 = "mipush_oc_normal"
            android.content.SharedPreferences r1 = r3.getSharedPreferences(r1, r0)
            r2.a = r1
            java.lang.String r1 = "mipush_oc_custom"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r0)
            r2.b = r3
            return
    }

    public static com.xiaomi.push.service.ba a(android.content.Context r2) {
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.service.ba> r0 = com.xiaomi.push.service.ba.class
            monitor-enter(r0)
            com.xiaomi.push.service.ba r1 = com.xiaomi.push.service.ba.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.service.ba r1 = new com.xiaomi.push.service.ba     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.service.ba.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.service.ba r2 = com.xiaomi.push.service.ba.a
            return r2
    }

    private java.lang.String a(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "oc_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private java.lang.String a(com.xiaomi.push.hp r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "oc_version_"
            r0.append(r1)
            int r3 = r3.a()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private void a(android.content.SharedPreferences.Editor r3, android.util.Pair<java.lang.Integer, java.lang.Object> r4, java.lang.String r5) {
            r2 = this;
            java.lang.Object r0 = r4.second
            boolean r0 = r0 instanceof java.lang.Integer
            if (r0 == 0) goto L12
            java.lang.Object r4 = r4.second
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            r3.putInt(r5, r4)
            goto L57
        L12:
            java.lang.Object r0 = r4.second
            boolean r0 = r0 instanceof java.lang.Long
            if (r0 == 0) goto L24
            java.lang.Object r4 = r4.second
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            r3.putLong(r5, r0)
            goto L57
        L24:
            java.lang.Object r0 = r4.second
            boolean r0 = r0 instanceof java.lang.String
            if (r0 == 0) goto L46
            java.lang.Object r4 = r4.second
            java.lang.String r4 = (java.lang.String) r4
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.aQ
            int r0 = r0.a()
            java.lang.String r0 = r2.a(r0)
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L42
            java.lang.String r4 = com.xiaomi.push.bm.a(r4)
        L42:
            r3.putString(r5, r4)
            goto L57
        L46:
            java.lang.Object r0 = r4.second
            boolean r0 = r0 instanceof java.lang.Boolean
            if (r0 == 0) goto L57
            java.lang.Object r4 = r4.second
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            r3.putBoolean(r5, r4)
        L57:
            return
    }

    public int a(int r4, int r5) {
            r3 = this;
            java.lang.String r0 = r3.a(r4)     // Catch: java.lang.Exception -> L24
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L24
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L24
            r2 = 0
            if (r1 == 0) goto L14
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L24
            int r4 = r1.getInt(r0, r2)     // Catch: java.lang.Exception -> L24
            return r4
        L14:
            android.content.SharedPreferences r1 = r3.a     // Catch: java.lang.Exception -> L24
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L24
            if (r1 == 0) goto L23
            android.content.SharedPreferences r1 = r3.a     // Catch: java.lang.Exception -> L24
            int r4 = r1.getInt(r0, r2)     // Catch: java.lang.Exception -> L24
            return r4
        L23:
            return r5
        L24:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r4 = " oc int error "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return r5
    }

    public int a(com.xiaomi.push.hp r3, int r4) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = r2.a(r3)     // Catch: java.lang.Exception -> Lb
            int r3 = r0.getInt(r1, r4)     // Catch: java.lang.Exception -> Lb
            return r3
        Lb:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " version error "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return r4
    }

    public long a(int r5, long r6) {
            r4 = this;
            java.lang.String r0 = r4.a(r5)     // Catch: java.lang.Exception -> L25
            android.content.SharedPreferences r1 = r4.b     // Catch: java.lang.Exception -> L25
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L25
            r2 = 0
            if (r1 == 0) goto L15
            android.content.SharedPreferences r1 = r4.b     // Catch: java.lang.Exception -> L25
            long r5 = r1.getLong(r0, r2)     // Catch: java.lang.Exception -> L25
            return r5
        L15:
            android.content.SharedPreferences r1 = r4.a     // Catch: java.lang.Exception -> L25
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L24
            android.content.SharedPreferences r1 = r4.a     // Catch: java.lang.Exception -> L25
            long r5 = r1.getLong(r0, r2)     // Catch: java.lang.Exception -> L25
            return r5
        L24:
            return r6
        L25:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r5 = " oc long error "
            r1.append(r5)
            r1.append(r0)
            java.lang.String r5 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            return r6
    }

    public java.lang.String a(int r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = r3.a(r4)     // Catch: java.lang.Exception -> L24
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L24
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L24
            r2 = 0
            if (r1 == 0) goto L14
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L24
            java.lang.String r4 = r1.getString(r0, r2)     // Catch: java.lang.Exception -> L24
            return r4
        L14:
            android.content.SharedPreferences r1 = r3.a     // Catch: java.lang.Exception -> L24
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L24
            if (r1 == 0) goto L23
            android.content.SharedPreferences r1 = r3.a     // Catch: java.lang.Exception -> L24
            java.lang.String r4 = r1.getString(r0, r2)     // Catch: java.lang.Exception -> L24
            return r4
        L23:
            return r5
        L24:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r4 = " oc string error "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return r5
    }

    public synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            java.util.HashSet<com.xiaomi.push.service.ba$a> r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.clear()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void a(com.xiaomi.push.service.ba.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.HashSet<com.xiaomi.push.service.ba$a> r0 = r1.a     // Catch: java.lang.Throwable -> L10
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto Le
            java.util.HashSet<com.xiaomi.push.service.ba$a> r0 = r1.a     // Catch: java.lang.Throwable -> L10
            r0.add(r2)     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r1)
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public void a(java.util.List<android.util.Pair<java.lang.Integer, java.lang.Object>> r5) {
            r4 = this;
            boolean r0 = com.xiaomi.push.ag.a(r5)
            if (r0 == 0) goto L7
            return
        L7:
            android.content.SharedPreferences r0 = r4.b
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.util.Iterator r5 = r5.iterator()
        L11:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r5.next()
            android.util.Pair r1 = (android.util.Pair) r1
            java.lang.Object r2 = r1.first
            if (r2 != 0) goto L22
            goto L11
        L22:
            java.lang.Object r2 = r1.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.String r2 = r4.a(r2)
            java.lang.Object r3 = r1.second
            if (r3 != 0) goto L36
            r0.remove(r2)
            goto L11
        L36:
            r4.a(r0, r1, r2)
            goto L11
        L3a:
            r0.apply()
            return
    }

    public void a(java.util.List<android.util.Pair<com.xiaomi.push.hp, java.lang.Integer>> r4, java.util.List<android.util.Pair<java.lang.Integer, java.lang.Object>> r5) {
            r3 = this;
            boolean r0 = com.xiaomi.push.ag.a(r4)
            if (r0 != 0) goto L70
            boolean r0 = com.xiaomi.push.ag.a(r5)
            if (r0 == 0) goto Ld
            goto L70
        Ld:
            android.content.SharedPreferences r0 = r3.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.clear()
            java.util.Iterator r4 = r4.iterator()
        L1a:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L43
            java.lang.Object r1 = r4.next()
            android.util.Pair r1 = (android.util.Pair) r1
            java.lang.Object r2 = r1.first
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.second
            if (r2 != 0) goto L2f
            goto L1a
        L2f:
            java.lang.Object r2 = r1.first
            com.xiaomi.push.hp r2 = (com.xiaomi.push.hp) r2
            java.lang.String r2 = r3.a(r2)
            java.lang.Object r1 = r1.second
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r0.putInt(r2, r1)
            goto L1a
        L43:
            java.util.Iterator r4 = r5.iterator()
        L47:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L6c
            java.lang.Object r5 = r4.next()
            android.util.Pair r5 = (android.util.Pair) r5
            java.lang.Object r1 = r5.first
            if (r1 == 0) goto L47
            java.lang.Object r1 = r5.second
            if (r1 != 0) goto L5c
            goto L47
        L5c:
            java.lang.Object r1 = r5.first
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            java.lang.String r1 = r3.a(r1)
            r3.a(r0, r5, r1)
            goto L47
        L6c:
            r0.apply()
            return
        L70:
            java.lang.String r4 = "not update oc, because versions or configs are empty"
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return
    }

    public boolean a(int r4, boolean r5) {
            r3 = this;
            java.lang.String r0 = r3.a(r4)     // Catch: java.lang.Exception -> L24
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L24
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L24
            r2 = 0
            if (r1 == 0) goto L14
            android.content.SharedPreferences r1 = r3.b     // Catch: java.lang.Exception -> L24
            boolean r4 = r1.getBoolean(r0, r2)     // Catch: java.lang.Exception -> L24
            return r4
        L14:
            android.content.SharedPreferences r1 = r3.a     // Catch: java.lang.Exception -> L24
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Exception -> L24
            if (r1 == 0) goto L23
            android.content.SharedPreferences r1 = r3.a     // Catch: java.lang.Exception -> L24
            boolean r4 = r1.getBoolean(r0, r2)     // Catch: java.lang.Exception -> L24
            return r4
        L23:
            return r5
        L24:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r4 = " oc boolean error "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return r5
    }

    void b() {
            r3 = this;
            java.lang.String r0 = "OC_Callback : receive new oc data"
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            monitor-enter(r3)
            java.util.HashSet<com.xiaomi.push.service.ba$a> r1 = r3.a     // Catch: java.lang.Throwable -> L2b
            r0.addAll(r1)     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2b
            java.util.Iterator r1 = r0.iterator()
        L15:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            com.xiaomi.push.service.ba$a r2 = (com.xiaomi.push.service.ba.a) r2
            if (r2 == 0) goto L15
            r2.run()
            goto L15
        L27:
            r0.clear()
            return
        L2b:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2b
            throw r0
    }
}

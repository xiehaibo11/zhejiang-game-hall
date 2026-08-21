package com.xiaomi.push;

class cs {
    private java.lang.String a;
    private final java.util.ArrayList<com.xiaomi.push.cr> a;

    public cs() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    public cs(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L13
            r1.a = r2
            return
        L13:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "the host is empty"
            r2.<init>(r0)
            throw r2
    }

    public synchronized com.xiaomi.push.cr a() {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList<com.xiaomi.push.cr> r0 = r3.a     // Catch: java.lang.Throwable -> L2c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2c
            int r0 = r0 + (-1)
        L9:
            if (r0 < 0) goto L29
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r3.a     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L2c
            com.xiaomi.push.cr r1 = (com.xiaomi.push.cr) r1     // Catch: java.lang.Throwable -> L2c
            boolean r2 = r1.a()     // Catch: java.lang.Throwable -> L2c
            if (r2 == 0) goto L26
            com.xiaomi.push.cv r0 = com.xiaomi.push.cv.a()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = r1.a()     // Catch: java.lang.Throwable -> L2c
            r0.a(r2)     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r3)
            return r1
        L26:
            int r0 = r0 + (-1)
            goto L9
        L29:
            r0 = 0
            monitor-exit(r3)
            return r0
        L2c:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public synchronized com.xiaomi.push.cs a(org.json.JSONObject r5) {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "host"
            java.lang.String r0 = r5.getString(r0)     // Catch: java.lang.Throwable -> L2f
            r4.a = r0     // Catch: java.lang.Throwable -> L2f
            java.lang.String r0 = "fbs"
            org.json.JSONArray r5 = r5.getJSONArray(r0)     // Catch: java.lang.Throwable -> L2f
            r0 = 0
        L10:
            int r1 = r5.length()     // Catch: java.lang.Throwable -> L2f
            if (r0 >= r1) goto L2d
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r4.a     // Catch: java.lang.Throwable -> L2f
            com.xiaomi.push.cr r2 = new com.xiaomi.push.cr     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = r4.a     // Catch: java.lang.Throwable -> L2f
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2f
            org.json.JSONObject r3 = r5.getJSONObject(r0)     // Catch: java.lang.Throwable -> L2f
            com.xiaomi.push.cr r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L2f
            r1.add(r2)     // Catch: java.lang.Throwable -> L2f
            int r0 = r0 + 1
            goto L10
        L2d:
            monitor-exit(r4)
            return r4
        L2f:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.util.ArrayList<com.xiaomi.push.cr> a() {
            r1 = this;
            java.util.ArrayList<com.xiaomi.push.cr> r0 = r1.a
            return r0
    }

    public synchronized org.json.JSONObject a() {
            r4 = this;
            monitor-enter(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L33
            r0.<init>()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = "host"
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L33
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L33
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L33
            r1.<init>()     // Catch: java.lang.Throwable -> L33
            java.util.ArrayList<com.xiaomi.push.cr> r2 = r4.a     // Catch: java.lang.Throwable -> L33
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L33
        L18:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L2c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L33
            com.xiaomi.push.cr r3 = (com.xiaomi.push.cr) r3     // Catch: java.lang.Throwable -> L33
            org.json.JSONObject r3 = r3.a()     // Catch: java.lang.Throwable -> L33
            r1.put(r3)     // Catch: java.lang.Throwable -> L33
            goto L18
        L2c:
            java.lang.String r2 = "fbs"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L33
            monitor-exit(r4)
            return r0
        L33:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public synchronized void a(com.xiaomi.push.cr r3) {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
        L2:
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r2.a     // Catch: java.lang.Throwable -> L30
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L30
            if (r0 >= r1) goto L21
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r2.a     // Catch: java.lang.Throwable -> L30
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L30
            com.xiaomi.push.cr r1 = (com.xiaomi.push.cr) r1     // Catch: java.lang.Throwable -> L30
            boolean r1 = r1.a(r3)     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L1e
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r2.a     // Catch: java.lang.Throwable -> L30
            r1.set(r0, r3)     // Catch: java.lang.Throwable -> L30
            goto L21
        L1e:
            int r0 = r0 + 1
            goto L2
        L21:
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r2.a     // Catch: java.lang.Throwable -> L30
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L30
            if (r0 < r1) goto L2e
            java.util.ArrayList<com.xiaomi.push.cr> r0 = r2.a     // Catch: java.lang.Throwable -> L30
            r0.add(r3)     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r2)
            return
        L30:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized void a(boolean r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.ArrayList<com.xiaomi.push.cr> r0 = r2.a     // Catch: java.lang.Throwable -> L2f
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2f
            int r0 = r0 + (-1)
        L9:
            if (r0 < 0) goto L2d
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r2.a     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L2f
            com.xiaomi.push.cr r1 = (com.xiaomi.push.cr) r1     // Catch: java.lang.Throwable -> L2f
            if (r3 == 0) goto L21
            boolean r1 = r1.c()     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L2a
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r2.a     // Catch: java.lang.Throwable -> L2f
        L1d:
            r1.remove(r0)     // Catch: java.lang.Throwable -> L2f
            goto L2a
        L21:
            boolean r1 = r1.b()     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L2a
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r2.a     // Catch: java.lang.Throwable -> L2f
            goto L1d
        L2a:
            int r0 = r0 + (-1)
            goto L9
        L2d:
            monitor-exit(r2)
            return
        L2f:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            java.util.ArrayList<com.xiaomi.push.cr> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        L15:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()
            com.xiaomi.push.cr r2 = (com.xiaomi.push.cr) r2
            r0.append(r2)
            goto L15
        L25:
            java.lang.String r0 = r0.toString()
            return r0
    }
}

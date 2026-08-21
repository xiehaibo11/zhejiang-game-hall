package com.xiaomi.push;

class da implements java.lang.Comparable<com.xiaomi.push.da> {
    protected int a;
    private long a;
    java.lang.String a;
    private final java.util.LinkedList<com.xiaomi.push.cq> a;

    public da() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public da(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public da(java.lang.String r3, int r4) {
            r2 = this;
            r2.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r2.a = r0
            r0 = 0
            r2.a = r0
            r2.a = r3
            r2.a = r4
            return
    }

    public int a(com.xiaomi.push.da r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 1
            return r2
        L4:
            int r2 = r2.a
            int r0 = r1.a
            int r2 = r2 - r0
            return r2
    }

    public synchronized com.xiaomi.push.da a(org.json.JSONObject r5) {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "tt"
            long r0 = r5.getLong(r0)     // Catch: java.lang.Throwable -> L3d
            r4.a = r0     // Catch: java.lang.Throwable -> L3d
            java.lang.String r0 = "wt"
            int r0 = r5.getInt(r0)     // Catch: java.lang.Throwable -> L3d
            r4.a = r0     // Catch: java.lang.Throwable -> L3d
            java.lang.String r0 = "host"
            java.lang.String r0 = r5.getString(r0)     // Catch: java.lang.Throwable -> L3d
            r4.a = r0     // Catch: java.lang.Throwable -> L3d
            java.lang.String r0 = "ah"
            org.json.JSONArray r5 = r5.getJSONArray(r0)     // Catch: java.lang.Throwable -> L3d
            r0 = 0
        L20:
            int r1 = r5.length()     // Catch: java.lang.Throwable -> L3d
            if (r0 >= r1) goto L3b
            org.json.JSONObject r1 = r5.getJSONObject(r0)     // Catch: java.lang.Throwable -> L3d
            java.util.LinkedList<com.xiaomi.push.cq> r2 = r4.a     // Catch: java.lang.Throwable -> L3d
            com.xiaomi.push.cq r3 = new com.xiaomi.push.cq     // Catch: java.lang.Throwable -> L3d
            r3.<init>()     // Catch: java.lang.Throwable -> L3d
            com.xiaomi.push.cq r1 = r3.a(r1)     // Catch: java.lang.Throwable -> L3d
            r2.add(r1)     // Catch: java.lang.Throwable -> L3d
            int r0 = r0 + 1
            goto L20
        L3b:
            monitor-exit(r4)
            return r4
        L3d:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized org.json.JSONObject a() {
            r4 = this;
            monitor-enter(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "tt"
            long r2 = r4.a     // Catch: java.lang.Throwable -> L41
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "wt"
            int r2 = r4.a     // Catch: java.lang.Throwable -> L41
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "host"
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L41
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L41
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L41
            r1.<init>()     // Catch: java.lang.Throwable -> L41
            java.util.LinkedList<com.xiaomi.push.cq> r2 = r4.a     // Catch: java.lang.Throwable -> L41
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L41
        L26:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L41
            if (r3 == 0) goto L3a
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L41
            com.xiaomi.push.cq r3 = (com.xiaomi.push.cq) r3     // Catch: java.lang.Throwable -> L41
            org.json.JSONObject r3 = r3.a()     // Catch: java.lang.Throwable -> L41
            r1.put(r3)     // Catch: java.lang.Throwable -> L41
            goto L26
        L3a:
            java.lang.String r2 = "ah"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L41
            monitor-exit(r4)
            return r0
        L41:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    protected synchronized void a(com.xiaomi.push.cq r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 == 0) goto L5b
            java.util.LinkedList<com.xiaomi.push.cq> r0 = r3.a     // Catch: java.lang.Throwable -> L58
            r0.add(r4)     // Catch: java.lang.Throwable -> L58
            int r0 = r4.a()     // Catch: java.lang.Throwable -> L58
            if (r0 <= 0) goto L18
            int r0 = r3.a     // Catch: java.lang.Throwable -> L58
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L58
            int r0 = r0 + r4
            r3.a = r0     // Catch: java.lang.Throwable -> L58
            goto L3c
        L18:
            r4 = 0
            java.util.LinkedList<com.xiaomi.push.cq> r1 = r3.a     // Catch: java.lang.Throwable -> L58
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L58
            int r1 = r1 + (-1)
        L21:
            if (r1 < 0) goto L36
            java.util.LinkedList<com.xiaomi.push.cq> r2 = r3.a     // Catch: java.lang.Throwable -> L58
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L58
            com.xiaomi.push.cq r2 = (com.xiaomi.push.cq) r2     // Catch: java.lang.Throwable -> L58
            int r2 = r2.a()     // Catch: java.lang.Throwable -> L58
            if (r2 >= 0) goto L36
            int r4 = r4 + 1
            int r1 = r1 + (-1)
            goto L21
        L36:
            int r1 = r3.a     // Catch: java.lang.Throwable -> L58
            int r0 = r0 * r4
            int r1 = r1 + r0
            r3.a = r1     // Catch: java.lang.Throwable -> L58
        L3c:
            java.util.LinkedList<com.xiaomi.push.cq> r4 = r3.a     // Catch: java.lang.Throwable -> L58
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L58
            r0 = 30
            if (r4 <= r0) goto L5b
            java.util.LinkedList<com.xiaomi.push.cq> r4 = r3.a     // Catch: java.lang.Throwable -> L58
            java.lang.Object r4 = r4.remove()     // Catch: java.lang.Throwable -> L58
            com.xiaomi.push.cq r4 = (com.xiaomi.push.cq) r4     // Catch: java.lang.Throwable -> L58
            int r0 = r3.a     // Catch: java.lang.Throwable -> L58
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L58
            int r0 = r0 - r4
            r3.a = r0     // Catch: java.lang.Throwable -> L58
            goto L5b
        L58:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L5b:
            monitor-exit(r3)
            return
    }

    @Override
    public int compareTo(com.xiaomi.push.da r1) {
            r0 = this;
            com.xiaomi.push.da r1 = (com.xiaomi.push.da) r1
            int r1 = r0.a(r1)
            return r1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}

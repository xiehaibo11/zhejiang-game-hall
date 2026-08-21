package com.xiaomi.push;

public class gl extends com.xiaomi.push.gn {
    private com.xiaomi.push.gl.a a;
    private final java.util.Map<java.lang.String, java.lang.String> a;

    public class a {
        public static final com.xiaomi.push.gl.a a = null;
        public static final com.xiaomi.push.gl.a b = null;
        public static final com.xiaomi.push.gl.a c = null;
        public static final com.xiaomi.push.gl.a d = null;
        public static final com.xiaomi.push.gl.a e = null;
        private java.lang.String a;

        static {
                com.xiaomi.push.gl$a r0 = new com.xiaomi.push.gl$a
                java.lang.String r1 = "get"
                r0.<init>(r1)
                com.xiaomi.push.gl.a.a = r0
                com.xiaomi.push.gl$a r0 = new com.xiaomi.push.gl$a
                java.lang.String r1 = "set"
                r0.<init>(r1)
                com.xiaomi.push.gl.a.b = r0
                com.xiaomi.push.gl$a r0 = new com.xiaomi.push.gl$a
                java.lang.String r1 = "result"
                r0.<init>(r1)
                com.xiaomi.push.gl.a.c = r0
                com.xiaomi.push.gl$a r0 = new com.xiaomi.push.gl$a
                java.lang.String r1 = "error"
                r0.<init>(r1)
                com.xiaomi.push.gl.a.d = r0
                com.xiaomi.push.gl$a r0 = new com.xiaomi.push.gl$a
                java.lang.String r1 = "command"
                r0.<init>(r1)
                com.xiaomi.push.gl.a.e = r0
                return
        }

        private a(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public static com.xiaomi.push.gl.a a(java.lang.String r2) {
                r0 = 0
                if (r2 != 0) goto L4
                return r0
            L4:
                java.lang.String r2 = r2.toLowerCase()
                com.xiaomi.push.gl$a r1 = com.xiaomi.push.gl.a.a
                java.lang.String r1 = r1.toString()
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L17
                com.xiaomi.push.gl$a r2 = com.xiaomi.push.gl.a.a
                return r2
            L17:
                com.xiaomi.push.gl$a r1 = com.xiaomi.push.gl.a.b
                java.lang.String r1 = r1.toString()
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L26
                com.xiaomi.push.gl$a r2 = com.xiaomi.push.gl.a.b
                return r2
            L26:
                com.xiaomi.push.gl$a r1 = com.xiaomi.push.gl.a.d
                java.lang.String r1 = r1.toString()
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L35
                com.xiaomi.push.gl$a r2 = com.xiaomi.push.gl.a.d
                return r2
            L35:
                com.xiaomi.push.gl$a r1 = com.xiaomi.push.gl.a.c
                java.lang.String r1 = r1.toString()
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L44
                com.xiaomi.push.gl$a r2 = com.xiaomi.push.gl.a.c
                return r2
            L44:
                com.xiaomi.push.gl$a r1 = com.xiaomi.push.gl.a.e
                java.lang.String r1 = r1.toString()
                boolean r2 = r1.equals(r2)
                if (r2 == 0) goto L53
                com.xiaomi.push.gl$a r2 = com.xiaomi.push.gl.a.e
                return r2
            L53:
                return r0
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }
    }

    public gl() {
            r1 = this;
            r1.<init>()
            com.xiaomi.push.gl$a r0 = com.xiaomi.push.gl.a.a
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public gl(android.os.Bundle r3) {
            r2 = this;
            r2.<init>(r3)
            com.xiaomi.push.gl$a r0 = com.xiaomi.push.gl.a.a
            r2.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.a = r0
            java.lang.String r0 = "ext_iq_type"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L20
            java.lang.String r3 = r3.getString(r0)
            com.xiaomi.push.gl$a r3 = com.xiaomi.push.gl.a.a(r3)
            r2.a = r3
        L20:
            return
    }

    @Override
    public android.os.Bundle a() {
            r3 = this;
            android.os.Bundle r0 = super.a()
            com.xiaomi.push.gl$a r1 = r3.a
            if (r1 == 0) goto L11
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ext_iq_type"
            r0.putString(r2, r1)
        L11:
            return r0
    }

    public com.xiaomi.push.gl.a a() {
            r1 = this;
            com.xiaomi.push.gl$a r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String a() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<iq "
            r0.append(r1)
            java.lang.String r1 = r5.j()
            java.lang.String r2 = "\" "
            if (r1 == 0) goto L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "id=\""
            r1.append(r3)
            java.lang.String r3 = r5.j()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L2d:
            java.lang.String r1 = r5.l()
            if (r1 == 0) goto L46
            java.lang.String r1 = "to=\""
            r0.append(r1)
            java.lang.String r1 = r5.l()
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            r0.append(r2)
        L46:
            java.lang.String r1 = r5.m()
            if (r1 == 0) goto L5f
            java.lang.String r1 = "from=\""
            r0.append(r1)
            java.lang.String r1 = r5.m()
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            r0.append(r2)
        L5f:
            java.lang.String r1 = r5.k()
            if (r1 == 0) goto L78
            java.lang.String r1 = "chid=\""
            r0.append(r1)
            java.lang.String r1 = r5.k()
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            r0.append(r2)
        L78:
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.a
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L82:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto Lb1
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = com.xiaomi.push.gy.a(r4)
            r0.append(r4)
            java.lang.String r4 = "=\""
            r0.append(r4)
            java.lang.Object r3 = r3.getValue()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r3 = com.xiaomi.push.gy.a(r3)
            r0.append(r3)
            r0.append(r2)
            goto L82
        Lb1:
            com.xiaomi.push.gl$a r1 = r5.a
            if (r1 != 0) goto Lb8
            java.lang.String r1 = "type=\"get\">"
            goto Lc6
        Lb8:
            java.lang.String r1 = "type=\""
            r0.append(r1)
            com.xiaomi.push.gl$a r1 = r5.a()
            r0.append(r1)
            java.lang.String r1 = "\">"
        Lc6:
            r0.append(r1)
            java.lang.String r1 = r5.b()
            if (r1 == 0) goto Ld2
            r0.append(r1)
        Ld2:
            java.lang.String r1 = r5.o()
            r0.append(r1)
            com.xiaomi.push.gr r1 = r5.a()
            if (r1 == 0) goto Le6
            java.lang.String r1 = r1.a()
            r0.append(r1)
        Le6:
            java.lang.String r1 = "</iq>"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void a(com.xiaomi.push.gl.a r1) {
            r0 = this;
            if (r1 != 0) goto L4
            com.xiaomi.push.gl$a r1 = com.xiaomi.push.gl.a.a
        L4:
            r0.a = r1
            return
    }

    public synchronized void a(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.putAll(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public java.lang.String b() {
            r1 = this;
            r0 = 0
            return r0
    }
}

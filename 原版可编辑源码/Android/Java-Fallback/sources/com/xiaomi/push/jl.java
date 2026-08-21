package com.xiaomi.push;

public class jl extends com.xiaomi.push.jb {
    private static int b = 10000;
    private static int c = 10000;
    private static int d = 10000;
    private static int e = 10485760;
    private static int f = 104857600;

    public class a extends com.xiaomi.push.jb.a {
        public a() {
                r2 = this;
                r0 = 0
                r1 = 1
                r2.<init>(r0, r1)
                return
        }

        public a(boolean r1, boolean r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        @Override
        public com.xiaomi.push.jf a(com.xiaomi.push.jp r4) {
                r3 = this;
                com.xiaomi.push.jl r0 = new com.xiaomi.push.jl
                boolean r1 = r3.a
                boolean r2 = r3.b
                r0.<init>(r4, r1, r2)
                int r4 = r3.a
                if (r4 == 0) goto L12
                int r4 = r3.a
                r0.b(r4)
            L12:
                return r0
        }
    }

    static {
            return
    }

    public jl(com.xiaomi.push.jp r1, boolean r2, boolean r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public com.xiaomi.push.jd a() {
            r5 = this;
            byte r0 = r5.a()
            int r1 = r5.a()
            int r2 = com.xiaomi.push.jl.c
            if (r1 > r2) goto L12
            com.xiaomi.push.jd r2 = new com.xiaomi.push.jd
            r2.<init>(r0, r1)
            return r2
        L12:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            r2 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Thrift list size "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = " out of range!"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r0.<init>(r2, r1)
            throw r0
    }

    @Override
    public com.xiaomi.push.je a() {
            r5 = this;
            byte r0 = r5.a()
            byte r1 = r5.a()
            int r2 = r5.a()
            int r3 = com.xiaomi.push.jl.b
            if (r2 > r3) goto L16
            com.xiaomi.push.je r3 = new com.xiaomi.push.je
            r3.<init>(r0, r1, r2)
            return r3
        L16:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            r1 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Thrift map size "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = " out of range!"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r0.<init>(r1, r2)
            throw r0
    }

    @Override
    public com.xiaomi.push.jj a() {
            r5 = this;
            byte r0 = r5.a()
            int r1 = r5.a()
            int r2 = com.xiaomi.push.jl.d
            if (r1 > r2) goto L12
            com.xiaomi.push.jj r2 = new com.xiaomi.push.jj
            r2.<init>(r0, r1)
            return r2
        L12:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            r2 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Thrift set size "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = " out of range!"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r0.<init>(r2, r1)
            throw r0
    }

    @Override
    public java.lang.String a() {
            r5 = this;
            int r0 = r5.a()
            int r1 = com.xiaomi.push.jl.e
            if (r0 > r1) goto L36
            com.xiaomi.push.jp r1 = r5.a
            int r1 = r1.b()
            if (r1 < r0) goto L31
            java.lang.String r1 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L29
            com.xiaomi.push.jp r2 = r5.a     // Catch: java.io.UnsupportedEncodingException -> L29
            byte[] r2 = r2.a()     // Catch: java.io.UnsupportedEncodingException -> L29
            com.xiaomi.push.jp r3 = r5.a     // Catch: java.io.UnsupportedEncodingException -> L29
            int r3 = r3.a()     // Catch: java.io.UnsupportedEncodingException -> L29
            java.lang.String r4 = "UTF-8"
            r1.<init>(r2, r3, r0, r4)     // Catch: java.io.UnsupportedEncodingException -> L29
            com.xiaomi.push.jp r2 = r5.a     // Catch: java.io.UnsupportedEncodingException -> L29
            r2.a(r0)     // Catch: java.io.UnsupportedEncodingException -> L29
            return r1
        L29:
            com.xiaomi.push.iz r0 = new com.xiaomi.push.iz
            java.lang.String r1 = "JVM DOES NOT SUPPORT UTF-8"
            r0.<init>(r1)
            throw r0
        L31:
            java.lang.String r0 = r5.a(r0)
            return r0
        L36:
            com.xiaomi.push.jg r1 = new com.xiaomi.push.jg
            r2 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Thrift string size "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = " out of range!"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    @Override
    public java.nio.ByteBuffer a() {
            r5 = this;
            int r0 = r5.a()
            int r1 = com.xiaomi.push.jl.f
            if (r0 > r1) goto L36
            r5.c(r0)
            com.xiaomi.push.jp r1 = r5.a
            int r1 = r1.b()
            if (r1 < r0) goto L29
            com.xiaomi.push.jp r1 = r5.a
            byte[] r1 = r1.a()
            com.xiaomi.push.jp r2 = r5.a
            int r2 = r2.a()
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r1, r2, r0)
            com.xiaomi.push.jp r2 = r5.a
            r2.a(r0)
            return r1
        L29:
            byte[] r1 = new byte[r0]
            com.xiaomi.push.jp r2 = r5.a
            r3 = 0
            r2.b(r1, r3, r0)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r1)
            return r0
        L36:
            com.xiaomi.push.jg r1 = new com.xiaomi.push.jg
            r2 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Thrift binary size "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = " out of range!"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r1.<init>(r2, r0)
            throw r1
    }
}

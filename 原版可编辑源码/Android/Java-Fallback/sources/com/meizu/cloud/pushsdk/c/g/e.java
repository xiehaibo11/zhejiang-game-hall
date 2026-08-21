package com.meizu.cloud.pushsdk.c.g;

public class e implements java.io.Serializable, java.lang.Comparable<com.meizu.cloud.pushsdk.c.g.e> {
    static final char[] a = null;
    public static final com.meizu.cloud.pushsdk.c.g.e b = null;
    private static final long serialVersionUID = 1;
    final byte[] c;
    transient int d;
    transient java.lang.String e;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x0014: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.meizu.cloud.pushsdk.c.g.e.a = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            com.meizu.cloud.pushsdk.c.g.e r0 = a(r0)
            com.meizu.cloud.pushsdk.c.g.e.b = r0
            return
    }

    e(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            return
    }

    public static com.meizu.cloud.pushsdk.c.g.e a(java.io.InputStream r4, int r5) {
            if (r4 == 0) goto L37
            if (r5 < 0) goto L20
            byte[] r0 = new byte[r5]
            r1 = 0
        L7:
            if (r1 >= r5) goto L1a
            int r2 = r5 - r1
            int r2 = r4.read(r0, r1, r2)
            r3 = -1
            if (r2 == r3) goto L14
            int r1 = r1 + r2
            goto L7
        L14:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
        L1a:
            com.meizu.cloud.pushsdk.c.g.e r4 = new com.meizu.cloud.pushsdk.c.g.e
            r4.<init>(r0)
            return r4
        L20:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
        L37:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "in == null"
            r4.<init>(r5)
            throw r4
    }

    public static com.meizu.cloud.pushsdk.c.g.e a(java.lang.String r2) {
            if (r2 == 0) goto L10
            com.meizu.cloud.pushsdk.c.g.e r0 = new com.meizu.cloud.pushsdk.c.g.e
            java.nio.charset.Charset r1 = com.meizu.cloud.pushsdk.c.g.o.a
            byte[] r1 = r2.getBytes(r1)
            r0.<init>(r1)
            r0.e = r2
            return r0
        L10:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "s == null"
            r2.<init>(r0)
            throw r2
    }

    public static com.meizu.cloud.pushsdk.c.g.e a(byte... r1) {
            if (r1 == 0) goto Le
            com.meizu.cloud.pushsdk.c.g.e r0 = new com.meizu.cloud.pushsdk.c.g.e
            java.lang.Object r1 = r1.clone()
            byte[] r1 = (byte[]) r1
            r0.<init>(r1)
            return r0
        Le:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "data == null"
            r1.<init>(r0)
            throw r1
    }

    private com.meizu.cloud.pushsdk.c.g.e b(java.lang.String r2) {
            r1 = this;
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.security.NoSuchAlgorithmException -> Lf
            byte[] r0 = r1.c     // Catch: java.security.NoSuchAlgorithmException -> Lf
            byte[] r2 = r2.digest(r0)     // Catch: java.security.NoSuchAlgorithmException -> Lf
            com.meizu.cloud.pushsdk.c.g.e r2 = a(r2)     // Catch: java.security.NoSuchAlgorithmException -> Lf
            return r2
        Lf:
            r2 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r2)
            throw r0
    }

    private void readObject(java.io.ObjectInputStream r3) {
            r2 = this;
            int r0 = r3.readInt()
            com.meizu.cloud.pushsdk.c.g.e r3 = a(r3, r0)
            java.lang.Class<com.meizu.cloud.pushsdk.c.g.e> r0 = com.meizu.cloud.pushsdk.c.g.e.class
            java.lang.String r1 = "c"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.IllegalAccessException -> L1a java.lang.NoSuchFieldException -> L20
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.IllegalAccessException -> L1a java.lang.NoSuchFieldException -> L20
            byte[] r3 = r3.c     // Catch: java.lang.IllegalAccessException -> L1a java.lang.NoSuchFieldException -> L20
            r0.set(r2, r3)     // Catch: java.lang.IllegalAccessException -> L1a java.lang.NoSuchFieldException -> L20
            return
        L1a:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            r3.<init>()
            throw r3
        L20:
            java.lang.AssertionError r3 = new java.lang.AssertionError
            r3.<init>()
            throw r3
    }

    private void writeObject(java.io.ObjectOutputStream r2) {
            r1 = this;
            byte[] r0 = r1.c
            int r0 = r0.length
            r2.writeInt(r0)
            byte[] r0 = r1.c
            r2.write(r0)
            return
    }

    public byte a(int r2) {
            r1 = this;
            byte[] r0 = r1.c
            r2 = r0[r2]
            return r2
    }

    public int a(com.meizu.cloud.pushsdk.c.g.e r10) {
            r9 = this;
            int r0 = r9.d()
            int r1 = r10.d()
            int r2 = java.lang.Math.min(r0, r1)
            r3 = 0
            r4 = r3
        Le:
            r5 = -1
            r6 = 1
            if (r4 >= r2) goto L28
            byte r7 = r9.a(r4)
            r7 = r7 & 255(0xff, float:3.57E-43)
            byte r8 = r10.a(r4)
            r8 = r8 & 255(0xff, float:3.57E-43)
            if (r7 != r8) goto L23
            int r4 = r4 + 1
            goto Le
        L23:
            if (r7 >= r8) goto L26
            goto L27
        L26:
            r5 = r6
        L27:
            return r5
        L28:
            if (r0 != r1) goto L2b
            return r3
        L2b:
            if (r0 >= r1) goto L2e
            goto L2f
        L2e:
            r5 = r6
        L2f:
            return r5
    }

    public java.lang.String a() {
            r3 = this;
            java.lang.String r0 = r3.e
            if (r0 == 0) goto L5
            goto L10
        L5:
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r3.c
            java.nio.charset.Charset r2 = com.meizu.cloud.pushsdk.c.g.o.a
            r0.<init>(r1, r2)
            r3.e = r0
        L10:
            return r0
    }

    void a(com.meizu.cloud.pushsdk.c.g.b r4) {
            r3 = this;
            byte[] r0 = r3.c
            int r1 = r0.length
            r2 = 0
            r4.b(r0, r2, r1)
            return
    }

    public boolean a(int r3, byte[] r4, int r5, int r6) {
            r2 = this;
            byte[] r0 = r2.c
            int r1 = r0.length
            int r1 = r1 - r6
            if (r3 > r1) goto L12
            int r1 = r4.length
            int r1 = r1 - r6
            if (r5 > r1) goto L12
            boolean r3 = com.meizu.cloud.pushsdk.c.g.o.a(r0, r3, r4, r5, r6)
            if (r3 == 0) goto L12
            r3 = 1
            goto L13
        L12:
            r3 = 0
        L13:
            return r3
    }

    public com.meizu.cloud.pushsdk.c.g.e b() {
            r1 = this;
            java.lang.String r0 = "MD5"
            com.meizu.cloud.pushsdk.c.g.e r0 = r1.b(r0)
            return r0
    }

    public java.lang.String c() {
            r9 = this;
            byte[] r0 = r9.c
            int r1 = r0.length
            int r1 = r1 * 2
            char[] r1 = new char[r1]
            int r2 = r0.length
            r3 = 0
            r4 = r3
        La:
            if (r3 >= r2) goto L25
            r5 = r0[r3]
            int r6 = r4 + 1
            char[] r7 = com.meizu.cloud.pushsdk.c.g.e.a
            int r8 = r5 >> 4
            r8 = r8 & 15
            char r8 = r7[r8]
            r1[r4] = r8
            int r4 = r6 + 1
            r5 = r5 & 15
            char r5 = r7[r5]
            r1[r6] = r5
            int r3 = r3 + 1
            goto La
        L25:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    @Override
    public int compareTo(com.meizu.cloud.pushsdk.c.g.e r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.c.g.e r1 = (com.meizu.cloud.pushsdk.c.g.e) r1
            int r1 = r0.a(r1)
            return r1
    }

    public int d() {
            r1 = this;
            byte[] r0 = r1.c
            int r0 = r0.length
            return r0
    }

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            r0 = 1
            if (r6 != r5) goto L4
            return r0
        L4:
            boolean r1 = r6 instanceof com.meizu.cloud.pushsdk.c.g.e
            r2 = 0
            if (r1 == 0) goto L1c
            com.meizu.cloud.pushsdk.c.g.e r6 = (com.meizu.cloud.pushsdk.c.g.e) r6
            int r1 = r6.d()
            byte[] r3 = r5.c
            int r4 = r3.length
            if (r1 != r4) goto L1c
            int r1 = r3.length
            boolean r6 = r6.a(r2, r3, r2, r1)
            if (r6 == 0) goto L1c
            goto L1d
        L1c:
            r0 = r2
        L1d:
            return r0
    }

    public int hashCode() {
            r1 = this;
            int r0 = r1.d
            if (r0 == 0) goto L5
            goto Ld
        L5:
            byte[] r0 = r1.c
            int r0 = java.util.Arrays.hashCode(r0)
            r1.d = r0
        Ld:
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            byte[] r0 = r6.c
            int r1 = r0.length
            if (r1 != 0) goto L8
            java.lang.String r0 = "ByteString[size=0]"
            return r0
        L8:
            int r1 = r0.length
            r2 = 16
            r3 = 1
            r4 = 0
            r5 = 2
            if (r1 > r2) goto L26
            java.lang.Object[] r1 = new java.lang.Object[r5]
            int r0 = r0.length
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1[r4] = r0
            java.lang.String r0 = r6.c()
            r1[r3] = r0
            java.lang.String r0 = "ByteString[size=%s data=%s]"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            return r0
        L26:
            java.lang.Object[] r1 = new java.lang.Object[r5]
            int r0 = r0.length
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1[r4] = r0
            com.meizu.cloud.pushsdk.c.g.e r0 = r6.b()
            java.lang.String r0 = r0.c()
            r1[r3] = r0
            java.lang.String r0 = "ByteString[size=%s md5=%s]"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            return r0
    }
}

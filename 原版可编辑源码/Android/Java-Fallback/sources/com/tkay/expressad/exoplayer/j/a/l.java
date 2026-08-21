package com.tkay.expressad.exoplayer.j.a;

public final class l implements com.tkay.expressad.exoplayer.j.a.i {
    public static final com.tkay.expressad.exoplayer.j.a.l b = null;
    private static final int c = 10485760;
    private int d;
    private final java.util.Map<java.lang.String, byte[]> e;

    static {
            com.tkay.expressad.exoplayer.j.a.l r0 = new com.tkay.expressad.exoplayer.j.a.l
            java.util.Map r1 = java.util.Collections.emptyMap()
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.j.a.l.b = r0
            return
    }

    private l(java.util.Map<java.lang.String, byte[]> r1) {
            r0 = this;
            r0.<init>()
            java.util.Map r1 = java.util.Collections.unmodifiableMap(r1)
            r0.e = r1
            return
    }

    public static com.tkay.expressad.exoplayer.j.a.l a(java.io.DataInputStream r6) {
            int r0 = r6.readInt()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2 = 0
        La:
            if (r2 >= r0) goto L35
            java.lang.String r3 = r6.readUTF()
            int r4 = r6.readInt()
            if (r4 < 0) goto L25
            r5 = 10485760(0xa00000, float:1.469368E-38)
            if (r4 > r5) goto L25
            byte[] r4 = new byte[r4]
            r6.readFully(r4)
            r1.put(r3, r4)
            int r2 = r2 + 1
            goto La
        L25:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r0 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "Invalid value size: "
            java.lang.String r0 = r1.concat(r0)
            r6.<init>(r0)
            throw r6
        L35:
            com.tkay.expressad.exoplayer.j.a.l r6 = new com.tkay.expressad.exoplayer.j.a.l
            r6.<init>(r1)
            return r6
    }

    private static java.util.Map<java.lang.String, byte[]> a(java.util.Map<java.lang.String, byte[]> r1, com.tkay.expressad.exoplayer.j.a.k r2) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r1)
            java.util.List r1 = r2.a()
            a(r0, r1)
            java.util.Map r1 = r2.b()
            a(r0, r1)
            return r0
    }

    private static void a(java.util.HashMap<java.lang.String, byte[]> r2, java.util.List<java.lang.String> r3) {
            r0 = 0
        L1:
            int r1 = r3.size()
            if (r0 >= r1) goto L11
            java.lang.Object r1 = r3.get(r0)
            r2.remove(r1)
            int r0 = r0 + 1
            goto L1
        L11:
            return
    }

    private static void a(java.util.HashMap<java.lang.String, byte[]> r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            java.util.Set r0 = r7.keySet()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L78
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r7.get(r1)
            boolean r3 = r2 instanceof java.lang.Long
            if (r3 == 0) goto L31
            r3 = 8
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r3)
            java.lang.Long r2 = (java.lang.Long) r2
            long r4 = r2.longValue()
            java.nio.ByteBuffer r2 = r3.putLong(r4)
            byte[] r2 = r2.array()
            goto L48
        L31:
            boolean r3 = r2 instanceof java.lang.String
            if (r3 == 0) goto L42
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "UTF-8"
            java.nio.charset.Charset r3 = java.nio.charset.Charset.forName(r3)
            byte[] r2 = r2.getBytes(r3)
            goto L48
        L42:
            boolean r3 = r2 instanceof byte[]
            if (r3 == 0) goto L72
            byte[] r2 = (byte[]) r2
        L48:
            int r3 = r2.length
            r4 = 10485760(0xa00000, float:1.469368E-38)
            if (r3 > r4) goto L51
            r6.put(r1, r2)
            goto L8
        L51:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            r7 = 3
            java.lang.Object[] r7 = new java.lang.Object[r7]
            r0 = 0
            r7[r0] = r1
            r0 = 1
            int r1 = r2.length
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r7[r0] = r1
            r0 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r7[r0] = r1
            java.lang.String r0 = "The size of %s (%d) is greater than maximum allowed: %d"
            java.lang.String r7 = java.lang.String.format(r0, r7)
            r6.<init>(r7)
            throw r6
        L72:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            r6.<init>()
            throw r6
        L78:
            return
    }

    private boolean a(java.util.Map<java.lang.String, byte[]> r5) {
            r4 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r4.e
            int r0 = r0.size()
            int r1 = r5.size()
            r2 = 0
            if (r0 == r1) goto Le
            return r2
        Le:
            java.util.Map<java.lang.String, byte[]> r0 = r4.e
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r3 = r1.getValue()
            byte[] r3 = (byte[]) r3
            java.lang.Object r1 = r1.getKey()
            java.lang.Object r1 = r5.get(r1)
            byte[] r1 = (byte[]) r1
            boolean r1 = java.util.Arrays.equals(r3, r1)
            if (r1 != 0) goto L18
            return r2
        L3b:
            r5 = 1
            return r5
    }

    private static byte[] a(java.lang.Object r3) {
            boolean r0 = r3 instanceof java.lang.Long
            if (r0 == 0) goto L19
            r0 = 8
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.lang.Long r3 = (java.lang.Long) r3
            long r1 = r3.longValue()
            java.nio.ByteBuffer r3 = r0.putLong(r1)
            byte[] r3 = r3.array()
            return r3
        L19:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L2a
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            byte[] r3 = r3.getBytes(r0)
            return r3
        L2a:
            boolean r0 = r3 instanceof byte[]
            if (r0 == 0) goto L31
            byte[] r3 = (byte[]) r3
            return r3
        L31:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
    }

    @Override
    public final long a(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r2.e
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L19
            java.util.Map<java.lang.String, byte[]> r0 = r2.e
            java.lang.Object r3 = r0.get(r3)
            byte[] r3 = (byte[]) r3
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.wrap(r3)
            long r0 = r3.getLong()
            return r0
        L19:
            r0 = -1
            return r0
    }

    public final com.tkay.expressad.exoplayer.j.a.l a(com.tkay.expressad.exoplayer.j.a.k r3) {
            r2 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r2.e
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>(r0)
            java.util.List r0 = r3.a()
            a(r1, r0)
            java.util.Map r3 = r3.b()
            a(r1, r3)
            boolean r3 = r2.a(r1)
            if (r3 == 0) goto L1c
            return r2
        L1c:
            com.tkay.expressad.exoplayer.j.a.l r3 = new com.tkay.expressad.exoplayer.j.a.l
            r3.<init>(r1)
            return r3
    }

    @Override
    public final java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.e
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1b
            java.util.Map<java.lang.String, byte[]> r3 = r1.e
            java.lang.Object r2 = r3.get(r2)
            byte[] r2 = (byte[]) r2
            java.lang.String r3 = new java.lang.String
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            r3.<init>(r2, r0)
        L1b:
            return r3
    }

    public final void a(java.io.DataOutputStream r4) {
            r3 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r3.e
            int r0 = r0.size()
            r4.writeInt(r0)
            java.util.Map<java.lang.String, byte[]> r0 = r3.e
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L13:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r4.writeUTF(r2)
            java.lang.Object r1 = r1.getValue()
            byte[] r1 = (byte[]) r1
            int r2 = r1.length
            r4.writeInt(r2)
            r4.write(r1)
            goto L13
        L36:
            return
    }

    @Override
    public final byte[] a(java.lang.String r2, byte[] r3) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.e
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L16
            java.util.Map<java.lang.String, byte[]> r3 = r1.e
            java.lang.Object r2 = r3.get(r2)
            byte[] r2 = (byte[]) r2
            int r3 = r2.length
            byte[] r2 = java.util.Arrays.copyOf(r2, r3)
            return r2
        L16:
            return r3
    }

    @Override
    public final boolean b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.e
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1a
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1a
        L11:
            com.tkay.expressad.exoplayer.j.a.l r3 = (com.tkay.expressad.exoplayer.j.a.l) r3
            java.util.Map<java.lang.String, byte[]> r3 = r3.e
            boolean r3 = r2.a(r3)
            return r3
        L1a:
            r3 = 0
            return r3
    }

    public final int hashCode() {
            r4 = this;
            int r0 = r4.d
            if (r0 != 0) goto L34
            r0 = 0
            java.util.Map<java.lang.String, byte[]> r1 = r4.e
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L32
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            int r3 = r3.hashCode()
            java.lang.Object r2 = r2.getValue()
            byte[] r2 = (byte[]) r2
            int r2 = java.util.Arrays.hashCode(r2)
            r2 = r2 ^ r3
            int r0 = r0 + r2
            goto Lf
        L32:
            r4.d = r0
        L34:
            int r0 = r4.d
            return r0
    }
}

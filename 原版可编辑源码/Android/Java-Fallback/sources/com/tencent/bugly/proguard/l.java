package com.tencent.bugly.proguard;

public final class l {
    public java.nio.ByteBuffer a;
    protected java.lang.String b;

    public l() {
            r1 = this;
            r0 = 128(0x80, float:1.8E-43)
            r1.<init>(r0)
            return
    }

    public l(int r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "GBK"
            r1.b = r0
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.allocate(r2)
            r1.a = r2
            return
    }

    private void a(double r2, int r4) {
            r1 = this;
            r0 = 10
            r1.a(r0)
            r0 = 5
            r1.b(r0, r4)
            java.nio.ByteBuffer r4 = r1.a
            r4.putDouble(r2)
            return
    }

    private void a(float r2, int r3) {
            r1 = this;
            r0 = 6
            r1.a(r0)
            r0 = 4
            r1.b(r0, r3)
            java.nio.ByteBuffer r3 = r1.a
            r3.putFloat(r2)
            return
    }

    private void a(int r4) {
            r3 = this;
            java.nio.ByteBuffer r0 = r3.a
            int r0 = r0.remaining()
            if (r0 >= r4) goto L27
            java.nio.ByteBuffer r0 = r3.a
            int r0 = r0.capacity()
            int r0 = r0 + r4
            int r0 = r0 * 2
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r0)
            java.nio.ByteBuffer r0 = r3.a
            byte[] r0 = r0.array()
            r1 = 0
            java.nio.ByteBuffer r2 = r3.a
            int r2 = r2.position()
            r4.put(r0, r1, r2)
            r3.a = r4
        L27:
            return
    }

    private void a(double[] r5, int r6) {
            r4 = this;
            r0 = 8
            r4.a(r0)
            r0 = 9
            r4.b(r0, r6)
            int r6 = r5.length
            r0 = 0
            r4.a(r6, r0)
            int r6 = r5.length
            r1 = 0
        L11:
            if (r1 >= r6) goto L1b
            r2 = r5[r1]
            r4.a(r2, r0)
            int r1 = r1 + 1
            goto L11
        L1b:
            return
    }

    private void a(float[] r4, int r5) {
            r3 = this;
            r0 = 8
            r3.a(r0)
            r0 = 9
            r3.b(r0, r5)
            int r5 = r4.length
            r0 = 0
            r3.a(r5, r0)
            int r5 = r4.length
            r1 = 0
        L11:
            if (r1 >= r5) goto L1b
            r2 = r4[r1]
            r3.a(r2, r0)
            int r1 = r1 + 1
            goto L11
        L1b:
            return
    }

    private void a(int[] r4, int r5) {
            r3 = this;
            r0 = 8
            r3.a(r0)
            r0 = 9
            r3.b(r0, r5)
            int r5 = r4.length
            r0 = 0
            r3.a(r5, r0)
            int r5 = r4.length
            r1 = 0
        L11:
            if (r1 >= r5) goto L1b
            r2 = r4[r1]
            r3.a(r2, r0)
            int r1 = r1 + 1
            goto L11
        L1b:
            return
    }

    private void a(long[] r5, int r6) {
            r4 = this;
            r0 = 8
            r4.a(r0)
            r0 = 9
            r4.b(r0, r6)
            int r6 = r5.length
            r0 = 0
            r4.a(r6, r0)
            int r6 = r5.length
            r1 = 0
        L11:
            if (r1 >= r6) goto L1b
            r2 = r5[r1]
            r4.a(r2, r0)
            int r1 = r1 + 1
            goto L11
        L1b:
            return
    }

    private void a(java.lang.Object[] r4, int r5) {
            r3 = this;
            r0 = 8
            r3.a(r0)
            r0 = 9
            r3.b(r0, r5)
            int r5 = r4.length
            r0 = 0
            r3.a(r5, r0)
            int r5 = r4.length
            r1 = 0
        L11:
            if (r1 >= r5) goto L1b
            r2 = r4[r1]
            r3.a(r2, r0)
            int r1 = r1 + 1
            goto L11
        L1b:
            return
    }

    private void a(short[] r4, int r5) {
            r3 = this;
            r0 = 8
            r3.a(r0)
            r0 = 9
            r3.b(r0, r5)
            int r5 = r4.length
            r0 = 0
            r3.a(r5, r0)
            int r5 = r4.length
            r1 = 0
        L11:
            if (r1 >= r5) goto L1b
            short r2 = r4[r1]
            r3.a(r2, r0)
            int r1 = r1 + 1
            goto L11
        L1b:
            return
    }

    private void a(boolean[] r4, int r5) {
            r3 = this;
            r0 = 8
            r3.a(r0)
            r0 = 9
            r3.b(r0, r5)
            int r5 = r4.length
            r0 = 0
            r3.a(r5, r0)
            int r5 = r4.length
            r1 = 0
        L11:
            if (r1 >= r5) goto L1b
            boolean r2 = r4[r1]
            r3.a(r2, r0)
            int r1 = r1 + 1
            goto L11
        L1b:
            return
    }

    private void b(byte r2, int r3) {
            r1 = this;
            r0 = 15
            if (r3 >= r0) goto Le
            int r3 = r3 << 4
            r2 = r2 | r3
            byte r2 = (byte) r2
            java.nio.ByteBuffer r3 = r1.a
            r3.put(r2)
            return
        Le:
            r0 = 256(0x100, float:3.59E-43)
            if (r3 >= r0) goto L21
            r2 = r2 | 240(0xf0, float:3.36E-43)
            byte r2 = (byte) r2
            java.nio.ByteBuffer r0 = r1.a
            r0.put(r2)
            java.nio.ByteBuffer r2 = r1.a
            byte r3 = (byte) r3
            r2.put(r3)
            return
        L21:
            com.tencent.bugly.proguard.j r2 = new com.tencent.bugly.proguard.j
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "tag is too large: "
            java.lang.String r3 = r0.concat(r3)
            r2.<init>(r3)
            throw r2
    }

    public final int a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            r1 = 0
            return r1
    }

    public final void a(byte r2, int r3) {
            r1 = this;
            r0 = 3
            r1.a(r0)
            if (r2 != 0) goto Lc
            r2 = 12
            r1.b(r2, r3)
            return
        Lc:
            r0 = 0
            r1.b(r0, r3)
            java.nio.ByteBuffer r3 = r1.a
            r3.put(r2)
            return
    }

    public final void a(int r2, int r3) {
            r1 = this;
            r0 = 6
            r1.a(r0)
            r0 = -32768(0xffffffffffff8000, float:NaN)
            if (r2 < r0) goto L11
            r0 = 32767(0x7fff, float:4.5916E-41)
            if (r2 > r0) goto L11
            short r2 = (short) r2
            r1.a(r2, r3)
            return
        L11:
            r0 = 2
            r1.b(r0, r3)
            java.nio.ByteBuffer r3 = r1.a
            r3.putInt(r2)
            return
    }

    public final void a(long r4, int r6) {
            r3 = this;
            r0 = 10
            r3.a(r0)
            r0 = -2147483648(0xffffffff80000000, double:NaN)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L18
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 > 0) goto L18
            int r5 = (int) r4
            r3.a(r5, r6)
            return
        L18:
            r0 = 3
            r3.b(r0, r6)
            java.nio.ByteBuffer r6 = r3.a
            r6.putLong(r4)
            return
    }

    public final void a(com.tencent.bugly.proguard.m r3, int r4) {
            r2 = this;
            r0 = 2
            r2.a(r0)
            r1 = 10
            r2.b(r1, r4)
            r3.a(r2)
            r2.a(r0)
            r3 = 11
            r4 = 0
            r2.b(r3, r4)
            return
    }

    public final void a(java.lang.Object r3, int r4) {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.Byte
            if (r0 == 0) goto Le
            java.lang.Byte r3 = (java.lang.Byte) r3
            byte r3 = r3.byteValue()
            r2.a(r3, r4)
            return
        Le:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L1c
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            r2.a(r3, r4)
            return
        L1c:
            boolean r0 = r3 instanceof java.lang.Short
            if (r0 == 0) goto L2a
            java.lang.Short r3 = (java.lang.Short) r3
            short r3 = r3.shortValue()
            r2.a(r3, r4)
            return
        L2a:
            boolean r0 = r3 instanceof java.lang.Integer
            if (r0 == 0) goto L38
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r2.a(r3, r4)
            return
        L38:
            boolean r0 = r3 instanceof java.lang.Long
            if (r0 == 0) goto L46
            java.lang.Long r3 = (java.lang.Long) r3
            long r0 = r3.longValue()
            r2.a(r0, r4)
            return
        L46:
            boolean r0 = r3 instanceof java.lang.Float
            if (r0 == 0) goto L54
            java.lang.Float r3 = (java.lang.Float) r3
            float r3 = r3.floatValue()
            r2.a(r3, r4)
            return
        L54:
            boolean r0 = r3 instanceof java.lang.Double
            if (r0 == 0) goto L62
            java.lang.Double r3 = (java.lang.Double) r3
            double r0 = r3.doubleValue()
            r2.a(r0, r4)
            return
        L62:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L6c
            java.lang.String r3 = (java.lang.String) r3
            r2.a(r3, r4)
            return
        L6c:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L76
            java.util.Map r3 = (java.util.Map) r3
            r2.a(r3, r4)
            return
        L76:
            boolean r0 = r3 instanceof java.util.List
            if (r0 == 0) goto L80
            java.util.List r3 = (java.util.List) r3
            r2.a(r3, r4)
            return
        L80:
            boolean r0 = r3 instanceof com.tencent.bugly.proguard.m
            if (r0 == 0) goto L8a
            com.tencent.bugly.proguard.m r3 = (com.tencent.bugly.proguard.m) r3
            r2.a(r3, r4)
            return
        L8a:
            boolean r0 = r3 instanceof byte[]
            if (r0 == 0) goto L96
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            r2.a(r3, r4)
            return
        L96:
            boolean r0 = r3 instanceof boolean[]
            if (r0 == 0) goto La2
            boolean[] r3 = (boolean[]) r3
            boolean[] r3 = (boolean[]) r3
            r2.a(r3, r4)
            return
        La2:
            boolean r0 = r3 instanceof short[]
            if (r0 == 0) goto Lae
            short[] r3 = (short[]) r3
            short[] r3 = (short[]) r3
            r2.a(r3, r4)
            return
        Lae:
            boolean r0 = r3 instanceof int[]
            if (r0 == 0) goto Lba
            int[] r3 = (int[]) r3
            int[] r3 = (int[]) r3
            r2.a(r3, r4)
            return
        Lba:
            boolean r0 = r3 instanceof long[]
            if (r0 == 0) goto Lc6
            long[] r3 = (long[]) r3
            long[] r3 = (long[]) r3
            r2.a(r3, r4)
            return
        Lc6:
            boolean r0 = r3 instanceof float[]
            if (r0 == 0) goto Ld2
            float[] r3 = (float[]) r3
            float[] r3 = (float[]) r3
            r2.a(r3, r4)
            return
        Ld2:
            boolean r0 = r3 instanceof double[]
            if (r0 == 0) goto Lde
            double[] r3 = (double[]) r3
            double[] r3 = (double[]) r3
            r2.a(r3, r4)
            return
        Lde:
            java.lang.Class r0 = r3.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto Lf0
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            r2.a(r3, r4)
            return
        Lf0:
            boolean r0 = r3 instanceof java.util.Collection
            if (r0 == 0) goto Lfa
            java.util.Collection r3 = (java.util.Collection) r3
            r2.a(r3, r4)
            return
        Lfa:
            com.tencent.bugly.proguard.j r4 = new com.tencent.bugly.proguard.j
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "write object error: unsupport type. "
            r0.<init>(r1)
            java.lang.Class r3 = r3.getClass()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    public final void a(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.String r0 = r2.b     // Catch: java.io.UnsupportedEncodingException -> L7
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            goto Lb
        L7:
            byte[] r3 = r3.getBytes()
        Lb:
            int r0 = r3.length
            int r0 = r0 + 10
            r2.a(r0)
            int r0 = r3.length
            r1 = 255(0xff, float:3.57E-43)
            if (r0 <= r1) goto L26
            r0 = 7
            r2.b(r0, r4)
            java.nio.ByteBuffer r4 = r2.a
            int r0 = r3.length
            r4.putInt(r0)
            java.nio.ByteBuffer r4 = r2.a
            r4.put(r3)
            return
        L26:
            r0 = 6
            r2.b(r0, r4)
            java.nio.ByteBuffer r4 = r2.a
            int r0 = r3.length
            byte r0 = (byte) r0
            r4.put(r0)
            java.nio.ByteBuffer r4 = r2.a
            r4.put(r3)
            return
    }

    public final <T> void a(java.util.Collection<T> r2, int r3) {
            r1 = this;
            r0 = 8
            r1.a(r0)
            r0 = 9
            r1.b(r0, r3)
            r3 = 0
            if (r2 != 0) goto Lf
            r0 = 0
            goto L13
        Lf:
            int r0 = r2.size()
        L13:
            r1.a(r0, r3)
            if (r2 == 0) goto L2a
            java.util.Iterator r2 = r2.iterator()
        L1c:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L2a
            java.lang.Object r0 = r2.next()
            r1.a(r0, r3)
            goto L1c
        L2a:
            return
    }

    public final <K, V> void a(java.util.Map<K, V> r3, int r4) {
            r2 = this;
            r0 = 8
            r2.a(r0)
            r2.b(r0, r4)
            r4 = 0
            if (r3 != 0) goto Ld
            r0 = 0
            goto L11
        Ld:
            int r0 = r3.size()
        L11:
            r2.a(r0, r4)
            if (r3 == 0) goto L3a
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L1e:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L3a
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            r2.a(r1, r4)
            java.lang.Object r0 = r0.getValue()
            r1 = 1
            r2.a(r0, r1)
            goto L1e
        L3a:
            return
    }

    public final void a(short r2, int r3) {
            r1 = this;
            r0 = 4
            r1.a(r0)
            r0 = -128(0xffffffffffffff80, float:NaN)
            if (r2 < r0) goto L11
            r0 = 127(0x7f, float:1.78E-43)
            if (r2 > r0) goto L11
            byte r2 = (byte) r2
            r1.a(r2, r3)
            return
        L11:
            r0 = 1
            r1.b(r0, r3)
            java.nio.ByteBuffer r3 = r1.a
            r3.putShort(r2)
            return
    }

    public final void a(boolean r1, int r2) {
            r0 = this;
            byte r1 = (byte) r1
            r0.a(r1, r2)
            return
    }

    public final void a(byte[] r2, int r3) {
            r1 = this;
            int r0 = r2.length
            int r0 = r0 + 8
            r1.a(r0)
            r0 = 13
            r1.b(r0, r3)
            r3 = 0
            r1.b(r3, r3)
            int r0 = r2.length
            r1.a(r0, r3)
            java.nio.ByteBuffer r3 = r1.a
            r3.put(r2)
            return
    }
}

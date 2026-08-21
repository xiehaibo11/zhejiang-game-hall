package com.tencent.bugly.proguard;

public final class i {
    private java.lang.StringBuilder a;
    private int b;

    public i(java.lang.StringBuilder r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.a = r2
            r1.b = r3
            return
    }

    private com.tencent.bugly.proguard.i a(char r1, java.lang.String r2) {
            r0 = this;
            r0.a(r2)
            java.lang.StringBuilder r2 = r0.a
            r2.append(r1)
            r1 = 10
            r2.append(r1)
            return r0
    }

    private com.tencent.bugly.proguard.i a(double r1, java.lang.String r3) {
            r0 = this;
            r0.a(r3)
            java.lang.StringBuilder r3 = r0.a
            r3.append(r1)
            r1 = 10
            r3.append(r1)
            return r0
    }

    private com.tencent.bugly.proguard.i a(float r1, java.lang.String r2) {
            r0 = this;
            r0.a(r2)
            java.lang.StringBuilder r2 = r0.a
            r2.append(r1)
            r1 = 10
            r2.append(r1)
            return r0
    }

    private <T> com.tencent.bugly.proguard.i a(T r3, java.lang.String r4) {
            r2 = this;
            if (r3 != 0) goto Lb
            java.lang.StringBuilder r3 = r2.a
            java.lang.String r4 = "null\n"
            r3.append(r4)
            goto L104
        Lb:
            boolean r0 = r3 instanceof java.lang.Byte
            if (r0 == 0) goto L1a
            java.lang.Byte r3 = (java.lang.Byte) r3
            byte r3 = r3.byteValue()
            r2.a(r3, r4)
            goto L104
        L1a:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L29
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            r2.a(r3, r4)
            goto L104
        L29:
            boolean r0 = r3 instanceof java.lang.Short
            if (r0 == 0) goto L38
            java.lang.Short r3 = (java.lang.Short) r3
            short r3 = r3.shortValue()
            r2.a(r3, r4)
            goto L104
        L38:
            boolean r0 = r3 instanceof java.lang.Integer
            if (r0 == 0) goto L47
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r2.a(r3, r4)
            goto L104
        L47:
            boolean r0 = r3 instanceof java.lang.Long
            if (r0 == 0) goto L56
            java.lang.Long r3 = (java.lang.Long) r3
            long r0 = r3.longValue()
            r2.a(r0, r4)
            goto L104
        L56:
            boolean r0 = r3 instanceof java.lang.Float
            if (r0 == 0) goto L65
            java.lang.Float r3 = (java.lang.Float) r3
            float r3 = r3.floatValue()
            r2.a(r3, r4)
            goto L104
        L65:
            boolean r0 = r3 instanceof java.lang.Double
            if (r0 == 0) goto L74
            java.lang.Double r3 = (java.lang.Double) r3
            double r0 = r3.doubleValue()
            r2.a(r0, r4)
            goto L104
        L74:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L7f
            java.lang.String r3 = (java.lang.String) r3
            r2.a(r3, r4)
            goto L104
        L7f:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L8a
            java.util.Map r3 = (java.util.Map) r3
            r2.a(r3, r4)
            goto L104
        L8a:
            boolean r0 = r3 instanceof java.util.List
            if (r0 == 0) goto L95
            java.util.List r3 = (java.util.List) r3
            r2.a(r3, r4)
            goto L104
        L95:
            boolean r0 = r3 instanceof com.tencent.bugly.proguard.m
            if (r0 == 0) goto L9f
            com.tencent.bugly.proguard.m r3 = (com.tencent.bugly.proguard.m) r3
            r2.a(r3, r4)
            goto L104
        L9f:
            boolean r0 = r3 instanceof byte[]
            if (r0 == 0) goto Lab
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            r2.a(r3, r4)
            goto L104
        Lab:
            boolean r0 = r3 instanceof boolean[]
            if (r0 == 0) goto Lb7
            boolean[] r3 = (boolean[]) r3
            boolean[] r3 = (boolean[]) r3
            r2.a(r3, r4)
            goto L104
        Lb7:
            boolean r0 = r3 instanceof short[]
            if (r0 == 0) goto Lc3
            short[] r3 = (short[]) r3
            short[] r3 = (short[]) r3
            r2.a(r3, r4)
            goto L104
        Lc3:
            boolean r0 = r3 instanceof int[]
            if (r0 == 0) goto Lcf
            int[] r3 = (int[]) r3
            int[] r3 = (int[]) r3
            r2.a(r3, r4)
            goto L104
        Lcf:
            boolean r0 = r3 instanceof long[]
            if (r0 == 0) goto Ldb
            long[] r3 = (long[]) r3
            long[] r3 = (long[]) r3
            r2.a(r3, r4)
            goto L104
        Ldb:
            boolean r0 = r3 instanceof float[]
            if (r0 == 0) goto Le7
            float[] r3 = (float[]) r3
            float[] r3 = (float[]) r3
            r2.a(r3, r4)
            goto L104
        Le7:
            boolean r0 = r3 instanceof double[]
            if (r0 == 0) goto Lf3
            double[] r3 = (double[]) r3
            double[] r3 = (double[]) r3
            r2.a(r3, r4)
            goto L104
        Lf3:
            java.lang.Class r0 = r3.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L105
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            r2.a(r3, r4)
        L104:
            return r2
        L105:
            com.tencent.bugly.proguard.j r3 = new com.tencent.bugly.proguard.j
            java.lang.String r4 = "write object error: unsupport type."
            r3.<init>(r4)
            throw r3
    }

    private <T> com.tencent.bugly.proguard.i a(java.util.Collection<T> r1, java.lang.String r2) {
            r0 = this;
            if (r1 != 0) goto Ld
            r0.a(r2)
            java.lang.StringBuilder r1 = r0.a
            java.lang.String r2 = "null\t"
            r1.append(r2)
            return r0
        Ld:
            java.lang.Object[] r1 = r1.toArray()
            com.tencent.bugly.proguard.i r1 = r0.a(r1, r2)
            return r1
    }

    private com.tencent.bugly.proguard.i a(double[] r6, java.lang.String r7) {
            r5 = this;
            r5.a(r7)
            if (r6 != 0) goto Ld
            java.lang.StringBuilder r6 = r5.a
            java.lang.String r7 = "null\n"
            r6.append(r7)
            return r5
        Ld:
            int r7 = r6.length
            if (r7 != 0) goto L1c
            java.lang.StringBuilder r7 = r5.a
            int r6 = r6.length
            r7.append(r6)
            java.lang.String r6 = ", []\n"
            r7.append(r6)
            return r5
        L1c:
            java.lang.StringBuilder r7 = r5.a
            int r0 = r6.length
            r7.append(r0)
            java.lang.String r0 = ", [\n"
            r7.append(r0)
            com.tencent.bugly.proguard.i r7 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r5.a
            int r1 = r5.b
            int r1 = r1 + 1
            r7.<init>(r0, r1)
            int r0 = r6.length
            r1 = 0
        L34:
            r2 = 0
            if (r1 >= r0) goto L3f
            r3 = r6[r1]
            r7.a(r3, r2)
            int r1 = r1 + 1
            goto L34
        L3f:
            r6 = 93
            r5.a(r6, r2)
            return r5
    }

    private com.tencent.bugly.proguard.i a(float[] r5, java.lang.String r6) {
            r4 = this;
            r4.a(r6)
            if (r5 != 0) goto Ld
            java.lang.StringBuilder r5 = r4.a
            java.lang.String r6 = "null\n"
            r5.append(r6)
            return r4
        Ld:
            int r6 = r5.length
            if (r6 != 0) goto L1c
            java.lang.StringBuilder r6 = r4.a
            int r5 = r5.length
            r6.append(r5)
            java.lang.String r5 = ", []\n"
            r6.append(r5)
            return r4
        L1c:
            java.lang.StringBuilder r6 = r4.a
            int r0 = r5.length
            r6.append(r0)
            java.lang.String r0 = ", [\n"
            r6.append(r0)
            com.tencent.bugly.proguard.i r6 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r4.a
            int r1 = r4.b
            int r1 = r1 + 1
            r6.<init>(r0, r1)
            int r0 = r5.length
            r1 = 0
        L34:
            r2 = 0
            if (r1 >= r0) goto L3f
            r3 = r5[r1]
            r6.a(r3, r2)
            int r1 = r1 + 1
            goto L34
        L3f:
            r5 = 93
            r4.a(r5, r2)
            return r4
    }

    private com.tencent.bugly.proguard.i a(int[] r5, java.lang.String r6) {
            r4 = this;
            r4.a(r6)
            if (r5 != 0) goto Ld
            java.lang.StringBuilder r5 = r4.a
            java.lang.String r6 = "null\n"
            r5.append(r6)
            return r4
        Ld:
            int r6 = r5.length
            if (r6 != 0) goto L1c
            java.lang.StringBuilder r6 = r4.a
            int r5 = r5.length
            r6.append(r5)
            java.lang.String r5 = ", []\n"
            r6.append(r5)
            return r4
        L1c:
            java.lang.StringBuilder r6 = r4.a
            int r0 = r5.length
            r6.append(r0)
            java.lang.String r0 = ", [\n"
            r6.append(r0)
            com.tencent.bugly.proguard.i r6 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r4.a
            int r1 = r4.b
            int r1 = r1 + 1
            r6.<init>(r0, r1)
            int r0 = r5.length
            r1 = 0
        L34:
            r2 = 0
            if (r1 >= r0) goto L3f
            r3 = r5[r1]
            r6.a(r3, r2)
            int r1 = r1 + 1
            goto L34
        L3f:
            r5 = 93
            r4.a(r5, r2)
            return r4
    }

    private com.tencent.bugly.proguard.i a(long[] r6, java.lang.String r7) {
            r5 = this;
            r5.a(r7)
            if (r6 != 0) goto Ld
            java.lang.StringBuilder r6 = r5.a
            java.lang.String r7 = "null\n"
            r6.append(r7)
            return r5
        Ld:
            int r7 = r6.length
            if (r7 != 0) goto L1c
            java.lang.StringBuilder r7 = r5.a
            int r6 = r6.length
            r7.append(r6)
            java.lang.String r6 = ", []\n"
            r7.append(r6)
            return r5
        L1c:
            java.lang.StringBuilder r7 = r5.a
            int r0 = r6.length
            r7.append(r0)
            java.lang.String r0 = ", [\n"
            r7.append(r0)
            com.tencent.bugly.proguard.i r7 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r5.a
            int r1 = r5.b
            int r1 = r1 + 1
            r7.<init>(r0, r1)
            int r0 = r6.length
            r1 = 0
        L34:
            r2 = 0
            if (r1 >= r0) goto L3f
            r3 = r6[r1]
            r7.a(r3, r2)
            int r1 = r1 + 1
            goto L34
        L3f:
            r6 = 93
            r5.a(r6, r2)
            return r5
    }

    private <T> com.tencent.bugly.proguard.i a(T[] r5, java.lang.String r6) {
            r4 = this;
            r4.a(r6)
            if (r5 != 0) goto Ld
            java.lang.StringBuilder r5 = r4.a
            java.lang.String r6 = "null\n"
            r5.append(r6)
            return r4
        Ld:
            int r6 = r5.length
            if (r6 != 0) goto L1c
            java.lang.StringBuilder r6 = r4.a
            int r5 = r5.length
            r6.append(r5)
            java.lang.String r5 = ", []\n"
            r6.append(r5)
            return r4
        L1c:
            java.lang.StringBuilder r6 = r4.a
            int r0 = r5.length
            r6.append(r0)
            java.lang.String r0 = ", [\n"
            r6.append(r0)
            com.tencent.bugly.proguard.i r6 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r4.a
            int r1 = r4.b
            int r1 = r1 + 1
            r6.<init>(r0, r1)
            int r0 = r5.length
            r1 = 0
        L34:
            r2 = 0
            if (r1 >= r0) goto L3f
            r3 = r5[r1]
            r6.a(r3, r2)
            int r1 = r1 + 1
            goto L34
        L3f:
            r5 = 93
            r4.a(r5, r2)
            return r4
    }

    private com.tencent.bugly.proguard.i a(short[] r5, java.lang.String r6) {
            r4 = this;
            r4.a(r6)
            if (r5 != 0) goto Ld
            java.lang.StringBuilder r5 = r4.a
            java.lang.String r6 = "null\n"
            r5.append(r6)
            return r4
        Ld:
            int r6 = r5.length
            if (r6 != 0) goto L1c
            java.lang.StringBuilder r6 = r4.a
            int r5 = r5.length
            r6.append(r5)
            java.lang.String r5 = ", []\n"
            r6.append(r5)
            return r4
        L1c:
            java.lang.StringBuilder r6 = r4.a
            int r0 = r5.length
            r6.append(r0)
            java.lang.String r0 = ", [\n"
            r6.append(r0)
            com.tencent.bugly.proguard.i r6 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r4.a
            int r1 = r4.b
            int r1 = r1 + 1
            r6.<init>(r0, r1)
            int r0 = r5.length
            r1 = 0
        L34:
            r2 = 0
            if (r1 >= r0) goto L3f
            short r3 = r5[r1]
            r6.a(r3, r2)
            int r1 = r1 + 1
            goto L34
        L3f:
            r5 = 93
            r4.a(r5, r2)
            return r4
    }

    private void a(java.lang.String r4) {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r3.b
            if (r0 >= r1) goto Lf
            java.lang.StringBuilder r1 = r3.a
            r2 = 9
            r1.append(r2)
            int r0 = r0 + 1
            goto L1
        Lf:
            if (r4 == 0) goto L1b
            java.lang.StringBuilder r0 = r3.a
            r0.append(r4)
            java.lang.String r4 = ": "
            r0.append(r4)
        L1b:
            return
    }

    public final com.tencent.bugly.proguard.i a(byte r1, java.lang.String r2) {
            r0 = this;
            r0.a(r2)
            java.lang.StringBuilder r2 = r0.a
            r2.append(r1)
            r1 = 10
            r2.append(r1)
            return r0
    }

    public final com.tencent.bugly.proguard.i a(int r1, java.lang.String r2) {
            r0 = this;
            r0.a(r2)
            java.lang.StringBuilder r2 = r0.a
            r2.append(r1)
            r1 = 10
            r2.append(r1)
            return r0
    }

    public final com.tencent.bugly.proguard.i a(long r1, java.lang.String r3) {
            r0 = this;
            r0.a(r3)
            java.lang.StringBuilder r3 = r0.a
            r3.append(r1)
            r1 = 10
            r3.append(r1)
            return r0
    }

    public final com.tencent.bugly.proguard.i a(com.tencent.bugly.proguard.m r2, java.lang.String r3) {
            r1 = this;
            r0 = 123(0x7b, float:1.72E-43)
            r1.a(r0, r3)
            if (r2 != 0) goto L14
            java.lang.StringBuilder r2 = r1.a
            r3 = 9
            r2.append(r3)
            java.lang.String r3 = "null"
            r2.append(r3)
            goto L1d
        L14:
            java.lang.StringBuilder r3 = r1.a
            int r0 = r1.b
            int r0 = r0 + 1
            r2.a(r3, r0)
        L1d:
            r2 = 125(0x7d, float:1.75E-43)
            r3 = 0
            r1.a(r2, r3)
            return r1
    }

    public final com.tencent.bugly.proguard.i a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.a(r2)
            if (r1 != 0) goto Ld
            java.lang.StringBuilder r1 = r0.a
            java.lang.String r2 = "null\n"
            r1.append(r2)
            goto L17
        Ld:
            java.lang.StringBuilder r2 = r0.a
            r2.append(r1)
            r1 = 10
            r2.append(r1)
        L17:
            return r0
    }

    public final <K, V> com.tencent.bugly.proguard.i a(java.util.Map<K, V> r5, java.lang.String r6) {
            r4 = this;
            r4.a(r6)
            if (r5 != 0) goto Ld
            java.lang.StringBuilder r5 = r4.a
            java.lang.String r6 = "null\n"
            r5.append(r6)
            return r4
        Ld:
            boolean r6 = r5.isEmpty()
            if (r6 == 0) goto L22
            java.lang.StringBuilder r6 = r4.a
            int r5 = r5.size()
            r6.append(r5)
            java.lang.String r5 = ", {}\n"
            r6.append(r5)
            return r4
        L22:
            java.lang.StringBuilder r6 = r4.a
            int r0 = r5.size()
            r6.append(r0)
            java.lang.String r0 = ", {\n"
            r6.append(r0)
            com.tencent.bugly.proguard.i r6 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r4.a
            int r1 = r4.b
            int r1 = r1 + 1
            r6.<init>(r0, r1)
            com.tencent.bugly.proguard.i r0 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r1 = r4.a
            int r2 = r4.b
            int r2 = r2 + 2
            r0.<init>(r1, r2)
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L4e:
            boolean r1 = r5.hasNext()
            r2 = 0
            if (r1 == 0) goto L74
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            r3 = 40
            r6.a(r3, r2)
            java.lang.Object r3 = r1.getKey()
            r0.a(r3, r2)
            java.lang.Object r1 = r1.getValue()
            r0.a(r1, r2)
            r1 = 41
            r6.a(r1, r2)
            goto L4e
        L74:
            r5 = 125(0x7d, float:1.75E-43)
            r4.a(r5, r2)
            return r4
    }

    public final com.tencent.bugly.proguard.i a(short r1, java.lang.String r2) {
            r0 = this;
            r0.a(r2)
            java.lang.StringBuilder r2 = r0.a
            r2.append(r1)
            r1 = 10
            r2.append(r1)
            return r0
    }

    public final com.tencent.bugly.proguard.i a(boolean r1, java.lang.String r2) {
            r0 = this;
            r0.a(r2)
            java.lang.StringBuilder r2 = r0.a
            if (r1 == 0) goto La
            r1 = 84
            goto Lc
        La:
            r1 = 70
        Lc:
            r2.append(r1)
            r1 = 10
            r2.append(r1)
            return r0
    }

    public final com.tencent.bugly.proguard.i a(byte[] r5, java.lang.String r6) {
            r4 = this;
            r4.a(r6)
            if (r5 != 0) goto Ld
            java.lang.StringBuilder r5 = r4.a
            java.lang.String r6 = "null\n"
            r5.append(r6)
            return r4
        Ld:
            int r6 = r5.length
            if (r6 != 0) goto L1c
            java.lang.StringBuilder r6 = r4.a
            int r5 = r5.length
            r6.append(r5)
            java.lang.String r5 = ", []\n"
            r6.append(r5)
            return r4
        L1c:
            java.lang.StringBuilder r6 = r4.a
            int r0 = r5.length
            r6.append(r0)
            java.lang.String r0 = ", [\n"
            r6.append(r0)
            com.tencent.bugly.proguard.i r6 = new com.tencent.bugly.proguard.i
            java.lang.StringBuilder r0 = r4.a
            int r1 = r4.b
            int r1 = r1 + 1
            r6.<init>(r0, r1)
            int r0 = r5.length
            r1 = 0
        L34:
            r2 = 0
            if (r1 >= r0) goto L3f
            r3 = r5[r1]
            r6.a(r3, r2)
            int r1 = r1 + 1
            goto L34
        L3f:
            r5 = 93
            r4.a(r5, r2)
            return r4
    }
}

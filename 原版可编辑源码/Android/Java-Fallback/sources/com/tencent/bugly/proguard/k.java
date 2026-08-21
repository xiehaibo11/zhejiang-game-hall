package com.tencent.bugly.proguard;

public final class k {
    protected java.lang.String a;
    private java.nio.ByteBuffer b;

    public static class a {
        public byte a;
        public int b;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public k() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "GBK"
            r1.a = r0
            return
    }

    public k(byte[] r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "GBK"
            r1.a = r0
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            r1.b = r2
            return
    }

    public k(byte[] r1, byte r2) {
            r0 = this;
            r0.<init>()
            java.lang.String r2 = "GBK"
            r0.a = r2
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r1)
            r0.b = r1
            java.nio.ByteBuffer r1 = r0.b
            r2 = 4
            r1.position(r2)
            return
    }

    private double a(double r1, int r3, boolean r4) {
            r0 = this;
            boolean r3 = r0.b(r3)
            if (r3 == 0) goto L34
            com.tencent.bugly.proguard.k$a r1 = new com.tencent.bugly.proguard.k$a
            r1.<init>()
            r0.a(r1)
            byte r1 = r1.a
            r2 = 4
            if (r1 == r2) goto L2c
            r2 = 5
            if (r1 == r2) goto L25
            r2 = 12
            if (r1 != r2) goto L1d
            r1 = 0
            goto L36
        L1d:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "type mismatch."
            r1.<init>(r2)
            throw r1
        L25:
            java.nio.ByteBuffer r1 = r0.b
            double r1 = r1.getDouble()
            goto L36
        L2c:
            java.nio.ByteBuffer r1 = r0.b
            float r1 = r1.getFloat()
            double r1 = (double) r1
            goto L36
        L34:
            if (r4 != 0) goto L37
        L36:
            return r1
        L37:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "require field not exist."
            r1.<init>(r2)
            throw r1
    }

    private float a(float r1, int r2, boolean r3) {
            r0 = this;
            boolean r2 = r0.b(r2)
            if (r2 == 0) goto L28
            com.tencent.bugly.proguard.k$a r1 = new com.tencent.bugly.proguard.k$a
            r1.<init>()
            r0.a(r1)
            byte r1 = r1.a
            r2 = 4
            if (r1 == r2) goto L21
            r2 = 12
            if (r1 != r2) goto L19
            r1 = 0
            goto L2a
        L19:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "type mismatch."
            r1.<init>(r2)
            throw r1
        L21:
            java.nio.ByteBuffer r1 = r0.b
            float r1 = r1.getFloat()
            goto L2a
        L28:
            if (r3 != 0) goto L2b
        L2a:
            return r1
        L2b:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "require field not exist."
            r1.<init>(r2)
            throw r1
    }

    private static int a(com.tencent.bugly.proguard.k.a r2, java.nio.ByteBuffer r3) {
            byte r0 = r3.get()
            r1 = r0 & 15
            byte r1 = (byte) r1
            r2.a = r1
            r0 = r0 & 240(0xf0, float:3.36E-43)
            int r0 = r0 >> 4
            r2.b = r0
            int r0 = r2.b
            r1 = 15
            if (r0 != r1) goto L1d
            byte r3 = r3.get()
            r2.b = r3
            r2 = 2
            return r2
        L1d:
            r2 = 1
            return r2
    }

    private <T> java.util.List<T> a(java.util.List<T> r2, int r3, boolean r4) {
            r1 = this;
            if (r2 == 0) goto L27
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L9
            goto L27
        L9:
            r0 = 0
            java.lang.Object r2 = r2.get(r0)
            java.lang.Object[] r2 = r1.b(r2, r3, r4)
            if (r2 != 0) goto L16
            r2 = 0
            return r2
        L16:
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
        L1b:
            int r4 = r2.length
            if (r0 >= r4) goto L26
            r4 = r2[r0]
            r3.add(r4)
            int r0 = r0 + 1
            goto L1b
        L26:
            return r3
        L27:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            return r2
    }

    private <K, V> java.util.Map<K, V> a(java.util.Map<K, V> r6, java.util.Map<K, V> r7, int r8, boolean r9) {
            r5 = this;
            if (r7 == 0) goto L6f
            boolean r0 = r7.isEmpty()
            if (r0 == 0) goto L9
            goto L6f
        L9:
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
            java.lang.Object r7 = r7.next()
            java.util.Map$Entry r7 = (java.util.Map.Entry) r7
            java.lang.Object r0 = r7.getKey()
            java.lang.Object r7 = r7.getValue()
            boolean r8 = r5.b(r8)
            if (r8 == 0) goto L64
            com.tencent.bugly.proguard.k$a r8 = new com.tencent.bugly.proguard.k$a
            r8.<init>()
            r5.a(r8)
            byte r8 = r8.a
            r9 = 8
            if (r8 != r9) goto L5c
            r8 = 0
            r9 = 1
            int r1 = r5.a(r8, r8, r9)
            if (r1 < 0) goto L4c
            r2 = 0
        L3c:
            if (r2 >= r1) goto L66
            java.lang.Object r3 = r5.a(r0, r8, r9)
            java.lang.Object r4 = r5.a(r7, r9, r9)
            r6.put(r3, r4)
            int r2 = r2 + 1
            goto L3c
        L4c:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = java.lang.String.valueOf(r1)
            java.lang.String r8 = "size invalid: "
            java.lang.String r7 = r8.concat(r7)
            r6.<init>(r7)
            throw r6
        L5c:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = "type mismatch."
            r6.<init>(r7)
            throw r6
        L64:
            if (r9 != 0) goto L67
        L66:
            return r6
        L67:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = "require field not exist."
            r6.<init>(r7)
            throw r6
        L6f:
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            return r6
    }

    private void a() {
            r3 = this;
            com.tencent.bugly.proguard.k$a r0 = new com.tencent.bugly.proguard.k$a
            r0.<init>()
        L5:
            r3.a(r0)
            byte r1 = r0.a
            r3.a(r1)
            byte r1 = r0.a
            r2 = 11
            if (r1 != r2) goto L5
            return
    }

    private void a(byte r6) {
            r5 = this;
            r0 = 8
            r1 = 4
            r2 = 2
            r3 = 1
            r4 = 0
            switch(r6) {
                case 0: goto L90;
                case 1: goto L8c;
                case 2: goto L88;
                case 3: goto L84;
                case 4: goto L80;
                case 5: goto L7c;
                case 6: goto L6e;
                case 7: goto L64;
                case 8: goto L55;
                case 9: goto L48;
                case 10: goto L44;
                case 11: goto L43;
                case 12: goto L43;
                case 13: goto L11;
                default: goto L9;
            }
        L9:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r0 = "invalid type."
            r6.<init>(r0)
            throw r6
        L11:
            com.tencent.bugly.proguard.k$a r0 = new com.tencent.bugly.proguard.k$a
            r0.<init>()
            r5.a(r0)
            byte r1 = r0.a
            if (r1 != 0) goto L25
            int r6 = r5.a(r4, r4, r3)
            r5.a(r6)
            return
        L25:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "skipField with invalid type, type value: "
            r2.<init>(r3)
            r2.append(r6)
            java.lang.String r6 = ", "
            r2.append(r6)
            byte r6 = r0.a
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            r1.<init>(r6)
            throw r1
        L43:
            return
        L44:
            r5.a()
            return
        L48:
            int r6 = r5.a(r4, r4, r3)
        L4c:
            if (r4 >= r6) goto L54
            r5.b()
            int r4 = r4 + 1
            goto L4c
        L54:
            return
        L55:
            int r6 = r5.a(r4, r4, r3)
        L59:
            int r0 = r6 * 2
            if (r4 >= r0) goto L63
            r5.b()
            int r4 = r4 + 1
            goto L59
        L63:
            return
        L64:
            java.nio.ByteBuffer r6 = r5.b
            int r6 = r6.getInt()
            r5.a(r6)
            return
        L6e:
            java.nio.ByteBuffer r6 = r5.b
            byte r6 = r6.get()
            if (r6 >= 0) goto L78
            int r6 = r6 + 256
        L78:
            r5.a(r6)
            return
        L7c:
            r5.a(r0)
            return
        L80:
            r5.a(r1)
            return
        L84:
            r5.a(r0)
            return
        L88:
            r5.a(r1)
            return
        L8c:
            r5.a(r2)
            return
        L90:
            r5.a(r3)
            return
    }

    private void a(int r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.b
            int r1 = r0.position()
            int r1 = r1 + r3
            r0.position(r1)
            return
    }

    private void a(com.tencent.bugly.proguard.k.a r2) {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.b
            a(r2, r0)
            return
    }

    private <T> T[] a(T[] r2, int r3, boolean r4) {
            r1 = this;
            if (r2 == 0) goto Ld
            int r0 = r2.length
            if (r0 == 0) goto Ld
            r0 = 0
            r2 = r2[r0]
            java.lang.Object[] r2 = r1.b(r2, r3, r4)
            return r2
        Ld:
            com.tencent.bugly.proguard.h r2 = new com.tencent.bugly.proguard.h
            java.lang.String r3 = "unable to get type of key and value."
            r2.<init>(r3)
            throw r2
    }

    private void b() {
            r1 = this;
            com.tencent.bugly.proguard.k$a r0 = new com.tencent.bugly.proguard.k$a
            r0.<init>()
            r1.a(r0)
            byte r0 = r0.a
            r1.a(r0)
            return
    }

    private boolean b(int r6) {
            r5 = this;
            r0 = 0
            com.tencent.bugly.proguard.k$a r1 = new com.tencent.bugly.proguard.k$a     // Catch: java.lang.Throwable -> L2a
            r1.<init>()     // Catch: java.lang.Throwable -> L2a
        L6:
            java.nio.ByteBuffer r2 = r5.b     // Catch: java.lang.Throwable -> L2a
            java.nio.ByteBuffer r2 = r2.duplicate()     // Catch: java.lang.Throwable -> L2a
            int r2 = a(r1, r2)     // Catch: java.lang.Throwable -> L2a
            int r3 = r1.b     // Catch: java.lang.Throwable -> L2a
            if (r6 <= r3) goto L24
            byte r3 = r1.a     // Catch: java.lang.Throwable -> L2a
            r4 = 11
            if (r3 != r4) goto L1b
            goto L24
        L1b:
            r5.a(r2)     // Catch: java.lang.Throwable -> L2a
            byte r2 = r1.a     // Catch: java.lang.Throwable -> L2a
            r5.a(r2)     // Catch: java.lang.Throwable -> L2a
            goto L6
        L24:
            int r1 = r1.b     // Catch: java.lang.Throwable -> L2a
            if (r6 != r1) goto L2a
            r6 = 1
            return r6
        L2a:
            return r0
    }

    private <T> T[] b(T r5, int r6, boolean r7) {
            r4 = this;
            boolean r6 = r4.b(r6)
            if (r6 == 0) goto L4d
            com.tencent.bugly.proguard.k$a r6 = new com.tencent.bugly.proguard.k$a
            r6.<init>()
            r4.a(r6)
            byte r6 = r6.a
            r7 = 9
            if (r6 != r7) goto L45
            r6 = 1
            r7 = 0
            int r0 = r4.a(r7, r7, r6)
            if (r0 < 0) goto L35
            java.lang.Class r1 = r5.getClass()
            java.lang.Object r1 = java.lang.reflect.Array.newInstance(r1, r0)
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            r2 = 0
        L29:
            if (r2 >= r0) goto L34
            java.lang.Object r3 = r4.a(r5, r7, r6)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L29
        L34:
            return r1
        L35:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r7 = "size invalid: "
            java.lang.String r6 = r7.concat(r6)
            r5.<init>(r6)
            throw r5
        L45:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "type mismatch."
            r5.<init>(r6)
            throw r5
        L4d:
            if (r7 != 0) goto L51
            r5 = 0
            return r5
        L51:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "require field not exist."
            r5.<init>(r6)
            throw r5
    }

    private boolean[] d(int r5, boolean r6) {
            r4 = this;
            boolean r5 = r4.b(r5)
            if (r5 == 0) goto L42
            com.tencent.bugly.proguard.k$a r5 = new com.tencent.bugly.proguard.k$a
            r5.<init>()
            r4.a(r5)
            byte r5 = r5.a
            r6 = 9
            if (r5 != r6) goto L3a
            r5 = 1
            r6 = 0
            int r0 = r4.a(r6, r6, r5)
            if (r0 < 0) goto L2a
            boolean[] r1 = new boolean[r0]
            r2 = 0
        L1f:
            if (r2 >= r0) goto L45
            boolean r3 = r4.a(r6, r5)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1f
        L2a:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "size invalid: "
            java.lang.String r6 = r0.concat(r6)
            r5.<init>(r6)
            throw r5
        L3a:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "type mismatch."
            r5.<init>(r6)
            throw r5
        L42:
            if (r6 != 0) goto L46
            r1 = 0
        L45:
            return r1
        L46:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "require field not exist."
            r5.<init>(r6)
            throw r5
    }

    private short[] e(int r5, boolean r6) {
            r4 = this;
            boolean r5 = r4.b(r5)
            if (r5 == 0) goto L44
            com.tencent.bugly.proguard.k$a r5 = new com.tencent.bugly.proguard.k$a
            r5.<init>()
            r4.a(r5)
            byte r5 = r5.a
            r6 = 9
            if (r5 != r6) goto L3c
            r5 = 1
            r6 = 0
            int r0 = r4.a(r6, r6, r5)
            if (r0 < 0) goto L2c
            short[] r1 = new short[r0]
            r2 = 0
        L1f:
            if (r2 >= r0) goto L47
            short r3 = r1[r6]
            short r3 = r4.a(r3, r6, r5)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1f
        L2c:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "size invalid: "
            java.lang.String r6 = r0.concat(r6)
            r5.<init>(r6)
            throw r5
        L3c:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "type mismatch."
            r5.<init>(r6)
            throw r5
        L44:
            if (r6 != 0) goto L48
            r1 = 0
        L47:
            return r1
        L48:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "require field not exist."
            r5.<init>(r6)
            throw r5
    }

    private int[] f(int r5, boolean r6) {
            r4 = this;
            boolean r5 = r4.b(r5)
            if (r5 == 0) goto L44
            com.tencent.bugly.proguard.k$a r5 = new com.tencent.bugly.proguard.k$a
            r5.<init>()
            r4.a(r5)
            byte r5 = r5.a
            r6 = 9
            if (r5 != r6) goto L3c
            r5 = 1
            r6 = 0
            int r0 = r4.a(r6, r6, r5)
            if (r0 < 0) goto L2c
            int[] r1 = new int[r0]
            r2 = 0
        L1f:
            if (r2 >= r0) goto L47
            r3 = r1[r6]
            int r3 = r4.a(r3, r6, r5)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1f
        L2c:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "size invalid: "
            java.lang.String r6 = r0.concat(r6)
            r5.<init>(r6)
            throw r5
        L3c:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "type mismatch."
            r5.<init>(r6)
            throw r5
        L44:
            if (r6 != 0) goto L48
            r1 = 0
        L47:
            return r1
        L48:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "require field not exist."
            r5.<init>(r6)
            throw r5
    }

    private long[] g(int r6, boolean r7) {
            r5 = this;
            boolean r6 = r5.b(r6)
            if (r6 == 0) goto L44
            com.tencent.bugly.proguard.k$a r6 = new com.tencent.bugly.proguard.k$a
            r6.<init>()
            r5.a(r6)
            byte r6 = r6.a
            r7 = 9
            if (r6 != r7) goto L3c
            r6 = 1
            r7 = 0
            int r0 = r5.a(r7, r7, r6)
            if (r0 < 0) goto L2c
            long[] r1 = new long[r0]
            r2 = 0
        L1f:
            if (r2 >= r0) goto L47
            r3 = r1[r7]
            long r3 = r5.a(r3, r7, r6)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1f
        L2c:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "size invalid: "
            java.lang.String r7 = r0.concat(r7)
            r6.<init>(r7)
            throw r6
        L3c:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = "type mismatch."
            r6.<init>(r7)
            throw r6
        L44:
            if (r7 != 0) goto L48
            r1 = 0
        L47:
            return r1
        L48:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = "require field not exist."
            r6.<init>(r7)
            throw r6
    }

    private float[] h(int r5, boolean r6) {
            r4 = this;
            boolean r5 = r4.b(r5)
            if (r5 == 0) goto L44
            com.tencent.bugly.proguard.k$a r5 = new com.tencent.bugly.proguard.k$a
            r5.<init>()
            r4.a(r5)
            byte r5 = r5.a
            r6 = 9
            if (r5 != r6) goto L3c
            r5 = 1
            r6 = 0
            int r0 = r4.a(r6, r6, r5)
            if (r0 < 0) goto L2c
            float[] r1 = new float[r0]
            r2 = 0
        L1f:
            if (r2 >= r0) goto L47
            r3 = r1[r6]
            float r3 = r4.a(r3, r6, r5)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1f
        L2c:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "size invalid: "
            java.lang.String r6 = r0.concat(r6)
            r5.<init>(r6)
            throw r5
        L3c:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "type mismatch."
            r5.<init>(r6)
            throw r5
        L44:
            if (r6 != 0) goto L48
            r1 = 0
        L47:
            return r1
        L48:
            com.tencent.bugly.proguard.h r5 = new com.tencent.bugly.proguard.h
            java.lang.String r6 = "require field not exist."
            r5.<init>(r6)
            throw r5
    }

    private double[] i(int r6, boolean r7) {
            r5 = this;
            boolean r6 = r5.b(r6)
            if (r6 == 0) goto L44
            com.tencent.bugly.proguard.k$a r6 = new com.tencent.bugly.proguard.k$a
            r6.<init>()
            r5.a(r6)
            byte r6 = r6.a
            r7 = 9
            if (r6 != r7) goto L3c
            r6 = 1
            r7 = 0
            int r0 = r5.a(r7, r7, r6)
            if (r0 < 0) goto L2c
            double[] r1 = new double[r0]
            r2 = 0
        L1f:
            if (r2 >= r0) goto L47
            r3 = r1[r7]
            double r3 = r5.a(r3, r7, r6)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1f
        L2c:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "size invalid: "
            java.lang.String r7 = r0.concat(r7)
            r6.<init>(r7)
            throw r6
        L3c:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = "type mismatch."
            r6.<init>(r7)
            throw r6
        L44:
            if (r7 != 0) goto L48
            r1 = 0
        L47:
            return r1
        L48:
            com.tencent.bugly.proguard.h r6 = new com.tencent.bugly.proguard.h
            java.lang.String r7 = "require field not exist."
            r6.<init>(r7)
            throw r6
    }

    public final byte a(byte r1, int r2, boolean r3) {
            r0 = this;
            boolean r2 = r0.b(r2)
            if (r2 == 0) goto L27
            com.tencent.bugly.proguard.k$a r1 = new com.tencent.bugly.proguard.k$a
            r1.<init>()
            r0.a(r1)
            byte r1 = r1.a
            if (r1 == 0) goto L20
            r2 = 12
            if (r1 != r2) goto L18
            r1 = 0
            goto L29
        L18:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "type mismatch."
            r1.<init>(r2)
            throw r1
        L20:
            java.nio.ByteBuffer r1 = r0.b
            byte r1 = r1.get()
            goto L29
        L27:
            if (r3 != 0) goto L2a
        L29:
            return r1
        L2a:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "require field not exist."
            r1.<init>(r2)
            throw r1
    }

    public final int a(int r1, int r2, boolean r3) {
            r0 = this;
            boolean r2 = r0.b(r2)
            if (r2 == 0) goto L3b
            com.tencent.bugly.proguard.k$a r1 = new com.tencent.bugly.proguard.k$a
            r1.<init>()
            r0.a(r1)
            byte r1 = r1.a
            if (r1 == 0) goto L34
            r2 = 1
            if (r1 == r2) goto L2d
            r2 = 2
            if (r1 == r2) goto L26
            r2 = 12
            if (r1 != r2) goto L1e
            r1 = 0
            goto L3d
        L1e:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "type mismatch."
            r1.<init>(r2)
            throw r1
        L26:
            java.nio.ByteBuffer r1 = r0.b
            int r1 = r1.getInt()
            goto L3d
        L2d:
            java.nio.ByteBuffer r1 = r0.b
            short r1 = r1.getShort()
            goto L3d
        L34:
            java.nio.ByteBuffer r1 = r0.b
            byte r1 = r1.get()
            goto L3d
        L3b:
            if (r3 != 0) goto L3e
        L3d:
            return r1
        L3e:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "require field not exist."
            r1.<init>(r2)
            throw r1
    }

    public final int a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            r1 = 0
            return r1
    }

    public final long a(long r1, int r3, boolean r4) {
            r0 = this;
            boolean r3 = r0.b(r3)
            if (r3 == 0) goto L47
            com.tencent.bugly.proguard.k$a r1 = new com.tencent.bugly.proguard.k$a
            r1.<init>()
            r0.a(r1)
            byte r1 = r1.a
            if (r1 == 0) goto L3f
            r2 = 1
            if (r1 == r2) goto L38
            r2 = 2
            if (r1 == r2) goto L31
            r2 = 3
            if (r1 == r2) goto L2a
            r2 = 12
            if (r1 != r2) goto L22
            r1 = 0
            goto L49
        L22:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "type mismatch."
            r1.<init>(r2)
            throw r1
        L2a:
            java.nio.ByteBuffer r1 = r0.b
            long r1 = r1.getLong()
            goto L49
        L31:
            java.nio.ByteBuffer r1 = r0.b
            int r1 = r1.getInt()
            goto L45
        L38:
            java.nio.ByteBuffer r1 = r0.b
            short r1 = r1.getShort()
            goto L45
        L3f:
            java.nio.ByteBuffer r1 = r0.b
            byte r1 = r1.get()
        L45:
            long r1 = (long) r1
            goto L49
        L47:
            if (r4 != 0) goto L4a
        L49:
            return r1
        L4a:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "require field not exist."
            r1.<init>(r2)
            throw r1
    }

    public final com.tencent.bugly.proguard.m a(com.tencent.bugly.proguard.m r1, int r2, boolean r3) {
            r0 = this;
            boolean r2 = r0.b(r2)
            if (r2 == 0) goto L38
            java.lang.Class r1 = r1.getClass()     // Catch: java.lang.Exception -> L2d
            java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.Exception -> L2d
            com.tencent.bugly.proguard.m r1 = (com.tencent.bugly.proguard.m) r1     // Catch: java.lang.Exception -> L2d
            com.tencent.bugly.proguard.k$a r2 = new com.tencent.bugly.proguard.k$a
            r2.<init>()
            r0.a(r2)
            byte r2 = r2.a
            r3 = 10
            if (r2 != r3) goto L25
            r1.a(r0)
            r0.a()
            goto L3b
        L25:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "type mismatch."
            r1.<init>(r2)
            throw r1
        L2d:
            r1 = move-exception
            com.tencent.bugly.proguard.h r2 = new com.tencent.bugly.proguard.h
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
        L38:
            if (r3 != 0) goto L3c
            r1 = 0
        L3b:
            return r1
        L3c:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "require field not exist."
            r1.<init>(r2)
            throw r1
    }

    public final <T> java.lang.Object a(T r3, int r4, boolean r5) {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.Byte
            r1 = 0
            if (r0 == 0) goto Le
            byte r3 = r2.a(r1, r4, r5)
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)
            return r3
        Le:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L1b
            boolean r3 = r2.a(r4, r5)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            return r3
        L1b:
            boolean r0 = r3 instanceof java.lang.Short
            if (r0 == 0) goto L28
            short r3 = r2.a(r1, r4, r5)
            java.lang.Short r3 = java.lang.Short.valueOf(r3)
            return r3
        L28:
            boolean r0 = r3 instanceof java.lang.Integer
            if (r0 == 0) goto L35
            int r3 = r2.a(r1, r4, r5)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
        L35:
            boolean r0 = r3 instanceof java.lang.Long
            if (r0 == 0) goto L44
            r0 = 0
            long r3 = r2.a(r0, r4, r5)
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            return r3
        L44:
            boolean r0 = r3 instanceof java.lang.Float
            if (r0 == 0) goto L52
            r3 = 0
            float r3 = r2.a(r3, r4, r5)
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            return r3
        L52:
            boolean r0 = r3 instanceof java.lang.Double
            if (r0 == 0) goto L61
            r0 = 0
            double r3 = r2.a(r0, r4, r5)
            java.lang.Double r3 = java.lang.Double.valueOf(r3)
            return r3
        L61:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L6e
            java.lang.String r3 = r2.b(r4, r5)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            return r3
        L6e:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L79
            java.util.Map r3 = (java.util.Map) r3
            java.util.HashMap r3 = r2.a(r3, r4, r5)
            return r3
        L79:
            boolean r0 = r3 instanceof java.util.List
            if (r0 == 0) goto L84
            java.util.List r3 = (java.util.List) r3
            java.util.List r3 = r2.a(r3, r4, r5)
            return r3
        L84:
            boolean r0 = r3 instanceof com.tencent.bugly.proguard.m
            if (r0 == 0) goto L8f
            com.tencent.bugly.proguard.m r3 = (com.tencent.bugly.proguard.m) r3
            com.tencent.bugly.proguard.m r3 = r2.a(r3, r4, r5)
            return r3
        L8f:
            java.lang.Class r0 = r3.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto Le6
            boolean r0 = r3 instanceof byte[]
            if (r0 != 0) goto Le1
            boolean r0 = r3 instanceof java.lang.Byte[]
            if (r0 == 0) goto La2
            goto Le1
        La2:
            boolean r0 = r3 instanceof boolean[]
            if (r0 == 0) goto Lab
            boolean[] r3 = r2.d(r4, r5)
            return r3
        Lab:
            boolean r0 = r3 instanceof short[]
            if (r0 == 0) goto Lb4
            short[] r3 = r2.e(r4, r5)
            return r3
        Lb4:
            boolean r0 = r3 instanceof int[]
            if (r0 == 0) goto Lbd
            int[] r3 = r2.f(r4, r5)
            return r3
        Lbd:
            boolean r0 = r3 instanceof long[]
            if (r0 == 0) goto Lc6
            long[] r3 = r2.g(r4, r5)
            return r3
        Lc6:
            boolean r0 = r3 instanceof float[]
            if (r0 == 0) goto Lcf
            float[] r3 = r2.h(r4, r5)
            return r3
        Lcf:
            boolean r0 = r3 instanceof double[]
            if (r0 == 0) goto Ld8
            double[] r3 = r2.i(r4, r5)
            return r3
        Ld8:
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            java.lang.Object[] r3 = r2.a(r3, r4, r5)
            return r3
        Le1:
            byte[] r3 = r2.c(r4, r5)
            return r3
        Le6:
            com.tencent.bugly.proguard.h r3 = new com.tencent.bugly.proguard.h
            java.lang.String r4 = "read object error: unsupport type."
            r3.<init>(r4)
            throw r3
    }

    public final <K, V> java.util.HashMap<K, V> a(java.util.Map<K, V> r2, int r3, boolean r4) {
            r1 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r2 = r1.a(r0, r2, r3, r4)
            java.util.HashMap r2 = (java.util.HashMap) r2
            return r2
    }

    public final short a(short r1, int r2, boolean r3) {
            r0 = this;
            boolean r2 = r0.b(r2)
            if (r2 == 0) goto L32
            com.tencent.bugly.proguard.k$a r1 = new com.tencent.bugly.proguard.k$a
            r1.<init>()
            r0.a(r1)
            byte r1 = r1.a
            if (r1 == 0) goto L2a
            r2 = 1
            if (r1 == r2) goto L23
            r2 = 12
            if (r1 != r2) goto L1b
            r1 = 0
            goto L34
        L1b:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "type mismatch."
            r1.<init>(r2)
            throw r1
        L23:
            java.nio.ByteBuffer r1 = r0.b
            short r1 = r1.getShort()
            goto L34
        L2a:
            java.nio.ByteBuffer r1 = r0.b
            byte r1 = r1.get()
            short r1 = (short) r1
            goto L34
        L32:
            if (r3 != 0) goto L35
        L34:
            return r1
        L35:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = "require field not exist."
            r1.<init>(r2)
            throw r1
    }

    public final void a(byte[] r2) {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.b
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            r1.b = r2
            return
    }

    public final boolean a(int r2, boolean r3) {
            r1 = this;
            r0 = 0
            byte r2 = r1.a(r0, r2, r3)
            if (r2 == 0) goto L9
            r2 = 1
            return r2
        L9:
            return r0
    }

    public final java.lang.String b(int r2, boolean r3) {
            r1 = this;
            boolean r2 = r1.b(r2)
            if (r2 == 0) goto L6e
            com.tencent.bugly.proguard.k$a r2 = new com.tencent.bugly.proguard.k$a
            r2.<init>()
            r1.a(r2)
            byte r2 = r2.a
            r3 = 6
            if (r2 == r3) goto L4f
            r3 = 7
            if (r2 != r3) goto L47
            java.nio.ByteBuffer r2 = r1.b
            int r2 = r2.getInt()
            r3 = 104857600(0x6400000, float:3.6111186E-35)
            if (r2 > r3) goto L37
            if (r2 < 0) goto L37
            byte[] r2 = new byte[r2]
            java.nio.ByteBuffer r3 = r1.b
            r3.get(r2)
            java.lang.String r3 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L31
            java.lang.String r0 = r1.a     // Catch: java.io.UnsupportedEncodingException -> L31
            r3.<init>(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L31
            goto L71
        L31:
            java.lang.String r3 = new java.lang.String
            r3.<init>(r2)
            goto L71
        L37:
            com.tencent.bugly.proguard.h r3 = new com.tencent.bugly.proguard.h
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "String too long: "
            java.lang.String r2 = r0.concat(r2)
            r3.<init>(r2)
            throw r3
        L47:
            com.tencent.bugly.proguard.h r2 = new com.tencent.bugly.proguard.h
            java.lang.String r3 = "type mismatch."
            r2.<init>(r3)
            throw r2
        L4f:
            java.nio.ByteBuffer r2 = r1.b
            byte r2 = r2.get()
            if (r2 >= 0) goto L59
            int r2 = r2 + 256
        L59:
            byte[] r2 = new byte[r2]
            java.nio.ByteBuffer r3 = r1.b
            r3.get(r2)
            java.lang.String r3 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L68
            java.lang.String r0 = r1.a     // Catch: java.io.UnsupportedEncodingException -> L68
            r3.<init>(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L68
            goto L71
        L68:
            java.lang.String r3 = new java.lang.String
            r3.<init>(r2)
            goto L71
        L6e:
            if (r3 != 0) goto L72
            r3 = 0
        L71:
            return r3
        L72:
            com.tencent.bugly.proguard.h r2 = new com.tencent.bugly.proguard.h
            java.lang.String r3 = "require field not exist."
            r2.<init>(r3)
            throw r2
    }

    public final byte[] c(int r8, boolean r9) {
            r7 = this;
            boolean r0 = r7.b(r8)
            if (r0 == 0) goto Lb9
            com.tencent.bugly.proguard.k$a r9 = new com.tencent.bugly.proguard.k$a
            r9.<init>()
            r7.a(r9)
            byte r0 = r9.a
            r1 = 9
            r2 = 1
            r3 = 0
            if (r0 == r1) goto L91
            r1 = 13
            if (r0 != r1) goto L89
            com.tencent.bugly.proguard.k$a r0 = new com.tencent.bugly.proguard.k$a
            r0.<init>()
            r7.a(r0)
            byte r1 = r0.a
            java.lang.String r4 = ", "
            java.lang.String r5 = ", type: "
            if (r1 != 0) goto L65
            int r1 = r7.a(r3, r3, r2)
            if (r1 < 0) goto L39
            byte[] r8 = new byte[r1]
            java.nio.ByteBuffer r9 = r7.b
            r9.get(r8)
            goto Lbc
        L39:
            com.tencent.bugly.proguard.h r2 = new com.tencent.bugly.proguard.h
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r6 = "invalid size, tag: "
            r3.<init>(r6)
            r3.append(r8)
            r3.append(r5)
            byte r8 = r9.a
            r3.append(r8)
            r3.append(r4)
            byte r8 = r0.a
            r3.append(r8)
            java.lang.String r8 = ", size: "
            r3.append(r8)
            r3.append(r1)
            java.lang.String r8 = r3.toString()
            r2.<init>(r8)
            throw r2
        L65:
            com.tencent.bugly.proguard.h r1 = new com.tencent.bugly.proguard.h
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "type mismatch, tag: "
            r2.<init>(r3)
            r2.append(r8)
            r2.append(r5)
            byte r8 = r9.a
            r2.append(r8)
            r2.append(r4)
            byte r8 = r0.a
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            r1.<init>(r8)
            throw r1
        L89:
            com.tencent.bugly.proguard.h r8 = new com.tencent.bugly.proguard.h
            java.lang.String r9 = "type mismatch."
            r8.<init>(r9)
            throw r8
        L91:
            int r8 = r7.a(r3, r3, r2)
            if (r8 < 0) goto La9
            byte[] r9 = new byte[r8]
            r0 = 0
        L9a:
            if (r0 >= r8) goto La7
            r1 = r9[r3]
            byte r1 = r7.a(r1, r3, r2)
            r9[r0] = r1
            int r0 = r0 + 1
            goto L9a
        La7:
            r8 = r9
            goto Lbc
        La9:
            com.tencent.bugly.proguard.h r9 = new com.tencent.bugly.proguard.h
            java.lang.String r8 = java.lang.String.valueOf(r8)
            java.lang.String r0 = "size invalid: "
            java.lang.String r8 = r0.concat(r8)
            r9.<init>(r8)
            throw r9
        Lb9:
            if (r9 != 0) goto Lbd
            r8 = 0
        Lbc:
            return r8
        Lbd:
            com.tencent.bugly.proguard.h r8 = new com.tencent.bugly.proguard.h
            java.lang.String r9 = "require field not exist."
            r8.<init>(r9)
            throw r8
    }
}

package com.tkay.expressad.exoplayer.i;

public final class c extends com.tkay.expressad.exoplayer.i.e {
    private static final float a = 0.98f;
    private static final int[] b = null;
    private static final int c = 1000;
    private final com.tkay.expressad.exoplayer.i.f.a d;
    private final java.util.concurrent.atomic.AtomicReference<com.tkay.expressad.exoplayer.i.c.c> e;

    static class 1 {
    }

    private static final class a {
        public final int a;
        public final int b;
        public final java.lang.String c;

        public a(int r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L2b
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L2b
            L12:
                com.tkay.expressad.exoplayer.i.c$a r5 = (com.tkay.expressad.exoplayer.i.c.a) r5
                int r2 = r4.a
                int r3 = r5.a
                if (r2 != r3) goto L2b
                int r2 = r4.b
                int r3 = r5.b
                if (r2 != r3) goto L2b
                java.lang.String r2 = r4.c
                java.lang.String r5 = r5.c
                boolean r5 = android.text.TextUtils.equals(r2, r5)
                if (r5 == 0) goto L2b
                return r0
            L2b:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.a
                int r0 = r0 * 31
                int r1 = r2.b
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r2.c
                if (r1 == 0) goto L12
                int r1 = r1.hashCode()
                goto L13
            L12:
                r1 = 0
            L13:
                int r0 = r0 + r1
                return r0
        }
    }

    private static final class b implements java.lang.Comparable<com.tkay.expressad.exoplayer.i.c.b> {
        private final com.tkay.expressad.exoplayer.i.c.c a;
        private final int b;
        private final int c;
        private final int d;
        private final int e;
        private final int f;
        private final int g;

        public b(com.tkay.expressad.exoplayer.m r2, com.tkay.expressad.exoplayer.i.c.c r3, int r4) {
                r1 = this;
                r1.<init>()
                r1.a = r3
                r0 = 0
                boolean r4 = com.tkay.expressad.exoplayer.i.c.a(r4, r0)
                r1.b = r4
                java.lang.String r3 = r3.b
                boolean r3 = com.tkay.expressad.exoplayer.i.c.a(r2, r3)
                r1.c = r3
                int r3 = r2.z
                r4 = 1
                r3 = r3 & r4
                if (r3 == 0) goto L1b
                r0 = r4
            L1b:
                r1.d = r0
                int r3 = r2.u
                r1.e = r3
                int r3 = r2.v
                r1.f = r3
                int r2 = r2.d
                r1.g = r2
                return
        }

        public final int a(com.tkay.expressad.exoplayer.i.c.b r4) {
                r3 = this;
                int r0 = r3.b
                int r1 = r4.b
                if (r0 == r1) goto Lb
                int r4 = com.tkay.expressad.exoplayer.i.c.a(r0, r1)
                return r4
            Lb:
                int r0 = r3.c
                int r1 = r4.c
                if (r0 == r1) goto L16
                int r4 = com.tkay.expressad.exoplayer.i.c.a(r0, r1)
                return r4
            L16:
                int r0 = r3.d
                int r1 = r4.d
                if (r0 == r1) goto L21
                int r4 = com.tkay.expressad.exoplayer.i.c.a(r0, r1)
                return r4
            L21:
                com.tkay.expressad.exoplayer.i.c$c r0 = r3.a
                boolean r0 = r0.m
                if (r0 == 0) goto L30
                int r4 = r4.g
                int r0 = r3.g
                int r4 = com.tkay.expressad.exoplayer.i.c.a(r4, r0)
                return r4
            L30:
                int r0 = r3.b
                r1 = 1
                if (r0 != r1) goto L36
                goto L37
            L36:
                r1 = -1
            L37:
                int r0 = r3.e
                int r2 = r4.e
                if (r0 == r2) goto L43
                int r4 = com.tkay.expressad.exoplayer.i.c.a(r0, r2)
            L41:
                int r1 = r1 * r4
                return r1
            L43:
                int r0 = r3.f
                int r2 = r4.f
                if (r0 == r2) goto L4e
                int r4 = com.tkay.expressad.exoplayer.i.c.a(r0, r2)
                goto L41
            L4e:
                int r0 = r3.g
                int r4 = r4.g
                int r4 = com.tkay.expressad.exoplayer.i.c.a(r0, r4)
                goto L41
        }

        @Override
        public final int compareTo(com.tkay.expressad.exoplayer.i.c.b r1) {
                r0 = this;
                com.tkay.expressad.exoplayer.i.c$b r1 = (com.tkay.expressad.exoplayer.i.c.b) r1
                int r1 = r0.a(r1)
                return r1
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L39
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L39
            L12:
                com.tkay.expressad.exoplayer.i.c$b r5 = (com.tkay.expressad.exoplayer.i.c.b) r5
                int r2 = r4.b
                int r3 = r5.b
                if (r2 != r3) goto L39
                int r2 = r4.c
                int r3 = r5.c
                if (r2 != r3) goto L39
                int r2 = r4.d
                int r3 = r5.d
                if (r2 != r3) goto L39
                int r2 = r4.e
                int r3 = r5.e
                if (r2 != r3) goto L39
                int r2 = r4.f
                int r3 = r5.f
                if (r2 != r3) goto L39
                int r2 = r4.g
                int r5 = r5.g
                if (r2 != r5) goto L39
                return r0
            L39:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.b
                int r0 = r0 * 31
                int r1 = r2.c
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.d
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.e
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.f
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.g
                int r0 = r0 + r1
                return r0
        }
    }

    public static final class c implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.i.c.c> CREATOR = null;
        public static final com.tkay.expressad.exoplayer.i.c.c a = null;
        public final java.lang.String b;
        public final java.lang.String c;
        public final boolean d;
        public final int e;
        public final int f;
        public final int g;
        public final int h;
        public final boolean i;
        public final int j;
        public final int k;
        public final boolean l;
        public final boolean m;
        public final boolean n;
        public final boolean o;
        public final boolean p;
        public final int q;
        private final android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r;
        private final android.util.SparseBooleanArray s;


        static {
                com.tkay.expressad.exoplayer.i.c$c r0 = new com.tkay.expressad.exoplayer.i.c$c
                r0.<init>()
                com.tkay.expressad.exoplayer.i.c.c.a = r0
                com.tkay.expressad.exoplayer.i.c$c$1 r0 = new com.tkay.expressad.exoplayer.i.c$c$1
                r0.<init>()
                com.tkay.expressad.exoplayer.i.c.c.CREATOR = r0
                return
        }

        private c() {
                r19 = this;
                r0 = r19
                android.util.SparseArray r2 = new android.util.SparseArray
                r1 = r2
                r2.<init>()
                android.util.SparseBooleanArray r3 = new android.util.SparseBooleanArray
                r2 = r3
                r3.<init>()
                r3 = 0
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 2147483647(0x7fffffff, float:NaN)
                r11 = 2147483647(0x7fffffff, float:NaN)
                r12 = 2147483647(0x7fffffff, float:NaN)
                r13 = 1
                r14 = 1
                r15 = 2147483647(0x7fffffff, float:NaN)
                r16 = 2147483647(0x7fffffff, float:NaN)
                r17 = 1
                r18 = 0
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
                return
        }

        c(android.os.Parcel r2) {
                r1 = this;
                r1.<init>()
                android.util.SparseArray r0 = a(r2)
                r1.r = r0
                android.util.SparseBooleanArray r0 = r2.readSparseBooleanArray()
                r1.s = r0
                java.lang.String r0 = r2.readString()
                r1.b = r0
                java.lang.String r0 = r2.readString()
                r1.c = r0
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
                r1.d = r0
                int r0 = r2.readInt()
                r1.e = r0
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
                r1.m = r0
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
                r1.n = r0
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
                r1.o = r0
                int r0 = r2.readInt()
                r1.f = r0
                int r0 = r2.readInt()
                r1.g = r0
                int r0 = r2.readInt()
                r1.h = r0
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
                r1.i = r0
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
                r1.p = r0
                int r0 = r2.readInt()
                r1.j = r0
                int r0 = r2.readInt()
                r1.k = r0
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
                r1.l = r0
                int r2 = r2.readInt()
                r1.q = r2
                return
        }

        c(android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r3, android.util.SparseBooleanArray r4, java.lang.String r5, java.lang.String r6, boolean r7, int r8, boolean r9, boolean r10, boolean r11, int r12, int r13, int r14, boolean r15, boolean r16, int r17, int r18, boolean r19, int r20) {
                r2 = this;
                r0 = r2
                r2.<init>()
                r1 = r3
                r0.r = r1
                r1 = r4
                r0.s = r1
                java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.b(r5)
                r0.b = r1
                java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.b(r6)
                r0.c = r1
                r1 = r7
                r0.d = r1
                r1 = r8
                r0.e = r1
                r1 = r9
                r0.m = r1
                r1 = r10
                r0.n = r1
                r1 = r11
                r0.o = r1
                r1 = r12
                r0.f = r1
                r1 = r13
                r0.g = r1
                r1 = r14
                r0.h = r1
                r1 = r15
                r0.i = r1
                r1 = r16
                r0.p = r1
                r1 = r17
                r0.j = r1
                r1 = r18
                r0.k = r1
                r1 = r19
                r0.l = r1
                r1 = r20
                r0.q = r1
                return
        }

        private static android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> a(android.os.Parcel r10) {
                int r0 = r10.readInt()
                android.util.SparseArray r1 = new android.util.SparseArray
                r1.<init>(r0)
                r2 = 0
                r3 = r2
            Lb:
                if (r3 >= r0) goto L41
                int r4 = r10.readInt()
                int r5 = r10.readInt()
                java.util.HashMap r6 = new java.util.HashMap
                r6.<init>(r5)
                r7 = r2
            L1b:
                if (r7 >= r5) goto L3b
                java.lang.Class<com.tkay.expressad.exoplayer.h.af> r8 = com.tkay.expressad.exoplayer.h.af.class
                java.lang.ClassLoader r8 = r8.getClassLoader()
                android.os.Parcelable r8 = r10.readParcelable(r8)
                com.tkay.expressad.exoplayer.h.af r8 = (com.tkay.expressad.exoplayer.h.af) r8
                java.lang.Class<com.tkay.expressad.exoplayer.i.c$e> r9 = com.tkay.expressad.exoplayer.i.c.e.class
                java.lang.ClassLoader r9 = r9.getClassLoader()
                android.os.Parcelable r9 = r10.readParcelable(r9)
                com.tkay.expressad.exoplayer.i.c$e r9 = (com.tkay.expressad.exoplayer.i.c.e) r9
                r6.put(r8, r9)
                int r7 = r7 + 1
                goto L1b
            L3b:
                r1.put(r4, r6)
                int r3 = r3 + 1
                goto Lb
            L41:
                return r1
        }

        static android.util.SparseArray a(com.tkay.expressad.exoplayer.i.c.c r0) {
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r0.r
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d a() {
                r2 = this;
                com.tkay.expressad.exoplayer.i.c$d r0 = new com.tkay.expressad.exoplayer.i.c$d
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        private static void a(android.os.Parcel r6, android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r7) {
                int r0 = r7.size()
                r6.writeInt(r0)
                r1 = 0
                r2 = r1
            L9:
                if (r2 >= r0) goto L49
                int r3 = r7.keyAt(r2)
                java.lang.Object r4 = r7.valueAt(r2)
                java.util.Map r4 = (java.util.Map) r4
                int r5 = r4.size()
                r6.writeInt(r3)
                r6.writeInt(r5)
                java.util.Set r3 = r4.entrySet()
                java.util.Iterator r3 = r3.iterator()
            L27:
                boolean r4 = r3.hasNext()
                if (r4 == 0) goto L46
                java.lang.Object r4 = r3.next()
                java.util.Map$Entry r4 = (java.util.Map.Entry) r4
                java.lang.Object r5 = r4.getKey()
                android.os.Parcelable r5 = (android.os.Parcelable) r5
                r6.writeParcelable(r5, r1)
                java.lang.Object r4 = r4.getValue()
                android.os.Parcelable r4 = (android.os.Parcelable) r4
                r6.writeParcelable(r4, r1)
                goto L27
            L46:
                int r2 = r2 + 1
                goto L9
            L49:
                return
        }

        private static boolean a(android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r9, android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r10) {
                int r0 = r9.size()
                int r1 = r10.size()
                r2 = 0
                if (r1 == r0) goto Lc
                return r2
            Lc:
                r1 = r2
            Ld:
                r3 = 1
                if (r1 >= r0) goto L68
                int r4 = r9.keyAt(r1)
                int r4 = r10.indexOfKey(r4)
                if (r4 < 0) goto L67
                java.lang.Object r5 = r9.valueAt(r1)
                java.util.Map r5 = (java.util.Map) r5
                java.lang.Object r4 = r10.valueAt(r4)
                java.util.Map r4 = (java.util.Map) r4
                int r6 = r5.size()
                int r7 = r4.size()
                if (r7 == r6) goto L32
            L30:
                r3 = r2
                goto L61
            L32:
                java.util.Set r5 = r5.entrySet()
                java.util.Iterator r5 = r5.iterator()
            L3a:
                boolean r6 = r5.hasNext()
                if (r6 == 0) goto L61
                java.lang.Object r6 = r5.next()
                java.util.Map$Entry r6 = (java.util.Map.Entry) r6
                java.lang.Object r7 = r6.getKey()
                com.tkay.expressad.exoplayer.h.af r7 = (com.tkay.expressad.exoplayer.h.af) r7
                boolean r8 = r4.containsKey(r7)
                if (r8 == 0) goto L30
                java.lang.Object r6 = r6.getValue()
                java.lang.Object r7 = r4.get(r7)
                boolean r6 = com.tkay.expressad.exoplayer.k.af.a(r6, r7)
                if (r6 != 0) goto L3a
                goto L30
            L61:
                if (r3 != 0) goto L64
                goto L67
            L64:
                int r1 = r1 + 1
                goto Ld
            L67:
                return r2
            L68:
                return r3
        }

        private static boolean a(android.util.SparseBooleanArray r4, android.util.SparseBooleanArray r5) {
                int r0 = r4.size()
                int r1 = r5.size()
                r2 = 0
                if (r1 == r0) goto Lc
                return r2
            Lc:
                r1 = r2
            Ld:
                if (r1 >= r0) goto L1d
                int r3 = r4.keyAt(r1)
                int r3 = r5.indexOfKey(r3)
                if (r3 >= 0) goto L1a
                return r2
            L1a:
                int r1 = r1 + 1
                goto Ld
            L1d:
                r4 = 1
                return r4
        }

        private static boolean a(java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e> r4, java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e> r5) {
                int r0 = r4.size()
                int r1 = r5.size()
                r2 = 0
                if (r1 == r0) goto Lc
                return r2
            Lc:
                java.util.Set r4 = r4.entrySet()
                java.util.Iterator r4 = r4.iterator()
            L14:
                boolean r0 = r4.hasNext()
                if (r0 == 0) goto L3b
                java.lang.Object r0 = r4.next()
                java.util.Map$Entry r0 = (java.util.Map.Entry) r0
                java.lang.Object r1 = r0.getKey()
                com.tkay.expressad.exoplayer.h.af r1 = (com.tkay.expressad.exoplayer.h.af) r1
                boolean r3 = r5.containsKey(r1)
                if (r3 == 0) goto L3a
                java.lang.Object r0 = r0.getValue()
                java.lang.Object r1 = r5.get(r1)
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r1)
                if (r0 != 0) goto L14
            L3a:
                return r2
            L3b:
                r4 = 1
                return r4
        }

        static android.util.SparseBooleanArray b(com.tkay.expressad.exoplayer.i.c.c r0) {
                android.util.SparseBooleanArray r0 = r0.s
                return r0
        }

        public final boolean a(int r2) {
                r1 = this;
                android.util.SparseBooleanArray r0 = r1.s
                boolean r2 = r0.get(r2)
                return r2
        }

        public final boolean a(int r2, com.tkay.expressad.exoplayer.h.af r3) {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r1.r
                java.lang.Object r2 = r0.get(r2)
                java.util.Map r2 = (java.util.Map) r2
                if (r2 == 0) goto L12
                boolean r2 = r2.containsKey(r3)
                if (r2 == 0) goto L12
                r2 = 1
                return r2
            L12:
                r2 = 0
                return r2
        }

        public final com.tkay.expressad.exoplayer.i.c.e b(int r2, com.tkay.expressad.exoplayer.h.af r3) {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r1.r
                java.lang.Object r2 = r0.get(r2)
                java.util.Map r2 = (java.util.Map) r2
                if (r2 == 0) goto L11
                java.lang.Object r2 = r2.get(r3)
                com.tkay.expressad.exoplayer.i.c$e r2 = (com.tkay.expressad.exoplayer.i.c.e) r2
                return r2
            L11:
                r2 = 0
                return r2
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        public final boolean equals(java.lang.Object r11) {
                r10 = this;
                r0 = 1
                if (r10 != r11) goto L4
                return r0
            L4:
                r1 = 0
                if (r11 == 0) goto L110
                java.lang.Class r2 = r10.getClass()
                java.lang.Class r3 = r11.getClass()
                if (r2 == r3) goto L13
                goto L110
            L13:
                com.tkay.expressad.exoplayer.i.c$c r11 = (com.tkay.expressad.exoplayer.i.c.c) r11
                boolean r2 = r10.d
                boolean r3 = r11.d
                if (r2 != r3) goto L110
                int r2 = r10.e
                int r3 = r11.e
                if (r2 != r3) goto L110
                boolean r2 = r10.m
                boolean r3 = r11.m
                if (r2 != r3) goto L110
                boolean r2 = r10.n
                boolean r3 = r11.n
                if (r2 != r3) goto L110
                boolean r2 = r10.o
                boolean r3 = r11.o
                if (r2 != r3) goto L110
                int r2 = r10.f
                int r3 = r11.f
                if (r2 != r3) goto L110
                int r2 = r10.g
                int r3 = r11.g
                if (r2 != r3) goto L110
                boolean r2 = r10.i
                boolean r3 = r11.i
                if (r2 != r3) goto L110
                boolean r2 = r10.p
                boolean r3 = r11.p
                if (r2 != r3) goto L110
                boolean r2 = r10.l
                boolean r3 = r11.l
                if (r2 != r3) goto L110
                int r2 = r10.j
                int r3 = r11.j
                if (r2 != r3) goto L110
                int r2 = r10.k
                int r3 = r11.k
                if (r2 != r3) goto L110
                int r2 = r10.h
                int r3 = r11.h
                if (r2 != r3) goto L110
                int r2 = r10.q
                int r3 = r11.q
                if (r2 != r3) goto L110
                java.lang.String r2 = r10.b
                java.lang.String r3 = r11.b
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L110
                java.lang.String r2 = r10.c
                java.lang.String r3 = r11.c
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L110
                android.util.SparseBooleanArray r2 = r10.s
                android.util.SparseBooleanArray r3 = r11.s
                int r4 = r2.size()
                int r5 = r3.size()
                if (r5 == r4) goto L8d
            L8b:
                r2 = r1
                goto L9f
            L8d:
                r5 = r1
            L8e:
                if (r5 >= r4) goto L9e
                int r6 = r2.keyAt(r5)
                int r6 = r3.indexOfKey(r6)
                if (r6 >= 0) goto L9b
                goto L8b
            L9b:
                int r5 = r5 + 1
                goto L8e
            L9e:
                r2 = r0
            L9f:
                if (r2 == 0) goto L110
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r2 = r10.r
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r11 = r11.r
                int r3 = r2.size()
                int r4 = r11.size()
                if (r4 == r3) goto Lb1
            Laf:
                r11 = r1
                goto L10d
            Lb1:
                r4 = r1
            Lb2:
                if (r4 >= r3) goto L10c
                int r5 = r2.keyAt(r4)
                int r5 = r11.indexOfKey(r5)
                if (r5 < 0) goto Laf
                java.lang.Object r6 = r2.valueAt(r4)
                java.util.Map r6 = (java.util.Map) r6
                java.lang.Object r5 = r11.valueAt(r5)
                java.util.Map r5 = (java.util.Map) r5
                int r7 = r6.size()
                int r8 = r5.size()
                if (r8 == r7) goto Ld6
            Ld4:
                r5 = r1
                goto L106
            Ld6:
                java.util.Set r6 = r6.entrySet()
                java.util.Iterator r6 = r6.iterator()
            Lde:
                boolean r7 = r6.hasNext()
                if (r7 == 0) goto L105
                java.lang.Object r7 = r6.next()
                java.util.Map$Entry r7 = (java.util.Map.Entry) r7
                java.lang.Object r8 = r7.getKey()
                com.tkay.expressad.exoplayer.h.af r8 = (com.tkay.expressad.exoplayer.h.af) r8
                boolean r9 = r5.containsKey(r8)
                if (r9 == 0) goto Ld4
                java.lang.Object r7 = r7.getValue()
                java.lang.Object r8 = r5.get(r8)
                boolean r7 = com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                if (r7 != 0) goto Lde
                goto Ld4
            L105:
                r5 = r0
            L106:
                if (r5 != 0) goto L109
                goto Laf
            L109:
                int r4 = r4 + 1
                goto Lb2
            L10c:
                r11 = r0
            L10d:
                if (r11 == 0) goto L110
                return r0
            L110:
                return r1
        }

        public final int hashCode() {
                r3 = this;
                boolean r0 = r3.d
                int r0 = r0 * 31
                int r1 = r3.e
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.m
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.n
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.o
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.f
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.g
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.i
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.p
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.l
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.j
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.k
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.h
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.q
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r3.b
                r2 = 0
                if (r1 != 0) goto L4c
                r1 = r2
                goto L50
            L4c:
                int r1 = r1.hashCode()
            L50:
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r3.c
                if (r1 != 0) goto L58
                goto L5c
            L58:
                int r2 = r1.hashCode()
            L5c:
                int r0 = r0 + r2
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r7, int r8) {
                r6 = this;
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r8 = r6.r
                int r0 = r8.size()
                r7.writeInt(r0)
                r1 = 0
                r2 = r1
            Lb:
                if (r2 >= r0) goto L4b
                int r3 = r8.keyAt(r2)
                java.lang.Object r4 = r8.valueAt(r2)
                java.util.Map r4 = (java.util.Map) r4
                int r5 = r4.size()
                r7.writeInt(r3)
                r7.writeInt(r5)
                java.util.Set r3 = r4.entrySet()
                java.util.Iterator r3 = r3.iterator()
            L29:
                boolean r4 = r3.hasNext()
                if (r4 == 0) goto L48
                java.lang.Object r4 = r3.next()
                java.util.Map$Entry r4 = (java.util.Map.Entry) r4
                java.lang.Object r5 = r4.getKey()
                android.os.Parcelable r5 = (android.os.Parcelable) r5
                r7.writeParcelable(r5, r1)
                java.lang.Object r4 = r4.getValue()
                android.os.Parcelable r4 = (android.os.Parcelable) r4
                r7.writeParcelable(r4, r1)
                goto L29
            L48:
                int r2 = r2 + 1
                goto Lb
            L4b:
                android.util.SparseBooleanArray r8 = r6.s
                r7.writeSparseBooleanArray(r8)
                java.lang.String r8 = r6.b
                r7.writeString(r8)
                java.lang.String r8 = r6.c
                r7.writeString(r8)
                boolean r8 = r6.d
                com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                int r8 = r6.e
                r7.writeInt(r8)
                boolean r8 = r6.m
                com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                boolean r8 = r6.n
                com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                boolean r8 = r6.o
                com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                int r8 = r6.f
                r7.writeInt(r8)
                int r8 = r6.g
                r7.writeInt(r8)
                int r8 = r6.h
                r7.writeInt(r8)
                boolean r8 = r6.i
                com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                boolean r8 = r6.p
                com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                int r8 = r6.j
                r7.writeInt(r8)
                int r8 = r6.k
                r7.writeInt(r8)
                boolean r8 = r6.l
                com.tkay.expressad.exoplayer.k.af.a(r7, r8)
                int r8 = r6.q
                r7.writeInt(r8)
                return
        }
    }

    public static final class d {
        private final android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> a;
        private final android.util.SparseBooleanArray b;
        private java.lang.String c;
        private java.lang.String d;
        private boolean e;
        private int f;
        private boolean g;
        private boolean h;
        private boolean i;
        private int j;
        private int k;
        private int l;
        private boolean m;
        private boolean n;
        private int o;
        private int p;
        private boolean q;
        private int r;

        public d() {
                r1 = this;
                com.tkay.expressad.exoplayer.i.c$c r0 = com.tkay.expressad.exoplayer.i.c.c.a
                r1.<init>(r0)
                return
        }

        private d(com.tkay.expressad.exoplayer.i.c.c r2) {
                r1 = this;
                r1.<init>()
                android.util.SparseArray r0 = com.tkay.expressad.exoplayer.i.c.c.a(r2)
                android.util.SparseArray r0 = a(r0)
                r1.a = r0
                android.util.SparseBooleanArray r0 = com.tkay.expressad.exoplayer.i.c.c.b(r2)
                android.util.SparseBooleanArray r0 = r0.clone()
                r1.b = r0
                java.lang.String r0 = r2.b
                r1.c = r0
                java.lang.String r0 = r2.c
                r1.d = r0
                boolean r0 = r2.d
                r1.e = r0
                int r0 = r2.e
                r1.f = r0
                boolean r0 = r2.m
                r1.g = r0
                boolean r0 = r2.n
                r1.h = r0
                boolean r0 = r2.o
                r1.i = r0
                int r0 = r2.f
                r1.j = r0
                int r0 = r2.g
                r1.k = r0
                int r0 = r2.h
                r1.l = r0
                boolean r0 = r2.i
                r1.m = r0
                boolean r0 = r2.p
                r1.n = r0
                int r0 = r2.j
                r1.o = r0
                int r0 = r2.k
                r1.p = r0
                boolean r0 = r2.l
                r1.q = r0
                int r2 = r2.q
                r1.r = r2
                return
        }

        d(com.tkay.expressad.exoplayer.i.c.c r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private static android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> a(android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r5) {
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1 = 0
            L6:
                int r2 = r5.size()
                if (r1 >= r2) goto L21
                int r2 = r5.keyAt(r1)
                java.util.HashMap r3 = new java.util.HashMap
                java.lang.Object r4 = r5.valueAt(r1)
                java.util.Map r4 = (java.util.Map) r4
                r3.<init>(r4)
                r0.put(r2, r3)
                int r1 = r1 + 1
                goto L6
            L21:
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d a(int r1, int r2) {
                r0 = this;
                r0.j = r1
                r0.k = r2
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d a(int r1, int r2, boolean r3) {
                r0 = this;
                r0.o = r1
                r0.p = r2
                r0.q = r3
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d a(android.content.Context r2, boolean r3) {
                r1 = this;
                android.graphics.Point r2 = com.tkay.expressad.exoplayer.k.af.a(r2)
                int r0 = r2.x
                int r2 = r2.y
                com.tkay.expressad.exoplayer.i.c$d r2 = r1.a(r0, r2, r3)
                return r2
        }

        private com.tkay.expressad.exoplayer.i.c.d a(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d a(boolean r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d b(java.lang.String r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d b(boolean r1) {
                r0 = this;
                r0.g = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d c() {
                r2 = this;
                r0 = 1279(0x4ff, float:1.792E-42)
                r1 = 719(0x2cf, float:1.008E-42)
                com.tkay.expressad.exoplayer.i.c$d r0 = r2.a(r0, r1)
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d c(int r1) {
                r0 = this;
                r0.f = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d c(boolean r1) {
                r0 = this;
                r0.h = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d d() {
                r1 = this;
                r0 = 2147483647(0x7fffffff, float:NaN)
                com.tkay.expressad.exoplayer.i.c$d r0 = r1.a(r0, r0)
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d d(int r1) {
                r0 = this;
                r0.l = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d d(boolean r1) {
                r0 = this;
                r0.i = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d e() {
                r2 = this;
                r0 = 2147483647(0x7fffffff, float:NaN)
                r1 = 1
                com.tkay.expressad.exoplayer.i.c$d r0 = r2.a(r0, r0, r1)
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d e(boolean r1) {
                r0 = this;
                r0.m = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.i.c.d f(boolean r1) {
                r0 = this;
                r0.n = r1
                return r0
        }

        public final com.tkay.expressad.exoplayer.i.c.d a() {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r1.a
                int r0 = r0.size()
                if (r0 != 0) goto L9
                return r1
            L9:
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r1.a
                r0.clear()
                return r1
        }

        public final com.tkay.expressad.exoplayer.i.c.d a(int r2) {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r1.a
                java.lang.Object r0 = r0.get(r2)
                java.util.Map r0 = (java.util.Map) r0
                if (r0 == 0) goto L16
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L11
                goto L16
            L11:
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r1.a
                r0.remove(r2)
            L16:
                return r1
        }

        public final com.tkay.expressad.exoplayer.i.c.d a(int r3, com.tkay.expressad.exoplayer.h.af r4) {
                r2 = this;
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r2.a
                java.lang.Object r0 = r0.get(r3)
                java.util.Map r0 = (java.util.Map) r0
                if (r0 == 0) goto L1f
                boolean r1 = r0.containsKey(r4)
                if (r1 != 0) goto L11
                goto L1f
            L11:
                r0.remove(r4)
                boolean r4 = r0.isEmpty()
                if (r4 == 0) goto L1f
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r4 = r2.a
                r4.remove(r3)
            L1f:
                return r2
        }

        public final com.tkay.expressad.exoplayer.i.c.d a(int r3, com.tkay.expressad.exoplayer.h.af r4, com.tkay.expressad.exoplayer.i.c.e r5) {
                r2 = this;
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r0 = r2.a
                java.lang.Object r0 = r0.get(r3)
                java.util.Map r0 = (java.util.Map) r0
                if (r0 != 0) goto L14
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r1 = r2.a
                r1.put(r3, r0)
            L14:
                boolean r3 = r0.containsKey(r4)
                if (r3 == 0) goto L25
                java.lang.Object r3 = r0.get(r4)
                boolean r3 = com.tkay.expressad.exoplayer.k.af.a(r3, r5)
                if (r3 == 0) goto L25
                return r2
            L25:
                r0.put(r4, r5)
                return r2
        }

        public final com.tkay.expressad.exoplayer.i.c.d a(int r2, boolean r3) {
                r1 = this;
                android.util.SparseBooleanArray r0 = r1.b
                boolean r0 = r0.get(r2)
                if (r0 != r3) goto L9
                return r1
            L9:
                if (r3 == 0) goto L12
                android.util.SparseBooleanArray r3 = r1.b
                r0 = 1
                r3.put(r2, r0)
                goto L17
            L12:
                android.util.SparseBooleanArray r3 = r1.b
                r3.delete(r2)
            L17:
                return r1
        }

        public final com.tkay.expressad.exoplayer.i.c.c b() {
                r22 = this;
                r0 = r22
                com.tkay.expressad.exoplayer.i.c$c r20 = new com.tkay.expressad.exoplayer.i.c$c
                r1 = r20
                android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c$e>> r2 = r0.a
                android.util.SparseBooleanArray r3 = r0.b
                java.lang.String r4 = r0.c
                java.lang.String r5 = r0.d
                boolean r6 = r0.e
                int r7 = r0.f
                boolean r8 = r0.g
                boolean r9 = r0.h
                boolean r10 = r0.i
                int r11 = r0.j
                int r12 = r0.k
                int r13 = r0.l
                boolean r14 = r0.m
                boolean r15 = r0.n
                r21 = r1
                int r1 = r0.o
                r16 = r1
                int r1 = r0.p
                r17 = r1
                boolean r1 = r0.q
                r18 = r1
                int r1 = r0.r
                r19 = r1
                r1 = r21
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)
                return r20
        }

        public final com.tkay.expressad.exoplayer.i.c.d b(int r2) {
                r1 = this;
                int r0 = r1.r
                if (r0 == r2) goto L6
                r1.r = r2
            L6:
                return r1
        }
    }

    public static final class e implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.i.c.e> CREATOR = null;
        public final int a;
        public final int[] b;
        public final int c;


        static {
                com.tkay.expressad.exoplayer.i.c$e$1 r0 = new com.tkay.expressad.exoplayer.i.c$e$1
                r0.<init>()
                com.tkay.expressad.exoplayer.i.c.e.CREATOR = r0
                return
        }

        private e(int r1, int... r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                int r1 = r2.length
                int[] r1 = java.util.Arrays.copyOf(r2, r1)
                r0.b = r1
                int r2 = r2.length
                r0.c = r2
                java.util.Arrays.sort(r1)
                return
        }

        e(android.os.Parcel r2) {
                r1 = this;
                r1.<init>()
                int r0 = r2.readInt()
                r1.a = r0
                byte r0 = r2.readByte()
                r1.c = r0
                int[] r0 = new int[r0]
                r1.b = r0
                r2.readIntArray(r0)
                return
        }

        private boolean a(int r6) {
                r5 = this;
                int[] r0 = r5.b
                int r1 = r0.length
                r2 = 0
                r3 = r2
            L5:
                if (r3 >= r1) goto L10
                r4 = r0[r3]
                if (r4 != r6) goto Ld
                r6 = 1
                return r6
            Ld:
                int r3 = r3 + 1
                goto L5
            L10:
                return r2
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L25
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L25
            L12:
                com.tkay.expressad.exoplayer.i.c$e r5 = (com.tkay.expressad.exoplayer.i.c.e) r5
                int r2 = r4.a
                int r3 = r5.a
                if (r2 != r3) goto L25
                int[] r2 = r4.b
                int[] r5 = r5.b
                boolean r5 = java.util.Arrays.equals(r2, r5)
                if (r5 == 0) goto L25
                return r0
            L25:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.a
                int r0 = r0 * 31
                int[] r1 = r2.b
                int r1 = java.util.Arrays.hashCode(r1)
                int r0 = r0 + r1
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                int r2 = r0.a
                r1.writeInt(r2)
                int[] r2 = r0.b
                int r2 = r2.length
                r1.writeInt(r2)
                int[] r2 = r0.b
                r1.writeIntArray(r2)
                return
        }
    }

    static {
            r0 = 0
            int[] r0 = new int[r0]
            com.tkay.expressad.exoplayer.i.c.b = r0
            return
    }

    public c() {
            r1 = this;
            r0 = 0
            com.tkay.expressad.exoplayer.i.f$a r0 = (com.tkay.expressad.exoplayer.i.f.a) r0
            r1.<init>(r0)
            return
    }

    private c(com.tkay.expressad.exoplayer.i.f.a r2) {
            r1 = this;
            r1.<init>()
            r1.d = r2
            java.util.concurrent.atomic.AtomicReference r2 = new java.util.concurrent.atomic.AtomicReference
            com.tkay.expressad.exoplayer.i.c$c r0 = com.tkay.expressad.exoplayer.i.c.c.a
            r2.<init>(r0)
            r1.e = r2
            return
    }

    private c(com.tkay.expressad.exoplayer.j.d r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.a$a r0 = new com.tkay.expressad.exoplayer.i.a$a
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    static int a(int r0, int r1) {
            if (r0 <= r1) goto L4
            r0 = 1
            return r0
        L4:
            if (r1 <= r0) goto L8
            r0 = -1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private static int a(com.tkay.expressad.exoplayer.h.ae r12, int[] r13, int r14, java.lang.String r15, int r16, int r17, int r18, java.util.List<java.lang.Integer> r19) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r19.size()
            if (r0 >= r2) goto L2e
            r2 = r19
            java.lang.Object r3 = r2.get(r0)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r4 = r12
            com.tkay.expressad.exoplayer.m r5 = r12.a(r3)
            r7 = r13[r3]
            r6 = r15
            r8 = r14
            r9 = r16
            r10 = r17
            r11 = r18
            boolean r3 = a(r5, r6, r7, r8, r9, r10, r11)
            if (r3 == 0) goto L2b
            int r1 = r1 + 1
        L2b:
            int r0 = r0 + 1
            goto L2
        L2e:
            return r1
    }

    private static int a(com.tkay.expressad.exoplayer.h.ae r4, int[] r5, com.tkay.expressad.exoplayer.i.c.a r6) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.a
            if (r0 >= r2) goto L17
            com.tkay.expressad.exoplayer.m r2 = r4.a(r0)
            r3 = r5[r0]
            boolean r2 = a(r2, r3, r6)
            if (r2 == 0) goto L14
            int r1 = r1 + 1
        L14:
            int r0 = r0 + 1
            goto L2
        L17:
            return r1
    }

    private static android.graphics.Point a(boolean r3, int r4, int r5, int r6, int r7) {
            if (r3 == 0) goto L10
            r3 = 1
            r0 = 0
            if (r6 <= r7) goto L8
            r1 = r3
            goto L9
        L8:
            r1 = r0
        L9:
            if (r4 <= r5) goto Lc
            goto Ld
        Lc:
            r3 = r0
        Ld:
            if (r1 == r3) goto L10
            goto L13
        L10:
            r2 = r5
            r5 = r4
            r4 = r2
        L13:
            int r3 = r6 * r4
            int r0 = r7 * r5
            if (r3 < r0) goto L23
            android.graphics.Point r3 = new android.graphics.Point
            int r4 = com.tkay.expressad.exoplayer.k.af.a(r0, r6)
            r3.<init>(r5, r4)
            return r3
        L23:
            android.graphics.Point r5 = new android.graphics.Point
            int r3 = com.tkay.expressad.exoplayer.k.af.a(r3, r7)
            r5.<init>(r3, r4)
            return r5
    }

    private static com.tkay.expressad.exoplayer.i.f a(com.tkay.expressad.exoplayer.h.af r25, int[][] r26, int r27, com.tkay.expressad.exoplayer.i.c.c r28, com.tkay.expressad.exoplayer.i.f.a r29) {
            r0 = r25
            r1 = r26
            r2 = r28
            boolean r3 = r2.m
            if (r3 != 0) goto L103
            if (r29 == 0) goto L103
            boolean r3 = r2.o
            if (r3 == 0) goto L13
            r3 = 24
            goto L15
        L13:
            r3 = 16
        L15:
            boolean r5 = r2.n
            if (r5 == 0) goto L20
            r5 = r27 & r3
            if (r5 == 0) goto L20
            r5 = 1
            r14 = r5
            goto L21
        L20:
            r14 = 0
        L21:
            r15 = 0
        L22:
            int r5 = r0.b
            if (r15 >= r5) goto L103
            com.tkay.expressad.exoplayer.h.ae r12 = r0.a(r15)
            r16 = r1[r15]
            int r11 = r2.f
            int r10 = r2.g
            int r9 = r2.h
            int r5 = r2.j
            int r6 = r2.k
            boolean r7 = r2.l
            int r8 = r12.a
            r4 = 2
            if (r8 >= r4) goto L43
            int[] r4 = com.tkay.expressad.exoplayer.i.c.b
        L3f:
            r24 = r12
            goto Lee
        L43:
            java.util.List r8 = a(r12, r5, r6, r7)
            int r5 = r8.size()
            if (r5 >= r4) goto L50
            int[] r4 = com.tkay.expressad.exoplayer.i.c.b
            goto L3f
        L50:
            if (r14 != 0) goto Lc5
            java.util.HashSet r7 = new java.util.HashSet
            r7.<init>()
            r5 = 0
            r6 = 0
            r17 = 0
        L5b:
            int r13 = r8.size()
            if (r6 >= r13) goto Lb8
            java.lang.Object r13 = r8.get(r6)
            java.lang.Integer r13 = (java.lang.Integer) r13
            int r13 = r13.intValue()
            com.tkay.expressad.exoplayer.m r13 = r12.a(r13)
            java.lang.String r13 = r13.h
            boolean r18 = r7.add(r13)
            r4 = r5
            if (r18 == 0) goto L99
            r5 = r12
            r18 = r6
            r6 = r16
            r19 = r7
            r7 = r3
            r20 = r8
            r8 = r13
            r21 = r9
            r9 = r11
            r22 = r10
            r23 = r11
            r11 = r21
            r24 = r12
            r12 = r20
            int r5 = a(r5, r6, r7, r8, r9, r10, r11, r12)
            if (r5 <= r4) goto La7
            r17 = r13
            goto La8
        L99:
            r18 = r6
            r19 = r7
            r20 = r8
            r21 = r9
            r22 = r10
            r23 = r11
            r24 = r12
        La7:
            r5 = r4
        La8:
            int r6 = r18 + 1
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            r11 = r23
            r12 = r24
            r4 = 2
            goto L5b
        Lb8:
            r20 = r8
            r21 = r9
            r22 = r10
            r23 = r11
            r24 = r12
            r8 = r17
            goto Ld0
        Lc5:
            r20 = r8
            r21 = r9
            r22 = r10
            r23 = r11
            r24 = r12
            r8 = 0
        Ld0:
            r5 = r24
            r6 = r16
            r7 = r3
            r9 = r23
            r10 = r22
            r11 = r21
            r12 = r20
            b(r5, r6, r7, r8, r9, r10, r11, r12)
            int r4 = r20.size()
            r5 = 2
            if (r4 >= r5) goto Lea
            int[] r4 = com.tkay.expressad.exoplayer.i.c.b
            goto Lee
        Lea:
            int[] r4 = com.tkay.expressad.exoplayer.k.af.a(r20)
        Lee:
            int r5 = r4.length
            if (r5 <= 0) goto Lff
            java.lang.Object r3 = com.tkay.expressad.exoplayer.k.a.a(r29)
            com.tkay.expressad.exoplayer.i.f$a r3 = (com.tkay.expressad.exoplayer.i.f.a) r3
            r5 = r24
            com.tkay.expressad.exoplayer.i.f r3 = r3.a(r5, r4)
            r4 = r3
            goto L104
        Lff:
            int r15 = r15 + 1
            goto L22
        L103:
            r4 = 0
        L104:
            if (r4 != 0) goto L10a
            com.tkay.expressad.exoplayer.i.f r4 = a(r0, r1, r2)
        L10a:
            return r4
    }

    private static com.tkay.expressad.exoplayer.i.f a(com.tkay.expressad.exoplayer.h.af r18, int[][] r19, com.tkay.expressad.exoplayer.i.c.c r20) {
            r0 = r18
            r1 = r20
            r3 = -1
            r9 = r3
            r10 = r9
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
        Lb:
            int r11 = r0.b
            if (r5 >= r11) goto Lc8
            com.tkay.expressad.exoplayer.h.ae r11 = r0.a(r5)
            int r12 = r1.j
            int r13 = r1.k
            boolean r14 = r1.l
            java.util.List r12 = a(r11, r12, r13, r14)
            r13 = r19[r5]
            r14 = 0
        L20:
            int r15 = r11.a
            if (r14 >= r15) goto Lc1
            r15 = r13[r14]
            boolean r2 = r1.p
            boolean r2 = a(r15, r2)
            if (r2 == 0) goto Lba
            com.tkay.expressad.exoplayer.m r2 = r11.a(r14)
            java.lang.Integer r15 = java.lang.Integer.valueOf(r14)
            boolean r15 = r12.contains(r15)
            r16 = 1
            if (r15 == 0) goto L5f
            int r15 = r2.m
            if (r15 == r3) goto L48
            int r15 = r2.m
            int r4 = r1.f
            if (r15 > r4) goto L5f
        L48:
            int r4 = r2.n
            if (r4 == r3) goto L52
            int r4 = r2.n
            int r15 = r1.g
            if (r4 > r15) goto L5f
        L52:
            int r4 = r2.d
            if (r4 == r3) goto L5c
            int r4 = r2.d
            int r15 = r1.h
            if (r4 > r15) goto L5f
        L5c:
            r4 = r16
            goto L60
        L5f:
            r4 = 0
        L60:
            if (r4 != 0) goto L66
            boolean r15 = r1.i
            if (r15 == 0) goto Lba
        L66:
            if (r4 == 0) goto L6a
            r15 = 2
            goto L6c
        L6a:
            r15 = r16
        L6c:
            r3 = r13[r14]
            r0 = 0
            boolean r3 = a(r3, r0)
            if (r3 == 0) goto L77
            int r15 = r15 + 1000
        L77:
            if (r15 <= r8) goto L7c
            r17 = r16
            goto L7e
        L7c:
            r17 = r0
        L7e:
            if (r15 != r8) goto Lad
            boolean r0 = r1.m
            if (r0 == 0) goto L92
            int r0 = r2.d
            int r0 = b(r0, r10)
            if (r0 >= 0) goto L8d
            goto L8f
        L8d:
            r16 = 0
        L8f:
            r17 = r16
            goto Lad
        L92:
            int r0 = r2.a()
            if (r0 == r9) goto L9d
            int r0 = b(r0, r9)
            goto La3
        L9d:
            int r0 = r2.d
            int r0 = b(r0, r10)
        La3:
            if (r3 == 0) goto Laa
            if (r4 == 0) goto Laa
            if (r0 <= 0) goto L8d
            goto L8f
        Laa:
            if (r0 >= 0) goto L8d
            goto L8f
        Lad:
            if (r17 == 0) goto Lba
            int r0 = r2.d
            int r2 = r2.a()
            r10 = r0
            r9 = r2
            r6 = r11
            r7 = r14
            r8 = r15
        Lba:
            int r14 = r14 + 1
            r3 = -1
            r0 = r18
            goto L20
        Lc1:
            int r5 = r5 + 1
            r3 = -1
            r0 = r18
            goto Lb
        Lc8:
            if (r6 != 0) goto Lcc
            r0 = 0
            return r0
        Lcc:
            com.tkay.expressad.exoplayer.i.d r0 = new com.tkay.expressad.exoplayer.i.d
            r0.<init>(r6, r7)
            return r0
    }

    private static com.tkay.expressad.exoplayer.i.f a(com.tkay.expressad.exoplayer.h.af r16, int[][] r17, com.tkay.expressad.exoplayer.i.c.c r18, com.tkay.expressad.exoplayer.i.f.a r19) {
            r0 = r16
            r1 = r18
            r2 = r19
            r3 = -1
            r4 = 0
            r5 = 0
            r7 = r3
            r9 = r7
            r8 = r4
            r6 = r5
        Ld:
            int r10 = r0.b
            if (r6 >= r10) goto L42
            com.tkay.expressad.exoplayer.h.ae r10 = r0.a(r6)
            r11 = r17[r6]
            r12 = r5
        L18:
            int r13 = r10.a
            if (r12 >= r13) goto L3f
            r13 = r11[r12]
            boolean r14 = r1.p
            boolean r13 = a(r13, r14)
            if (r13 == 0) goto L3c
            com.tkay.expressad.exoplayer.m r13 = r10.a(r12)
            com.tkay.expressad.exoplayer.i.c$b r14 = new com.tkay.expressad.exoplayer.i.c$b
            r15 = r11[r12]
            r14.<init>(r13, r1, r15)
            if (r8 == 0) goto L39
            int r13 = r14.a(r8)
            if (r13 <= 0) goto L3c
        L39:
            r7 = r6
            r9 = r12
            r8 = r14
        L3c:
            int r12 = r12 + 1
            goto L18
        L3f:
            int r6 = r6 + 1
            goto Ld
        L42:
            if (r7 != r3) goto L45
            return r4
        L45:
            com.tkay.expressad.exoplayer.h.ae r0 = r0.a(r7)
            boolean r3 = r1.m
            if (r3 != 0) goto Lb1
            if (r2 == 0) goto Lb1
            r3 = r17[r7]
            boolean r1 = r1.n
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            r10 = r4
            r7 = r5
            r8 = r7
        L5b:
            int r11 = r0.a
            if (r7 >= r11) goto L83
            com.tkay.expressad.exoplayer.m r11 = r0.a(r7)
            com.tkay.expressad.exoplayer.i.c$a r12 = new com.tkay.expressad.exoplayer.i.c$a
            int r13 = r11.u
            int r14 = r11.v
            if (r1 == 0) goto L6d
            r11 = r4
            goto L6f
        L6d:
            java.lang.String r11 = r11.h
        L6f:
            r12.<init>(r13, r14, r11)
            boolean r11 = r6.add(r12)
            if (r11 == 0) goto L80
            int r11 = a(r0, r3, r12)
            if (r11 <= r8) goto L80
            r8 = r11
            r10 = r12
        L80:
            int r7 = r7 + 1
            goto L5b
        L83:
            r1 = 1
            if (r8 <= r1) goto La7
            int[] r1 = new int[r8]
            r4 = r5
        L89:
            int r6 = r0.a
            if (r5 >= r6) goto La9
            com.tkay.expressad.exoplayer.m r6 = r0.a(r5)
            r7 = r3[r5]
            java.lang.Object r8 = com.tkay.expressad.exoplayer.k.a.a(r10)
            com.tkay.expressad.exoplayer.i.c$a r8 = (com.tkay.expressad.exoplayer.i.c.a) r8
            boolean r6 = a(r6, r7, r8)
            if (r6 == 0) goto La4
            int r6 = r4 + 1
            r1[r4] = r5
            r4 = r6
        La4:
            int r5 = r5 + 1
            goto L89
        La7:
            int[] r1 = com.tkay.expressad.exoplayer.i.c.b
        La9:
            int r3 = r1.length
            if (r3 <= 0) goto Lb1
            com.tkay.expressad.exoplayer.i.f r0 = r2.a(r0, r1)
            return r0
        Lb1:
            com.tkay.expressad.exoplayer.i.d r1 = new com.tkay.expressad.exoplayer.i.d
            r1.<init>(r0, r9)
            return r1
    }

    private static java.util.List<java.lang.Integer> a(com.tkay.expressad.exoplayer.h.ae r10, int r11, int r12, boolean r13) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r10.a
            r0.<init>(r1)
            r1 = 0
            r2 = r1
        L9:
            int r3 = r10.a
            if (r2 >= r3) goto L17
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r0.add(r3)
            int r2 = r2 + 1
            goto L9
        L17:
            r2 = 2147483647(0x7fffffff, float:NaN)
            if (r11 == r2) goto L7f
            if (r12 != r2) goto L1f
            goto L7f
        L1f:
            r3 = r2
        L20:
            int r4 = r10.a
            if (r1 >= r4) goto L58
            com.tkay.expressad.exoplayer.m r4 = r10.a(r1)
            int r5 = r4.m
            if (r5 <= 0) goto L55
            int r5 = r4.n
            if (r5 <= 0) goto L55
            int r5 = r4.m
            int r6 = r4.n
            android.graphics.Point r5 = a(r13, r11, r12, r5, r6)
            int r6 = r4.m
            int r7 = r4.n
            int r6 = r6 * r7
            int r7 = r4.m
            int r8 = r5.x
            float r8 = (float) r8
            r9 = 1065017672(0x3f7ae148, float:0.98)
            float r8 = r8 * r9
            int r8 = (int) r8
            if (r7 < r8) goto L55
            int r4 = r4.n
            int r5 = r5.y
            float r5 = (float) r5
            float r5 = r5 * r9
            int r5 = (int) r5
            if (r4 < r5) goto L55
            if (r6 >= r3) goto L55
            r3 = r6
        L55:
            int r1 = r1 + 1
            goto L20
        L58:
            if (r3 == r2) goto L7f
            int r11 = r0.size()
            int r11 = r11 + (-1)
        L60:
            if (r11 < 0) goto L7f
            java.lang.Object r12 = r0.get(r11)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            com.tkay.expressad.exoplayer.m r12 = r10.a(r12)
            int r12 = r12.a()
            r13 = -1
            if (r12 == r13) goto L79
            if (r12 <= r3) goto L7c
        L79:
            r0.remove(r11)
        L7c:
            int r11 = r11 + (-1)
            goto L60
        L7f:
            return r0
    }

    @java.lang.Deprecated
    private void a(int r2, com.tkay.expressad.exoplayer.h.af r3, com.tkay.expressad.exoplayer.i.c.e r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$d r0 = r1.d()
            com.tkay.expressad.exoplayer.i.c$d r2 = r0.a(r2, r3, r4)
            r1.a(r2)
            return
    }

    private void a(com.tkay.expressad.exoplayer.i.c.c r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.a.a(r2)
            java.util.concurrent.atomic.AtomicReference<com.tkay.expressad.exoplayer.i.c$c> r0 = r1.e
            java.lang.Object r0 = r0.getAndSet(r2)
            com.tkay.expressad.exoplayer.i.c$c r0 = (com.tkay.expressad.exoplayer.i.c.c) r0
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L14
            r1.b()
        L14:
            return
    }

    private void a(com.tkay.expressad.exoplayer.i.c.d r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$c r2 = r2.b()
            com.tkay.expressad.exoplayer.k.a.a(r2)
            java.util.concurrent.atomic.AtomicReference<com.tkay.expressad.exoplayer.i.c$c> r0 = r1.e
            java.lang.Object r0 = r0.getAndSet(r2)
            com.tkay.expressad.exoplayer.i.c$c r0 = (com.tkay.expressad.exoplayer.i.c.c) r0
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L18
            r1.b()
        L18:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.i.e.a r15, int[][][] r16, com.tkay.expressad.exoplayer.aa[] r17, com.tkay.expressad.exoplayer.i.f[] r18, int r19) {
            r0 = r15
            r1 = r19
            if (r1 != 0) goto L6
            return
        L6:
            r2 = -1
            r3 = 0
            r5 = r2
            r6 = r5
            r4 = r3
        Lb:
            int r7 = r15.a()
            r8 = 1
            if (r4 >= r7) goto L5b
            int r7 = r15.a(r4)
            r9 = r18[r4]
            if (r7 == r8) goto L1d
            r10 = 2
            if (r7 != r10) goto L58
        L1d:
            if (r9 == 0) goto L58
            r10 = r16[r4]
            com.tkay.expressad.exoplayer.h.af r11 = r15.b(r4)
            if (r9 != 0) goto L29
        L27:
            r9 = r3
            goto L4a
        L29:
            com.tkay.expressad.exoplayer.h.ae r12 = r9.f()
            int r11 = r11.a(r12)
            r12 = r3
        L32:
            int r13 = r9.g()
            if (r12 >= r13) goto L49
            r13 = r10[r11]
            int r14 = r9.b(r12)
            r13 = r13[r14]
            r14 = 32
            r13 = r13 & r14
            if (r13 == r14) goto L46
            goto L27
        L46:
            int r12 = r12 + 1
            goto L32
        L49:
            r9 = r8
        L4a:
            if (r9 == 0) goto L58
            if (r7 != r8) goto L53
            if (r6 == r2) goto L51
            goto L55
        L51:
            r6 = r4
            goto L58
        L53:
            if (r5 == r2) goto L57
        L55:
            r0 = r3
            goto L5c
        L57:
            r5 = r4
        L58:
            int r4 = r4 + 1
            goto Lb
        L5b:
            r0 = r8
        L5c:
            if (r6 == r2) goto L61
            if (r5 == r2) goto L61
            r3 = r8
        L61:
            r0 = r0 & r3
            if (r0 == 0) goto L6d
            com.tkay.expressad.exoplayer.aa r0 = new com.tkay.expressad.exoplayer.aa
            r0.<init>(r1)
            r17[r6] = r0
            r17[r5] = r0
        L6d:
            return
    }

    @java.lang.Deprecated
    private boolean a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$c r0 = r1.c()
            boolean r2 = r0.a(r2)
            return r2
    }

    @java.lang.Deprecated
    private boolean a(int r2, com.tkay.expressad.exoplayer.h.af r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$c r0 = r1.c()
            boolean r2 = r0.a(r2, r3)
            return r2
    }

    protected static boolean a(int r1, boolean r2) {
            r1 = r1 & 7
            r0 = 4
            if (r1 == r0) goto Ld
            if (r2 == 0) goto Lb
            r2 = 3
            if (r1 != r2) goto Lb
            goto Ld
        Lb:
            r1 = 0
            return r1
        Ld:
            r1 = 1
            return r1
    }

    private static boolean a(com.tkay.expressad.exoplayer.m r1) {
            java.lang.String r0 = r1.A
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "und"
            boolean r1 = a(r1, r0)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            return r1
        L13:
            r1 = 1
            return r1
    }

    private static boolean a(com.tkay.expressad.exoplayer.m r2, int r3, com.tkay.expressad.exoplayer.i.c.a r4) {
            r0 = 0
            boolean r3 = a(r3, r0)
            if (r3 == 0) goto L23
            int r3 = r2.u
            int r1 = r4.a
            if (r3 != r1) goto L23
            int r3 = r2.v
            int r1 = r4.b
            if (r3 != r1) goto L23
            java.lang.String r3 = r4.c
            if (r3 == 0) goto L21
            java.lang.String r3 = r4.c
            java.lang.String r2 = r2.h
            boolean r2 = android.text.TextUtils.equals(r3, r2)
            if (r2 == 0) goto L23
        L21:
            r2 = 1
            return r2
        L23:
            return r0
    }

    protected static boolean a(com.tkay.expressad.exoplayer.m r0, java.lang.String r1) {
            if (r1 == 0) goto L10
            java.lang.String r0 = r0.A
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b(r0)
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    private static boolean a(com.tkay.expressad.exoplayer.m r2, java.lang.String r3, int r4, int r5, int r6, int r7, int r8) {
            r0 = 0
            boolean r1 = a(r4, r0)
            if (r1 == 0) goto L2f
            r4 = r4 & r5
            if (r4 == 0) goto L2f
            if (r3 == 0) goto L14
            java.lang.String r4 = r2.h
            boolean r3 = com.tkay.expressad.exoplayer.k.af.a(r4, r3)
            if (r3 == 0) goto L2f
        L14:
            int r3 = r2.m
            r4 = -1
            if (r3 == r4) goto L1d
            int r3 = r2.m
            if (r3 > r6) goto L2f
        L1d:
            int r3 = r2.n
            if (r3 == r4) goto L25
            int r3 = r2.n
            if (r3 > r7) goto L2f
        L25:
            int r3 = r2.d
            if (r3 == r4) goto L2d
            int r2 = r2.d
            if (r2 > r8) goto L2f
        L2d:
            r2 = 1
            return r2
        L2f:
            return r0
    }

    private static boolean a(int[][] r4, com.tkay.expressad.exoplayer.h.af r5, com.tkay.expressad.exoplayer.i.f r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            com.tkay.expressad.exoplayer.h.ae r1 = r6.f()
            int r5 = r5.a(r1)
            r1 = r0
        Ld:
            int r2 = r6.g()
            if (r1 >= r2) goto L24
            r2 = r4[r5]
            int r3 = r6.b(r1)
            r2 = r2[r3]
            r3 = 32
            r2 = r2 & r3
            if (r2 == r3) goto L21
            return r0
        L21:
            int r1 = r1 + 1
            goto Ld
        L24:
            r4 = 1
            return r4
    }

    private static int[] a(com.tkay.expressad.exoplayer.h.ae r10, int[] r11, boolean r12) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1 = 0
            r2 = 0
            r5 = r1
            r3 = r2
            r4 = r3
        La:
            int r6 = r10.a
            if (r3 >= r6) goto L32
            com.tkay.expressad.exoplayer.m r6 = r10.a(r3)
            com.tkay.expressad.exoplayer.i.c$a r7 = new com.tkay.expressad.exoplayer.i.c$a
            int r8 = r6.u
            int r9 = r6.v
            if (r12 == 0) goto L1c
            r6 = r1
            goto L1e
        L1c:
            java.lang.String r6 = r6.h
        L1e:
            r7.<init>(r8, r9, r6)
            boolean r6 = r0.add(r7)
            if (r6 == 0) goto L2f
            int r6 = a(r10, r11, r7)
            if (r6 <= r4) goto L2f
            r4 = r6
            r5 = r7
        L2f:
            int r3 = r3 + 1
            goto La
        L32:
            r12 = 1
            if (r4 <= r12) goto L57
            int[] r12 = new int[r4]
            r0 = r2
        L38:
            int r1 = r10.a
            if (r2 >= r1) goto L56
            com.tkay.expressad.exoplayer.m r1 = r10.a(r2)
            r3 = r11[r2]
            java.lang.Object r4 = com.tkay.expressad.exoplayer.k.a.a(r5)
            com.tkay.expressad.exoplayer.i.c$a r4 = (com.tkay.expressad.exoplayer.i.c.a) r4
            boolean r1 = a(r1, r3, r4)
            if (r1 == 0) goto L53
            int r1 = r0 + 1
            r12[r0] = r2
            r0 = r1
        L53:
            int r2 = r2 + 1
            goto L38
        L56:
            return r12
        L57:
            int[] r10 = com.tkay.expressad.exoplayer.i.c.b
            return r10
    }

    private static int[] a(com.tkay.expressad.exoplayer.h.ae r16, int[] r17, boolean r18, int r19, int r20, int r21, int r22, int r23, int r24, boolean r25) {
            r8 = r16
            int r0 = r8.a
            r9 = 2
            if (r0 >= r9) goto La
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            return r0
        La:
            r0 = r23
            r1 = r24
            r2 = r25
            java.util.List r10 = a(r8, r0, r1, r2)
            int r0 = r10.size()
            if (r0 >= r9) goto L1d
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            return r0
        L1d:
            r0 = 0
            if (r18 != 0) goto L60
            java.util.HashSet r11 = new java.util.HashSet
            r11.<init>()
            r1 = 0
            r12 = r0
            r13 = r1
            r14 = r13
        L29:
            int r0 = r10.size()
            if (r13 >= r0) goto L5e
            java.lang.Object r0 = r10.get(r13)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            com.tkay.expressad.exoplayer.m r0 = r8.a(r0)
            java.lang.String r15 = r0.h
            boolean r0 = r11.add(r15)
            if (r0 == 0) goto L5b
            r0 = r16
            r1 = r17
            r2 = r19
            r3 = r15
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r10
            int r0 = a(r0, r1, r2, r3, r4, r5, r6, r7)
            if (r0 <= r14) goto L5b
            r14 = r0
            r12 = r15
        L5b:
            int r13 = r13 + 1
            goto L29
        L5e:
            r3 = r12
            goto L61
        L60:
            r3 = r0
        L61:
            r0 = r16
            r1 = r17
            r2 = r19
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r10
            b(r0, r1, r2, r3, r4, r5, r6, r7)
            int r0 = r10.size()
            if (r0 >= r9) goto L7a
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            return r0
        L7a:
            int[] r0 = com.tkay.expressad.exoplayer.k.af.a(r10)
            return r0
    }

    private com.tkay.expressad.exoplayer.i.f[] a(com.tkay.expressad.exoplayer.i.e.a r32, int[][][] r33, int[] r34, com.tkay.expressad.exoplayer.i.c.c r35) {
            r31 = this;
            r0 = r31
            r1 = r32
            r2 = r35
            int r3 = r32.a()
            com.tkay.expressad.exoplayer.i.f[] r4 = new com.tkay.expressad.exoplayer.i.f[r3]
            r6 = 0
            r7 = 0
            r8 = 0
        Lf:
            r10 = 2
            if (r6 >= r3) goto L14f
            int r12 = r1.a(r6)
            if (r10 != r12) goto L13c
            if (r7 != 0) goto L125
            com.tkay.expressad.exoplayer.h.af r7 = r1.b(r6)
            r12 = r33[r6]
            r13 = r34[r6]
            com.tkay.expressad.exoplayer.i.f$a r14 = r0.d
            boolean r15 = r2.m
            if (r15 != 0) goto L107
            if (r14 == 0) goto L107
            boolean r15 = r2.o
            if (r15 == 0) goto L31
            r15 = 24
            goto L33
        L31:
            r15 = 16
        L33:
            boolean r5 = r2.n
            if (r5 == 0) goto L3d
            r5 = r13 & r15
            if (r5 == 0) goto L3d
            r5 = 1
            goto L3e
        L3d:
            r5 = 0
        L3e:
            r13 = 0
        L3f:
            int r9 = r7.b
            if (r13 >= r9) goto L107
            com.tkay.expressad.exoplayer.h.ae r9 = r7.a(r13)
            r24 = r12[r13]
            int r11 = r2.f
            int r10 = r2.g
            int r0 = r2.h
            r25 = r3
            int r3 = r2.j
            r26 = r8
            int r8 = r2.k
            boolean r1 = r2.l
            r27 = r4
            int r4 = r9.a
            r28 = r6
            r6 = 2
            if (r4 >= r6) goto L68
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
        L64:
            r29 = r5
            goto Le5
        L68:
            java.util.List r1 = a(r9, r3, r8, r1)
            int r3 = r1.size()
            if (r3 >= r6) goto L75
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            goto L64
        L75:
            if (r5 != 0) goto Lc2
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>()
            r29 = r5
            r4 = 0
            r6 = 0
            r8 = 0
        L81:
            int r5 = r1.size()
            if (r4 >= r5) goto Lbf
            java.lang.Object r5 = r1.get(r4)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            com.tkay.expressad.exoplayer.m r5 = r9.a(r5)
            java.lang.String r5 = r5.h
            boolean r16 = r3.add(r5)
            if (r16 == 0) goto Lb8
            r16 = r9
            r17 = r24
            r18 = r15
            r19 = r5
            r20 = r11
            r21 = r10
            r22 = r0
            r23 = r1
            r30 = r3
            int r3 = a(r16, r17, r18, r19, r20, r21, r22, r23)
            if (r3 <= r8) goto Lba
            r8 = r3
            r6 = r5
            goto Lba
        Lb8:
            r30 = r3
        Lba:
            int r4 = r4 + 1
            r3 = r30
            goto L81
        Lbf:
            r19 = r6
            goto Lc6
        Lc2:
            r29 = r5
            r19 = 0
        Lc6:
            r16 = r9
            r17 = r24
            r18 = r15
            r20 = r11
            r21 = r10
            r22 = r0
            r23 = r1
            b(r16, r17, r18, r19, r20, r21, r22, r23)
            int r0 = r1.size()
            r3 = 2
            if (r0 >= r3) goto Le1
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            goto Le5
        Le1:
            int[] r0 = com.tkay.expressad.exoplayer.k.af.a(r1)
        Le5:
            int r1 = r0.length
            if (r1 <= 0) goto Lf4
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r14)
            com.tkay.expressad.exoplayer.i.f$a r1 = (com.tkay.expressad.exoplayer.i.f.a) r1
            com.tkay.expressad.exoplayer.i.f r0 = r1.a(r9, r0)
            r9 = r0
            goto L110
        Lf4:
            int r13 = r13 + 1
            r0 = r31
            r1 = r32
            r3 = r25
            r8 = r26
            r4 = r27
            r6 = r28
            r5 = r29
            r10 = 2
            goto L3f
        L107:
            r25 = r3
            r27 = r4
            r28 = r6
            r26 = r8
            r9 = 0
        L110:
            if (r9 != 0) goto L116
            com.tkay.expressad.exoplayer.i.f r9 = a(r7, r12, r2)
        L116:
            r27[r28] = r9
            r0 = r27[r28]
            if (r0 == 0) goto L11e
            r0 = 1
            goto L11f
        L11e:
            r0 = 0
        L11f:
            r7 = r0
            r5 = r28
            r0 = r32
            goto L12e
        L125:
            r25 = r3
            r27 = r4
            r26 = r8
            r0 = r32
            r5 = r6
        L12e:
            com.tkay.expressad.exoplayer.h.af r1 = r0.b(r5)
            int r1 = r1.b
            if (r1 <= 0) goto L138
            r11 = 1
            goto L139
        L138:
            r11 = 0
        L139:
            r8 = r26 | r11
            goto L144
        L13c:
            r0 = r1
            r25 = r3
            r27 = r4
            r5 = r6
            r26 = r8
        L144:
            int r6 = r5 + 1
            r1 = r0
            r3 = r25
            r4 = r27
            r0 = r31
            goto Lf
        L14f:
            r0 = r1
            r27 = r4
            r26 = r8
            r1 = r3
            r3 = 0
            r4 = 0
            r5 = 0
        L158:
            if (r3 >= r1) goto L1af
            int r6 = r0.a(r3)
            r7 = 1
            if (r6 == r7) goto L18c
            r8 = 2
            if (r6 == r8) goto L189
            r9 = 3
            if (r6 == r9) goto L174
            com.tkay.expressad.exoplayer.h.af r6 = r0.b(r3)
            r9 = r33[r3]
            com.tkay.expressad.exoplayer.i.f r6 = c(r6, r9, r2)
            r27[r3] = r6
            goto L189
        L174:
            if (r5 != 0) goto L189
            com.tkay.expressad.exoplayer.h.af r5 = r0.b(r3)
            r6 = r33[r3]
            com.tkay.expressad.exoplayer.i.f r5 = b(r5, r6, r2)
            r27[r3] = r5
            r5 = r27[r3]
            if (r5 == 0) goto L188
            r5 = r7
            goto L189
        L188:
            r5 = 0
        L189:
            r9 = r31
            goto L1ac
        L18c:
            r8 = 2
            if (r4 != 0) goto L189
            com.tkay.expressad.exoplayer.h.af r4 = r0.b(r3)
            r6 = r33[r3]
            if (r26 == 0) goto L19b
            r10 = 0
            r9 = r31
            goto L19f
        L19b:
            r9 = r31
            com.tkay.expressad.exoplayer.i.f$a r10 = r9.d
        L19f:
            com.tkay.expressad.exoplayer.i.f r4 = a(r4, r6, r2, r10)
            r27[r3] = r4
            r4 = r27[r3]
            if (r4 == 0) goto L1ab
            r4 = r7
            goto L1ac
        L1ab:
            r4 = 0
        L1ac:
            int r3 = r3 + 1
            goto L158
        L1af:
            r9 = r31
            return r27
    }

    private static int b(int r1, int r2) {
            r0 = -1
            if (r1 != r0) goto L8
            if (r2 != r0) goto L7
            r1 = 0
            return r1
        L7:
            return r0
        L8:
            if (r2 != r0) goto Lc
            r1 = 1
            return r1
        Lc:
            int r1 = r1 - r2
            return r1
    }

    @java.lang.Deprecated
    private com.tkay.expressad.exoplayer.i.c.e b(int r2, com.tkay.expressad.exoplayer.h.af r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$c r0 = r1.c()
            com.tkay.expressad.exoplayer.i.c$e r2 = r0.b(r2, r3)
            return r2
    }

    private static com.tkay.expressad.exoplayer.i.f b(com.tkay.expressad.exoplayer.h.af r24, int[][] r25, int r26, com.tkay.expressad.exoplayer.i.c.c r27, com.tkay.expressad.exoplayer.i.f.a r28) {
            r0 = r24
            r1 = r27
            boolean r2 = r1.o
            if (r2 == 0) goto Lb
            r2 = 24
            goto Ld
        Lb:
            r2 = 16
        Ld:
            boolean r3 = r1.n
            if (r3 == 0) goto L18
            r3 = r26 & r2
            if (r3 == 0) goto L18
            r3 = 1
            r12 = r3
            goto L19
        L18:
            r12 = 0
        L19:
            r13 = 0
        L1a:
            int r3 = r0.b
            r4 = 0
            if (r13 >= r3) goto Lf0
            com.tkay.expressad.exoplayer.h.ae r14 = r0.a(r13)
            r15 = r25[r13]
            int r10 = r1.f
            int r9 = r1.g
            int r8 = r1.h
            int r3 = r1.j
            int r5 = r1.k
            boolean r6 = r1.l
            int r7 = r14.a
            r11 = 2
            if (r7 >= r11) goto L3a
            int[] r3 = com.tkay.expressad.exoplayer.i.c.b
            goto Lde
        L3a:
            java.util.List r7 = a(r14, r3, r5, r6)
            int r3 = r7.size()
            if (r3 >= r11) goto L48
            int[] r3 = com.tkay.expressad.exoplayer.i.c.b
            goto Lde
        L48:
            if (r12 != 0) goto Lb9
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            r16 = r4
            r4 = 0
            r5 = 0
        L53:
            int r3 = r7.size()
            if (r5 >= r3) goto Lae
            java.lang.Object r3 = r7.get(r5)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            com.tkay.expressad.exoplayer.m r3 = r14.a(r3)
            java.lang.String r3 = r3.h
            boolean r17 = r6.add(r3)
            if (r17 == 0) goto L92
            r17 = r3
            r3 = r14
            r11 = r4
            r4 = r15
            r18 = r5
            r5 = r2
            r19 = r6
            r6 = r17
            r20 = r7
            r7 = r10
            r21 = r8
            r8 = r9
            r22 = r9
            r9 = r21
            r23 = r10
            r10 = r20
            int r4 = a(r3, r4, r5, r6, r7, r8, r9, r10)
            if (r4 <= r11) goto L9f
            r16 = r17
            goto La0
        L92:
            r11 = r4
            r18 = r5
            r19 = r6
            r20 = r7
            r21 = r8
            r22 = r9
            r23 = r10
        L9f:
            r4 = r11
        La0:
            int r5 = r18 + 1
            r6 = r19
            r7 = r20
            r8 = r21
            r9 = r22
            r10 = r23
            r11 = 2
            goto L53
        Lae:
            r20 = r7
            r21 = r8
            r22 = r9
            r23 = r10
            r6 = r16
            goto Lc2
        Lb9:
            r20 = r7
            r21 = r8
            r22 = r9
            r23 = r10
            r6 = r4
        Lc2:
            r3 = r14
            r4 = r15
            r5 = r2
            r7 = r23
            r8 = r22
            r9 = r21
            r10 = r20
            b(r3, r4, r5, r6, r7, r8, r9, r10)
            int r3 = r20.size()
            r4 = 2
            if (r3 >= r4) goto Lda
            int[] r3 = com.tkay.expressad.exoplayer.i.c.b
            goto Lde
        Lda:
            int[] r3 = com.tkay.expressad.exoplayer.k.af.a(r20)
        Lde:
            int r4 = r3.length
            if (r4 <= 0) goto Lec
            java.lang.Object r0 = com.tkay.expressad.exoplayer.k.a.a(r28)
            com.tkay.expressad.exoplayer.i.f$a r0 = (com.tkay.expressad.exoplayer.i.f.a) r0
            com.tkay.expressad.exoplayer.i.f r0 = r0.a(r14, r3)
            return r0
        Lec:
            int r13 = r13 + 1
            goto L1a
        Lf0:
            return r4
    }

    private static com.tkay.expressad.exoplayer.i.f b(com.tkay.expressad.exoplayer.h.af r16, int[][] r17, com.tkay.expressad.exoplayer.i.c.c r18) {
            r0 = r16
            r1 = r18
            r2 = 0
            r3 = 0
            r5 = r2
            r4 = r3
            r6 = r4
            r7 = r6
        La:
            int r8 = r0.b
            if (r4 >= r8) goto L92
            com.tkay.expressad.exoplayer.h.ae r8 = r0.a(r4)
            r9 = r17[r4]
            r10 = r3
        L15:
            int r11 = r8.a
            if (r10 >= r11) goto L8e
            r11 = r9[r10]
            boolean r12 = r1.p
            boolean r11 = a(r11, r12)
            if (r11 == 0) goto L8b
            com.tkay.expressad.exoplayer.m r11 = r8.a(r10)
            int r12 = r11.z
            int r13 = r1.e
            int r13 = ~r13
            r12 = r12 & r13
            r13 = r12 & 1
            if (r13 == 0) goto L33
            r13 = 1
            goto L34
        L33:
            r13 = r3
        L34:
            r12 = r12 & 2
            if (r12 == 0) goto L3a
            r12 = 1
            goto L3b
        L3a:
            r12 = r3
        L3b:
            java.lang.String r15 = r1.c
            boolean r15 = a(r11, r15)
            if (r15 != 0) goto L70
            boolean r14 = r1.d
            if (r14 == 0) goto L5e
            java.lang.String r14 = r11.A
            boolean r14 = android.text.TextUtils.isEmpty(r14)
            if (r14 != 0) goto L5a
            java.lang.String r14 = "und"
            boolean r14 = a(r11, r14)
            if (r14 == 0) goto L58
            goto L5a
        L58:
            r14 = r3
            goto L5b
        L5a:
            r14 = 1
        L5b:
            if (r14 == 0) goto L5e
            goto L70
        L5e:
            if (r13 == 0) goto L62
            r14 = 3
            goto L7c
        L62:
            if (r12 == 0) goto L8b
            java.lang.String r12 = r1.b
            boolean r11 = a(r11, r12)
            if (r11 == 0) goto L6e
            r14 = 2
            goto L7c
        L6e:
            r14 = 1
            goto L7c
        L70:
            if (r13 == 0) goto L75
            r11 = 8
            goto L7a
        L75:
            if (r12 != 0) goto L79
            r11 = 6
            goto L7a
        L79:
            r11 = 4
        L7a:
            int r14 = r11 + r15
        L7c:
            r11 = r9[r10]
            boolean r11 = a(r11, r3)
            if (r11 == 0) goto L86
            int r14 = r14 + 1000
        L86:
            if (r14 <= r7) goto L8b
            r5 = r8
            r6 = r10
            r7 = r14
        L8b:
            int r10 = r10 + 1
            goto L15
        L8e:
            int r4 = r4 + 1
            goto La
        L92:
            if (r5 != 0) goto L95
            return r2
        L95:
            com.tkay.expressad.exoplayer.i.d r0 = new com.tkay.expressad.exoplayer.i.d
            r0.<init>(r5, r6)
            return r0
    }

    @java.lang.Deprecated
    private void b(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$d r0 = r1.d()
            com.tkay.expressad.exoplayer.i.c$d r2 = r0.a(r2)
            r1.a(r2)
            return
    }

    @java.lang.Deprecated
    private void b(int r2, boolean r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$d r0 = r1.d()
            com.tkay.expressad.exoplayer.i.c$d r2 = r0.a(r2, r3)
            r1.a(r2)
            return
    }

    private static void b(com.tkay.expressad.exoplayer.h.ae r11, int[] r12, int r13, java.lang.String r14, int r15, int r16, int r17, java.util.List<java.lang.Integer> r18) {
            r0 = r18
            int r1 = r18.size()
            int r1 = r1 + (-1)
        L8:
            if (r1 < 0) goto L2e
            java.lang.Object r2 = r0.get(r1)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            r3 = r11
            com.tkay.expressad.exoplayer.m r4 = r11.a(r2)
            r6 = r12[r2]
            r5 = r14
            r7 = r13
            r8 = r15
            r9 = r16
            r10 = r17
            boolean r2 = a(r4, r5, r6, r7, r8, r9, r10)
            if (r2 != 0) goto L2b
            r0.remove(r1)
        L2b:
            int r1 = r1 + (-1)
            goto L8
        L2e:
            return
    }

    private static int c(int r0, int r1) {
            if (r0 <= r1) goto L4
            r0 = 1
            return r0
        L4:
            if (r1 <= r0) goto L8
            r0 = -1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private com.tkay.expressad.exoplayer.i.c.c c() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<com.tkay.expressad.exoplayer.i.c$c> r0 = r1.e
            java.lang.Object r0 = r0.get()
            com.tkay.expressad.exoplayer.i.c$c r0 = (com.tkay.expressad.exoplayer.i.c.c) r0
            return r0
    }

    private static com.tkay.expressad.exoplayer.i.f c(com.tkay.expressad.exoplayer.h.af r11, int[][] r12, com.tkay.expressad.exoplayer.i.c.c r13) {
            r0 = 0
            r1 = 0
            r3 = r0
            r2 = r1
            r4 = r2
            r5 = r4
        L6:
            int r6 = r11.b
            if (r2 >= r6) goto L44
            com.tkay.expressad.exoplayer.h.ae r6 = r11.a(r2)
            r7 = r12[r2]
            r8 = r1
        L11:
            int r9 = r6.a
            if (r8 >= r9) goto L41
            r9 = r7[r8]
            boolean r10 = r13.p
            boolean r9 = a(r9, r10)
            if (r9 == 0) goto L3e
            com.tkay.expressad.exoplayer.m r9 = r6.a(r8)
            int r9 = r9.z
            r10 = 1
            r9 = r9 & r10
            if (r9 == 0) goto L2b
            r9 = r10
            goto L2c
        L2b:
            r9 = r1
        L2c:
            if (r9 == 0) goto L2f
            r10 = 2
        L2f:
            r9 = r7[r8]
            boolean r9 = a(r9, r1)
            if (r9 == 0) goto L39
            int r10 = r10 + 1000
        L39:
            if (r10 <= r5) goto L3e
            r3 = r6
            r4 = r8
            r5 = r10
        L3e:
            int r8 = r8 + 1
            goto L11
        L41:
            int r2 = r2 + 1
            goto L6
        L44:
            if (r3 != 0) goto L47
            return r0
        L47:
            com.tkay.expressad.exoplayer.i.d r11 = new com.tkay.expressad.exoplayer.i.d
            r11.<init>(r3, r4)
            return r11
    }

    @java.lang.Deprecated
    private void c(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$d r0 = r1.d()
            com.tkay.expressad.exoplayer.i.c$d r2 = r0.b(r2)
            r1.a(r2)
            return
    }

    @java.lang.Deprecated
    private void c(int r2, com.tkay.expressad.exoplayer.h.af r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$d r0 = r1.d()
            com.tkay.expressad.exoplayer.i.c$d r2 = r0.a(r2, r3)
            r1.a(r2)
            return
    }

    private com.tkay.expressad.exoplayer.i.c.d d() {
            r3 = this;
            com.tkay.expressad.exoplayer.i.c$c r0 = r3.c()
            com.tkay.expressad.exoplayer.i.c$d r1 = new com.tkay.expressad.exoplayer.i.c$d
            r2 = 0
            r1.<init>(r0, r2)
            return r1
    }

    @java.lang.Deprecated
    private void e() {
            r1 = this;
            com.tkay.expressad.exoplayer.i.c$d r0 = r1.d()
            com.tkay.expressad.exoplayer.i.c$d r0 = r0.a()
            r1.a(r0)
            return
    }

    @Override
    protected final android.util.Pair<com.tkay.expressad.exoplayer.aa[], com.tkay.expressad.exoplayer.i.f[]> a(com.tkay.expressad.exoplayer.i.e.a r33, int[][][] r34, int[] r35) {
            r32 = this;
            r0 = r32
            r1 = r33
            r2 = r34
            java.util.concurrent.atomic.AtomicReference<com.tkay.expressad.exoplayer.i.c$c> r3 = r0.e
            java.lang.Object r3 = r3.get()
            com.tkay.expressad.exoplayer.i.c$c r3 = (com.tkay.expressad.exoplayer.i.c.c) r3
            int r4 = r33.a()
            int r5 = r33.a()
            com.tkay.expressad.exoplayer.i.f[] r6 = new com.tkay.expressad.exoplayer.i.f[r5]
            r8 = 0
            r9 = 0
            r10 = 0
        L1b:
            r11 = 2
            if (r8 >= r5) goto L165
            int r14 = r1.a(r8)
            if (r11 != r14) goto L14c
            if (r9 != 0) goto L133
            com.tkay.expressad.exoplayer.h.af r9 = r1.b(r8)
            r14 = r2[r8]
            r15 = r35[r8]
            com.tkay.expressad.exoplayer.i.f$a r7 = r0.d
            boolean r12 = r3.m
            if (r12 != 0) goto L113
            if (r7 == 0) goto L113
            boolean r12 = r3.o
            if (r12 == 0) goto L3d
            r12 = 24
            goto L3f
        L3d:
            r12 = 16
        L3f:
            boolean r13 = r3.n
            if (r13 == 0) goto L49
            r13 = r15 & r12
            if (r13 == 0) goto L49
            r13 = 1
            goto L4a
        L49:
            r13 = 0
        L4a:
            r15 = 0
        L4b:
            int r11 = r9.b
            if (r15 >= r11) goto L113
            com.tkay.expressad.exoplayer.h.ae r11 = r9.a(r15)
            r24 = r14[r15]
            r25 = r4
            int r4 = r3.f
            int r0 = r3.g
            int r2 = r3.h
            r26 = r5
            int r5 = r3.j
            r27 = r10
            int r10 = r3.k
            boolean r1 = r3.l
            r28 = r6
            int r6 = r11.a
            r29 = r8
            r8 = 2
            if (r6 >= r8) goto L74
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            goto Lf0
        L74:
            java.util.List r1 = a(r11, r5, r10, r1)
            int r5 = r1.size()
            if (r5 >= r8) goto L82
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            goto Lf0
        L82:
            if (r13 != 0) goto Lcf
            java.util.HashSet r5 = new java.util.HashSet
            r5.<init>()
            r6 = 0
            r10 = 0
            r30 = 0
        L8d:
            int r8 = r1.size()
            if (r6 >= r8) goto Lcc
            java.lang.Object r8 = r1.get(r6)
            java.lang.Integer r8 = (java.lang.Integer) r8
            int r8 = r8.intValue()
            com.tkay.expressad.exoplayer.m r8 = r11.a(r8)
            java.lang.String r8 = r8.h
            boolean r16 = r5.add(r8)
            if (r16 == 0) goto Lc5
            r16 = r11
            r17 = r24
            r18 = r12
            r19 = r8
            r20 = r4
            r21 = r0
            r22 = r2
            r23 = r1
            r31 = r5
            int r5 = a(r16, r17, r18, r19, r20, r21, r22, r23)
            if (r5 <= r10) goto Lc7
            r10 = r5
            r30 = r8
            goto Lc7
        Lc5:
            r31 = r5
        Lc7:
            int r6 = r6 + 1
            r5 = r31
            goto L8d
        Lcc:
            r19 = r30
            goto Ld1
        Lcf:
            r19 = 0
        Ld1:
            r16 = r11
            r17 = r24
            r18 = r12
            r20 = r4
            r21 = r0
            r22 = r2
            r23 = r1
            b(r16, r17, r18, r19, r20, r21, r22, r23)
            int r0 = r1.size()
            r2 = 2
            if (r0 >= r2) goto Lec
            int[] r0 = com.tkay.expressad.exoplayer.i.c.b
            goto Lf0
        Lec:
            int[] r0 = com.tkay.expressad.exoplayer.k.af.a(r1)
        Lf0:
            int r1 = r0.length
            if (r1 <= 0) goto Lff
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r7)
            com.tkay.expressad.exoplayer.i.f$a r1 = (com.tkay.expressad.exoplayer.i.f.a) r1
            com.tkay.expressad.exoplayer.i.f r0 = r1.a(r11, r0)
            r12 = r0
            goto L11e
        Lff:
            int r15 = r15 + 1
            r0 = r32
            r1 = r33
            r2 = r34
            r4 = r25
            r5 = r26
            r10 = r27
            r6 = r28
            r8 = r29
            goto L4b
        L113:
            r25 = r4
            r26 = r5
            r28 = r6
            r29 = r8
            r27 = r10
            r12 = 0
        L11e:
            if (r12 != 0) goto L124
            com.tkay.expressad.exoplayer.i.f r12 = a(r9, r14, r3)
        L124:
            r28[r29] = r12
            r0 = r28[r29]
            if (r0 == 0) goto L12c
            r0 = 1
            goto L12d
        L12c:
            r0 = 0
        L12d:
            r9 = r0
            r7 = r29
            r0 = r33
            goto L13e
        L133:
            r25 = r4
            r26 = r5
            r28 = r6
            r27 = r10
            r0 = r33
            r7 = r8
        L13e:
            com.tkay.expressad.exoplayer.h.af r1 = r0.b(r7)
            int r1 = r1.b
            if (r1 <= 0) goto L148
            r13 = 1
            goto L149
        L148:
            r13 = 0
        L149:
            r10 = r27 | r13
            goto L156
        L14c:
            r0 = r1
            r25 = r4
            r26 = r5
            r28 = r6
            r7 = r8
            r27 = r10
        L156:
            int r8 = r7 + 1
            r2 = r34
            r1 = r0
            r4 = r25
            r5 = r26
            r6 = r28
            r0 = r32
            goto L1b
        L165:
            r0 = r1
            r25 = r4
            r28 = r6
            r27 = r10
            r1 = r5
            r2 = 0
            r4 = 0
            r5 = 0
        L170:
            if (r2 >= r1) goto L1d0
            int r6 = r0.a(r2)
            r7 = 1
            if (r6 == r7) goto L1ab
            r7 = 2
            if (r6 == r7) goto L1a8
            r8 = 3
            if (r6 == r8) goto L18e
            com.tkay.expressad.exoplayer.h.af r6 = r0.b(r2)
            r8 = r34
            r9 = r8[r2]
            com.tkay.expressad.exoplayer.i.f r6 = c(r6, r9, r3)
            r28[r2] = r6
            goto L1a5
        L18e:
            r8 = r34
            if (r5 != 0) goto L1a5
            com.tkay.expressad.exoplayer.h.af r5 = r0.b(r2)
            r6 = r8[r2]
            com.tkay.expressad.exoplayer.i.f r5 = b(r5, r6, r3)
            r28[r2] = r5
            r5 = r28[r2]
            if (r5 == 0) goto L1a4
            r5 = 1
            goto L1a5
        L1a4:
            r5 = 0
        L1a5:
            r9 = r32
            goto L1cd
        L1a8:
            r8 = r34
            goto L1a5
        L1ab:
            r8 = r34
            r7 = 2
            if (r4 != 0) goto L1a5
            com.tkay.expressad.exoplayer.h.af r4 = r0.b(r2)
            r6 = r8[r2]
            if (r27 == 0) goto L1bc
            r10 = 0
            r9 = r32
            goto L1c0
        L1bc:
            r9 = r32
            com.tkay.expressad.exoplayer.i.f$a r10 = r9.d
        L1c0:
            com.tkay.expressad.exoplayer.i.f r4 = a(r4, r6, r3, r10)
            r28[r2] = r4
            r4 = r28[r2]
            if (r4 == 0) goto L1cc
            r4 = 1
            goto L1cd
        L1cc:
            r4 = 0
        L1cd:
            int r2 = r2 + 1
            goto L170
        L1d0:
            r9 = r32
            r8 = r34
            r1 = r25
            r2 = 0
        L1d7:
            if (r2 >= r1) goto L22c
            boolean r4 = r3.a(r2)
            if (r4 == 0) goto L1e3
            r4 = 0
            r28[r2] = r4
            goto L227
        L1e3:
            r4 = 0
            com.tkay.expressad.exoplayer.h.af r5 = r0.b(r2)
            boolean r6 = r3.a(r2, r5)
            if (r6 == 0) goto L227
            com.tkay.expressad.exoplayer.i.c$e r6 = r3.b(r2, r5)
            if (r6 != 0) goto L1f7
            r28[r2] = r4
            goto L227
        L1f7:
            int r7 = r6.c
            r10 = 1
            if (r7 != r10) goto L20f
            com.tkay.expressad.exoplayer.i.d r7 = new com.tkay.expressad.exoplayer.i.d
            int r11 = r6.a
            com.tkay.expressad.exoplayer.h.ae r5 = r5.a(r11)
            int[] r6 = r6.b
            r11 = 0
            r6 = r6[r11]
            r7.<init>(r5, r6)
            r28[r2] = r7
            goto L229
        L20f:
            r11 = 0
            com.tkay.expressad.exoplayer.i.f$a r7 = r9.d
            java.lang.Object r7 = com.tkay.expressad.exoplayer.k.a.a(r7)
            com.tkay.expressad.exoplayer.i.f$a r7 = (com.tkay.expressad.exoplayer.i.f.a) r7
            int r12 = r6.a
            com.tkay.expressad.exoplayer.h.ae r5 = r5.a(r12)
            int[] r6 = r6.b
            com.tkay.expressad.exoplayer.i.f r5 = r7.a(r5, r6)
            r28[r2] = r5
            goto L229
        L227:
            r10 = 1
            r11 = 0
        L229:
            int r2 = r2 + 1
            goto L1d7
        L22c:
            r4 = 0
            r10 = 1
            r11 = 0
            com.tkay.expressad.exoplayer.aa[] r2 = new com.tkay.expressad.exoplayer.aa[r1]
            r5 = r11
        L232:
            if (r5 >= r1) goto L253
            boolean r6 = r3.a(r5)
            if (r6 != 0) goto L247
            int r6 = r0.a(r5)
            r7 = 5
            if (r6 == r7) goto L245
            r6 = r28[r5]
            if (r6 == 0) goto L247
        L245:
            r7 = r10
            goto L248
        L247:
            r7 = r11
        L248:
            if (r7 == 0) goto L24d
            com.tkay.expressad.exoplayer.aa r6 = com.tkay.expressad.exoplayer.aa.a
            goto L24e
        L24d:
            r6 = r4
        L24e:
            r2[r5] = r6
            int r5 = r5 + 1
            goto L232
        L253:
            int r1 = r3.q
            r3 = r28
            a(r0, r8, r2, r3, r1)
            android.util.Pair r0 = android.util.Pair.create(r2, r3)
            return r0
    }
}

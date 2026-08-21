package com.xiaomi.push;

public final class iv {
    private static final java.util.Comparator a = null;

    class a implements java.util.Comparator {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(com.xiaomi.push.iw r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public int compare(java.lang.Object r2, java.lang.Object r3) {
                r1 = this;
                if (r2 != 0) goto L6
                if (r3 != 0) goto L6
                r2 = 0
                return r2
            L6:
                if (r2 != 0) goto La
                r2 = -1
                return r2
            La:
                if (r3 != 0) goto Le
                r2 = 1
                return r2
            Le:
                boolean r0 = r2 instanceof java.util.List
                if (r0 == 0) goto L1b
                java.util.List r2 = (java.util.List) r2
                java.util.List r3 = (java.util.List) r3
                int r2 = com.xiaomi.push.iv.a(r2, r3)
                return r2
            L1b:
                boolean r0 = r2 instanceof java.util.Set
                if (r0 == 0) goto L28
                java.util.Set r2 = (java.util.Set) r2
                java.util.Set r3 = (java.util.Set) r3
                int r2 = com.xiaomi.push.iv.a(r2, r3)
                return r2
            L28:
                boolean r0 = r2 instanceof java.util.Map
                if (r0 == 0) goto L35
                java.util.Map r2 = (java.util.Map) r2
                java.util.Map r3 = (java.util.Map) r3
                int r2 = com.xiaomi.push.iv.a(r2, r3)
                return r2
            L35:
                boolean r0 = r2 instanceof byte[]
                if (r0 == 0) goto L46
                byte[] r2 = (byte[]) r2
                byte[] r2 = (byte[]) r2
                byte[] r3 = (byte[]) r3
                byte[] r3 = (byte[]) r3
                int r2 = com.xiaomi.push.iv.a(r2, r3)
                return r2
            L46:
                java.lang.Comparable r2 = (java.lang.Comparable) r2
                java.lang.Comparable r3 = (java.lang.Comparable) r3
                int r2 = com.xiaomi.push.iv.a(r2, r3)
                return r2
        }
    }

    static {
            com.xiaomi.push.iv$a r0 = new com.xiaomi.push.iv$a
            r1 = 0
            r0.<init>(r1)
            com.xiaomi.push.iv.a = r0
            return
    }

    public static int a(byte r0, byte r1) {
            if (r0 >= r1) goto L4
            r0 = -1
            return r0
        L4:
            if (r1 >= r0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static int a(int r0, int r1) {
            if (r0 >= r1) goto L4
            r0 = -1
            return r0
        L4:
            if (r1 >= r0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static int a(long r1, long r3) {
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 >= 0) goto L6
            r1 = -1
            return r1
        L6:
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 >= 0) goto Lc
            r1 = 1
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public static int a(java.lang.Comparable r0, java.lang.Comparable r1) {
            int r0 = r0.compareTo(r1)
            return r0
    }

    public static int a(java.lang.String r0, java.lang.String r1) {
            int r0 = r0.compareTo(r1)
            return r0
    }

    public static int a(java.nio.ByteBuffer r3, byte[] r4, int r5) {
            int r0 = r3.remaining()
            byte[] r1 = r3.array()
            int r2 = r3.arrayOffset()
            int r3 = r3.position()
            int r2 = r2 + r3
            java.lang.System.arraycopy(r1, r2, r4, r5, r0)
            return r0
    }

    public static int a(java.util.List r5, java.util.List r6) {
            int r0 = r5.size()
            int r1 = r6.size()
            int r0 = a(r0, r1)
            if (r0 == 0) goto Lf
            return r0
        Lf:
            r0 = 0
            r1 = r0
        L11:
            int r2 = r5.size()
            if (r1 >= r2) goto L2b
            java.util.Comparator r2 = com.xiaomi.push.iv.a
            java.lang.Object r3 = r5.get(r1)
            java.lang.Object r4 = r6.get(r1)
            int r2 = r2.compare(r3, r4)
            if (r2 == 0) goto L28
            return r2
        L28:
            int r1 = r1 + 1
            goto L11
        L2b:
            return r0
    }

    public static int a(java.util.Map r5, java.util.Map r6) {
            int r0 = r5.size()
            int r1 = r6.size()
            int r0 = a(r0, r1)
            if (r0 == 0) goto Lf
            return r0
        Lf:
            java.util.TreeMap r0 = new java.util.TreeMap
            java.util.Comparator r1 = com.xiaomi.push.iv.a
            r0.<init>(r1)
            r0.putAll(r5)
            java.util.Set r5 = r0.entrySet()
            java.util.Iterator r5 = r5.iterator()
            java.util.TreeMap r0 = new java.util.TreeMap
            java.util.Comparator r1 = com.xiaomi.push.iv.a
            r0.<init>(r1)
            r0.putAll(r6)
            java.util.Set r6 = r0.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L33:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L6d
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L6d
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r6.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.util.Comparator r2 = com.xiaomi.push.iv.a
            java.lang.Object r3 = r0.getKey()
            java.lang.Object r4 = r1.getKey()
            int r2 = r2.compare(r3, r4)
            if (r2 == 0) goto L5c
            return r2
        L5c:
            java.util.Comparator r2 = com.xiaomi.push.iv.a
            java.lang.Object r0 = r0.getValue()
            java.lang.Object r1 = r1.getValue()
            int r0 = r2.compare(r0, r1)
            if (r0 == 0) goto L33
            return r0
        L6d:
            r5 = 0
            return r5
    }

    public static int a(java.util.Set r3, java.util.Set r4) {
            int r0 = r3.size()
            int r1 = r4.size()
            int r0 = a(r0, r1)
            if (r0 == 0) goto Lf
            return r0
        Lf:
            java.util.TreeSet r0 = new java.util.TreeSet
            java.util.Comparator r1 = com.xiaomi.push.iv.a
            r0.<init>(r1)
            r0.addAll(r3)
            java.util.TreeSet r3 = new java.util.TreeSet
            java.util.Comparator r1 = com.xiaomi.push.iv.a
            r3.<init>(r1)
            r3.addAll(r4)
            java.util.Iterator r4 = r0.iterator()
            java.util.Iterator r3 = r3.iterator()
        L2b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L48
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L48
            java.util.Comparator r0 = com.xiaomi.push.iv.a
            java.lang.Object r1 = r4.next()
            java.lang.Object r2 = r3.next()
            int r0 = r0.compare(r1, r2)
            if (r0 == 0) goto L2b
            return r0
        L48:
            r3 = 0
            return r3
    }

    public static int a(short r0, short r1) {
            if (r0 >= r1) goto L4
            r0 = -1
            return r0
        L4:
            if (r1 >= r0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static int a(boolean r0, boolean r1) {
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            return r0
    }

    public static int a(byte[] r4, byte[] r5) {
            int r0 = r4.length
            int r1 = r5.length
            int r0 = a(r0, r1)
            if (r0 == 0) goto L9
            return r0
        L9:
            r0 = 0
            r1 = r0
        Lb:
            int r2 = r4.length
            if (r1 >= r2) goto L1c
            r2 = r4[r1]
            r3 = r5[r1]
            int r2 = a(r2, r3)
            if (r2 == 0) goto L19
            return r2
        L19:
            int r1 = r1 + 1
            goto Lb
        L1c:
            return r0
    }

    public static java.lang.String a(byte r1) {
            r1 = r1 | 256(0x100, float:3.59E-43)
            r1 = r1 & 511(0x1ff, float:7.16E-43)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            java.lang.String r1 = r1.toUpperCase()
            r0 = 1
            java.lang.String r1 = r1.substring(r0)
            return r1
    }

    public static java.nio.ByteBuffer a(java.nio.ByteBuffer r1) {
            boolean r0 = a(r1)
            if (r0 == 0) goto L7
            return r1
        L7:
            byte[] r1 = a(r1)
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r1)
            return r1
    }

    public static void a(java.nio.ByteBuffer r5, java.lang.StringBuilder r6) {
            byte[] r0 = r5.array()
            int r1 = r5.arrayOffset()
            int r5 = r5.limit()
            int r2 = r5 - r1
            r3 = 128(0x80, float:1.8E-43)
            if (r2 <= r3) goto L15
            int r2 = r1 + 128
            goto L16
        L15:
            r2 = r5
        L16:
            r3 = r1
        L17:
            if (r3 >= r2) goto L2c
            if (r3 <= r1) goto L20
            java.lang.String r4 = " "
            r6.append(r4)
        L20:
            r4 = r0[r3]
            java.lang.String r4 = a(r4)
            r6.append(r4)
            int r3 = r3 + 1
            goto L17
        L2c:
            if (r5 == r2) goto L33
            java.lang.String r5 = "..."
            r6.append(r5)
        L33:
            return
    }

    public static boolean a(java.nio.ByteBuffer r1) {
            boolean r0 = r1.hasArray()
            if (r0 == 0) goto L1e
            int r0 = r1.position()
            if (r0 != 0) goto L1e
            int r0 = r1.arrayOffset()
            if (r0 != 0) goto L1e
            int r0 = r1.remaining()
            int r1 = r1.capacity()
            if (r0 != r1) goto L1e
            r1 = 1
            goto L1f
        L1e:
            r1 = 0
        L1f:
            return r1
    }

    public static byte[] a(java.nio.ByteBuffer r2) {
            boolean r0 = a(r2)
            if (r0 == 0) goto Lb
            byte[] r2 = r2.array()
            return r2
        Lb:
            int r0 = r2.remaining()
            byte[] r0 = new byte[r0]
            r1 = 0
            a(r2, r0, r1)
            return r0
    }
}

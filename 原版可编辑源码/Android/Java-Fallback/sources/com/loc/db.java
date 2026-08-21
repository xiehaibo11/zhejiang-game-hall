package com.loc;

public final class db {
    private java.util.List<com.loc.eg> a;
    private com.loc.ef b;
    private java.util.ArrayList<com.loc.eg> c;


    public db() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.c = r0
            return
    }

    private static java.util.List<com.loc.eg> a(java.util.List<com.loc.eg> r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2 = 0
        Lb:
            int r3 = r5.size()
            if (r2 >= r3) goto L23
            java.lang.Object r3 = r5.get(r2)
            com.loc.eg r3 = (com.loc.eg) r3
            int r4 = r3.c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1.put(r4, r3)
            int r2 = r2 + 1
            goto Lb
        L23:
            java.util.Collection r5 = r1.values()
            r0.addAll(r5)
            return r0
    }

    private boolean a(com.loc.ef r5) {
            r4 = this;
            float r0 = r5.g
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto Lb
            r1 = 1128792064(0x43480000, float:200.0)
            goto L15
        Lb:
            float r0 = r5.g
            r2 = 1073741824(0x40000000, float:2.0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L15
            r1 = 1112014848(0x42480000, float:50.0)
        L15:
            com.loc.ef r0 = r4.b
            double r2 = r5.a(r0)
            double r0 = (double) r1
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 <= 0) goto L22
            r5 = 1
            return r5
        L22:
            r5 = 0
            return r5
    }

    private static boolean a(com.loc.ef r4, long r5, long r7) {
            float r4 = r4.g
            r0 = 1092616192(0x41200000, float:10.0)
            int r4 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r4 < 0) goto Lb
            r4 = 2000(0x7d0, float:2.803E-42)
            goto Ld
        Lb:
            r4 = 3500(0xdac, float:4.905E-42)
        Ld:
            r0 = 0
            r2 = 0
            int r3 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r3 <= 0) goto L1c
            long r7 = r7 - r5
            long r4 = (long) r4
            int r6 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r6 >= 0) goto L1c
            r4 = 1
            r2 = 1
        L1c:
            return r2
    }

    private static boolean a(java.util.List<com.loc.eg> r8, java.util.List<com.loc.eg> r9) {
            r0 = 0
            if (r8 == 0) goto L6f
            if (r9 != 0) goto L6
            goto L6f
        L6:
            int r1 = r8.size()
            int r2 = r9.size()
            int r3 = r1 + r2
            if (r1 <= r2) goto L13
            goto L16
        L13:
            r7 = r9
            r9 = r8
            r8 = r7
        L16:
            java.util.HashMap r1 = new java.util.HashMap
            int r2 = r8.size()
            r1.<init>(r2)
            java.util.Iterator r8 = r8.iterator()
        L23:
            boolean r2 = r8.hasNext()
            r4 = 1
            if (r2 == 0) goto L3e
            java.lang.Object r2 = r8.next()
            com.loc.eg r2 = (com.loc.eg) r2
            long r5 = r2.a
            java.lang.Long r2 = java.lang.Long.valueOf(r5)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1.put(r2, r4)
            goto L23
        L3e:
            java.util.Iterator r8 = r9.iterator()
            r9 = 0
        L43:
            boolean r2 = r8.hasNext()
            if (r2 == 0) goto L60
            java.lang.Object r2 = r8.next()
            com.loc.eg r2 = (com.loc.eg) r2
            long r5 = r2.a
            java.lang.Long r2 = java.lang.Long.valueOf(r5)
            java.lang.Object r2 = r1.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            if (r2 == 0) goto L43
            int r9 = r9 + 1
            goto L43
        L60:
            double r8 = (double) r9
            r1 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r8 = r8 * r1
            double r1 = (double) r3
            r5 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            double r1 = r1 * r5
            int r3 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r3 < 0) goto L6f
            return r4
        L6f:
            return r0
    }

    private java.util.List<com.loc.eg> b(java.util.List<com.loc.eg> r2) {
            r1 = this;
            com.loc.db$1 r0 = new com.loc.db$1
            r0.<init>(r1)
            java.util.Collections.sort(r2, r0)
            return r2
    }

    private void b(java.util.List<com.loc.eg> r4, java.util.List<com.loc.eg> r5) {
            r3 = this;
            r4.clear()
            if (r5 == 0) goto L24
            java.util.List r5 = a(r5)
            java.util.List r5 = r3.b(r5)
            int r0 = r5.size()
            r1 = 40
            if (r0 <= r1) goto L17
            r0 = 40
        L17:
            r1 = 0
        L18:
            if (r1 >= r0) goto L24
            java.lang.Object r2 = r5.get(r1)
            r4.add(r2)
            int r1 = r1 + 1
            goto L18
        L24:
            return
    }

    private boolean b(com.loc.ef r2, java.util.List<com.loc.eg> r3, boolean r4, long r5, long r7) {
            r1 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            boolean r4 = a(r2, r5, r7)
            r5 = 1
            if (r4 == 0) goto L27
            if (r3 == 0) goto L27
            int r4 = r3.size()
            if (r4 <= 0) goto L27
            com.loc.ef r4 = r1.b
            if (r4 == 0) goto L26
            boolean r0 = r1.a(r2)
            if (r0 != 0) goto L27
            java.util.List<com.loc.eg> r2 = r1.a
            boolean r2 = a(r3, r2)
            r0 = r2 ^ 1
            goto L27
        L26:
            r0 = 1
        L27:
            return r0
    }

    final java.util.List<com.loc.eg> a(com.loc.ef r1, java.util.List<com.loc.eg> r2, boolean r3, long r4, long r6) {
            r0 = this;
            boolean r3 = r0.b(r1, r2, r3, r4, r6)
            if (r3 == 0) goto L1a
            java.util.ArrayList<com.loc.eg> r3 = r0.c
            r0.b(r3, r2)
            java.util.List<com.loc.eg> r3 = r0.a
            r3.clear()
            java.util.List<com.loc.eg> r3 = r0.a
            r3.addAll(r2)
            r0.b = r1
            java.util.ArrayList<com.loc.eg> r1 = r0.c
            return r1
        L1a:
            r1 = 0
            return r1
    }
}

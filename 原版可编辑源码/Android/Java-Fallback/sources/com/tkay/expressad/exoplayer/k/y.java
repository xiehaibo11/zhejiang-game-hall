package com.tkay.expressad.exoplayer.k;

public final class y {
    private static final java.util.Comparator<com.tkay.expressad.exoplayer.k.y.a> a = null;
    private static final java.util.Comparator<com.tkay.expressad.exoplayer.k.y.a> b = null;
    private static final int c = -1;
    private static final int d = 0;
    private static final int e = 1;
    private static final int f = 5;
    private final int g;
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.k.y.a> h;
    private final com.tkay.expressad.exoplayer.k.y.a[] i;
    private int j;
    private int k;
    private int l;
    private int m;



    private static class a {
        public int a;
        public int b;
        public float c;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            com.tkay.expressad.exoplayer.k.y$1 r0 = new com.tkay.expressad.exoplayer.k.y$1
            r0.<init>()
            com.tkay.expressad.exoplayer.k.y.a = r0
            com.tkay.expressad.exoplayer.k.y$2 r0 = new com.tkay.expressad.exoplayer.k.y$2
            r0.<init>()
            com.tkay.expressad.exoplayer.k.y.b = r0
            return
    }

    public y(int r1) {
            r0 = this;
            r0.<init>()
            r0.g = r1
            r1 = 5
            com.tkay.expressad.exoplayer.k.y$a[] r1 = new com.tkay.expressad.exoplayer.k.y.a[r1]
            r0.i = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.h = r1
            r1 = -1
            r0.j = r1
            return
    }

    private void b() {
            r3 = this;
            int r0 = r3.j
            r1 = 1
            if (r0 == r1) goto Le
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r0 = r3.h
            java.util.Comparator<com.tkay.expressad.exoplayer.k.y$a> r2 = com.tkay.expressad.exoplayer.k.y.a
            java.util.Collections.sort(r0, r2)
            r3.j = r1
        Le:
            return
    }

    private void c() {
            r2 = this;
            int r0 = r2.j
            if (r0 == 0) goto Le
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r0 = r2.h
            java.util.Comparator<com.tkay.expressad.exoplayer.k.y$a> r1 = com.tkay.expressad.exoplayer.k.y.b
            java.util.Collections.sort(r0, r1)
            r0 = 0
            r2.j = r0
        Le:
            return
    }

    public final float a() {
            r5 = this;
            int r0 = r5.j
            r1 = 0
            if (r0 == 0) goto Le
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r0 = r5.h
            java.util.Comparator<com.tkay.expressad.exoplayer.k.y$a> r2 = com.tkay.expressad.exoplayer.k.y.b
            java.util.Collections.sort(r0, r2)
            r5.j = r1
        Le:
            r0 = 1056964608(0x3f000000, float:0.5)
            int r2 = r5.l
            float r2 = (float) r2
            float r2 = r2 * r0
            r0 = r1
        L15:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r3 = r5.h
            int r3 = r3.size()
            if (r1 >= r3) goto L33
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r3 = r5.h
            java.lang.Object r3 = r3.get(r1)
            com.tkay.expressad.exoplayer.k.y$a r3 = (com.tkay.expressad.exoplayer.k.y.a) r3
            int r4 = r3.b
            int r0 = r0 + r4
            float r4 = (float) r0
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 < 0) goto L30
            float r0 = r3.c
            return r0
        L30:
            int r1 = r1 + 1
            goto L15
        L33:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r0 = r5.h
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L3e
            r0 = 2143289344(0x7fc00000, float:NaN)
            return r0
        L3e:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r0 = r5.h
            int r1 = r0.size()
            int r1 = r1 + (-1)
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.exoplayer.k.y$a r0 = (com.tkay.expressad.exoplayer.k.y.a) r0
            float r0 = r0.c
            return r0
    }

    public final void a(int r5, float r6) {
            r4 = this;
            int r0 = r4.j
            r1 = 1
            if (r0 == r1) goto Le
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r0 = r4.h
            java.util.Comparator<com.tkay.expressad.exoplayer.k.y$a> r2 = com.tkay.expressad.exoplayer.k.y.a
            java.util.Collections.sort(r0, r2)
            r4.j = r1
        Le:
            int r0 = r4.m
            r2 = 0
            if (r0 <= 0) goto L1b
            com.tkay.expressad.exoplayer.k.y$a[] r3 = r4.i
            int r0 = r0 - r1
            r4.m = r0
            r0 = r3[r0]
            goto L20
        L1b:
            com.tkay.expressad.exoplayer.k.y$a r0 = new com.tkay.expressad.exoplayer.k.y$a
            r0.<init>(r2)
        L20:
            int r1 = r4.k
            int r3 = r1 + 1
            r4.k = r3
            r0.a = r1
            r0.b = r5
            r0.c = r6
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r6 = r4.h
            r6.add(r0)
            int r6 = r4.l
            int r6 = r6 + r5
            r4.l = r6
        L36:
            int r5 = r4.l
            int r6 = r4.g
            if (r5 <= r6) goto L6e
            int r5 = r5 - r6
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r6 = r4.h
            java.lang.Object r6 = r6.get(r2)
            com.tkay.expressad.exoplayer.k.y$a r6 = (com.tkay.expressad.exoplayer.k.y.a) r6
            int r0 = r6.b
            if (r0 > r5) goto L63
            int r5 = r4.l
            int r0 = r6.b
            int r5 = r5 - r0
            r4.l = r5
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.y$a> r5 = r4.h
            r5.remove(r2)
            int r5 = r4.m
            r0 = 5
            if (r5 >= r0) goto L36
            com.tkay.expressad.exoplayer.k.y$a[] r0 = r4.i
            int r1 = r5 + 1
            r4.m = r1
            r0[r5] = r6
            goto L36
        L63:
            int r0 = r6.b
            int r0 = r0 - r5
            r6.b = r0
            int r6 = r4.l
            int r6 = r6 - r5
            r4.l = r6
            goto L36
        L6e:
            return
    }
}

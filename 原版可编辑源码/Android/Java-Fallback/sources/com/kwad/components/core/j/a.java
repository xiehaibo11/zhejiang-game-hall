package com.kwad.components.core.j;

public final class a {
    private java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.core.j.a.b> KY;
    private volatile boolean KZ;

    static final class a {
        private static final com.kwad.components.core.j.a La = null;

        static {
                com.kwad.components.core.j.a r0 = new com.kwad.components.core.j.a
                r0.<init>()
                com.kwad.components.core.j.a.a.La = r0
                return
        }

        static com.kwad.components.core.j.a ob() {
                com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.a.La
                return r0
        }
    }

    public static class b {
        private final com.kwad.components.core.j.a.c Lb;
        public boolean Lc;

        public b(com.kwad.components.core.j.a.c r1) {
                r0 = this;
                r0.<init>()
                r0.Lb = r1
                return
        }

        static com.kwad.components.core.j.a.c d(com.kwad.components.core.j.a.b r0) {
                com.kwad.components.core.j.a$c r0 = r0.Lb
                return r0
        }
    }

    public interface c {
        void bi();
    }

    public a() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.KY = r0
            return
    }

    public static boolean b(com.kwad.components.core.j.a.b r0) {
            if (r0 != 0) goto L4
            r0 = 1
            return r0
        L4:
            boolean r0 = r0.Lc
            return r0
    }

    public static com.kwad.components.core.j.a oa() {
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.a.ob()
            return r0
    }

    public final void a(com.kwad.components.core.j.a.b r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.core.j.a$b> r0 = r1.KY
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L9
            return
        L9:
            boolean r0 = r1.KZ
            if (r0 != 0) goto L12
            r0 = 1
            r1.KZ = r0
            r2.Lc = r0
        L12:
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.core.j.a$b> r0 = r1.KY
            r0.add(r2)
            return
    }

    public final void c(com.kwad.components.core.j.a.b r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = r3.Lc
            r1 = 0
            if (r0 == 0) goto Lc
            r3.Lc = r1
            r2.KZ = r1
        Lc:
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.core.j.a$b> r0 = r2.KY
            r0.remove(r3)
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.core.j.a$b> r3 = r2.KY
            int r3 = r3.size()
            if (r3 != 0) goto L1a
            return
        L1a:
            boolean r3 = r2.KZ
            if (r3 == 0) goto L1f
            return
        L1f:
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.core.j.a$b> r3 = r2.KY
            java.lang.Object r3 = r3.get(r1)
            com.kwad.components.core.j.a$b r3 = (com.kwad.components.core.j.a.b) r3
            r0 = 1
            r3.Lc = r0
            r2.KZ = r0
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.core.j.a$b> r3 = r2.KY
            java.lang.Object r3 = r3.get(r1)
            com.kwad.components.core.j.a$b r3 = (com.kwad.components.core.j.a.b) r3
            com.kwad.components.core.j.a$c r3 = com.kwad.components.core.j.a.b.d(r3)
            r3.bi()
            return
    }
}

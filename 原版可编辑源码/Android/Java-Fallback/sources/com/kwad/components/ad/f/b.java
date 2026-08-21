package com.kwad.components.ad.f;

public final class b {
    private com.kwad.sdk.core.g.d dO;
    private java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.ad.f.b.b> mm;
    private int mn;


    static final class a {
        private static final com.kwad.components.ad.f.b mq = null;

        static {
                com.kwad.components.ad.f.b r0 = new com.kwad.components.ad.f.b
                r0.<init>()
                com.kwad.components.ad.f.b.a.mq = r0
                return
        }

        static com.kwad.components.ad.f.b eE() {
                com.kwad.components.ad.f.b r0 = com.kwad.components.ad.f.b.a.mq
                return r0
        }
    }

    public static class b {
        private final com.kwad.components.ad.f.b.c mr;
        private final java.lang.ref.WeakReference<android.view.View> ms;

        public b(com.kwad.components.ad.f.b.c r2, android.view.View r3) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r3)
                r1.ms = r0
                r1.mr = r2
                return
        }

        static com.kwad.components.ad.f.b.c a(com.kwad.components.ad.f.b.b r0) {
                com.kwad.components.ad.f.b$c r0 = r0.mr
                return r0
        }

        static java.lang.ref.WeakReference b(com.kwad.components.ad.f.b.b r0) {
                java.lang.ref.WeakReference<android.view.View> r0 = r0.ms
                return r0
        }
    }

    public interface c {
        void f(double r1);
    }

    public b() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.mm = r0
            return
    }

    static java.util.concurrent.CopyOnWriteArrayList a(com.kwad.components.ad.f.b r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.ad.f.b$b> r0 = r0.mm
            return r0
    }

    private void a(float r3, android.content.Context r4) {
            r2 = this;
            com.kwad.sdk.core.g.d r0 = new com.kwad.sdk.core.g.d
            r0.<init>(r3)
            r2.dO = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.mm = r0
            com.kwad.sdk.core.g.d r0 = r2.dO
            com.kwad.components.ad.f.b$1 r1 = new com.kwad.components.ad.f.b$1
            r1.<init>(r2)
            r0.a(r1)
            com.kwad.sdk.core.g.d r0 = r2.dO
            r0.e(r3)
            com.kwad.sdk.core.g.d r3 = r2.dO
            r3.bg(r4)
            return
    }

    static void a(com.kwad.components.ad.f.b r0, double r1) {
            r0.e(r1)
            return
    }

    static com.kwad.sdk.core.g.d b(com.kwad.components.ad.f.b r0) {
            com.kwad.sdk.core.g.d r0 = r0.dO
            return r0
    }

    private void e(double r10) {
            r9 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.ad.f.b$b> r0 = r9.mm
            float r1 = com.kwad.sdk.core.config.d.zH()
            r2 = 1120403456(0x42c80000, float:100.0)
            float r1 = r1 * r2
            int r1 = (int) r1
            boolean r2 = r0.isEmpty()
            if (r2 != 0) goto L9d
            r2 = 2147483647(0x7fffffff, float:NaN)
            java.util.Iterator r0 = r0.iterator()
            r3 = 0
            r4 = r3
        L19:
            boolean r5 = r0.hasNext()
            if (r5 == 0) goto L67
            java.lang.Object r5 = r0.next()
            com.kwad.components.ad.f.b$b r5 = (com.kwad.components.ad.f.b.b) r5
            java.lang.ref.WeakReference r6 = com.kwad.components.ad.f.b.b.b(r5)
            if (r6 == 0) goto L19
            android.graphics.Rect r7 = new android.graphics.Rect
            r7.<init>()
            java.lang.Object r8 = r6.get()
            android.view.View r8 = (android.view.View) r8
            boolean r8 = r8.getGlobalVisibleRect(r7)
            if (r8 == 0) goto L19
            java.lang.Object r6 = r6.get()
            android.view.View r6 = (android.view.View) r6
            boolean r6 = com.kwad.sdk.utils.bm.o(r6, r1)
            if (r6 == 0) goto L19
            int r6 = r9.mn
            int r6 = r6 / 2
            int r8 = r7.top
            int r8 = r8 - r6
            int r8 = java.lang.Math.abs(r8)
            int r7 = r7.bottom
            int r7 = r7 - r6
            int r6 = java.lang.Math.abs(r7)
            int r6 = java.lang.Math.min(r8, r6)
            if (r6 >= r2) goto L63
            r3 = r5
            r2 = r6
            goto L19
        L63:
            if (r6 != r2) goto L19
            r4 = r5
            goto L19
        L67:
            if (r3 == 0) goto L9d
            if (r4 == 0) goto L96
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            java.lang.ref.WeakReference r1 = com.kwad.components.ad.f.b.b.b(r3)
            java.lang.Object r1 = r1.get()
            android.view.View r1 = (android.view.View) r1
            r1.getGlobalVisibleRect(r0)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            java.lang.ref.WeakReference r2 = com.kwad.components.ad.f.b.b.b(r4)
            java.lang.Object r2 = r2.get()
            android.view.View r2 = (android.view.View) r2
            r2.getGlobalVisibleRect(r0)
            int r0 = r0.top
            int r1 = r1.top
            if (r0 >= r1) goto L96
            r3 = r4
        L96:
            com.kwad.components.ad.f.b$c r0 = com.kwad.components.ad.f.b.b.a(r3)
            r0.f(r10)
        L9d:
            return
    }

    public static com.kwad.components.ad.f.b eD() {
            com.kwad.components.ad.f.b r0 = com.kwad.components.ad.f.b.a.eE()
            return r0
    }

    public final void a(float r2, android.view.View r3, com.kwad.components.ad.f.b.c r4) {
            r1 = this;
            if (r3 == 0) goto L28
            android.content.Context r0 = r3.getContext()
            if (r0 != 0) goto L9
            goto L28
        L9:
            com.kwad.sdk.core.g.d r0 = r1.dO
            if (r0 != 0) goto L1e
            android.content.Context r0 = r3.getContext()
            int r0 = com.kwad.sdk.d.a.a.aG(r0)
            r1.mn = r0
            android.content.Context r0 = r3.getContext()
            r1.a(r2, r0)
        L1e:
            com.kwad.components.ad.f.b$b r2 = new com.kwad.components.ad.f.b$b
            r2.<init>(r4, r3)
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.ad.f.b$b> r3 = r1.mm
            r3.add(r2)
        L28:
            return
    }

    public final void a(com.kwad.components.ad.f.b.c r4) {
            r3 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.ad.f.b$b> r0 = r3.mm
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.f.b$b r1 = (com.kwad.components.ad.f.b.b) r1
            com.kwad.components.ad.f.b$c r2 = com.kwad.components.ad.f.b.b.a(r1)
            if (r2 != r4) goto L6
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.ad.f.b$b> r2 = r3.mm
            r2.remove(r1)
            goto L6
        L1e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "sShakeItems size "
            r4.<init>(r0)
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.components.ad.f.b$b> r0 = r3.mm
            int r0 = r0.size()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "KSNativeAdShakeManager"
            com.kwad.sdk.core.e.c.d(r0, r4)
            return
    }
}

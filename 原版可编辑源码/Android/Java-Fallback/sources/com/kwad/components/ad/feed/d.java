package com.kwad.components.ad.feed;

public final class d {
    private static com.kwad.sdk.core.g.d dO;
    private static android.os.Vibrator dP;
    private static java.util.List<com.kwad.components.ad.feed.d.a> dQ;


    public static class a {
        private com.kwad.components.ad.feed.d.b dS;
        private android.content.Context mContext;

        public a(com.kwad.components.ad.feed.d.b r1, android.content.Context r2) {
                r0 = this;
                r0.<init>()
                r0.dS = r1
                r0.mContext = r2
                return
        }

        static com.kwad.components.ad.feed.d.b a(com.kwad.components.ad.feed.d.a r0) {
                com.kwad.components.ad.feed.d$b r0 = r0.dS
                return r0
        }

        static android.content.Context b(com.kwad.components.ad.feed.d.a r0) {
                android.content.Context r0 = r0.mContext
                return r0
        }
    }

    public interface b {
        boolean b(double r1);
    }

    static {
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.components.ad.feed.d.dQ = r0
            return
    }

    private static android.os.Vibrator F(android.content.Context r1) {
            android.os.Vibrator r0 = com.kwad.components.ad.feed.d.dP
            if (r0 != 0) goto Le
            java.lang.String r0 = "vibrator"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.os.Vibrator r1 = (android.os.Vibrator) r1
            com.kwad.components.ad.feed.d.dP = r1
        Le:
            android.os.Vibrator r1 = com.kwad.components.ad.feed.d.dP
            return r1
    }

    static android.os.Vibrator G(android.content.Context r0) {
            android.os.Vibrator r0 = F(r0)
            return r0
    }

    private static void a(float r2, android.content.Context r3) {
            com.kwad.sdk.core.g.d r0 = new com.kwad.sdk.core.g.d
            r0.<init>(r2)
            com.kwad.components.ad.feed.d.dO = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.components.ad.feed.d.dQ = r0
            com.kwad.sdk.core.g.d r0 = com.kwad.components.ad.feed.d.dO
            com.kwad.components.ad.feed.d$1 r1 = new com.kwad.components.ad.feed.d$1
            r1.<init>()
            r0.a(r1)
            com.kwad.sdk.core.g.d r0 = com.kwad.components.ad.feed.d.dO
            r0.e(r2)
            com.kwad.sdk.core.g.d r2 = com.kwad.components.ad.feed.d.dO
            r2.bg(r3)
            return
    }

    public static void a(float r1, android.content.Context r2, com.kwad.components.ad.feed.d.b r3) {
            com.kwad.sdk.core.g.d r0 = com.kwad.components.ad.feed.d.dO
            if (r0 != 0) goto L7
            a(r1, r2)
        L7:
            com.kwad.components.ad.feed.d$a r1 = new com.kwad.components.ad.feed.d$a
            r1.<init>(r3, r2)
            java.util.List<com.kwad.components.ad.feed.d$a> r2 = com.kwad.components.ad.feed.d.dQ
            r2.add(r1)
            return
    }

    public static void a(com.kwad.components.ad.feed.d.b r3) {
            java.util.List<com.kwad.components.ad.feed.d$a> r0 = com.kwad.components.ad.feed.d.dQ
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.feed.d$a r1 = (com.kwad.components.ad.feed.d.a) r1
            com.kwad.components.ad.feed.d$b r2 = com.kwad.components.ad.feed.d.a.a(r1)
            if (r2 != r3) goto L6
            java.util.List<com.kwad.components.ad.feed.d$a> r2 = com.kwad.components.ad.feed.d.dQ
            r2.remove(r1)
            goto L6
        L1e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "sShakeItems size "
            r3.<init>(r0)
            java.util.List<com.kwad.components.ad.feed.d$a> r0 = com.kwad.components.ad.feed.d.dQ
            int r0 = r0.size()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "KSFeedShakeManager"
            com.kwad.sdk.core.e.c.d(r0, r3)
            return
    }

    static java.util.List aR() {
            java.util.List<com.kwad.components.ad.feed.d$a> r0 = com.kwad.components.ad.feed.d.dQ
            return r0
    }

    static com.kwad.sdk.core.g.d aS() {
            com.kwad.sdk.core.g.d r0 = com.kwad.components.ad.feed.d.dO
            return r0
    }
}

package com.kwad.sdk.crash.online.monitor.block;

public final class b {
    private static java.util.List<java.lang.String> aAG = null;
    private static java.util.List<java.lang.String> aAH = null;
    private static int aAI = 5;

    static {
            return
    }

    public static void a(com.kwad.sdk.crash.online.monitor.a.a r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.crash.online.monitor.block.b.aAG = r0
            java.util.List<java.lang.String> r0 = r2.aAU
            if (r0 == 0) goto L1b
            java.util.List<java.lang.String> r0 = r2.aAU
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1b
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            java.util.List<java.lang.String> r1 = r2.aAU
            r0.addAll(r1)
            goto L45
        L1b:
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            java.lang.String r1 = "com.kwad"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            java.lang.String r1 = "com.kwai"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            java.lang.String r1 = "com.ksad"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            java.lang.String r1 = "tkruntime"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            java.lang.String r1 = "tachikoma"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            java.lang.String r1 = "kuaishou"
            r0.add(r1)
        L45:
            int r0 = r2.aAZ
            com.kwad.sdk.crash.online.monitor.block.b.aAI = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.crash.online.monitor.block.b.aAH = r0
            java.util.List<java.lang.String> r0 = r2.aAT
            if (r0 == 0) goto L64
            java.util.List<java.lang.String> r0 = r2.aAT
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L64
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAH
            java.util.List<java.lang.String> r2 = r2.aAT
            r0.addAll(r2)
            return
        L64:
            java.util.List<java.lang.String> r2 = com.kwad.sdk.crash.online.monitor.block.b.aAH
            java.lang.String r0 = "android."
            r2.add(r0)
            java.util.List<java.lang.String> r2 = com.kwad.sdk.crash.online.monitor.block.b.aAH
            java.lang.String r0 = "androidx."
            r2.add(r0)
            java.util.List<java.lang.String> r2 = com.kwad.sdk.crash.online.monitor.block.b.aAH
            java.lang.String r0 = "org."
            r2.add(r0)
            java.util.List<java.lang.String> r2 = com.kwad.sdk.crash.online.monitor.block.b.aAH
            java.lang.String r0 = "java."
            r2.add(r0)
            return
    }

    private static boolean eA(java.lang.String r3) {
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAH
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1e
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r3.contains(r2)
            if (r2 == 0) goto La
            r3 = 1
            return r3
        L1e:
            return r1
    }

    private static boolean eB(java.lang.String r3) {
            java.util.List<java.lang.String> r0 = com.kwad.sdk.crash.online.monitor.block.b.aAG
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1e
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r3.contains(r2)
            if (r2 == 0) goto La
            r3 = 1
            return r3
        L1e:
            return r1
    }

    public static java.lang.String eC(java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "\n"
            java.lang.String[] r0 = r8.split(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "stacks after split:"
            r2.<init>(r3)
            int r3 = r0.length
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "perfMonitor.Filter"
            com.kwad.sdk.core.e.c.d(r3, r2)
            int r2 = r0.length
            r3 = 0
            r4 = r3
            r5 = r4
        L27:
            if (r3 >= r2) goto L45
            r6 = r0[r3]
            if (r4 != 0) goto L33
            boolean r7 = eA(r6)
            if (r7 != 0) goto L42
        L33:
            int r4 = com.kwad.sdk.crash.online.monitor.block.b.aAI
            if (r5 < r4) goto L38
            return r1
        L38:
            boolean r4 = eB(r6)
            if (r4 == 0) goto L3f
            return r8
        L3f:
            int r5 = r5 + 1
            r4 = 1
        L42:
            int r3 = r3 + 1
            goto L27
        L45:
            return r1
    }
}

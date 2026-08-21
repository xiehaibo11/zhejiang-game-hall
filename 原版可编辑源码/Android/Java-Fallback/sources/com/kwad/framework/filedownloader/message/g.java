package com.kwad.framework.filedownloader.message;

public final class g {
    private final com.kwad.framework.filedownloader.message.e.b adP;
    private final java.util.List<com.kwad.framework.filedownloader.message.g.a> adR;

    public class a {
        private final java.util.List<java.lang.Integer> adS;
        private final java.util.concurrent.Executor adT;
        final com.kwad.framework.filedownloader.message.g adU;


        public a(com.kwad.framework.filedownloader.message.g r2, int r3) {
                r1 = this;
                r1.adU = r2
                r1.<init>()
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                r1.adS = r2
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r0 = "Flow-"
                r2.<init>(r0)
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                r3 = 1
                java.util.concurrent.ThreadPoolExecutor r2 = com.kwad.framework.filedownloader.f.b.j(r3, r2)
                r1.adT = r2
                return
        }

        static java.util.List a(com.kwad.framework.filedownloader.message.g.a r0) {
                java.util.List<java.lang.Integer> r0 = r0.adS
                return r0
        }

        public final void bw(int r2) {
                r1 = this;
                java.util.List<java.lang.Integer> r0 = r1.adS
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0.add(r2)
                return
        }

        public final void u(com.kwad.framework.filedownloader.message.MessageSnapshot r3) {
                r2 = this;
                java.util.concurrent.Executor r0 = r2.adT
                com.kwad.framework.filedownloader.message.g$a$1 r1 = new com.kwad.framework.filedownloader.message.g$a$1
                r1.<init>(r2, r3)
                r0.execute(r1)
                return
        }
    }

    g(int r2, com.kwad.framework.filedownloader.message.e.b r3) {
            r1 = this;
            r1.<init>()
            r1.adP = r3
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.adR = r2
            r2 = 0
        Ld:
            r3 = 5
            if (r2 >= r3) goto L1d
            java.util.List<com.kwad.framework.filedownloader.message.g$a> r3 = r1.adR
            com.kwad.framework.filedownloader.message.g$a r0 = new com.kwad.framework.filedownloader.message.g$a
            r0.<init>(r1, r2)
            r3.add(r0)
            int r2 = r2 + 1
            goto Ld
        L1d:
            return
    }

    static com.kwad.framework.filedownloader.message.e.b a(com.kwad.framework.filedownloader.message.g r0) {
            com.kwad.framework.filedownloader.message.e$b r0 = r0.adP
            return r0
    }

    public final void u(com.kwad.framework.filedownloader.message.MessageSnapshot r8) {
            r7 = this;
            r0 = 0
            java.util.List<com.kwad.framework.filedownloader.message.g$a> r1 = r7.adR     // Catch: java.lang.Throwable -> L70
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L70
            int r2 = r8.getId()     // Catch: java.lang.Throwable -> L6d
            java.util.List<com.kwad.framework.filedownloader.message.g$a> r3 = r7.adR     // Catch: java.lang.Throwable -> L6d
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L6d
        Le:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L29
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L6d
            com.kwad.framework.filedownloader.message.g$a r4 = (com.kwad.framework.filedownloader.message.g.a) r4     // Catch: java.lang.Throwable -> L6d
            java.util.List r5 = com.kwad.framework.filedownloader.message.g.a.a(r4)     // Catch: java.lang.Throwable -> L6d
            java.lang.Integer r6 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L6d
            boolean r5 = r5.contains(r6)     // Catch: java.lang.Throwable -> L6d
            if (r5 == 0) goto Le
            r0 = r4
        L29:
            if (r0 != 0) goto L61
            r3 = 0
            java.util.List<com.kwad.framework.filedownloader.message.g$a> r4 = r7.adR     // Catch: java.lang.Throwable -> L6d
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L6d
        L32:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L6d
            if (r5 == 0) goto L61
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L6d
            com.kwad.framework.filedownloader.message.g$a r5 = (com.kwad.framework.filedownloader.message.g.a) r5     // Catch: java.lang.Throwable -> L6d
            java.util.List r6 = com.kwad.framework.filedownloader.message.g.a.a(r5)     // Catch: java.lang.Throwable -> L6d
            int r6 = r6.size()     // Catch: java.lang.Throwable -> L6d
            if (r6 > 0) goto L4a
            r0 = r5
            goto L61
        L4a:
            if (r3 == 0) goto L56
            java.util.List r6 = com.kwad.framework.filedownloader.message.g.a.a(r5)     // Catch: java.lang.Throwable -> L6d
            int r6 = r6.size()     // Catch: java.lang.Throwable -> L6d
            if (r6 >= r3) goto L32
        L56:
            java.util.List r3 = com.kwad.framework.filedownloader.message.g.a.a(r5)     // Catch: java.lang.Throwable -> L6d
            int r0 = r3.size()     // Catch: java.lang.Throwable -> L6d
            r3 = r0
            r0 = r5
            goto L32
        L61:
            if (r0 == 0) goto L66
            r0.bw(r2)     // Catch: java.lang.Throwable -> L6d
        L66:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L6c
            r0.u(r8)
        L6c:
            return
        L6d:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6d
            throw r2     // Catch: java.lang.Throwable -> L70
        L70:
            r1 = move-exception
            if (r0 == 0) goto L76
            r0.u(r8)
        L76:
            throw r1
    }
}

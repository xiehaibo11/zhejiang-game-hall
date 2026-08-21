package com.kwad.sdk.ip.direct;

public final class b {
    static int aCB = 80;
    static int port = 80;

    static class a extends java.lang.Thread {
        java.nio.channels.Selector aCC;
        java.util.LinkedList aCD;
        volatile boolean aCE;

        a() {
                r1 = this;
                r1.<init>()
                java.util.LinkedList r0 = new java.util.LinkedList
                r0.<init>()
                r1.aCD = r0
                r0 = 0
                r1.aCE = r0
                java.nio.channels.Selector r0 = java.nio.channels.Selector.open()
                r1.aCC = r0
                java.lang.String r0 = "Connector"
                r1.setName(r0)
                return
        }

        private void FX() {
                r5 = this;
                java.util.LinkedList r0 = r5.aCD
                monitor-enter(r0)
            L3:
                java.util.LinkedList r1 = r5.aCD     // Catch: java.lang.Throwable -> L28
                int r1 = r1.size()     // Catch: java.lang.Throwable -> L28
                if (r1 <= 0) goto L26
                java.util.LinkedList r1 = r5.aCD     // Catch: java.lang.Throwable -> L28
                java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L28
                com.kwad.sdk.ip.direct.b$b r1 = (com.kwad.sdk.ip.direct.b.b) r1     // Catch: java.lang.Throwable -> L28
                java.nio.channels.SocketChannel r2 = r1.aCG     // Catch: java.lang.Throwable -> L1d
                java.nio.channels.Selector r3 = r5.aCC     // Catch: java.lang.Throwable -> L1d
                r4 = 8
                r2.register(r3, r4, r1)     // Catch: java.lang.Throwable -> L1d
                goto L3
            L1d:
                r2 = move-exception
                java.nio.channels.SocketChannel r3 = r1.aCG     // Catch: java.lang.Throwable -> L28
                r3.close()     // Catch: java.lang.Throwable -> L28
                r1.aCH = r2     // Catch: java.lang.Throwable -> L28
                goto L3
            L26:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
                return
            L28:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
                throw r1
        }

        private void FY() {
                r6 = this;
                java.nio.channels.Selector r0 = r6.aCC
                java.util.Set r0 = r0.selectedKeys()
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L3f
                java.lang.Object r1 = r0.next()
                java.nio.channels.SelectionKey r1 = (java.nio.channels.SelectionKey) r1
                r0.remove()
                java.lang.Object r2 = r1.attachment()
                com.kwad.sdk.ip.direct.b$b r2 = (com.kwad.sdk.ip.direct.b.b) r2
                java.nio.channels.SelectableChannel r3 = r1.channel()
                java.nio.channels.SocketChannel r3 = (java.nio.channels.SocketChannel) r3
                boolean r4 = r3.finishConnect()     // Catch: java.lang.Throwable -> L38
                if (r4 == 0) goto La
                r1.cancel()     // Catch: java.lang.Throwable -> L38
                long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L38
                r2.aCK = r4     // Catch: java.lang.Throwable -> L38
                r3.close()     // Catch: java.lang.Throwable -> L38
                goto La
            L38:
                r1 = move-exception
                com.kwad.sdk.utils.bj.c(r3)
                r2.aCH = r1
                goto La
            L3f:
                return
        }

        final void a(com.kwad.sdk.ip.direct.b.b r5) {
                r4 = this;
                java.nio.channels.SocketChannel r0 = java.nio.channels.SocketChannel.open()     // Catch: java.lang.Throwable -> L39
                r1 = 0
                r0.configureBlocking(r1)     // Catch: java.lang.Throwable -> L37
                java.net.InetSocketAddress r1 = r5.aCF     // Catch: java.lang.Throwable -> L37
                boolean r1 = r0.connect(r1)     // Catch: java.lang.Throwable -> L37
                r5.aCG = r0     // Catch: java.lang.Throwable -> L37
                long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L37
                r5.aCJ = r2     // Catch: java.lang.Throwable -> L37
                if (r1 == 0) goto L20
                long r1 = r5.aCJ     // Catch: java.lang.Throwable -> L37
                r5.aCK = r1     // Catch: java.lang.Throwable -> L37
                com.kwad.sdk.utils.bj.c(r0)     // Catch: java.lang.Throwable -> L37
                goto L40
            L20:
                java.util.LinkedList r1 = r4.aCD     // Catch: java.lang.Throwable -> L37
                monitor-enter(r1)     // Catch: java.lang.Throwable -> L37
                java.util.LinkedList r2 = r4.aCD     // Catch: java.lang.Throwable -> L34
                r2.add(r5)     // Catch: java.lang.Throwable -> L34
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L34
                java.nio.channels.Selector r5 = r4.aCC     // Catch: java.lang.Throwable -> L37
                if (r5 == 0) goto L33
                java.nio.channels.Selector r5 = r4.aCC     // Catch: java.lang.Throwable -> L33
                r5.wakeup()     // Catch: java.lang.Throwable -> L33
                goto L40
            L33:
                return
            L34:
                r2 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L34
                throw r2     // Catch: java.lang.Throwable -> L37
            L37:
                r1 = move-exception
                goto L3b
            L39:
                r1 = move-exception
                r0 = 0
            L3b:
                com.kwad.sdk.utils.bj.c(r0)
                r5.aCH = r1
            L40:
                return
        }

        @Override
        public final void run() {
                r1 = this;
            L0:
                java.nio.channels.Selector r0 = r1.aCC     // Catch: java.lang.Throwable -> L1c
                int r0 = r0.select()     // Catch: java.lang.Throwable -> L1c
                if (r0 <= 0) goto Lb
                r1.FY()     // Catch: java.lang.Throwable -> L1c
            Lb:
                r1.FX()     // Catch: java.lang.Throwable -> L1c
                boolean r0 = r1.aCE     // Catch: java.lang.Throwable -> L1c
                if (r0 == 0) goto L0
                java.nio.channels.Selector r0 = r1.aCC     // Catch: java.lang.Throwable -> L1c
                if (r0 == 0) goto L1b
                java.nio.channels.Selector r0 = r1.aCC     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L1c
                r0.close()     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L1c
            L1b:
                return
            L1c:
                r0 = move-exception
                r0.printStackTrace()
                goto L0
        }

        final void shutdown() {
                r1 = this;
                r0 = 1
                r1.aCE = r0
                java.nio.channels.Selector r0 = r1.aCC
                if (r0 == 0) goto La
                r0.wakeup()     // Catch: java.lang.Throwable -> La
            La:
                return
        }
    }

    static class b {
        java.net.InetSocketAddress aCF;
        java.nio.channels.SocketChannel aCG;
        java.lang.Throwable aCH;
        private float aCI;
        long aCJ;
        long aCK;
        boolean aCL;
        private boolean success;

        b(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.aCK = r0
                r0 = 0
                r2.aCL = r0
                java.net.InetSocketAddress r0 = new java.net.InetSocketAddress     // Catch: java.lang.Throwable -> L18
                java.net.InetAddress r3 = java.net.InetAddress.getByName(r3)     // Catch: java.lang.Throwable -> L18
                int r1 = com.kwad.sdk.ip.direct.b.port     // Catch: java.lang.Throwable -> L18
                r0.<init>(r3, r1)     // Catch: java.lang.Throwable -> L18
                r2.aCF = r0     // Catch: java.lang.Throwable -> L18
                return
            L18:
                r3 = move-exception
                r2.aCH = r3
                return
        }

        static boolean b(com.kwad.sdk.ip.direct.b.b r0) {
                boolean r0 = r0.success
                return r0
        }

        static float c(com.kwad.sdk.ip.direct.b.b r0) {
                float r0 = r0.aCI
                return r0
        }

        final void FZ() {
                r6 = this;
                long r0 = r6.aCK
                r2 = 0
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                r1 = 1
                if (r0 == 0) goto L2e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                long r2 = r6.aCK
                long r4 = r6.aCJ
                long r2 = r2 - r4
                java.lang.String r2 = java.lang.Long.toString(r2)
                r0.append(r2)
                java.lang.String r2 = "ms"
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                long r2 = r6.aCK
                long r4 = r6.aCJ
                long r2 = r2 - r4
                float r2 = (float) r2
                r6.aCI = r2
                r6.success = r1
                goto L3e
            L2e:
                java.lang.Throwable r0 = r6.aCH
                r2 = 0
                if (r0 == 0) goto L3a
                java.lang.String r0 = r0.toString()
                r6.success = r2
                goto L3e
            L3a:
                r6.success = r2
                java.lang.String r0 = "Timed out"
            L3e:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.net.InetSocketAddress r3 = r6.aCF
                r2.append(r3)
                java.lang.String r3 = " : "
                r2.append(r3)
                r2.append(r0)
                java.lang.String r0 = r2.toString()
                java.lang.String r2 = "IpDirect_Ping"
                com.kwad.sdk.core.e.c.d(r2, r0)
                r6.aCL = r1
                return
        }
    }

    static {
            return
    }

    public static com.kwad.sdk.ip.direct.c f(java.lang.String r8, long r9) {
            r0 = 5
            long r0 = r9 / r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "ping:"
            r2.<init>(r3)
            r2.append(r8)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "IpDirect_Ping"
            com.kwad.sdk.core.e.c.d(r3, r2)
            com.kwad.sdk.ip.direct.c r2 = new com.kwad.sdk.ip.direct.c
            r2.<init>(r8)
            com.kwad.sdk.ip.direct.b$a r4 = new com.kwad.sdk.ip.direct.b$a     // Catch: java.lang.Throwable -> L22
            r4.<init>()     // Catch: java.lang.Throwable -> L22
            goto L27
        L22:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
        L27:
            if (r4 != 0) goto L2a
            return r2
        L2a:
            r4.start()     // Catch: java.lang.Throwable -> Laa
            java.util.LinkedList r5 = new java.util.LinkedList
            r5.<init>()
            r6 = 0
        L33:
            int r7 = r2.Ga()
            if (r6 >= r7) goto L4c
            com.kwad.sdk.ip.direct.b$b r7 = new com.kwad.sdk.ip.direct.b$b
            r7.<init>(r8)
            r5.add(r7)
            r4.a(r7)     // Catch: java.lang.Throwable -> L45
            goto L49
        L45:
            r7 = move-exception
            r7.printStackTrace()
        L49:
            int r6 = r6 + 1
            goto L33
        L4c:
            long r9 = r9 + r0
            java.lang.Thread.sleep(r9)     // Catch: java.lang.Throwable -> La5
            r4.shutdown()     // Catch: java.lang.Throwable -> La0
            r4.join()     // Catch: java.lang.Throwable -> La0
            r8 = 0
            java.util.Iterator r9 = r5.iterator()
            r10 = 1
        L5c:
            boolean r0 = r9.hasNext()
            if (r0 == 0) goto L79
            java.lang.Object r0 = r9.next()
            com.kwad.sdk.ip.direct.b$b r0 = (com.kwad.sdk.ip.direct.b.b) r0
            r0.FZ()
            boolean r1 = com.kwad.sdk.ip.direct.b.b.b(r0)
            r10 = r10 & r1
            r2.bs(r10)
            float r0 = com.kwad.sdk.ip.direct.b.b.c(r0)
            float r8 = r8 + r0
            goto L5c
        L79:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r10 = "sum:"
            r9.<init>(r10)
            r9.append(r8)
            java.lang.String r10 = "*size:"
            r9.append(r10)
            int r10 = r5.size()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            com.kwad.sdk.core.e.c.d(r3, r9)
            int r9 = r5.size()
            float r9 = (float) r9
            float r8 = r8 / r9
            r2.i(r8)
            return r2
        La0:
            r8 = move-exception
            r8.printStackTrace()
            return r2
        La5:
            r8 = move-exception
            r8.printStackTrace()
            return r2
        Laa:
            r8 = move-exception
            r8.printStackTrace()
            return r2
    }
}

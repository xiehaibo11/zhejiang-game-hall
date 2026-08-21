package com.kwad.framework.filedownloader;

final class p extends com.kwad.framework.filedownloader.services.a<com.kwad.framework.filedownloader.p.a, com.kwad.framework.filedownloader.c.b> {

    protected static class a extends com.kwad.framework.filedownloader.c.a.a {
        protected a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void q(com.kwad.framework.filedownloader.message.MessageSnapshot r2) {
                r1 = this;
                com.kwad.framework.filedownloader.message.e r0 = com.kwad.framework.filedownloader.message.e.vg()
                r0.s(r2)
                return
        }
    }

    p(java.lang.Class<?> r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private static com.kwad.framework.filedownloader.c.b a(android.os.IBinder r0) {
            com.kwad.framework.filedownloader.c.b r0 = com.kwad.framework.filedownloader.c.b.a.a(r0)
            return r0
    }

    private static void a(com.kwad.framework.filedownloader.c.b r0, com.kwad.framework.filedownloader.p.a r1) {
            r0.a(r1)
            return
    }

    private static com.kwad.framework.filedownloader.p.a tS() {
            com.kwad.framework.filedownloader.p$a r0 = new com.kwad.framework.filedownloader.p$a
            r0.<init>()
            return r0
    }

    @Override
    public final void a(android.os.IInterface r1, android.os.Binder r2) {
            r0 = this;
            com.kwad.framework.filedownloader.c.b r1 = (com.kwad.framework.filedownloader.c.b) r1
            com.kwad.framework.filedownloader.p$a r2 = (com.kwad.framework.filedownloader.p.a) r2
            a(r1, r2)
            return
    }

    @Override
    public final boolean a(java.lang.String r12, java.lang.String r13, boolean r14, int r15, int r16, int r17, boolean r18, com.kwad.framework.filedownloader.d.b r19, boolean r20) {
            r11 = this;
            boolean r0 = r11.isConnected()
            if (r0 != 0) goto Lb
            boolean r0 = com.kwad.framework.filedownloader.f.a.h(r12, r13, r14)
            return r0
        Lb:
            android.os.IInterface r0 = r11.vr()     // Catch: android.os.RemoteException -> L25
            r1 = r0
            com.kwad.framework.filedownloader.c.b r1 = (com.kwad.framework.filedownloader.c.b) r1     // Catch: android.os.RemoteException -> L25
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            r10 = r20
            r1.b(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: android.os.RemoteException -> L25
            r0 = 1
            return r0
        L25:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    @Override
    public final boolean aY(int r2) {
            r1 = this;
            boolean r0 = r1.isConnected()
            if (r0 != 0) goto Lb
            boolean r2 = com.kwad.framework.filedownloader.f.a.aY(r2)
            return r2
        Lb:
            android.os.IInterface r0 = r1.vr()     // Catch: android.os.RemoteException -> L16
            com.kwad.framework.filedownloader.c.b r0 = (com.kwad.framework.filedownloader.c.b) r0     // Catch: android.os.RemoteException -> L16
            boolean r2 = r0.aY(r2)     // Catch: android.os.RemoteException -> L16
            return r2
        L16:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public final byte aZ(int r3) {
            r2 = this;
            boolean r0 = r2.isConnected()
            if (r0 != 0) goto Lb
            byte r3 = com.kwad.framework.filedownloader.f.a.aZ(r3)
            return r3
        Lb:
            r0 = 0
            android.os.IInterface r1 = r2.vr()     // Catch: android.os.RemoteException -> L17
            com.kwad.framework.filedownloader.c.b r1 = (com.kwad.framework.filedownloader.c.b) r1     // Catch: android.os.RemoteException -> L17
            byte r0 = r1.aZ(r3)     // Catch: android.os.RemoteException -> L17
            goto L1b
        L17:
            r3 = move-exception
            r3.printStackTrace()
        L1b:
            return r0
    }

    @Override
    public final android.os.IInterface b(android.os.IBinder r1) {
            r0 = this;
            com.kwad.framework.filedownloader.c.b r1 = a(r1)
            return r1
    }

    @Override
    public final boolean ba(int r2) {
            r1 = this;
            boolean r0 = r1.isConnected()
            if (r0 != 0) goto Lb
            boolean r2 = com.kwad.framework.filedownloader.f.a.ba(r2)
            return r2
        Lb:
            android.os.IInterface r0 = r1.vr()     // Catch: android.os.RemoteException -> L16
            com.kwad.framework.filedownloader.c.b r0 = (com.kwad.framework.filedownloader.c.b) r0     // Catch: android.os.RemoteException -> L16
            boolean r2 = r0.ba(r2)     // Catch: android.os.RemoteException -> L16
            return r2
        L16:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public final android.os.Binder tT() {
            r1 = this;
            com.kwad.framework.filedownloader.p$a r0 = tS()
            return r0
    }
}

package com.tkay.expressad.exoplayer.d;

public final class l implements com.tkay.expressad.exoplayer.d.j<com.tkay.expressad.exoplayer.d.k> {
    private static final java.lang.String g = "cenc";
    private final java.util.UUID h;
    private final android.media.MediaDrm i;



    private l(java.util.UUID r3) {
            r2 = this;
            r2.<init>()
            com.tkay.expressad.exoplayer.k.a.a(r3)
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bi
            boolean r0 = r0.equals(r3)
            r0 = r0 ^ 1
            java.lang.String r1 = "Use C.CLEARKEY_UUID instead"
            com.tkay.expressad.exoplayer.k.a.a(r0, r1)
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 27
            if (r0 >= r1) goto L23
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bj
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L23
            java.util.UUID r3 = com.tkay.expressad.exoplayer.b.bi
        L23:
            r2.h = r3
            android.media.MediaDrm r0 = new android.media.MediaDrm
            r0.<init>(r3)
            r2.i = r0
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bk
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L47
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r0 = "ASUS_Z00AD"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L47
            android.media.MediaDrm r3 = r2.i
            java.lang.String r0 = "securityLevel"
            java.lang.String r1 = "L3"
            r3.setPropertyString(r0, r1)
        L47:
            return
    }

    public static com.tkay.expressad.exoplayer.d.l a(java.util.UUID r1) {
            com.tkay.expressad.exoplayer.d.l r0 = new com.tkay.expressad.exoplayer.d.l     // Catch: java.lang.Exception -> L6
            r0.<init>(r1)     // Catch: java.lang.Exception -> L6
            return r0
        L6:
            r1 = move-exception
            com.tkay.expressad.exoplayer.d.o r0 = new com.tkay.expressad.exoplayer.d.o
            r0.<init>(r1)
            throw r0
    }

    private static boolean d() {
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "ASUS_Z00AD"
            boolean r0 = r1.equals(r0)
            return r0
    }

    private com.tkay.expressad.exoplayer.d.k e(byte[] r5) {
            r4 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 >= r1) goto L20
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bk
            java.util.UUID r1 = r4.h
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L20
            java.lang.String r0 = "securityLevel"
            java.lang.String r0 = r4.a(r0)
            java.lang.String r1 = "L3"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            r0 = 1
            goto L21
        L20:
            r0 = 0
        L21:
            com.tkay.expressad.exoplayer.d.k r1 = new com.tkay.expressad.exoplayer.d.k
            android.media.MediaCrypto r2 = new android.media.MediaCrypto
            java.util.UUID r3 = r4.h
            r2.<init>(r3, r5)
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public final com.tkay.expressad.exoplayer.d.j.d a(byte[] r8, byte[] r9, java.lang.String r10, int r11, java.util.HashMap<java.lang.String, java.lang.String> r12) {
            r7 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 >= r1) goto L10
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bk
            java.util.UUID r1 = r7.h
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
        L10:
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bl
            java.util.UUID r1 = r7.h
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4c
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r1 = "Amazon"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L4c
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "AFTB"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L42
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "AFTS"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L42
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "AFTM"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L4c
        L42:
            java.util.UUID r0 = r7.h
            byte[] r0 = com.tkay.expressad.exoplayer.e.a.h.a(r9, r0)
            if (r0 == 0) goto L4c
            r3 = r0
            goto L4d
        L4c:
            r3 = r9
        L4d:
            int r9 = com.tkay.expressad.exoplayer.k.af.a
            r0 = 26
            if (r9 >= r0) goto L6f
            java.util.UUID r9 = com.tkay.expressad.exoplayer.b.bj
            java.util.UUID r0 = r7.h
            boolean r9 = r9.equals(r0)
            if (r9 == 0) goto L6f
            java.lang.String r9 = "video/mp4"
            boolean r9 = r9.equals(r10)
            if (r9 != 0) goto L6d
            java.lang.String r9 = "audio/mp4"
            boolean r9 = r9.equals(r10)
            if (r9 == 0) goto L6f
        L6d:
            java.lang.String r10 = "cenc"
        L6f:
            r4 = r10
            android.media.MediaDrm r1 = r7.i
            r2 = r8
            r5 = r11
            r6 = r12
            android.media.MediaDrm$KeyRequest r8 = r1.getKeyRequest(r2, r3, r4, r5, r6)
            byte[] r9 = r8.getData()
            java.util.UUID r10 = com.tkay.expressad.exoplayer.b.bj
            java.util.UUID r11 = r7.h
            boolean r10 = r10.equals(r11)
            if (r10 == 0) goto La6
            int r10 = com.tkay.expressad.exoplayer.k.af.a
            r11 = 27
            if (r10 < r11) goto L8e
            goto La6
        L8e:
            java.lang.String r9 = com.tkay.expressad.exoplayer.k.af.a(r9)
            r10 = 43
            r11 = 45
            java.lang.String r9 = r9.replace(r10, r11)
            r10 = 47
            r11 = 95
            java.lang.String r9 = r9.replace(r10, r11)
            byte[] r9 = com.tkay.expressad.exoplayer.k.af.c(r9)
        La6:
            com.tkay.expressad.exoplayer.d.j$a r10 = new com.tkay.expressad.exoplayer.d.j$a
            java.lang.String r8 = r8.getDefaultUrl()
            r10.<init>(r9, r8)
            return r10
    }

    @Override
    public final java.lang.String a(java.lang.String r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            java.lang.String r2 = r0.getPropertyString(r2)
            return r2
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.d.j.f<? super com.tkay.expressad.exoplayer.d.k> r3) {
            r2 = this;
            android.media.MediaDrm r0 = r2.i
            com.tkay.expressad.exoplayer.d.l$1 r1 = new com.tkay.expressad.exoplayer.d.l$1
            r1.<init>(r2, r3)
            r0.setOnEventListener(r1)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.d.j.g<? super com.tkay.expressad.exoplayer.d.k> r4) {
            r3 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 23
            if (r0 < r1) goto L16
            android.media.MediaDrm r0 = r3.i
            r1 = 0
            if (r4 != 0) goto Ld
            r2 = r1
            goto L12
        Ld:
            com.tkay.expressad.exoplayer.d.l$2 r2 = new com.tkay.expressad.exoplayer.d.l$2
            r2.<init>(r3, r4)
        L12:
            r0.setOnKeyStatusChangeListener(r2, r1)
            return
        L16:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>()
            throw r4
    }

    @Override
    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            r0.setPropertyString(r2, r3)
            return
    }

    @Override
    public final void a(java.lang.String r2, byte[] r3) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            r0.setPropertyByteArray(r2, r3)
            return
    }

    @Override
    public final void a(byte[] r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            r0.closeSession(r2)
            return
    }

    @Override
    public final byte[] a() {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            byte[] r0 = r0.openSession()
            return r0
    }

    @Override
    public final byte[] a(byte[] r3, byte[] r4) {
            r2 = this;
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bj
            java.util.UUID r1 = r2.h
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Le
            byte[] r4 = com.tkay.expressad.exoplayer.d.a.a(r4)
        Le:
            android.media.MediaDrm r0 = r2.i
            byte[] r3 = r0.provideKeyResponse(r3, r4)
            return r3
    }

    @Override
    public final com.tkay.expressad.exoplayer.d.j.h b() {
            r3 = this;
            android.media.MediaDrm r0 = r3.i
            android.media.MediaDrm$ProvisionRequest r0 = r0.getProvisionRequest()
            com.tkay.expressad.exoplayer.d.j$c r1 = new com.tkay.expressad.exoplayer.d.j$c
            byte[] r2 = r0.getData()
            java.lang.String r0 = r0.getDefaultUrl()
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public final void b(byte[] r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            r0.provideProvisionResponse(r2)
            return
    }

    @Override
    public final void b(byte[] r2, byte[] r3) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            r0.restoreKeys(r2, r3)
            return
    }

    @Override
    public final byte[] b(java.lang.String r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            byte[] r2 = r0.getPropertyByteArray(r2)
            return r2
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> c(byte[] r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            java.util.HashMap r2 = r0.queryKeyStatus(r2)
            return r2
    }

    @Override
    public final void c() {
            r1 = this;
            android.media.MediaDrm r0 = r1.i
            r0.release()
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.d.i d(byte[] r5) {
            r4 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 >= r1) goto L20
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bk
            java.util.UUID r1 = r4.h
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L20
            java.lang.String r0 = "securityLevel"
            java.lang.String r0 = r4.a(r0)
            java.lang.String r1 = "L3"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            r0 = 1
            goto L21
        L20:
            r0 = 0
        L21:
            com.tkay.expressad.exoplayer.d.k r1 = new com.tkay.expressad.exoplayer.d.k
            android.media.MediaCrypto r2 = new android.media.MediaCrypto
            java.util.UUID r3 = r4.h
            r2.<init>(r3, r5)
            r1.<init>(r2, r0)
            return r1
    }
}

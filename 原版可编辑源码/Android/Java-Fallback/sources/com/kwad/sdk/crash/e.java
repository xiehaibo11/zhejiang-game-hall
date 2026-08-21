package com.kwad.sdk.crash;

public final class e {
    private com.kwad.sdk.crash.b.b azV;
    private com.kwad.sdk.crash.c azW;
    private long azX;

    static class a {
        private static final com.kwad.sdk.crash.e azY = null;

        static {
                com.kwad.sdk.crash.e r0 = new com.kwad.sdk.crash.e
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.crash.e.a.azY = r0
                return
        }

        static com.kwad.sdk.crash.e EK() {
                com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.a.azY
                return r0
        }
    }

    private e() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.crash.b.b r0 = new com.kwad.sdk.crash.b.b
            r0.<init>()
            r1.azV = r0
            com.kwad.sdk.crash.c$a r0 = new com.kwad.sdk.crash.c$a
            r0.<init>()
            com.kwad.sdk.crash.c r0 = r0.EB()
            r1.azW = r0
            return
    }

    e(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.crash.e EC() {
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.a.EK()
            return r0
    }

    public final java.lang.String[] ED() {
            r1 = this;
            com.kwad.sdk.crash.b.b r0 = r1.azV
            java.lang.String[] r0 = r0.EQ()
            return r0
    }

    public final java.lang.String[] EE() {
            r1 = this;
            com.kwad.sdk.crash.b.b r0 = r1.azV
            java.lang.String[] r0 = r0.EE()
            return r0
    }

    public final java.lang.String EF() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            com.kwad.sdk.crash.model.b r0 = r0.azy
            java.lang.String r0 = r0.aAp
            return r0
    }

    public final int EG() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            com.kwad.sdk.crash.model.b r0 = r0.azy
            int r0 = r0.aAt
            return r0
    }

    public final com.kwad.sdk.crash.c EH() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            return r0
    }

    public final com.kwad.sdk.crash.h EI() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            com.kwad.sdk.crash.h r0 = r0.azA
            return r0
    }

    public final long EJ() {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.azX
            long r0 = r0 - r2
            return r0
    }

    public final void a(com.kwad.sdk.crash.c r3) {
            r2 = this;
            r2.azW = r3
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.azX = r0
            com.kwad.sdk.crash.b.b r0 = r2.azV
            java.lang.String[] r1 = r3.azB
            java.lang.String[] r3 = r3.azC
            r0.a(r1, r3)
            return
    }

    public final void b(int r2, com.kwad.sdk.crash.model.message.ExceptionMessage r3) {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            com.kwad.sdk.crash.f r0 = r0.Ez()
            if (r0 == 0) goto Lb
            r0.a(r2, r3)
        Lb:
            return
    }

    public final java.lang.String getAppId() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            com.kwad.sdk.crash.model.a r0 = r0.azz
            java.lang.String r0 = r0.aAm
            return r0
    }

    public final android.content.Context getContext() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            android.content.Context r0 = r0.context
            return r0
    }

    public final java.lang.String getSdkVersion() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            com.kwad.sdk.crash.model.b r0 = r0.azy
            java.lang.String r0 = r0.mSdkVersion
            return r0
    }

    public final boolean isDebug() {
            r1 = this;
            com.kwad.sdk.crash.c r0 = r1.azW
            boolean r0 = r0.EA()
            return r0
    }
}

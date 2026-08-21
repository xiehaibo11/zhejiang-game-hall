package com.tkay.expressad.exoplayer.k;

public final class i implements com.tkay.expressad.exoplayer.a.b {
    private static final java.lang.String a = "EventLogger";
    private static final int b = 3;
    private static final java.text.NumberFormat c = null;
    private final com.tkay.expressad.exoplayer.i.e d;
    private final com.tkay.expressad.exoplayer.ae.b e;
    private final com.tkay.expressad.exoplayer.ae.a f;
    private final long g;

    static {
            java.util.Locale r0 = java.util.Locale.US
            java.text.NumberFormat r0 = java.text.NumberFormat.getInstance(r0)
            com.tkay.expressad.exoplayer.k.i.c = r0
            r1 = 2
            r0.setMinimumFractionDigits(r1)
            java.text.NumberFormat r0 = com.tkay.expressad.exoplayer.k.i.c
            r0.setMaximumFractionDigits(r1)
            java.text.NumberFormat r0 = com.tkay.expressad.exoplayer.k.i.c
            r1 = 0
            r0.setGroupingUsed(r1)
            return
    }

    private i(com.tkay.expressad.exoplayer.i.e r3) {
            r2 = this;
            r2.<init>()
            r2.d = r3
            com.tkay.expressad.exoplayer.ae$b r3 = new com.tkay.expressad.exoplayer.ae$b
            r3.<init>()
            r2.e = r3
            com.tkay.expressad.exoplayer.ae$a r3 = new com.tkay.expressad.exoplayer.ae$a
            r3.<init>()
            r2.f = r3
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.g = r0
            return
    }

    private static java.lang.String a(int r1) {
            r0 = 1
            if (r1 == r0) goto L18
            r0 = 2
            if (r1 == r0) goto L15
            r0 = 3
            if (r1 == r0) goto L12
            r0 = 4
            if (r1 == r0) goto Lf
            java.lang.String r1 = "?"
            return r1
        Lf:
            java.lang.String r1 = "ENDED"
            return r1
        L12:
            java.lang.String r1 = "READY"
            return r1
        L15:
            java.lang.String r1 = "BUFFERING"
            return r1
        L18:
            java.lang.String r1 = "IDLE"
            return r1
    }

    private static java.lang.String a(int r1, int r2) {
            r0 = 2
            if (r1 >= r0) goto L6
            java.lang.String r1 = "N/A"
            return r1
        L6:
            if (r2 == 0) goto L19
            r1 = 8
            if (r2 == r1) goto L16
            r1 = 16
            if (r2 == r1) goto L13
            java.lang.String r1 = "?"
            return r1
        L13:
            java.lang.String r1 = "YES"
            return r1
        L16:
            java.lang.String r1 = "YES_NOT_SEAMLESS"
            return r1
        L19:
            java.lang.String r1 = "NO"
            return r1
    }

    private static java.lang.String a(long r2) {
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto Lc
            java.lang.String r2 = "?"
            return r2
        Lc:
            java.text.NumberFormat r0 = com.tkay.expressad.exoplayer.k.i.c
            float r2 = (float) r2
            r3 = 1148846080(0x447a0000, float:1000.0)
            float r2 = r2 / r3
            double r2 = (double) r2
            java.lang.String r2 = r0.format(r2)
            return r2
    }

    private static java.lang.String a(com.tkay.expressad.exoplayer.i.f r1, com.tkay.expressad.exoplayer.h.ae r2, int r3) {
            if (r1 == 0) goto L11
            com.tkay.expressad.exoplayer.h.ae r0 = r1.f()
            if (r0 != r2) goto L11
            int r1 = r1.c(r3)
            r2 = -1
            if (r1 == r2) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            java.lang.String r1 = a(r1)
            return r1
    }

    private static java.lang.String a(boolean r0) {
            if (r0 == 0) goto L5
            java.lang.String r0 = "[X]"
            return r0
        L5:
            java.lang.String r0 = "[ ]"
            return r0
    }

    private void a(com.tkay.expressad.exoplayer.a.b.a r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.b(r1, r2)
            java.lang.String r2 = "EventLogger"
            android.util.Log.d(r2, r1)
            return
    }

    private void a(com.tkay.expressad.exoplayer.a.b.a r2, java.lang.String r3, java.lang.Exception r4) {
            r1 = this;
            java.lang.String r0 = "internalError"
            r1.a(r2, r0, r3, r4)
            return
    }

    private void a(com.tkay.expressad.exoplayer.a.b.a r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            java.lang.String r1 = r0.b(r1, r2, r3)
            java.lang.String r2 = "EventLogger"
            android.util.Log.d(r2, r1)
            return
    }

    private void a(com.tkay.expressad.exoplayer.a.b.a r1, java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r0 = this;
            java.lang.String r1 = r0.b(r1, r2, r3)
            a(r1, r4)
            return
    }

    private void a(com.tkay.expressad.exoplayer.a.b.a r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            java.lang.String r1 = r0.b(r1, r2)
            a(r1, r3)
            return
    }

    private static void a(com.tkay.expressad.exoplayer.g.a r3, java.lang.String r4) {
            r0 = 0
        L1:
            int r1 = r3.a()
            if (r0 >= r1) goto L22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            com.tkay.expressad.exoplayer.g.a$a r2 = r3.a(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "EventLogger"
            android.util.Log.d(r2, r1)
            int r0 = r0 + 1
            goto L1
        L22:
            return
    }

    private static void a(java.lang.String r1) {
            java.lang.String r0 = "EventLogger"
            android.util.Log.d(r0, r1)
            return
    }

    private static void a(java.lang.String r1, java.lang.Throwable r2) {
            java.lang.String r0 = "EventLogger"
            android.util.Log.e(r0, r1, r2)
            return
    }

    private static java.lang.String b(int r1) {
            if (r1 == 0) goto L1d
            r0 = 1
            if (r1 == r0) goto L1a
            r0 = 2
            if (r1 == r0) goto L17
            r0 = 3
            if (r1 == r0) goto L14
            r0 = 4
            if (r1 == r0) goto L11
            java.lang.String r1 = "?"
            return r1
        L11:
            java.lang.String r1 = "YES"
            return r1
        L14:
            java.lang.String r1 = "NO_EXCEEDS_CAPABILITIES"
            return r1
        L17:
            java.lang.String r1 = "NO_UNSUPPORTED_DRM"
            return r1
        L1a:
            java.lang.String r1 = "NO_UNSUPPORTED_TYPE"
            return r1
        L1d:
            java.lang.String r1 = "NO"
            return r1
    }

    private java.lang.String b(com.tkay.expressad.exoplayer.a.b.a r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " ["
            r0.append(r3)
            java.lang.String r2 = r1.i(r2)
            r0.append(r2)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private java.lang.String b(com.tkay.expressad.exoplayer.a.b.a r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " ["
            r0.append(r3)
            java.lang.String r2 = r1.i(r2)
            r0.append(r2)
            java.lang.String r2 = ", "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.String c(int r1) {
            if (r1 == 0) goto L11
            r0 = 1
            if (r1 == r0) goto Le
            r0 = 2
            if (r1 == r0) goto Lb
            java.lang.String r1 = "?"
            return r1
        Lb:
            java.lang.String r1 = "ALL"
            return r1
        Le:
            java.lang.String r1 = "ONE"
            return r1
        L11:
            java.lang.String r1 = "OFF"
            return r1
    }

    private static java.lang.String d(int r1) {
            if (r1 == 0) goto L1d
            r0 = 1
            if (r1 == r0) goto L1a
            r0 = 2
            if (r1 == r0) goto L17
            r0 = 3
            if (r1 == r0) goto L14
            r0 = 4
            if (r1 == r0) goto L11
            java.lang.String r1 = "?"
            return r1
        L11:
            java.lang.String r1 = "INTERNAL"
            return r1
        L14:
            java.lang.String r1 = "AD_INSERTION"
            return r1
        L17:
            java.lang.String r1 = "SEEK_ADJUSTMENT"
            return r1
        L1a:
            java.lang.String r1 = "SEEK"
            return r1
        L1d:
            java.lang.String r1 = "PERIOD_TRANSITION"
            return r1
    }

    private static java.lang.String e(int r1) {
            if (r1 == 0) goto L11
            r0 = 1
            if (r1 == r0) goto Le
            r0 = 2
            if (r1 == r0) goto Lb
            java.lang.String r1 = "?"
            return r1
        Lb:
            java.lang.String r1 = "DYNAMIC"
            return r1
        Le:
            java.lang.String r1 = "RESET"
            return r1
        L11:
            java.lang.String r1 = "PREPARED"
            return r1
    }

    private static java.lang.String f(int r2) {
            if (r2 == 0) goto L3b
            r0 = 1
            if (r2 == r0) goto L38
            r0 = 2
            if (r2 == r0) goto L35
            r0 = 3
            if (r2 == r0) goto L32
            r0 = 4
            if (r2 == r0) goto L2f
            r0 = 5
            if (r2 == r0) goto L2c
            r0 = 10000(0x2710, float:1.4013E-41)
            if (r2 < r0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "custom ("
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = ")"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L29:
            java.lang.String r2 = "?"
            return r2
        L2c:
            java.lang.String r2 = "none"
            return r2
        L2f:
            java.lang.String r2 = "metadata"
            return r2
        L32:
            java.lang.String r2 = "text"
            return r2
        L35:
            java.lang.String r2 = "video"
            return r2
        L38:
            java.lang.String r2 = "audio"
            return r2
        L3b:
            java.lang.String r2 = "default"
            return r2
    }

    private java.lang.String i(com.tkay.expressad.exoplayer.a.b.a r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "window="
            r0.<init>(r1)
            int r1 = r7.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tkay.expressad.exoplayer.h.s$a r1 = r7.d
            if (r1 == 0) goto L64
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", period="
            r1.append(r0)
            com.tkay.expressad.exoplayer.h.s$a r0 = r7.d
            int r0 = r0.a
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.tkay.expressad.exoplayer.h.s$a r1 = r7.d
            boolean r1 = r1.a()
            if (r1 == 0) goto L64
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", adGroup="
            r1.append(r0)
            com.tkay.expressad.exoplayer.h.s$a r0 = r7.d
            int r0 = r0.b
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", ad="
            r1.append(r0)
            com.tkay.expressad.exoplayer.h.s$a r0 = r7.d
            int r0 = r0.c
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L64:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r2 = r7.a
            long r4 = r6.g
            long r2 = r2 - r4
            java.lang.String r2 = a(r2)
            r1.append(r2)
            java.lang.String r2 = ", "
            r1.append(r2)
            long r3 = r7.f
            java.lang.String r7 = a(r3)
            r1.append(r7)
            r1.append(r2)
            r1.append(r0)
            java.lang.String r7 = r1.toString()
            return r7
    }

    @Override
    public final void a() {
            r0 = this;
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "seekStarted"
            r1.a(r2, r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r10, int r11) {
            r9 = this;
            com.tkay.expressad.exoplayer.ae r0 = r10.b
            int r0 = r0.c()
            com.tkay.expressad.exoplayer.ae r1 = r10.b
            int r1 = r1.b()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "timelineChanged ["
            r2.<init>(r3)
            java.lang.String r3 = r9.i(r10)
            r2.append(r3)
            java.lang.String r3 = ", periodCount="
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = ", windowCount="
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = ", reason="
            r2.append(r3)
            if (r11 == 0) goto L40
            r3 = 1
            if (r11 == r3) goto L3d
            r3 = 2
            if (r11 == r3) goto L3a
            java.lang.String r11 = "?"
            goto L42
        L3a:
            java.lang.String r11 = "DYNAMIC"
            goto L42
        L3d:
            java.lang.String r11 = "RESET"
            goto L42
        L40:
            java.lang.String r11 = "PREPARED"
        L42:
            r2.append(r11)
            java.lang.String r11 = r2.toString()
            java.lang.String r2 = "EventLogger"
            android.util.Log.d(r2, r11)
            r11 = 0
            r3 = r11
        L50:
            r4 = 3
            int r5 = java.lang.Math.min(r0, r4)
            java.lang.String r6 = "]"
            if (r3 >= r5) goto L83
            com.tkay.expressad.exoplayer.ae r4 = r10.b
            com.tkay.expressad.exoplayer.ae$a r5 = r9.f
            r4.a(r3, r5, r11)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "  period ["
            r4.<init>(r5)
            com.tkay.expressad.exoplayer.ae$a r5 = r9.f
            long r7 = r5.d
            long r7 = com.tkay.expressad.exoplayer.b.a(r7)
            java.lang.String r5 = a(r7)
            r4.append(r5)
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            android.util.Log.d(r2, r4)
            int r3 = r3 + 1
            goto L50
        L83:
            java.lang.String r3 = "  ..."
            if (r0 <= r4) goto L8a
            android.util.Log.d(r2, r3)
        L8a:
            r0 = r11
        L8b:
            int r5 = java.lang.Math.min(r1, r4)
            if (r0 >= r5) goto Ld1
            com.tkay.expressad.exoplayer.ae r5 = r10.b
            com.tkay.expressad.exoplayer.ae$b r7 = r9.e
            r5.a(r0, r7, r11)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r7 = "  window ["
            r5.<init>(r7)
            com.tkay.expressad.exoplayer.ae$b r7 = r9.e
            long r7 = r7.i
            long r7 = com.tkay.expressad.exoplayer.b.a(r7)
            java.lang.String r7 = a(r7)
            r5.append(r7)
            java.lang.String r7 = ", "
            r5.append(r7)
            com.tkay.expressad.exoplayer.ae$b r8 = r9.e
            boolean r8 = r8.d
            r5.append(r8)
            r5.append(r7)
            com.tkay.expressad.exoplayer.ae$b r7 = r9.e
            boolean r7 = r7.e
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.d(r2, r5)
            int r0 = r0 + 1
            goto L8b
        Ld1:
            if (r1 <= r4) goto Ld6
            android.util.Log.d(r2, r3)
        Ld6:
            android.util.Log.d(r2, r6)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, int r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "viewportSizeChanged"
            r1.a(r2, r4, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, int r3, long r4, long r6) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            r0.append(r4)
            r0.append(r3)
            r0.append(r6)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "audioTrackUnderrun"
            r5 = 0
            r1.a(r2, r4, r3, r5)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, int r3, com.tkay.expressad.exoplayer.m r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = f(r3)
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            java.lang.String r3 = com.tkay.expressad.exoplayer.m.c(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "decoderInputFormatChanged"
            r1.a(r2, r4, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, int r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = f(r3)
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "decoderInitialized"
            r1.a(r2, r4, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, android.net.NetworkInfo r3) {
            r1 = this;
            if (r3 != 0) goto L5
            java.lang.String r3 = "none"
            goto L9
        L5:
            java.lang.String r3 = r3.toString()
        L9:
            java.lang.String r0 = "networkTypeChanged"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, android.view.Surface r3) {
            r1 = this;
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "renderedFirstFrame"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r3, com.tkay.expressad.exoplayer.g.a r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "metadata ["
            r0.<init>(r1)
            java.lang.String r3 = r2.i(r3)
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "EventLogger"
            android.util.Log.d(r0, r3)
            java.lang.String r3 = "  "
            a(r4, r3)
            java.lang.String r3 = "]"
            android.util.Log.d(r0, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, com.tkay.expressad.exoplayer.g r3) {
            r1 = this;
            java.lang.String r0 = "playerFailed"
            java.lang.String r2 = r1.b(r2, r0)
            a(r2, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, com.tkay.expressad.exoplayer.h.t.c r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.m r3 = r3.c
            java.lang.String r3 = com.tkay.expressad.exoplayer.m.c(r3)
            java.lang.String r0 = "downstreamFormatChanged"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r21, com.tkay.expressad.exoplayer.i.g r22) {
            r20 = this;
            r0 = r20
            com.tkay.expressad.exoplayer.i.e r1 = r0.d
            if (r1 == 0) goto Lb
            com.tkay.expressad.exoplayer.i.e$a r1 = r1.a()
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 != 0) goto L18
            java.lang.String r1 = "tracksChanged"
            java.lang.String r2 = "[]"
            r3 = r21
            r0.a(r3, r1, r2)
            return
        L18:
            r3 = r21
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r4 = "tracksChanged ["
            r2.<init>(r4)
            java.lang.String r3 = r20.i(r21)
            r2.append(r3)
            java.lang.String r3 = ", "
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r4 = "EventLogger"
            android.util.Log.d(r4, r2)
            int r2 = r1.a()
            r6 = 0
        L3b:
            java.lang.String r7 = ", supported="
            java.lang.String r8 = " Track:"
            java.lang.String r9 = "    Group:"
            java.lang.String r10 = "  ]"
            java.lang.String r11 = "      "
            java.lang.String r12 = "    ]"
            java.lang.String r13 = " ["
            if (r6 >= r2) goto L14b
            com.tkay.expressad.exoplayer.h.af r14 = r1.b(r6)
            r15 = r22
            com.tkay.expressad.exoplayer.i.f r5 = r15.a(r6)
            int r0 = r14.b
            if (r0 <= 0) goto L141
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r16 = r2
            java.lang.String r2 = "  Renderer:"
            r0.<init>(r2)
            r0.append(r6)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r4, r0)
            r0 = 0
        L70:
            int r2 = r14.b
            if (r0 >= r2) goto L119
            com.tkay.expressad.exoplayer.h.ae r2 = r14.a(r0)
            r17 = r14
            int r14 = r2.a
            int r15 = r1.a(r6, r0)
            r18 = r10
            r10 = 2
            if (r14 >= r10) goto L88
            java.lang.String r10 = "N/A"
            goto L9d
        L88:
            if (r15 == 0) goto L9b
            r10 = 8
            if (r15 == r10) goto L98
            r10 = 16
            if (r15 == r10) goto L95
            java.lang.String r10 = "?"
            goto L9d
        L95:
            java.lang.String r10 = "YES"
            goto L9d
        L98:
            java.lang.String r10 = "YES_NOT_SEAMLESS"
            goto L9d
        L9b:
            java.lang.String r10 = "NO"
        L9d:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>(r9)
            r14.append(r0)
            java.lang.String r15 = ", adaptive_supported="
            r14.append(r15)
            r14.append(r10)
            r14.append(r13)
            java.lang.String r10 = r14.toString()
            android.util.Log.d(r4, r10)
            r10 = 0
        Lb8:
            int r14 = r2.a
            if (r10 >= r14) goto L10a
            if (r5 == 0) goto Lcd
            com.tkay.expressad.exoplayer.h.ae r14 = r5.f()
            if (r14 != r2) goto Lcd
            int r14 = r5.c(r10)
            r15 = -1
            if (r14 == r15) goto Lcd
            r14 = 1
            goto Lce
        Lcd:
            r14 = 0
        Lce:
            java.lang.String r14 = a(r14)
            int r15 = r1.a(r6, r0, r10)
            java.lang.String r15 = b(r15)
            r19 = r13
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>(r11)
            r13.append(r14)
            r13.append(r8)
            r13.append(r10)
            r13.append(r3)
            com.tkay.expressad.exoplayer.m r14 = r2.a(r10)
            java.lang.String r14 = com.tkay.expressad.exoplayer.m.c(r14)
            r13.append(r14)
            r13.append(r7)
            r13.append(r15)
            java.lang.String r13 = r13.toString()
            android.util.Log.d(r4, r13)
            int r10 = r10 + 1
            r13 = r19
            goto Lb8
        L10a:
            r19 = r13
            android.util.Log.d(r4, r12)
            int r0 = r0 + 1
            r15 = r22
            r14 = r17
            r10 = r18
            goto L70
        L119:
            r18 = r10
            if (r5 == 0) goto L13b
            r0 = 0
        L11e:
            int r2 = r5.g()
            if (r0 >= r2) goto L13b
            com.tkay.expressad.exoplayer.m r2 = r5.a(r0)
            com.tkay.expressad.exoplayer.g.a r2 = r2.f
            if (r2 == 0) goto L138
            java.lang.String r0 = "    Metadata ["
            android.util.Log.d(r4, r0)
            a(r2, r11)
            android.util.Log.d(r4, r12)
            goto L13b
        L138:
            int r0 = r0 + 1
            goto L11e
        L13b:
            r0 = r18
            android.util.Log.d(r4, r0)
            goto L143
        L141:
            r16 = r2
        L143:
            int r6 = r6 + 1
            r0 = r20
            r2 = r16
            goto L3b
        L14b:
            r0 = r10
            r19 = r13
            com.tkay.expressad.exoplayer.h.af r1 = r1.b()
            int r2 = r1.b
            if (r2 <= 0) goto L1bd
            java.lang.String r2 = "  Renderer:None ["
            android.util.Log.d(r4, r2)
            r2 = 0
        L15c:
            int r5 = r1.b
            if (r2 >= r5) goto L1ba
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>(r9)
            r5.append(r2)
            r6 = r19
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.d(r4, r5)
            com.tkay.expressad.exoplayer.h.ae r5 = r1.a(r2)
            r10 = 0
        L179:
            int r13 = r5.a
            if (r10 >= r13) goto L1b2
            r13 = 0
            java.lang.String r14 = a(r13)
            java.lang.String r15 = b(r13)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>(r11)
            r13.append(r14)
            r13.append(r8)
            r13.append(r10)
            r13.append(r3)
            com.tkay.expressad.exoplayer.m r14 = r5.a(r10)
            java.lang.String r14 = com.tkay.expressad.exoplayer.m.c(r14)
            r13.append(r14)
            r13.append(r7)
            r13.append(r15)
            java.lang.String r13 = r13.toString()
            android.util.Log.d(r4, r13)
            int r10 = r10 + 1
            goto L179
        L1b2:
            android.util.Log.d(r4, r12)
            int r2 = r2 + 1
            r19 = r6
            goto L15c
        L1ba:
            android.util.Log.d(r4, r0)
        L1bd:
            java.lang.String r0 = "]"
            android.util.Log.d(r4, r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r4, com.tkay.expressad.exoplayer.v r5) {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            float r1 = r5.b
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            float r1 = r5.c
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            boolean r5 = r5.d
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)
            r1 = 2
            r0[r1] = r5
            java.lang.String r5 = "speed=%.2f, pitch=%.2f, skipSilence=%s"
            java.lang.String r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r0)
            java.lang.String r0 = "playbackParameters"
            r3.a(r4, r0, r5)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, java.io.IOException r3) {
            r1 = this;
            java.lang.String r0 = "loadError"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, java.lang.Exception r3) {
            r1 = this;
            java.lang.String r0 = "drmSessionManagerError"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = java.lang.Boolean.toString(r3)
            java.lang.String r0 = "shuffleModeEnabled"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.a.b.a r2, boolean r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            r3 = 1
            if (r4 == r3) goto L25
            r3 = 2
            if (r4 == r3) goto L22
            r3 = 3
            if (r4 == r3) goto L1f
            r3 = 4
            if (r4 == r3) goto L1c
            java.lang.String r3 = "?"
            goto L27
        L1c:
            java.lang.String r3 = "ENDED"
            goto L27
        L1f:
            java.lang.String r3 = "READY"
            goto L27
        L22:
            java.lang.String r3 = "BUFFERING"
            goto L27
        L25:
            java.lang.String r3 = "IDLE"
        L27:
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "state"
            r1.a(r2, r4, r3)
            return
    }

    @Override
    public final void b() {
            r0 = this;
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "seekProcessed"
            r1.a(r2, r0)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.a.b.a r2, int r3) {
            r1 = this;
            if (r3 == 0) goto L1d
            r0 = 1
            if (r3 == r0) goto L1a
            r0 = 2
            if (r3 == r0) goto L17
            r0 = 3
            if (r3 == r0) goto L14
            r0 = 4
            if (r3 == r0) goto L11
            java.lang.String r3 = "?"
            goto L1f
        L11:
            java.lang.String r3 = "INTERNAL"
            goto L1f
        L14:
            java.lang.String r3 = "AD_INSERTION"
            goto L1f
        L17:
            java.lang.String r3 = "SEEK_ADJUSTMENT"
            goto L1f
        L1a:
            java.lang.String r3 = "SEEK"
            goto L1f
        L1d:
            java.lang.String r3 = "PERIOD_TRANSITION"
        L1f:
            java.lang.String r0 = "positionDiscontinuity"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.a.b.a r2, int r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "videoSizeChanged"
            r1.a(r2, r4, r3)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.a.b.a r2, com.tkay.expressad.exoplayer.h.t.c r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.m r3 = r3.c
            java.lang.String r3 = com.tkay.expressad.exoplayer.m.c(r3)
            java.lang.String r0 = "upstreamDiscarded"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.a.b.a r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = java.lang.Boolean.toString(r3)
            java.lang.String r0 = "loading"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void c() {
            r0 = this;
            return
    }

    @Override
    public final void c(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "mediaPeriodCreated"
            r1.a(r2, r0)
            return
    }

    @Override
    public final void c(com.tkay.expressad.exoplayer.a.b.a r2, int r3) {
            r1 = this;
            if (r3 == 0) goto L11
            r0 = 1
            if (r3 == r0) goto Le
            r0 = 2
            if (r3 == r0) goto Lb
            java.lang.String r3 = "?"
            goto L13
        Lb:
            java.lang.String r3 = "ALL"
            goto L13
        Le:
            java.lang.String r3 = "ONE"
            goto L13
        L11:
            java.lang.String r3 = "OFF"
        L13:
            java.lang.String r0 = "repeatMode"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void d() {
            r0 = this;
            return
    }

    @Override
    public final void d(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "mediaPeriodReleased"
            r1.a(r2, r0)
            return
    }

    @Override
    public final void d(com.tkay.expressad.exoplayer.a.b.a r2, int r3) {
            r1 = this;
            java.lang.String r3 = f(r3)
            java.lang.String r0 = "decoderEnabled"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void e(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "mediaPeriodReadingStarted"
            r1.a(r2, r0)
            return
    }

    @Override
    public final void e(com.tkay.expressad.exoplayer.a.b.a r2, int r3) {
            r1 = this;
            java.lang.String r3 = f(r3)
            java.lang.String r0 = "decoderDisabled"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void f(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "drmKeysLoaded"
            r1.a(r2, r0)
            return
    }

    @Override
    public final void f(com.tkay.expressad.exoplayer.a.b.a r2, int r3) {
            r1 = this;
            java.lang.String r3 = java.lang.Integer.toString(r3)
            java.lang.String r0 = "audioSessionId"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void g(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "drmKeysRestored"
            r1.a(r2, r0)
            return
    }

    @Override
    public final void g(com.tkay.expressad.exoplayer.a.b.a r2, int r3) {
            r1 = this;
            java.lang.String r3 = java.lang.Integer.toString(r3)
            java.lang.String r0 = "droppedFrames"
            r1.a(r2, r0, r3)
            return
    }

    @Override
    public final void h(com.tkay.expressad.exoplayer.a.b.a r2) {
            r1 = this;
            java.lang.String r0 = "drmKeysRemoved"
            r1.a(r2, r0)
            return
    }
}

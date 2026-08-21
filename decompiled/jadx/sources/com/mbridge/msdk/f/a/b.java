package com.mbridge.msdk.f.a;

import android.os.CountDownTimer;

/* JADX INFO: compiled from: MBCountDownTimer.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f3321a = 0;
    private long b;
    private com.mbridge.msdk.f.a.a c;
    private a d;

    public final b a(long j) {
        if (j < 0) {
            j = 1000;
        }
        this.b = j;
        return this;
    }

    public final b a(com.mbridge.msdk.f.a.a aVar) {
        this.c = aVar;
        return this;
    }

    public final b b(long j) {
        this.f3321a = j;
        return this;
    }

    public final void a() {
        a aVar = this.d;
        if (aVar == null) {
            if (aVar != null) {
                aVar.cancel();
                this.d = null;
            }
            if (this.b <= 0) {
                this.b = this.f3321a + 1000;
            }
            a aVar2 = new a(this.f3321a, this.b);
            this.d = aVar2;
            aVar2.a(this.c);
        }
        this.d.start();
    }

    public final void b() {
        a aVar = this.d;
        if (aVar != null) {
            aVar.cancel();
            this.d = null;
        }
    }

    /* JADX INFO: compiled from: MBCountDownTimer.java */
    private static class a extends CountDownTimer {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private com.mbridge.msdk.f.a.a f3322a;

        public a(long j, long j2) {
            super(j, j2);
        }

        @Override // android.os.CountDownTimer
        public final void onTick(long j) {
            com.mbridge.msdk.f.a.a aVar = this.f3322a;
            if (aVar != null) {
                aVar.onTick(j);
            }
        }

        @Override // android.os.CountDownTimer
        public final void onFinish() {
            com.mbridge.msdk.f.a.a aVar = this.f3322a;
            if (aVar != null) {
                aVar.onFinish();
            }
        }

        final void a(com.mbridge.msdk.f.a.a aVar) {
            this.f3322a = aVar;
        }
    }
}

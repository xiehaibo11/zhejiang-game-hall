package com.tkay.expressad.video.dynview.i.c;

import android.os.CountDownTimer;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final long f7235a = 1000;
    private long b = 0;
    private long c;
    private com.tkay.expressad.video.dynview.i.c.a d;
    private a e;

    public final b a() {
        this.c = 1000L;
        return this;
    }

    public final b a(com.tkay.expressad.video.dynview.i.c.a aVar) {
        this.d = aVar;
        return this;
    }

    public final b a(long j) {
        this.b = j;
        return this;
    }

    private void d() {
        a aVar = this.e;
        if (aVar != null) {
            aVar.cancel();
            this.e = null;
        }
        if (this.c <= 0) {
            this.c = this.b + 1000;
        }
        a aVar2 = new a(this.b, this.c);
        this.e = aVar2;
        aVar2.a(this.d);
    }

    public final void b() {
        if (this.e == null) {
            d();
        }
        this.e.start();
    }

    public final void a(long j, com.tkay.expressad.video.dynview.i.c.a aVar) {
        this.b = j;
        this.d = aVar;
        d();
        a aVar2 = this.e;
        if (aVar2 != null) {
            aVar2.start();
        }
    }

    public final void c() {
        a aVar = this.e;
        if (aVar != null) {
            aVar.cancel();
            this.e = null;
        }
    }

    private static class a extends CountDownTimer {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private com.tkay.expressad.video.dynview.i.c.a f7236a;

        public a(long j, long j2) {
            super(j, j2);
        }

        @Override // android.os.CountDownTimer
        public final void onTick(long j) {
            com.tkay.expressad.video.dynview.i.c.a aVar = this.f7236a;
            if (aVar != null) {
                aVar.a(j);
            }
        }

        @Override // android.os.CountDownTimer
        public final void onFinish() {
            com.tkay.expressad.video.dynview.i.c.a aVar = this.f7236a;
            if (aVar != null) {
                aVar.a();
            }
        }

        final void a(com.tkay.expressad.video.dynview.i.c.a aVar) {
            this.f7236a = aVar;
        }
    }
}

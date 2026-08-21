package com.mbridge.msdk.f.a;

import android.os.CountDownTimer;

public final class b {
    private long a = 0;
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
        this.a = j;
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
                this.b = this.a + 1000;
            }
            a aVar2 = new a(this.a, this.b);
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

    private static class a extends CountDownTimer {
        private com.mbridge.msdk.f.a.a a;

        public a(long j, long j2) {
            super(j, j2);
        }

        @Override
        public final void onTick(long j) {
            com.mbridge.msdk.f.a.a aVar = this.a;
            if (aVar != null) {
                aVar.onTick(j);
            }
        }

        @Override
        public final void onFinish() {
            com.mbridge.msdk.f.a.a aVar = this.a;
            if (aVar != null) {
                aVar.onFinish();
            }
        }

        final void a(com.mbridge.msdk.f.a.a aVar) {
            this.a = aVar;
        }
    }
}

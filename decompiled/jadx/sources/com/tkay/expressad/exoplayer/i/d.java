package com.tkay.expressad.exoplayer.i;

import com.tkay.expressad.exoplayer.h.ae;
import com.tkay.expressad.exoplayer.i.f;

/* JADX INFO: loaded from: classes3.dex */
public final class d extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f6697a;
    private final Object b;

    @Override // com.tkay.expressad.exoplayer.i.f
    public final void a(long j, long j2) {
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int b() {
        return 0;
    }

    public static final class a implements f.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f6698a;
        private final Object b;

        public a() {
            this.f6698a = 0;
            this.b = null;
        }

        private a(int i, Object obj) {
            this.f6698a = i;
            this.b = obj;
        }

        private d b(ae aeVar, int... iArr) {
            com.tkay.expressad.exoplayer.k.a.a(iArr.length == 1);
            return new d(aeVar, iArr[0], this.f6698a, this.b);
        }

        @Override // com.tkay.expressad.exoplayer.i.f.a
        public final /* synthetic */ f a(ae aeVar, int[] iArr) {
            com.tkay.expressad.exoplayer.k.a.a(iArr.length == 1);
            return new d(aeVar, iArr[0], this.f6698a, this.b);
        }
    }

    public d(ae aeVar, int i) {
        this(aeVar, i, 0, null);
    }

    public d(ae aeVar, int i, int i2, Object obj) {
        super(aeVar, i);
        this.f6697a = i2;
        this.b = obj;
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int c() {
        return this.f6697a;
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final Object d() {
        return this.b;
    }
}

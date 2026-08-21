package com.tkay.expressad.exoplayer.h;

/* JADX INFO: loaded from: classes3.dex */
public final class g implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final z[] f6651a;

    public g(z[] zVarArr) {
        this.f6651a = zVarArr;
    }

    @Override // com.tkay.expressad.exoplayer.h.z
    public final long d() {
        long jMin = Long.MAX_VALUE;
        for (z zVar : this.f6651a) {
            long jD = zVar.d();
            if (jD != Long.MIN_VALUE) {
                jMin = Math.min(jMin, jD);
            }
        }
        if (jMin == Long.MAX_VALUE) {
            return Long.MIN_VALUE;
        }
        return jMin;
    }

    @Override // com.tkay.expressad.exoplayer.h.z
    public final long e() {
        long jMin = Long.MAX_VALUE;
        for (z zVar : this.f6651a) {
            long jE = zVar.e();
            if (jE != Long.MIN_VALUE) {
                jMin = Math.min(jMin, jE);
            }
        }
        if (jMin == Long.MAX_VALUE) {
            return Long.MIN_VALUE;
        }
        return jMin;
    }

    @Override // com.tkay.expressad.exoplayer.h.z
    public final void a_(long j) {
        for (z zVar : this.f6651a) {
            zVar.a_(j);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.z
    public final boolean c(long j) {
        boolean zC;
        boolean z = false;
        do {
            long jE = e();
            if (jE == Long.MIN_VALUE) {
                break;
            }
            zC = false;
            for (z zVar : this.f6651a) {
                long jE2 = zVar.e();
                boolean z2 = jE2 != Long.MIN_VALUE && jE2 <= j;
                if (jE2 == jE || z2) {
                    zC |= zVar.c(j);
                }
            }
            z |= zC;
        } while (zC);
        return z;
    }
}

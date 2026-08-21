package com.tkay.expressad.exoplayer.h.a;

import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.h.p;

/* JADX INFO: loaded from: classes3.dex */
final class d extends p {
    private final a c;

    public d(ae aeVar, a aVar) {
        super(aeVar);
        com.tkay.expressad.exoplayer.k.a.b(aeVar.c() == 1);
        com.tkay.expressad.exoplayer.k.a.b(aeVar.b() == 1);
        this.c = aVar;
    }

    @Override // com.tkay.expressad.exoplayer.h.p, com.tkay.expressad.exoplayer.ae
    public final ae.a a(int i, ae.a aVar, boolean z) {
        this.b.a(i, aVar, z);
        aVar.a(aVar.f6478a, aVar.b, aVar.c, aVar.d, aVar.b(), this.c);
        return aVar;
    }

    @Override // com.tkay.expressad.exoplayer.h.p, com.tkay.expressad.exoplayer.ae
    public final ae.b a(int i, ae.b bVar, boolean z, long j) {
        ae.b bVarA = super.a(i, bVar, z, j);
        if (bVarA.i == -9223372036854775807L) {
            bVarA.i = this.c.k;
        }
        return bVarA;
    }
}

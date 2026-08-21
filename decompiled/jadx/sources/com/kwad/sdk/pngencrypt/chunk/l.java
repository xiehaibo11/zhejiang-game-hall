package com.kwad.sdk.pngencrypt.chunk;

import com.kwad.sdk.pngencrypt.PngjException;

/* JADX INFO: loaded from: classes2.dex */
public final class l extends p {
    private long aFQ;
    private long aFR;
    private int aFS;

    public l(com.kwad.sdk.pngencrypt.k kVar) {
        super("oFFs", kVar);
    }

    @Override // com.kwad.sdk.pngencrypt.chunk.PngChunk
    public final void a(d dVar) {
        if (dVar.len != 9) {
            throw new PngjException("bad chunk length " + dVar);
        }
        long jG = com.kwad.sdk.pngencrypt.n.g(dVar.data, 0);
        this.aFQ = jG;
        if (jG < 0) {
            this.aFQ = jG + 4294967296L;
        }
        long jG2 = com.kwad.sdk.pngencrypt.n.g(dVar.data, 4);
        this.aFR = jG2;
        if (jG2 < 0) {
            this.aFR = jG2 + 4294967296L;
        }
        this.aFS = com.kwad.sdk.pngencrypt.n.e(dVar.data, 8);
    }
}

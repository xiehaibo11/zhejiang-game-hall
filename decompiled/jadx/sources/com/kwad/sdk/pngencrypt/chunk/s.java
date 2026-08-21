package com.kwad.sdk.pngencrypt.chunk;

import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public final class s extends p {
    private int aGc;
    private int aGd;
    private int aGe;
    private int aGf;
    private int[] aGg;

    public s(com.kwad.sdk.pngencrypt.k kVar) {
        super("tRNS", kVar);
        this.aGg = new int[0];
    }

    @Override // com.kwad.sdk.pngencrypt.chunk.PngChunk
    public final void a(d dVar) {
        if (this.aEC.aEJ) {
            this.aGc = com.kwad.sdk.pngencrypt.n.f(dVar.data, 0);
            return;
        }
        if (!this.aEC.aEK) {
            this.aGd = com.kwad.sdk.pngencrypt.n.f(dVar.data, 0);
            this.aGe = com.kwad.sdk.pngencrypt.n.f(dVar.data, 2);
            this.aGf = com.kwad.sdk.pngencrypt.n.f(dVar.data, 4);
        } else {
            int length = dVar.data.length;
            this.aGg = new int[length];
            for (int i = 0; i < length; i++) {
                this.aGg[i] = dVar.data[i] & UByte.MAX_VALUE;
            }
        }
    }
}

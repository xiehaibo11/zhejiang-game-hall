package com.kwad.sdk.pngencrypt.chunk;

import com.kwad.sdk.pngencrypt.PngjException;
import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public final class m extends p {
    private int aFT;
    private int[] aFU;

    public m(com.kwad.sdk.pngencrypt.k kVar) {
        super("PLTE", kVar);
        this.aFT = 0;
    }

    private void a(int i, int i2, int i3, int i4) {
        this.aFU[i] = (i2 << 16) | (i3 << 8) | i4;
    }

    private void cZ(int i) {
        this.aFT = i;
        if (i <= 0 || i > 256) {
            throw new PngjException("invalid pallette - nentries=" + this.aFT);
        }
        int[] iArr = this.aFU;
        if (iArr == null || iArr.length != i) {
            this.aFU = new int[this.aFT];
        }
    }

    @Override // com.kwad.sdk.pngencrypt.chunk.PngChunk
    public final void a(d dVar) {
        cZ(dVar.len / 3);
        int i = 0;
        int i2 = 0;
        while (i < this.aFT) {
            int i3 = i2 + 1;
            int i4 = i3 + 1;
            a(i, dVar.data[i2] & UByte.MAX_VALUE, dVar.data[i3] & UByte.MAX_VALUE, dVar.data[i4] & UByte.MAX_VALUE);
            i++;
            i2 = i4 + 1;
        }
    }
}

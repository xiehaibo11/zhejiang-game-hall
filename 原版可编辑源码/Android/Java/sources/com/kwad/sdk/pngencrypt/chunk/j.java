package com.kwad.sdk.pngencrypt.chunk;

import com.kwad.sdk.pngencrypt.PngjException;

public final class j extends t {
    private boolean aFN;
    private String aFO;
    private String aFP;

    public j(com.kwad.sdk.pngencrypt.k kVar) {
        super("iTXt", kVar);
        this.aFN = false;
        this.aFO = "";
        this.aFP = "";
    }

    @Override
    public final void a(d dVar) {
        int[] iArr = new int[3];
        int i = 0;
        int i2 = 0;
        while (i < dVar.data.length) {
            if (dVar.data[i] == 0) {
                iArr[i2] = i;
                i2++;
                if (i2 == 1) {
                    i += 2;
                }
                if (i2 == 3) {
                    break;
                }
            }
            i++;
        }
        if (i2 != 3) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad formed PngChunkITXT chunk"));
        }
        this.key = b.d(dVar.data, 0, iArr[0]);
        int i3 = iArr[0] + 1;
        boolean z = dVar.data[i3] != 0;
        this.aFN = z;
        int i4 = i3 + 1;
        if (z && dVar.data[i4] != 0) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad formed PngChunkITXT chunk - bad compression method "));
        }
        this.aFO = b.d(dVar.data, i4, iArr[1] - i4);
        this.aFP = b.e(dVar.data, iArr[1] + 1, (iArr[2] - iArr[1]) - 1);
        int i5 = iArr[2] + 1;
        boolean z2 = this.aFN;
        byte[] bArr = dVar.data;
        this.aGh = z2 ? b.j(b.b(bArr, i5, bArr.length - i5, false)) : b.e(bArr, i5, bArr.length - i5);
    }
}

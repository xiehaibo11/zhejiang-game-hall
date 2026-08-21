package com.kwad.sdk.pngencrypt.chunk;

import com.kwad.sdk.pngencrypt.PngjException;
import java.io.ByteArrayInputStream;

/* JADX INFO: loaded from: classes2.dex */
public final class i extends p {
    private int aEn;
    private int aEo;
    private int aFI;
    private int aFJ;
    private int aFK;
    private int aFL;
    private int aFM;

    public i(com.kwad.sdk.pngencrypt.k kVar) {
        super("IHDR", kVar);
        if (kVar != null) {
            Hg();
        }
    }

    private int GI() {
        return this.aEn;
    }

    private int GJ() {
        return this.aEo;
    }

    private int Hc() {
        return this.aFI;
    }

    private int Hd() {
        return this.aFJ;
    }

    private int He() {
        return this.aFM;
    }

    private void Hg() {
        cS(this.aEC.aEo);
        cT(this.aEC.aEn);
        cU(this.aEC.aEG);
        int i = this.aEC.aEI ? 4 : 0;
        if (this.aEC.aEK) {
            i++;
        }
        if (!this.aEC.aEJ) {
            i += 2;
        }
        cV(i);
        cW(0);
        cX(0);
        cY(0);
    }

    private void Hi() {
        if (this.aEo <= 0 || this.aEn <= 0 || this.aFK != 0 || this.aFL != 0) {
            throw new PngjException("bad IHDR: col/row/compmethod/filmethod invalid");
        }
        int i = this.aFI;
        if (i != 1 && i != 2 && i != 4 && i != 8 && i != 16) {
            throw new PngjException("bad IHDR: bitdepth invalid");
        }
        int i2 = this.aFM;
        if (i2 < 0 || i2 > 1) {
            throw new PngjException("bad IHDR: interlace invalid");
        }
        int i3 = this.aFJ;
        if (i3 != 0) {
            if (i3 != 6 && i3 != 2) {
                if (i3 == 3) {
                    if (this.aFI == 16) {
                        throw new PngjException("bad IHDR: bitdepth invalid");
                    }
                    return;
                } else if (i3 != 4) {
                    throw new PngjException("bad IHDR: invalid colormodel");
                }
            }
            int i4 = this.aFI;
            if (i4 != 8 && i4 != 16) {
                throw new PngjException("bad IHDR: bitdepth invalid");
            }
        }
    }

    private void cS(int i) {
        this.aEo = i;
    }

    private void cT(int i) {
        this.aEn = i;
    }

    private void cU(int i) {
        this.aFI = i;
    }

    private void cV(int i) {
        this.aFJ = i;
    }

    private void cW(int i) {
        this.aFK = 0;
    }

    private void cX(int i) {
        this.aFL = 0;
    }

    private void cY(int i) {
        this.aFM = 0;
    }

    public final boolean Hf() {
        return He() == 1;
    }

    public final com.kwad.sdk.pngencrypt.k Hh() {
        Hi();
        return new com.kwad.sdk.pngencrypt.k(GJ(), GI(), Hc(), (Hd() & 4) != 0, Hd() == 0 || Hd() == 4, (Hd() & 1) != 0);
    }

    @Override // com.kwad.sdk.pngencrypt.chunk.PngChunk
    public final void a(d dVar) {
        if (dVar.len != 13) {
            throw new PngjException("Bad IDHR len " + dVar.len);
        }
        ByteArrayInputStream byteArrayInputStreamGY = dVar.GY();
        this.aEo = com.kwad.sdk.pngencrypt.n.f(byteArrayInputStreamGY);
        this.aEn = com.kwad.sdk.pngencrypt.n.f(byteArrayInputStreamGY);
        this.aFI = com.kwad.sdk.pngencrypt.n.e(byteArrayInputStreamGY);
        this.aFJ = com.kwad.sdk.pngencrypt.n.e(byteArrayInputStreamGY);
        this.aFK = com.kwad.sdk.pngencrypt.n.e(byteArrayInputStreamGY);
        this.aFL = com.kwad.sdk.pngencrypt.n.e(byteArrayInputStreamGY);
        this.aFM = com.kwad.sdk.pngencrypt.n.e(byteArrayInputStreamGY);
    }
}

package com.kwad.sdk.pngencrypt;

import com.kwad.sdk.pngencrypt.ChunkReader;

public abstract class d extends ChunkReader {
    protected final DeflatedChunksSet aDU;
    protected boolean aDV;
    protected boolean aDW;
    protected byte[] aDX;
    protected int aDY;

    public d(int i, String str, long j, DeflatedChunksSet deflatedChunksSet) {
        super(i, str, j, ChunkReader.ChunkReaderMode.PROCESS);
        this.aDV = false;
        this.aDW = false;
        this.aDY = -1;
        this.aDU = deflatedChunksSet;
        deflatedChunksSet.a(this);
    }

    @Override
    protected void Gn() {
        int iG;
        if (!this.aDW || this.aDY < 0 || (iG = n.g(this.aDX, 0)) == this.aDY) {
            return;
        }
        com.kwad.sdk.core.e.c.printStackTrace(new PngjException("bad chunk sequence for fDAT chunk " + iG + " expected " + this.aDY));
    }

    @Override
    protected final void a(int i, byte[] bArr, int i2, int i3) {
        if (this.aDW && i < 4) {
            while (i < 4 && i3 > 0) {
                this.aDX[i] = bArr[i2];
                i++;
                i2++;
                i3--;
            }
        }
        if (i3 > 0) {
            this.aDU.c(bArr, i2, i3);
            if (this.aDV) {
                System.arraycopy(bArr, i2, Gm().data, this.aDn, i3);
            }
        }
    }

    public final void cG(int i) {
        this.aDY = i;
    }
}

package com.kwad.sdk.pngencrypt;

import com.kwad.sdk.pngencrypt.ChunkReader;
import com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour;
import java.util.HashSet;
import java.util.Set;

public final class c extends b {
    protected k aDE;
    protected k aDF;
    protected e aDG;
    protected int aDH = -1;
    protected com.kwad.sdk.pngencrypt.chunk.e aDI = null;
    private long aDK = 0;
    private boolean aDL = true;
    private boolean aDM = false;
    private Set<String> aDN = new HashSet();
    private long aDO = 0;
    private long aDP = 0;
    private long aDQ = 0;
    private ChunkLoadBehaviour aDS = ChunkLoadBehaviour.LOAD_CHUNK_ALWAYS;
    protected final boolean aDJ = false;
    private g aDR = new com.kwad.sdk.pngencrypt.chunk.a();

    static class 1 {
        static final int[] aDT;

        static {
            int[] iArr = new int[ChunkLoadBehaviour.values().length];
            aDT = iArr;
            try {
                iArr[ChunkLoadBehaviour.LOAD_CHUNK_IF_SAFE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                aDT[ChunkLoadBehaviour.LOAD_CHUNK_NEVER.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    public c(boolean z) {
    }

    private int Gt() {
        return this.aDH;
    }

    private k Gy() {
        return this.aDF;
    }

    private void fd(String str) {
        if (str.equals("IHDR")) {
            if (this.aDH < 0) {
                this.aDH = 0;
                return;
            }
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("unexpected chunk " + str));
            return;
        }
        if (str.equals("PLTE")) {
            int i = this.aDH;
            if (i == 0 || i == 1) {
                this.aDH = 2;
                return;
            }
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("unexpected chunk here " + str));
            return;
        }
        if (str.equals("IDAT")) {
            int i2 = this.aDH;
            if (i2 >= 0 && i2 <= 4) {
                this.aDH = 4;
                return;
            }
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("unexpected chunk " + str));
            return;
        }
        if (str.equals("IEND")) {
            if (this.aDH >= 4) {
                this.aDH = 6;
                return;
            }
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("unexpected chunk " + str));
            return;
        }
        int i3 = this.aDH;
        if (i3 <= 1) {
            this.aDH = 1;
        } else if (i3 <= 3) {
            this.aDH = 3;
        } else {
            this.aDH = 5;
        }
    }

    private static boolean fe(String str) {
        return !com.kwad.sdk.pngencrypt.chunk.b.fh(str);
    }

    @Override
    protected final boolean Go() {
        return this.aDL;
    }

    public final boolean Gu() {
        return Gt() < 4;
    }

    public final j Gv() {
        DeflatedChunksSet deflatedChunksSetGq = Gq();
        if (deflatedChunksSetGq instanceof j) {
            return (j) deflatedChunksSetGq;
        }
        return null;
    }

    public final k Gw() {
        return this.aDE;
    }

    public final e Gx() {
        return this.aDG;
    }

    @Override
    protected final void a(ChunkReader chunkReader) {
        super.a(chunkReader);
        if (chunkReader.Gm().adE.equals("IHDR")) {
            com.kwad.sdk.pngencrypt.chunk.i iVar = new com.kwad.sdk.pngencrypt.chunk.i(null);
            iVar.a(chunkReader.Gm());
            k kVarHh = iVar.Hh();
            this.aDE = kVarHh;
            this.aDF = kVarHh;
            if (iVar.Hf()) {
                this.aDG = new e(this.aDF);
            }
            this.aDI = new com.kwad.sdk.pngencrypt.chunk.e(this.aDE);
        }
        if (chunkReader.aDl == ChunkReader.ChunkReaderMode.BUFFER && fe(chunkReader.Gm().adE)) {
            this.aDK += (long) chunkReader.Gm().len;
        }
        if (chunkReader.aDl == ChunkReader.ChunkReaderMode.BUFFER || this.aDM) {
            try {
                this.aDI.a(this.aDR.a(chunkReader.Gm(), Gw()), this.aDH);
            } catch (PngjException e) {
                throw e;
            }
        }
    }

    public final void ao(long j) {
        this.aDO = j;
    }

    public final void ap(long j) {
        this.aDP = j;
    }

    public final void aq(long j) {
        this.aDQ = j;
    }

    @Override
    public final int b(byte[] bArr, int i, int i2) {
        return super.b(bArr, i, i2);
    }

    public final void bv(boolean z) {
        this.aDL = false;
    }

    @Override
    protected final void c(int i, String str, long j) {
        fd(str);
        super.c(i, str, j);
    }

    @Override
    public final void close() {
        if (this.aDH != 6) {
            this.aDH = 6;
        }
        super.close();
    }

    @Override
    protected final DeflatedChunksSet fb(String str) {
        return new j(str, this.aDJ, Gy(), this.aDG);
    }

    @Override
    protected final boolean fc(String str) {
        return str.equals("IDAT");
    }

    @Override
    public final boolean o(int i, String str) {
        if (super.o(i, str)) {
            return true;
        }
        if (this.aDO > 0 && ((long) i) + Gp() > this.aDO) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Maximum total bytes to read exceeeded: " + this.aDO + " offset:" + Gp() + " len=" + i));
        }
        if (this.aDN.contains(str)) {
            return true;
        }
        if (com.kwad.sdk.pngencrypt.chunk.b.fh(str)) {
            return false;
        }
        long j = this.aDP;
        if (j > 0 && i > j) {
            return true;
        }
        long j2 = this.aDQ;
        if (j2 > 0 && i > j2 - this.aDK) {
            return true;
        }
        int i2 = 1.aDT[this.aDS.ordinal()];
        if (i2 != 1) {
            if (i2 == 2) {
                return true;
            }
        } else if (!com.kwad.sdk.pngencrypt.chunk.b.fj(str)) {
            return true;
        }
        return false;
    }
}

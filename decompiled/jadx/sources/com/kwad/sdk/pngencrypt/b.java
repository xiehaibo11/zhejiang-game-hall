package com.kwad.sdk.pngencrypt;

import com.kwad.sdk.pngencrypt.ChunkReader;
import java.io.Closeable;
import java.util.Arrays;

/* JADX INFO: loaded from: classes2.dex */
public abstract class b implements f, Closeable {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private ChunkReader aDA;
    private long aDB;
    private ErrorBehaviour aDC;
    private final byte[] aDr;
    private final int aDs;
    private byte[] aDt;
    private int aDu;
    protected boolean aDv;
    protected boolean aDw;
    private int aDx;
    private long aDy;
    private DeflatedChunksSet aDz;
    protected boolean closed;

    public b() {
        this(n.GQ());
    }

    private b(byte[] bArr) {
        this.aDt = new byte[8];
        this.aDu = 0;
        this.aDv = false;
        this.aDw = false;
        this.closed = false;
        this.aDx = 0;
        this.aDy = 0L;
        this.aDC = ErrorBehaviour.STRICT;
        this.aDr = bArr;
        int length = bArr == null ? 0 : bArr.length;
        this.aDs = length;
        this.aDv = length <= 0;
    }

    private static String Gr() {
        return "IHDR";
    }

    private static String Gs() {
        return "IEND";
    }

    private ChunkReader a(String str, int i, long j, boolean z) {
        return new ChunkReader(i, str, j, z ? ChunkReader.ChunkReaderMode.SKIP : ChunkReader.ChunkReaderMode.BUFFER) { // from class: com.kwad.sdk.pngencrypt.b.2
            @Override // com.kwad.sdk.pngencrypt.ChunkReader
            protected final void Gn() {
                b.this.a(this);
            }

            @Override // com.kwad.sdk.pngencrypt.ChunkReader
            protected final void a(int i2, byte[] bArr, int i3, int i4) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException("should never happen"));
            }
        };
    }

    private static void h(byte[] bArr) {
        if (Arrays.equals(bArr, n.GQ())) {
            return;
        }
        com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad signature:" + Arrays.toString(bArr)));
    }

    protected boolean Go() {
        return true;
    }

    public final long Gp() {
        return this.aDy;
    }

    public final DeflatedChunksSet Gq() {
        return this.aDz;
    }

    protected void a(ChunkReader chunkReader) {
        if (this.aDx == 1 && !Gr().equals(chunkReader.Gm().adE)) {
            String str = "Bad first chunk: " + chunkReader.Gm().adE + " expected: " + Gr();
            if (this.aDC.c < ErrorBehaviour.SUPER_LENIENT.c) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException(str));
            } else {
                com.kwad.sdk.core.e.c.d("PNG_ENCRYPT", str);
            }
        }
        Gs();
        if (chunkReader.Gm().adE.equals(Gs())) {
            this.aDw = true;
            close();
        }
    }

    @Override // com.kwad.sdk.pngencrypt.f
    public int b(byte[] bArr, int i, int i2) {
        int i3;
        long j;
        long j2;
        if (this.closed) {
            return -1;
        }
        if (i2 == 0) {
            return 0;
        }
        if (i2 < 0) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("This should not happen. Bad length: " + i2));
        }
        if (this.aDv) {
            ChunkReader chunkReader = this.aDA;
            if (chunkReader == null || chunkReader.isDone()) {
                int i4 = 8 - this.aDu;
                if (i4 <= i2) {
                    i2 = i4;
                }
                System.arraycopy(bArr, i, this.aDt, this.aDu, i2);
                int i5 = this.aDu + i2;
                this.aDu = i5;
                i3 = i2 + 0;
                this.aDy += (long) i2;
                if (i5 == 8) {
                    this.aDx++;
                    c(n.g(this.aDt, 0), com.kwad.sdk.pngencrypt.chunk.b.i(this.aDt, 4), this.aDy - 8);
                    this.aDu = 0;
                }
                return i3;
            }
            int iB = this.aDA.b(bArr, i, i2);
            if (iB < 0) {
                return -1;
            }
            i3 = iB + 0;
            j = this.aDy;
            j2 = iB;
        } else {
            int i6 = this.aDs - this.aDu;
            if (i6 <= i2) {
                i2 = i6;
            }
            System.arraycopy(bArr, i, this.aDt, this.aDu, i2);
            int i7 = this.aDu + i2;
            this.aDu = i7;
            if (i7 == this.aDs) {
                h(this.aDt);
                this.aDu = 0;
                this.aDv = true;
            }
            i3 = i2 + 0;
            j = this.aDy;
            j2 = i2;
        }
        this.aDy = j + j2;
        return i3;
    }

    protected void c(int i, String str, long j) {
        com.kwad.sdk.core.e.c.d("PNG_ENCRYPT", "New chunk: " + str + " " + i + " off:" + j);
        if (str.length() != 4 || !com.kwad.sdk.pngencrypt.chunk.b.aFs.matcher(str).matches()) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad chunk id: " + str));
        }
        if (i < 0) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad chunk len: " + i));
        }
        if (str.equals("IDAT")) {
            this.aDB += (long) i;
        }
        boolean zGo = Go();
        boolean zO = o(i, str);
        boolean zFc = fc(str);
        DeflatedChunksSet deflatedChunksSet = this.aDz;
        boolean zFf = (deflatedChunksSet == null || deflatedChunksSet.isClosed()) ? false : this.aDz.ff(str);
        if (!zFc || zO) {
            this.aDA = a(str, i, j, zO);
        } else {
            if (!zFf) {
                DeflatedChunksSet deflatedChunksSet2 = this.aDz;
                if (deflatedChunksSet2 != null && !deflatedChunksSet2.isDone()) {
                    com.kwad.sdk.core.e.c.printStackTrace(new PngjException("new IDAT-like chunk when previous was not done"));
                }
                this.aDz = fb(str);
            }
            this.aDA = new d(i, str, zGo, j, this.aDz) { // from class: com.kwad.sdk.pngencrypt.b.1
                @Override // com.kwad.sdk.pngencrypt.d, com.kwad.sdk.pngencrypt.ChunkReader
                protected final void Gn() {
                    super.Gn();
                    b.this.a(this);
                }
            };
        }
        ChunkReader chunkReader = this.aDA;
        if (chunkReader == null || zGo) {
            return;
        }
        chunkReader.bu(false);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        DeflatedChunksSet deflatedChunksSet = this.aDz;
        if (deflatedChunksSet != null) {
            deflatedChunksSet.close();
        }
        this.closed = true;
    }

    protected abstract DeflatedChunksSet fb(String str);

    protected boolean fc(String str) {
        return false;
    }

    @Override // com.kwad.sdk.pngencrypt.f
    public final boolean isDone() {
        return this.aDw;
    }

    protected boolean o(int i, String str) {
        return false;
    }
}

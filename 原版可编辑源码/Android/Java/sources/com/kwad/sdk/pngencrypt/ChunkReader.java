package com.kwad.sdk.pngencrypt;

public abstract class ChunkReader implements f {
    public final ChunkReaderMode aDl;
    private final com.kwad.sdk.pngencrypt.chunk.d aDm;
    private boolean aDp;
    protected int aDn = 0;
    private int aDo = 0;
    protected ErrorBehaviour aDq = ErrorBehaviour.STRICT;

    public enum ChunkReaderMode {
        BUFFER,
        PROCESS,
        SKIP
    }

    public ChunkReader(int i, String str, long j, ChunkReaderMode chunkReaderMode) {
        if (chunkReaderMode == null || str.length() != 4 || i < 0) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad chunk paramenters: " + chunkReaderMode));
        }
        this.aDl = chunkReaderMode;
        com.kwad.sdk.pngencrypt.chunk.d dVar = new com.kwad.sdk.pngencrypt.chunk.d(i, str, chunkReaderMode == ChunkReaderMode.BUFFER);
        this.aDm = dVar;
        dVar.ar(j);
        this.aDp = chunkReaderMode != ChunkReaderMode.SKIP;
    }

    public final com.kwad.sdk.pngencrypt.chunk.d Gm() {
        return this.aDm;
    }

    protected abstract void Gn();

    protected abstract void a(int i, byte[] bArr, int i2, int i3);

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    public final int b(byte[] bArr, int i, int i2) {
        int i3 = 0;
        if (i2 == 0) {
            return 0;
        }
        if (i2 < 0) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("negative length??"));
        }
        if (this.aDn == 0 && this.aDo == 0 && this.aDp) {
            com.kwad.sdk.pngencrypt.chunk.d dVar = this.aDm;
            dVar.f(dVar.aFt, 0, 4);
        }
        int i4 = this.aDm.len - this.aDn;
        if (i4 > i2) {
            i4 = i2;
        }
        if (i4 > 0 || this.aDo == 0) {
            if (this.aDp && this.aDl != ChunkReaderMode.BUFFER && i4 > 0) {
                this.aDm.f(bArr, i, i4);
            }
            if (this.aDl == ChunkReaderMode.BUFFER) {
                if (this.aDm.data != bArr && i4 > 0) {
                    System.arraycopy(bArr, i, this.aDm.data, this.aDn, i4);
                }
            } else if (this.aDl == ChunkReaderMode.PROCESS) {
                a(this.aDn, bArr, i, i4);
            }
            this.aDn += i4;
            i += i4;
            i2 -= i4;
        }
        if (this.aDn == this.aDm.len) {
            int i5 = 4 - this.aDo;
            if (i5 <= i2) {
                i2 = i5;
            }
            if (i2 > 0) {
                if (bArr != this.aDm.aFv) {
                    System.arraycopy(bArr, i, this.aDm.aFv, this.aDo, i2);
                }
                int i6 = this.aDo + i2;
                this.aDo = i6;
                if (i6 == 4) {
                    if (this.aDp) {
                        if (this.aDl == ChunkReaderMode.BUFFER) {
                            com.kwad.sdk.pngencrypt.chunk.d dVar2 = this.aDm;
                            dVar2.f(dVar2.data, 0, this.aDm.len);
                        }
                        this.aDm.bw(this.aDq == ErrorBehaviour.STRICT);
                    }
                    com.kwad.sdk.core.e.c.d("PNG_ENCRYPT", "Chunk done");
                    Gn();
                }
            }
            i3 = i2;
        }
        if (i4 > 0 || i3 > 0) {
            return i4 + i3;
        }
        return -1;
    }

    public final void bu(boolean z) {
        this.aDp = false;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        com.kwad.sdk.pngencrypt.chunk.d dVar = this.aDm;
        com.kwad.sdk.pngencrypt.chunk.d dVar2 = ((ChunkReader) obj).aDm;
        if (dVar == null) {
            if (dVar2 != null) {
                return false;
            }
        } else if (!dVar.equals(dVar2)) {
            return false;
        }
        return true;
    }

    public int hashCode() {
        com.kwad.sdk.pngencrypt.chunk.d dVar = this.aDm;
        return (dVar == null ? 0 : dVar.hashCode()) + 31;
    }

    @Override
    public final boolean isDone() {
        return this.aDo == 4;
    }

    public String toString() {
        return this.aDm.toString();
    }
}

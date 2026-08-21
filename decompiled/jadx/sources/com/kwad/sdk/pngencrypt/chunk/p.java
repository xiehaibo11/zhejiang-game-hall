package com.kwad.sdk.pngencrypt.chunk;

/* JADX INFO: loaded from: classes2.dex */
public abstract class p extends PngChunk {
    protected p(String str, com.kwad.sdk.pngencrypt.k kVar) {
        super(str, kVar);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        p pVar = (p) obj;
        if (this.adE == null) {
            if (pVar.adE != null) {
                return false;
            }
        } else if (!this.adE.equals(pVar.adE)) {
            return false;
        }
        return true;
    }

    public int hashCode() {
        return (this.adE == null ? 0 : this.adE.hashCode()) + 31;
    }
}

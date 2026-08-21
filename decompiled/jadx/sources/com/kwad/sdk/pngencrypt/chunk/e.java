package com.kwad.sdk.pngencrypt.chunk;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class e {
    final com.kwad.sdk.pngencrypt.k aDE;
    List<PngChunk> aFx = new ArrayList();
    boolean aFy = false;

    public e(com.kwad.sdk.pngencrypt.k kVar) {
        this.aDE = kVar;
    }

    private static List<PngChunk> a(List<PngChunk> list, final String str, final String str2) {
        return str2 == null ? b.a(list, new c() { // from class: com.kwad.sdk.pngencrypt.chunk.e.1
            @Override // com.kwad.sdk.pngencrypt.chunk.c
            public final boolean a(PngChunk pngChunk) {
                return pngChunk.adE.equals(str);
            }
        }) : b.a(list, new c() { // from class: com.kwad.sdk.pngencrypt.chunk.e.2
            @Override // com.kwad.sdk.pngencrypt.chunk.c
            public final boolean a(PngChunk pngChunk) {
                if (!pngChunk.adE.equals(str)) {
                    return false;
                }
                if (!(pngChunk instanceof t) || ((t) pngChunk).getKey().equals(str2)) {
                    return !(pngChunk instanceof n) || ((n) pngChunk).Hj().equals(str2);
                }
                return false;
            }
        });
    }

    public final List<PngChunk> Ha() {
        return this.aFx;
    }

    public final void a(PngChunk pngChunk, int i) {
        pngChunk.cR(i);
        this.aFx.add(pngChunk);
        if (pngChunk.adE.equals("PLTE")) {
            this.aFy = true;
        }
    }

    public final List<? extends PngChunk> aj(String str, String str2) {
        return a(this.aFx, str, str2);
    }

    public String toString() {
        return "ChunkList: read: " + this.aFx.size();
    }
}

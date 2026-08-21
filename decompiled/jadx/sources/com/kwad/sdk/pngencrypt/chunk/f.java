package com.kwad.sdk.pngencrypt.chunk;

import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends e {
    private final List<PngChunk> aFB;

    @Override // com.kwad.sdk.pngencrypt.chunk.e
    public final String toString() {
        return "ChunkList: written: " + Ha().size() + " queue: " + this.aFB.size();
    }
}

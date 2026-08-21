package com.kwad.sdk.pngencrypt.chunk;

import java.util.List;

public final class f extends e {
    private final List<PngChunk> aFB;

    @Override
    public final String toString() {
        return "ChunkList: written: " + Ha().size() + " queue: " + this.aFB.size();
    }
}

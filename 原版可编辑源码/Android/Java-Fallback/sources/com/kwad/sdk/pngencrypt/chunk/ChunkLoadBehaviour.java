package com.kwad.sdk.pngencrypt.chunk;

public enum ChunkLoadBehaviour extends java.lang.Enum<com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour> {
    private static final com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[] $VALUES = null;
    public static final com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour LOAD_CHUNK_ALWAYS = null;
    public static final com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour LOAD_CHUNK_IF_SAFE = null;
    public static final com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour LOAD_CHUNK_MOST_IMPORTANT = null;
    public static final com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour LOAD_CHUNK_NEVER = null;

    static {
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r0 = new com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour
            r1 = 0
            java.lang.String r2 = "LOAD_CHUNK_NEVER"
            r0.<init>(r2, r1)
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_NEVER = r0
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r0 = new com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour
            r2 = 1
            java.lang.String r3 = "LOAD_CHUNK_IF_SAFE"
            r0.<init>(r3, r2)
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_IF_SAFE = r0
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r0 = new com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour
            r3 = 2
            java.lang.String r4 = "LOAD_CHUNK_MOST_IMPORTANT"
            r0.<init>(r4, r3)
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_MOST_IMPORTANT = r0
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r0 = new com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour
            r4 = 3
            java.lang.String r5 = "LOAD_CHUNK_ALWAYS"
            r0.<init>(r5, r4)
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_ALWAYS = r0
            r5 = 4
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[] r5 = new com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[r5]
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r6 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_NEVER
            r5[r1] = r6
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r1 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_IF_SAFE
            r5[r2] = r1
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r1 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.LOAD_CHUNK_MOST_IMPORTANT
            r5[r3] = r1
            r5[r4] = r0
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.$VALUES = r5
            return
    }

    ChunkLoadBehaviour(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour> r0 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour r1 = (com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour) r1
            return r1
    }

    public static com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[] values() {
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[] r0 = com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[] r0 = (com.kwad.sdk.pngencrypt.chunk.ChunkLoadBehaviour[]) r0
            return r0
    }
}

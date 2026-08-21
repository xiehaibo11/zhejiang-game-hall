package com.bumptech.glide.load.engine;

public enum DiskCacheStrategy extends java.lang.Enum<com.bumptech.glide.load.engine.DiskCacheStrategy> {
    private static final com.bumptech.glide.load.engine.DiskCacheStrategy[] $VALUES = null;
    public static final com.bumptech.glide.load.engine.DiskCacheStrategy ALL = null;
    public static final com.bumptech.glide.load.engine.DiskCacheStrategy NONE = null;
    public static final com.bumptech.glide.load.engine.DiskCacheStrategy RESULT = null;
    public static final com.bumptech.glide.load.engine.DiskCacheStrategy SOURCE = null;
    private final boolean cacheResult;
    private final boolean cacheSource;

    static {
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = new com.bumptech.glide.load.engine.DiskCacheStrategy
            java.lang.String r1 = "ALL"
            r2 = 0
            r3 = 1
            r0.<init>(r1, r2, r3, r3)
            com.bumptech.glide.load.engine.DiskCacheStrategy.ALL = r0
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = new com.bumptech.glide.load.engine.DiskCacheStrategy
            java.lang.String r1 = "NONE"
            r0.<init>(r1, r3, r2, r2)
            com.bumptech.glide.load.engine.DiskCacheStrategy.NONE = r0
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = new com.bumptech.glide.load.engine.DiskCacheStrategy
            java.lang.String r1 = "SOURCE"
            r4 = 2
            r0.<init>(r1, r4, r3, r2)
            com.bumptech.glide.load.engine.DiskCacheStrategy.SOURCE = r0
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = new com.bumptech.glide.load.engine.DiskCacheStrategy
            java.lang.String r1 = "RESULT"
            r5 = 3
            r0.<init>(r1, r5, r2, r3)
            com.bumptech.glide.load.engine.DiskCacheStrategy.RESULT = r0
            r1 = 4
            com.bumptech.glide.load.engine.DiskCacheStrategy[] r1 = new com.bumptech.glide.load.engine.DiskCacheStrategy[r1]
            com.bumptech.glide.load.engine.DiskCacheStrategy r6 = com.bumptech.glide.load.engine.DiskCacheStrategy.ALL
            r1[r2] = r6
            com.bumptech.glide.load.engine.DiskCacheStrategy r2 = com.bumptech.glide.load.engine.DiskCacheStrategy.NONE
            r1[r3] = r2
            com.bumptech.glide.load.engine.DiskCacheStrategy r2 = com.bumptech.glide.load.engine.DiskCacheStrategy.SOURCE
            r1[r4] = r2
            r1[r5] = r0
            com.bumptech.glide.load.engine.DiskCacheStrategy.$VALUES = r1
            return
    }

    DiskCacheStrategy(java.lang.String r1, int r2, boolean r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.cacheSource = r3
            r0.cacheResult = r4
            return
    }

    public static com.bumptech.glide.load.engine.DiskCacheStrategy valueOf(java.lang.String r1) {
            java.lang.Class<com.bumptech.glide.load.engine.DiskCacheStrategy> r0 = com.bumptech.glide.load.engine.DiskCacheStrategy.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bumptech.glide.load.engine.DiskCacheStrategy r1 = (com.bumptech.glide.load.engine.DiskCacheStrategy) r1
            return r1
    }

    public static com.bumptech.glide.load.engine.DiskCacheStrategy[] values() {
            com.bumptech.glide.load.engine.DiskCacheStrategy[] r0 = com.bumptech.glide.load.engine.DiskCacheStrategy.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bumptech.glide.load.engine.DiskCacheStrategy[] r0 = (com.bumptech.glide.load.engine.DiskCacheStrategy[]) r0
            return r0
    }

    public boolean cacheResult() {
            r1 = this;
            boolean r0 = r1.cacheResult
            return r0
    }

    public boolean cacheSource() {
            r1 = this;
            boolean r0 = r1.cacheSource
            return r0
    }
}

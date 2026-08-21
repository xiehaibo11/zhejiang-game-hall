package com.bumptech.glide.util;

public class FixedPreloadSizeProvider<T> implements com.bumptech.glide.ListPreloader.PreloadSizeProvider<T> {
    private final int[] size;

    public FixedPreloadSizeProvider(int r3, int r4) {
            r2 = this;
            r2.<init>()
            r0 = 2
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            r2.size = r0
            return
    }

    @Override
    public int[] getPreloadSize(T r1, int r2, int r3) {
            r0 = this;
            int[] r1 = r0.size
            int r2 = r1.length
            int[] r1 = java.util.Arrays.copyOf(r1, r2)
            return r1
    }
}

package com.kwad.sdk.core.videocache.a;

public final class g extends e {
    private final long maxSize;

    public g(long j) {
        if (j <= 0) {
            throw new IllegalArgumentException("Max size must be positive number!");
        }
        this.maxSize = j;
    }

    @Override
    protected final boolean aj(long j) {
        return j <= this.maxSize;
    }
}

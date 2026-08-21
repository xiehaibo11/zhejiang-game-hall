package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class NoOpCacheEvictor implements CacheEvictor {
    @Override
    public final void onCacheInitialized() {
    }

    @Override
    public final void onSpanAdded(Cache cache, CacheSpan cacheSpan) {
    }

    @Override
    public final void onSpanRemoved(Cache cache, CacheSpan cacheSpan) {
    }

    @Override
    public final void onSpanTouched(Cache cache, CacheSpan cacheSpan, CacheSpan cacheSpan2) {
    }

    @Override
    public final void onStartFile(Cache cache, String str, long j, long j2) {
    }
}

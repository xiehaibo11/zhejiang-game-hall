package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public interface CacheEvictor extends com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener {
    void onCacheInitialized();

    void onStartFile(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, java.lang.String r2, long r3, long r5);
}

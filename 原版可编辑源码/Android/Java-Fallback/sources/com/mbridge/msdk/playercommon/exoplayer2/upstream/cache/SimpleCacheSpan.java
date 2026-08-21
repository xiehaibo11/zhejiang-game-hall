package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

final class SimpleCacheSpan extends com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan {
    private static final java.util.regex.Pattern CACHE_FILE_PATTERN_V1 = null;
    private static final java.util.regex.Pattern CACHE_FILE_PATTERN_V2 = null;
    private static final java.util.regex.Pattern CACHE_FILE_PATTERN_V3 = null;
    private static final java.lang.String SUFFIX = ".v3.exo";

    static {
            r0 = 32
            java.lang.String r1 = "^(.+)\\.(\\d+)\\.(\\d+)\\.v1\\.exo$"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.CACHE_FILE_PATTERN_V1 = r1
            java.lang.String r1 = "^(.+)\\.(\\d+)\\.(\\d+)\\.v2\\.exo$"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.CACHE_FILE_PATTERN_V2 = r1
            java.lang.String r1 = "^(\\d+)\\.(\\d+)\\.(\\d+)\\.v3\\.exo$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r1, r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.CACHE_FILE_PATTERN_V3 = r0
            return
    }

    private SimpleCacheSpan(java.lang.String r1, long r2, long r4, long r6, java.io.File r8) {
            r0 = this;
            r0.<init>(r1, r2, r4, r6, r8)
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan createCacheEntry(java.io.File r12, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r13) {
            java.lang.String r0 = r12.getName()
            java.lang.String r1 = ".v3.exo"
            boolean r1 = r0.endsWith(r1)
            r2 = 0
            if (r1 != 0) goto L18
            java.io.File r12 = upgradeFile(r12, r13)
            if (r12 != 0) goto L14
            return r2
        L14:
            java.lang.String r0 = r12.getName()
        L18:
            r11 = r12
            java.util.regex.Pattern r12 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.CACHE_FILE_PATTERN_V3
            java.util.regex.Matcher r12 = r12.matcher(r0)
            boolean r0 = r12.matches()
            if (r0 != 0) goto L26
            return r2
        L26:
            long r7 = r11.length()
            r0 = 1
            java.lang.String r0 = r12.group(r0)
            int r0 = java.lang.Integer.parseInt(r0)
            java.lang.String r4 = r13.getKeyForId(r0)
            if (r4 != 0) goto L3a
            goto L52
        L3a:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan
            r13 = 2
            java.lang.String r13 = r12.group(r13)
            long r5 = java.lang.Long.parseLong(r13)
            r13 = 3
            java.lang.String r12 = r12.group(r13)
            long r9 = java.lang.Long.parseLong(r12)
            r3 = r2
            r3.<init>(r4, r5, r7, r9, r11)
        L52:
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan createClosedHole(java.lang.String r10, long r11, long r13) {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r4 = r13
            r0.<init>(r1, r2, r4, r6, r8)
            return r9
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan createLookup(java.lang.String r10, long r11) {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan
            r4 = -1
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r0.<init>(r1, r2, r4, r6, r8)
            return r9
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan createOpenHole(java.lang.String r10, long r11) {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan
            r4 = -1
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r0.<init>(r1, r2, r4, r6, r8)
            return r9
    }

    public static java.io.File getCacheFile(java.io.File r2, int r3, long r4, long r6) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            r1.append(r4)
            r1.append(r3)
            r1.append(r6)
            java.lang.String r3 = ".v3.exo"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r2, r3)
            return r0
    }

    private static java.io.File upgradeFile(java.io.File r11, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r12) {
            java.lang.String r0 = r11.getName()
            java.util.regex.Pattern r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.CACHE_FILE_PATTERN_V2
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r2 = r1.matches()
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L1d
            java.lang.String r0 = r1.group(r3)
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.unescapeFileName(r0)
            if (r0 != 0) goto L2e
            return r4
        L1d:
            java.util.regex.Pattern r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.CACHE_FILE_PATTERN_V1
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r0 = r1.matches()
            if (r0 != 0) goto L2a
            return r4
        L2a:
            java.lang.String r0 = r1.group(r3)
        L2e:
            java.io.File r5 = r11.getParentFile()
            int r6 = r12.assignIdForKey(r0)
            r12 = 2
            java.lang.String r12 = r1.group(r12)
            long r7 = java.lang.Long.parseLong(r12)
            r12 = 3
            java.lang.String r12 = r1.group(r12)
            long r9 = java.lang.Long.parseLong(r12)
            java.io.File r12 = getCacheFile(r5, r6, r7, r9)
            boolean r11 = r11.renameTo(r12)
            if (r11 != 0) goto L53
            return r4
        L53:
            return r12
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan copyWithUpdatedLastAccessTime(int r11) {
            r10 = this;
            boolean r0 = r10.isCached
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            long r7 = java.lang.System.currentTimeMillis()
            java.io.File r0 = r10.file
            java.io.File r1 = r0.getParentFile()
            long r3 = r10.position
            r2 = r11
            r5 = r7
            java.io.File r9 = getCacheFile(r1, r2, r3, r5)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r11 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan
            java.lang.String r2 = r10.key
            long r3 = r10.position
            long r5 = r10.length
            r1 = r11
            r1.<init>(r2, r3, r5, r7, r9)
            return r11
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

final class CachedContent {
    private static final int VERSION_MAX = Integer.MAX_VALUE;
    private static final int VERSION_METADATA_INTRODUCED = 2;
    private final java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> cachedSpans;
    public final int id;
    public final java.lang.String key;
    private boolean locked;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata metadata;

    public CachedContent(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.key = r2
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata.EMPTY
            r0.metadata = r1
            java.util.TreeSet r1 = new java.util.TreeSet
            r1.<init>()
            r0.cachedSpans = r1
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent readFromStream(int r3, java.io.DataInputStream r4) throws java.io.IOException {
            int r0 = r4.readInt()
            java.lang.String r1 = r4.readUTF()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent
            r2.<init>(r0, r1)
            r0 = 2
            if (r3 >= r0) goto L20
            long r3 = r4.readLong()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.setContentLength(r0, r3)
            r2.applyMetadataMutations(r0)
            goto L26
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r3 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata.readFromStream(r4)
            r2.metadata = r3
        L26:
            return r2
    }

    public final void addSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r2) {
            r1 = this;
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r0 = r1.cachedSpans
            r0.add(r2)
            return
    }

    public final boolean applyMetadataMutations(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r0 = r1.metadata
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r2 = r0.copyWithMutationsApplied(r2)
            r1.metadata = r2
            boolean r2 = r2.equals(r0)
            r2 = r2 ^ 1
            return r2
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L3b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L3b
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r5 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent) r5
            int r2 = r4.id
            int r3 = r5.id
            if (r2 != r3) goto L39
            java.lang.String r2 = r4.key
            java.lang.String r3 = r5.key
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L39
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r2 = r4.cachedSpans
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r3 = r5.cachedSpans
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L39
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r2 = r4.metadata
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r5 = r5.metadata
            boolean r5 = r2.equals(r5)
            if (r5 == 0) goto L39
            goto L3a
        L39:
            r0 = r1
        L3a:
            return r0
        L3b:
            return r1
    }

    public final long getCachedBytesLength(long r11, long r13) {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r0 = r10.getSpan(r11)
            boolean r1 = r0.isHoleSpan()
            if (r1 == 0) goto L1e
            boolean r11 = r0.isOpenEnded()
            if (r11 == 0) goto L16
            r11 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            goto L18
        L16:
            long r11 = r0.length
        L18:
            long r11 = java.lang.Math.min(r11, r13)
            long r11 = -r11
            return r11
        L1e:
            long r1 = r11 + r13
            long r3 = r0.position
            long r5 = r0.length
            long r3 = r3 + r5
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 >= 0) goto L54
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r5 = r10.cachedSpans
            r6 = 0
            java.util.NavigableSet r0 = r5.tailSet(r0, r6)
            java.util.Iterator r0 = r0.iterator()
        L34:
            boolean r5 = r0.hasNext()
            if (r5 == 0) goto L54
            java.lang.Object r5 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r5 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan) r5
            long r6 = r5.position
            int r6 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r6 <= 0) goto L47
            goto L54
        L47:
            long r6 = r5.position
            long r8 = r5.length
            long r6 = r6 + r8
            long r3 = java.lang.Math.max(r3, r6)
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 < 0) goto L34
        L54:
            long r3 = r3 - r11
            long r11 = java.lang.Math.min(r3, r13)
            return r11
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata getMetadata() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r0 = r1.metadata
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan getSpan(long r7) {
            r6 = this;
            java.lang.String r0 = r6.key
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.createLookup(r0, r7)
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r1 = r6.cachedSpans
            java.lang.Object r1 = r1.floor(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan) r1
            if (r1 == 0) goto L1a
            long r2 = r1.position
            long r4 = r1.length
            long r2 = r2 + r4
            int r2 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r2 <= 0) goto L1a
            return r1
        L1a:
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r1 = r6.cachedSpans
            java.lang.Object r0 = r1.ceiling(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan) r0
            if (r0 != 0) goto L2b
            java.lang.String r0 = r6.key
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r7 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.createOpenHole(r0, r7)
            goto L34
        L2b:
            java.lang.String r1 = r6.key
            long r2 = r0.position
            long r2 = r2 - r7
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r7 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.createClosedHole(r1, r7, r2)
        L34:
            return r7
    }

    public final java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> getSpans() {
            r1 = this;
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r0 = r1.cachedSpans
            return r0
    }

    public final int hashCode() {
            r2 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            int r0 = r2.headerHashCode(r0)
            int r0 = r0 * 31
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r1 = r2.cachedSpans
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }

    public final int headerHashCode(int r6) {
            r5 = this;
            int r0 = r5.id
            int r0 = r0 * 31
            java.lang.String r1 = r5.key
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r1 = 2
            if (r6 >= r1) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r6 = r5.metadata
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.getContentLength(r6)
            int r0 = r0 * 31
            r6 = 32
            long r3 = r1 >>> r6
            long r1 = r1 ^ r3
            int r6 = (int) r1
            goto L25
        L1d:
            int r0 = r0 * 31
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r6 = r5.metadata
            int r6 = r6.hashCode()
        L25:
            int r0 = r0 + r6
            return r0
    }

    public final boolean isEmpty() {
            r1 = this;
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r0 = r1.cachedSpans
            boolean r0 = r0.isEmpty()
            return r0
    }

    public final boolean isLocked() {
            r1 = this;
            boolean r0 = r1.locked
            return r0
    }

    public final boolean removeSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2) {
            r1 = this;
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r0 = r1.cachedSpans
            boolean r0 = r0.remove(r2)
            if (r0 == 0) goto Lf
            java.io.File r2 = r2.file
            r2.delete()
            r2 = 1
            return r2
        Lf:
            r2 = 0
            return r2
    }

    public final void setLocked(boolean r1) {
            r0 = this;
            r0.locked = r1
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan touch(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r5) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r4 = this;
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r0 = r4.cachedSpans
            boolean r0 = r0.remove(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            int r0 = r4.id
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r0 = r5.copyWithUpdatedLastAccessTime(r0)
            java.io.File r1 = r5.file
            java.io.File r2 = r0.file
            boolean r1 = r1.renameTo(r2)
            if (r1 == 0) goto L1f
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan> r5 = r4.cachedSpans
            r5.add(r0)
            return r0
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$CacheException r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$CacheException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Renaming of "
            r2.append(r3)
            java.io.File r5 = r5.file
            r2.append(r5)
            java.lang.String r5 = " to "
            r2.append(r5)
            java.io.File r5 = r0.file
            r2.append(r5)
            java.lang.String r5 = " failed."
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            throw r1
    }

    public final void writeToStream(java.io.DataOutputStream r2) throws java.io.IOException {
            r1 = this;
            int r0 = r1.id
            r2.writeInt(r0)
            java.lang.String r0 = r1.key
            r2.writeUTF(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r0 = r1.metadata
            r0.writeToStream(r2)
            return
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class CacheUtil {
    public static final int DEFAULT_BUFFER_SIZE_BYTES = 131072;

    public static class CachingCounters {
        public volatile long alreadyCachedBytes;
        public volatile long contentLength;
        public volatile long newlyCachedBytes;

        public CachingCounters() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.contentLength = r0
                return
        }

        public long totalCachedBytes() {
                r4 = this;
                long r0 = r4.alreadyCachedBytes
                long r2 = r4.newlyCachedBytes
                long r0 = r0 + r2
                return r0
        }
    }

    private CacheUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void cache(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r9, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r10, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r11, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.CachingCounters r12, java.util.concurrent.atomic.AtomicBoolean r13) throws java.io.IOException, java.lang.InterruptedException {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource
            r2.<init>(r10, r11)
            r11 = 131072(0x20000, float:1.83671E-40)
            byte[] r3 = new byte[r11]
            r4 = 0
            r5 = 0
            r8 = 0
            r0 = r9
            r1 = r10
            r6 = r12
            r7 = r13
            cache(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void cache(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r25, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r26, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r27, byte[] r28, com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r29, int r30, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.CachingCounters r31, java.util.concurrent.atomic.AtomicBoolean r32, boolean r33) throws java.io.IOException, java.lang.InterruptedException {
            r10 = r25
            r11 = r26
            r0 = r31
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r27)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r28)
            if (r0 == 0) goto L12
            getCached(r10, r11, r0)
            goto L17
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters
            r0.<init>()
        L17:
            r12 = r0
            java.lang.String r13 = getKey(r25)
            long r0 = r10.absoluteStreamPosition
            long r2 = r10.length
            r14 = -1
            int r2 = (r2 > r14 ? 1 : (r2 == r14 ? 0 : -1))
            if (r2 == 0) goto L29
            long r2 = r10.length
            goto L2d
        L29:
            long r2 = r11.getContentLength(r13)
        L2d:
            r16 = r0
            r18 = r2
        L31:
            r20 = 0
            int r0 = (r18 > r20 ? 1 : (r18 == r20 ? 0 : -1))
            if (r0 == 0) goto L91
            if (r32 == 0) goto L46
            boolean r0 = r32.get()
            if (r0 != 0) goto L40
            goto L46
        L40:
            java.lang.InterruptedException r0 = new java.lang.InterruptedException
            r0.<init>()
            throw r0
        L46:
            int r22 = (r18 > r14 ? 1 : (r18 == r14 ? 0 : -1))
            if (r22 == 0) goto L4d
            r4 = r18
            goto L53
        L4d:
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = r0
        L53:
            r0 = r26
            r1 = r13
            r2 = r16
            long r0 = r0.getCachedLength(r1, r2, r4)
            int r2 = (r0 > r20 ? 1 : (r0 == r20 ? 0 : -1))
            if (r2 <= 0) goto L61
            goto L87
        L61:
            long r8 = -r0
            r0 = r25
            r1 = r16
            r3 = r8
            r5 = r27
            r6 = r28
            r7 = r29
            r23 = r8
            r8 = r30
            r9 = r12
            long r0 = readAndDiscard(r0, r1, r3, r5, r6, r7, r8, r9)
            int r0 = (r0 > r23 ? 1 : (r0 == r23 ? 0 : -1))
            if (r0 >= 0) goto L85
            if (r33 == 0) goto L91
            if (r22 != 0) goto L7f
            goto L91
        L7f:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        L85:
            r0 = r23
        L87:
            long r16 = r16 + r0
            if (r22 != 0) goto L8c
            goto L8e
        L8c:
            r20 = r0
        L8e:
            long r18 = r18 - r20
            goto L31
        L91:
            return
    }

    public static java.lang.String generateKey(android.net.Uri r0) {
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static void getCached(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r20, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r21, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.CachingCounters r22) {
            r0 = r20
            r1 = r22
            java.lang.String r8 = getKey(r20)
            long r2 = r0.absoluteStreamPosition
            long r4 = r0.length
            r9 = -1
            int r4 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            if (r4 == 0) goto L17
            long r4 = r0.length
            r0 = r21
            goto L1d
        L17:
            r0 = r21
            long r4 = r0.getContentLength(r8)
        L1d:
            r1.contentLength = r4
            r11 = 0
            r1.alreadyCachedBytes = r11
            r1.newlyCachedBytes = r11
            r13 = r2
            r15 = r4
        L27:
            int r2 = (r15 > r11 ? 1 : (r15 == r11 ? 0 : -1))
            if (r2 == 0) goto L56
            int r17 = (r15 > r9 ? 1 : (r15 == r9 ? 0 : -1))
            r18 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            if (r17 == 0) goto L36
            r6 = r15
            goto L38
        L36:
            r6 = r18
        L38:
            r2 = r21
            r3 = r8
            r4 = r13
            long r2 = r2.getCachedLength(r3, r4, r6)
            int r4 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r4 <= 0) goto L4a
            long r4 = r1.alreadyCachedBytes
            long r4 = r4 + r2
            r1.alreadyCachedBytes = r4
            goto L50
        L4a:
            long r2 = -r2
            int r4 = (r2 > r18 ? 1 : (r2 == r18 ? 0 : -1))
            if (r4 != 0) goto L50
            return
        L50:
            long r13 = r13 + r2
            if (r17 != 0) goto L54
            r2 = r11
        L54:
            long r15 = r15 - r2
            goto L27
        L56:
            return
    }

    public static java.lang.String getKey(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1) {
            java.lang.String r0 = r1.key
            if (r0 == 0) goto L7
            java.lang.String r1 = r1.key
            goto Ld
        L7:
            android.net.Uri r1 = r1.uri
            java.lang.String r1 = generateKey(r1)
        Ld:
            return r1
    }

    private static long readAndDiscard(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r16, long r17, long r19, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r21, byte[] r22, com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r23, int r24, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.CachingCounters r25) throws java.io.IOException, java.lang.InterruptedException {
            r1 = r21
            r0 = r22
            r2 = r25
            r3 = r16
        L8:
            if (r23 == 0) goto Ld
            r23.proceed(r24)
        Ld:
            boolean r4 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            if (r4 != 0) goto L87
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            android.net.Uri r6 = r3.uri     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            byte[] r7 = r3.postBody     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            long r8 = r3.position     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            long r8 = r8 + r17
            long r10 = r3.absoluteStreamPosition     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            long r10 = r8 - r10
            r12 = -1
            java.lang.String r14 = r3.key     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            int r5 = r3.flags     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            r15 = r5 | 2
            r5 = r4
            r8 = r17
            r5.<init>(r6, r7, r8, r10, r12, r14, r15)     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            long r5 = r1.open(r4)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            long r7 = r2.contentLength     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            r9 = -1
            int r3 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r3 != 0) goto L44
            int r3 = (r5 > r9 ? 1 : (r5 == r9 ? 0 : -1))
            if (r3 == 0) goto L44
            long r7 = r4.absoluteStreamPosition     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            long r7 = r7 + r5
            r2.contentLength = r7     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
        L44:
            r5 = 0
        L46:
            int r3 = (r5 > r19 ? 1 : (r5 == r19 ? 0 : -1))
            if (r3 == 0) goto L81
            boolean r3 = java.lang.Thread.interrupted()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            if (r3 != 0) goto L7b
            r3 = 0
            int r7 = (r19 > r9 ? 1 : (r19 == r9 ? 0 : -1))
            if (r7 == 0) goto L5f
            int r7 = r0.length     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            long r7 = (long) r7     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            long r11 = r19 - r5
            long r7 = java.lang.Math.min(r7, r11)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            int r7 = (int) r7     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            goto L60
        L5f:
            int r7 = r0.length     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
        L60:
            int r3 = r1.read(r0, r3, r7)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            r7 = -1
            if (r3 != r7) goto L73
            long r7 = r2.contentLength     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            int r3 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r3 != 0) goto L81
            long r7 = r4.absoluteStreamPosition     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            long r7 = r7 + r5
            r2.contentLength = r7     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            goto L81
        L73:
            long r7 = (long) r3     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            long r5 = r5 + r7
            long r11 = r2.newlyCachedBytes     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            long r11 = r11 + r7
            r2.newlyCachedBytes = r11     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            goto L46
        L7b:
            java.lang.InterruptedException r3 = new java.lang.InterruptedException     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            r3.<init>()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
            throw r3     // Catch: com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L85 java.lang.Throwable -> L8d
        L81:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r21)
            return r5
        L85:
            r3 = r4
            goto L92
        L87:
            java.lang.InterruptedException r4 = new java.lang.InterruptedException     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            r4.<init>()     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
            throw r4     // Catch: java.lang.Throwable -> L8d com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager.PriorityTooLowException -> L92
        L8d:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r21)
            throw r0
        L92:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r21)
            goto L8
    }

    public static void remove(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, java.lang.String r2) {
            java.util.NavigableSet r2 = r1.getCachedSpans(r2)
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r2.next()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan) r0
            r1.removeSpan(r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException -> L8
            goto L8
        L18:
            return
    }
}

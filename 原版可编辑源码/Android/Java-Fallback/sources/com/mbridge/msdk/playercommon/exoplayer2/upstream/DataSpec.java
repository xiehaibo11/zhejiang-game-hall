package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DataSpec {
    public static final int FLAG_ALLOW_CACHING_UNKNOWN_LENGTH = 2;
    public static final int FLAG_ALLOW_GZIP = 1;
    public final long absoluteStreamPosition;
    public final int flags;
    public final java.lang.String key;
    public final long length;
    public final long position;
    public final byte[] postBody;
    public final android.net.Uri uri;

    public @interface Flags {
    }

    public DataSpec(android.net.Uri r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DataSpec(android.net.Uri r9, int r10) {
            r8 = this;
            r2 = 0
            r4 = -1
            r6 = 0
            r0 = r8
            r1 = r9
            r7 = r10
            r0.<init>(r1, r2, r4, r6, r7)
            return
    }

    public DataSpec(android.net.Uri r12, long r13, long r15, long r17, java.lang.String r19, int r20) {
            r11 = this;
            r2 = 0
            r0 = r11
            r1 = r12
            r3 = r13
            r5 = r15
            r7 = r17
            r9 = r19
            r10 = r20
            r0.<init>(r1, r2, r3, r5, r7, r9, r10)
            return
    }

    public DataSpec(android.net.Uri r11, long r12, long r14, java.lang.String r16) {
            r10 = this;
            r9 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r4 = r12
            r6 = r14
            r8 = r16
            r0.<init>(r1, r2, r4, r6, r8, r9)
            return
    }

    public DataSpec(android.net.Uri r11, long r12, long r14, java.lang.String r16, int r17) {
            r10 = this;
            r0 = r10
            r1 = r11
            r2 = r12
            r4 = r12
            r6 = r14
            r8 = r16
            r9 = r17
            r0.<init>(r1, r2, r4, r6, r8, r9)
            return
    }

    public DataSpec(android.net.Uri r6, byte[] r7, long r8, long r10, long r12, java.lang.String r14, int r15) {
            r5 = this;
            r5.<init>()
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r3 = 1
            r4 = 0
            if (r2 < 0) goto Ld
            r2 = r3
            goto Le
        Ld:
            r2 = r4
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 < 0) goto L17
            r2 = r3
            goto L18
        L17:
            r2 = r4
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 > 0) goto L27
            r0 = -1
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 != 0) goto L26
            goto L27
        L26:
            r3 = r4
        L27:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r3)
            r5.uri = r6
            r5.postBody = r7
            r5.absoluteStreamPosition = r8
            r5.position = r10
            r5.length = r12
            r5.key = r14
            r5.flags = r15
            return
    }

    public final boolean isFlagSet(int r2) {
            r1 = this;
            int r0 = r1.flags
            r0 = r0 & r2
            if (r0 != r2) goto L7
            r2 = 1
            goto L8
        L7:
            r2 = 0
        L8:
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec subrange(long r6) {
            r5 = this;
            long r0 = r5.length
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L9
            goto Lb
        L9:
            long r2 = r0 - r6
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r6 = r5.subrange(r6, r2)
            return r6
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec subrange(long r15, long r17) {
            r14 = this;
            r0 = r14
            r1 = 0
            int r1 = (r15 > r1 ? 1 : (r15 == r1 ? 0 : -1))
            if (r1 != 0) goto Le
            long r1 = r0.length
            int r1 = (r1 > r17 ? 1 : (r1 == r17 ? 0 : -1))
            if (r1 != 0) goto Le
            return r0
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            android.net.Uri r4 = r0.uri
            byte[] r5 = r0.postBody
            long r2 = r0.absoluteStreamPosition
            long r6 = r2 + r15
            long r2 = r0.position
            long r8 = r2 + r15
            java.lang.String r12 = r0.key
            int r13 = r0.flags
            r3 = r1
            r10 = r17
            r3.<init>(r4, r5, r6, r8, r10, r12, r13)
            return r1
    }

    public final java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DataSpec["
            r0.append(r1)
            android.net.Uri r1 = r4.uri
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            byte[] r2 = r4.postBody
            java.lang.String r2 = java.util.Arrays.toString(r2)
            r0.append(r2)
            r0.append(r1)
            long r2 = r4.absoluteStreamPosition
            r0.append(r2)
            r0.append(r1)
            long r2 = r4.position
            r0.append(r2)
            r0.append(r1)
            long r2 = r4.length
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r4.key
            r0.append(r2)
            r0.append(r1)
            int r1 = r4.flags
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec withUri(android.net.Uri r13) {
            r12 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r11 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            byte[] r2 = r12.postBody
            long r3 = r12.absoluteStreamPosition
            long r5 = r12.position
            long r7 = r12.length
            java.lang.String r9 = r12.key
            int r10 = r12.flags
            r0 = r11
            r1 = r13
            r0.<init>(r1, r2, r3, r5, r7, r9, r10)
            return r11
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public final class ChunkedTrackBlacklistUtil {
    public static final long DEFAULT_TRACK_BLACKLIST_MS = 60000;
    private static final java.lang.String TAG = "ChunkedTrackBlacklist";

    private ChunkedTrackBlacklistUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean maybeBlacklistTrack(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r2, int r3, java.lang.Exception r4) {
            r0 = 60000(0xea60, double:2.9644E-319)
            boolean r2 = maybeBlacklistTrack(r2, r3, r4, r0)
            return r2
    }

    public static boolean maybeBlacklistTrack(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r5, int r6, java.lang.Exception r7, long r8) {
            boolean r0 = shouldBlacklist(r7)
            if (r0 == 0) goto L5a
            boolean r0 = r5.blacklist(r6, r8)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$InvalidResponseCodeException r7 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.InvalidResponseCodeException) r7
            int r7 = r7.responseCode
            java.lang.String r1 = ", format="
            java.lang.String r2 = "ChunkedTrackBlacklist"
            if (r0 == 0) goto L3b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Blacklisted: duration="
            r3.append(r4)
            r3.append(r8)
            java.lang.String r8 = ", responseCode="
            r3.append(r8)
            r3.append(r7)
            r3.append(r1)
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r5.getFormat(r6)
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            android.util.Log.w(r2, r5)
            goto L59
        L3b:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Blacklisting failed (cannot blacklist last enabled track): responseCode="
            r8.append(r9)
            r8.append(r7)
            r8.append(r1)
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r5.getFormat(r6)
            r8.append(r5)
            java.lang.String r5 = r8.toString()
            android.util.Log.w(r2, r5)
        L59:
            return r0
        L5a:
            r5 = 0
            return r5
    }

    public static boolean shouldBlacklist(java.lang.Exception r2) {
            boolean r0 = r2 instanceof com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.InvalidResponseCodeException
            r1 = 0
            if (r0 == 0) goto L12
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$InvalidResponseCodeException r2 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.InvalidResponseCodeException) r2
            int r2 = r2.responseCode
            r0 = 404(0x194, float:5.66E-43)
            if (r2 == r0) goto L11
            r0 = 410(0x19a, float:5.75E-43)
            if (r2 != r0) goto L12
        L11:
            r1 = 1
        L12:
            return r1
    }
}

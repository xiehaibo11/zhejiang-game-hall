package com.mbridge.msdk.playercommon.exoplayer2.offline;

public final class ActionFile {
    static final int VERSION = 0;
    private final java.io.File actionFile;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile atomicFile;

    public ActionFile(java.io.File r2) {
            r1 = this;
            r1.<init>()
            r1.actionFile = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile
            r0.<init>(r2)
            r1.atomicFile = r0
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction[] load(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer... r7) throws java.io.IOException {
            r6 = this;
            java.io.File r0 = r6.actionFile
            boolean r0 = r0.exists()
            r1 = 0
            if (r0 != 0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction[] r7 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction[r1]
            return r7
        Lc:
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r2 = r6.atomicFile     // Catch: java.lang.Throwable -> L4a
            java.io.InputStream r0 = r2.openRead()     // Catch: java.lang.Throwable -> L4a
            java.io.DataInputStream r2 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L4a
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L4a
            int r3 = r2.readInt()     // Catch: java.lang.Throwable -> L4a
            if (r3 > 0) goto L33
            int r3 = r2.readInt()     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction[] r4 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction[r3]     // Catch: java.lang.Throwable -> L4a
        L24:
            if (r1 >= r3) goto L2f
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r5 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.deserializeFromStream(r7, r2)     // Catch: java.lang.Throwable -> L4a
            r4[r1] = r5     // Catch: java.lang.Throwable -> L4a
            int r1 = r1 + 1
            goto L24
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            return r4
        L33:
            java.io.IOException r7 = new java.io.IOException     // Catch: java.lang.Throwable -> L4a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "Unsupported action file version: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L4a
            r1.append(r3)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L4a
            r7.<init>(r1)     // Catch: java.lang.Throwable -> L4a
            throw r7     // Catch: java.lang.Throwable -> L4a
        L4a:
            r7 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            throw r7
    }

    public final void store(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction... r6) throws java.io.IOException {
            r5 = this;
            r0 = 0
            java.io.DataOutputStream r1 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L2b
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r2 = r5.atomicFile     // Catch: java.lang.Throwable -> L2b
            java.io.OutputStream r2 = r2.startWrite()     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2b
            r2 = 0
            r1.writeInt(r2)     // Catch: java.lang.Throwable -> L28
            int r3 = r6.length     // Catch: java.lang.Throwable -> L28
            r1.writeInt(r3)     // Catch: java.lang.Throwable -> L28
            int r3 = r6.length     // Catch: java.lang.Throwable -> L28
        L15:
            if (r2 >= r3) goto L1f
            r4 = r6[r2]     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.serializeToStream(r4, r1)     // Catch: java.lang.Throwable -> L28
            int r2 = r2 + 1
            goto L15
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r6 = r5.atomicFile     // Catch: java.lang.Throwable -> L28
            r6.endWrite(r1)     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            return
        L28:
            r6 = move-exception
            r0 = r1
            goto L2c
        L2b:
            r6 = move-exception
        L2c:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            throw r6
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class PriorityDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private final int priority;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager priorityTaskManager;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource upstream;

    public PriorityDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1, com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r2, int r3) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource) r1
            r0.upstream = r1
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r1 = (com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager) r1
            r0.priorityTaskManager = r1
            r0.priority = r3
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.upstream
            r0.close()
            return
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.upstream
            android.net.Uri r0 = r0.getUri()
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3) throws java.io.IOException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r2.priorityTaskManager
            int r1 = r2.priority
            r0.proceedOrThrow(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.upstream
            long r0 = r0.open(r3)
            return r0
    }

    @Override
    public final int read(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r2.priorityTaskManager
            int r1 = r2.priority
            r0.proceedOrThrow(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.upstream
            int r3 = r0.read(r3, r4, r5)
            return r3
    }
}

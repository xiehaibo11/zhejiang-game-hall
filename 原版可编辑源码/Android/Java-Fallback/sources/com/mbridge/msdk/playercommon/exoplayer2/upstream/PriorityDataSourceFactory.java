package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class PriorityDataSourceFactory implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory {
    private final int priority;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager priorityTaskManager;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory upstreamFactory;

    public PriorityDataSourceFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r1, com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.upstreamFactory = r1
            r0.priorityTaskManager = r2
            r0.priority = r3
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource createDataSource() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.PriorityDataSource r0 = r1.createDataSource()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.PriorityDataSource createDataSource() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.PriorityDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.PriorityDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r1 = r4.upstreamFactory
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r1.createDataSource()
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r2 = r4.priorityTaskManager
            int r3 = r4.priority
            r0.<init>(r1, r2, r3)
            return r0
    }
}

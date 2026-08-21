package com.mbridge.msdk.playercommon.exoplayer2.scheduler;

public interface Scheduler {
    public static final boolean DEBUG = false;

    boolean cancel();

    boolean schedule(com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r1, java.lang.String r2, java.lang.String r3);
}

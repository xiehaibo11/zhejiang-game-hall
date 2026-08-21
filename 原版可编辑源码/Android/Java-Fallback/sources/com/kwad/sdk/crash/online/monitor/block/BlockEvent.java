package com.kwad.sdk.crash.online.monitor.block;

public class BlockEvent extends com.kwad.sdk.core.response.a.a {
    public long blockDuration;
    public long blockLoopInterval;
    public long blockTimeThreshold;
    public long calcBlockOverhead;
    public java.lang.String currentActivity;
    public java.lang.String processName;
    public java.util.List<com.kwad.sdk.crash.online.monitor.block.BlockEvent.a> stackTraceSample;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public long aAC;
        public boolean aAD;
        public java.lang.String aAE;
        public long aAF;
        public int repeatCount;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.aAD = r0
                return
        }
    }

    public BlockEvent() {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.blockDuration = r0
            r2 = 100
            r4.blockLoopInterval = r2
            r4.calcBlockOverhead = r0
            java.lang.String r0 = ""
            r4.currentActivity = r0
            r4.processName = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.stackTraceSample = r0
            return
    }
}

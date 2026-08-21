package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public interface BandwidthMeter {

    public interface EventListener {
        void onBandwidthSample(int r1, long r2, long r4);
    }

    long getBitrateEstimate();
}

package com.mbridge.msdk.playercommon.exoplayer2.source;

public interface MediaPeriod extends com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader {

    public interface Callback extends com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader.Callback<com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod> {
        void onPrepared(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1);
    }

    @Override
    boolean continueLoading(long r1);

    void discardBuffer(long r1, boolean r3);

    long getAdjustedSeekPositionUs(long r1, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r3);

    @Override
    long getBufferedPositionUs();

    @Override
    long getNextLoadPositionUs();

    com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups();

    void maybeThrowPrepareError() throws java.io.IOException;

    void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback r1, long r2);

    long readDiscontinuity();

    @Override
    void reevaluateBuffer(long r1);

    long seekToUs(long r1);

    long selectTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r1, boolean[] r2, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r3, boolean[] r4, long r5);
}

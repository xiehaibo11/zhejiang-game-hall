package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public interface TrackSelection {

    public interface Factory {
        com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection createTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1, int... r2);
    }

    boolean blacklist(int r1, long r2);

    void disable();

    void enable();

    int evaluateQueueSize(long r1, java.util.List<? extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk> r3);

    com.mbridge.msdk.playercommon.exoplayer2.Format getFormat(int r1);

    int getIndexInTrackGroup(int r1);

    com.mbridge.msdk.playercommon.exoplayer2.Format getSelectedFormat();

    int getSelectedIndex();

    int getSelectedIndexInTrackGroup();

    java.lang.Object getSelectionData();

    int getSelectionReason();

    com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup getTrackGroup();

    int indexOf(int r1);

    int indexOf(com.mbridge.msdk.playercommon.exoplayer2.Format r1);

    int length();

    void onPlaybackSpeed(float r1);

    void updateSelectedTrack(long r1, long r3, long r5);
}

package com.mbridge.msdk.playercommon.exoplayer2.text;

public interface Subtitle {
    java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getCues(long r1);

    long getEventTime(int r1);

    int getEventTimeCount();

    int getNextEventTimeIndex(long r1);
}

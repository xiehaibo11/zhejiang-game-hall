package com.mbridge.msdk.playercommon.exoplayer2.text.dvb;

import com.mbridge.msdk.playercommon.exoplayer2.text.Cue;
import com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle;
import java.util.List;

final class DvbSubtitle implements Subtitle {
    private final List<Cue> cues;

    @Override
    public final long getEventTime(int i) {
        return 0L;
    }

    @Override
    public final int getEventTimeCount() {
        return 1;
    }

    @Override
    public final int getNextEventTimeIndex(long j) {
        return -1;
    }

    public DvbSubtitle(List<Cue> list) {
        this.cues = list;
    }

    @Override
    public final List<Cue> getCues(long j) {
        return this.cues;
    }
}

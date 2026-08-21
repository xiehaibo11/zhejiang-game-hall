package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;

final class ConstantBitrateSeeker implements Mp3Extractor.Seeker {
    private static final int BITS_PER_BYTE = 8;
    private final int bitrate;
    private final long dataSize;
    private final long durationUs;
    private final long firstFramePosition;
    private final int frameSize;

    public ConstantBitrateSeeker(long j, long j2, MpegAudioHeader mpegAudioHeader) {
        this.firstFramePosition = j2;
        this.frameSize = mpegAudioHeader.frameSize;
        this.bitrate = mpegAudioHeader.bitrate;
        if (j == -1) {
            this.dataSize = -1L;
            this.durationUs = -9223372036854775807L;
        } else {
            this.dataSize = j - j2;
            this.durationUs = getTimeUs(j);
        }
    }

    @Override
    public final boolean isSeekable() {
        return this.dataSize != -1;
    }

    @Override
    public final SeekMap.SeekPoints getSeekPoints(long j) {
        long j2 = this.dataSize;
        if (j2 == -1) {
            return new SeekMap.SeekPoints(new SeekPoint(0L, this.firstFramePosition));
        }
        long j3 = (((long) this.bitrate) * j) / 8000000;
        int i = this.frameSize;
        long jConstrainValue = Util.constrainValue((j3 / ((long) i)) * ((long) i), 0L, j2 - ((long) i));
        long j4 = this.firstFramePosition + jConstrainValue;
        long timeUs = getTimeUs(j4);
        SeekPoint seekPoint = new SeekPoint(timeUs, j4);
        if (timeUs < j) {
            long j5 = this.dataSize;
            int i2 = this.frameSize;
            if (jConstrainValue != j5 - ((long) i2)) {
                long j6 = j4 + ((long) i2);
                return new SeekMap.SeekPoints(seekPoint, new SeekPoint(getTimeUs(j6), j6));
            }
        }
        return new SeekMap.SeekPoints(seekPoint);
    }

    @Override
    public final long getTimeUs(long j) {
        return ((Math.max(0L, j - this.firstFramePosition) * 1000000) * 8) / ((long) this.bitrate);
    }

    @Override
    public final long getDurationUs() {
        return this.durationUs;
    }
}

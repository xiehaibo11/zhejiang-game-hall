package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

final class WebvttSubtitle implements com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle {
    private final long[] cueTimesUs;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue> cues;
    private final int numCues;
    private final long[] sortedCueTimesUs;

    public WebvttSubtitle(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue> r7) {
            r6 = this;
            r6.<init>()
            r6.cues = r7
            int r0 = r7.size()
            r6.numCues = r0
            int r0 = r0 * 2
            long[] r0 = new long[r0]
            r6.cueTimesUs = r0
            r0 = 0
        L12:
            int r1 = r6.numCues
            if (r0 >= r1) goto L2f
            java.lang.Object r1 = r7.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue) r1
            int r2 = r0 * 2
            long[] r3 = r6.cueTimesUs
            long r4 = r1.startTime
            r3[r2] = r4
            long[] r3 = r6.cueTimesUs
            int r2 = r2 + 1
            long r4 = r1.endTime
            r3[r2] = r4
            int r0 = r0 + 1
            goto L12
        L2f:
            long[] r7 = r6.cueTimesUs
            int r0 = r7.length
            long[] r7 = java.util.Arrays.copyOf(r7, r0)
            r6.sortedCueTimesUs = r7
            java.util.Arrays.sort(r7)
            return
    }

    @Override
    public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getCues(long r9) {
            r8 = this;
            r0 = 0
            r1 = 0
            r2 = r0
            r3 = r1
            r1 = r2
        L5:
            int r4 = r8.numCues
            if (r3 >= r4) goto L5d
            long[] r4 = r8.cueTimesUs
            int r5 = r3 * 2
            r6 = r4[r5]
            int r6 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r6 > 0) goto L5a
            int r5 = r5 + 1
            r5 = r4[r5]
            int r4 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r4 >= 0) goto L5a
            if (r2 != 0) goto L22
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
        L22:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue> r4 = r8.cues
            java.lang.Object r4 = r4.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue r4 = (com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue) r4
            boolean r5 = r4.isNormalCue()
            if (r5 == 0) goto L57
            if (r1 != 0) goto L34
            r1 = r4
            goto L5a
        L34:
            java.lang.String r5 = "\n"
            if (r0 != 0) goto L4d
            android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
            r0.<init>()
            java.lang.CharSequence r6 = r1.text
            android.text.SpannableStringBuilder r6 = r0.append(r6)
            android.text.SpannableStringBuilder r5 = r6.append(r5)
            java.lang.CharSequence r4 = r4.text
            r5.append(r4)
            goto L5a
        L4d:
            android.text.SpannableStringBuilder r5 = r0.append(r5)
            java.lang.CharSequence r4 = r4.text
            r5.append(r4)
            goto L5a
        L57:
            r2.add(r4)
        L5a:
            int r3 = r3 + 1
            goto L5
        L5d:
            if (r0 == 0) goto L68
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue r9 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue
            r9.<init>(r0)
            r2.add(r9)
            goto L6d
        L68:
            if (r1 == 0) goto L6d
            r2.add(r1)
        L6d:
            if (r2 == 0) goto L70
            return r2
        L70:
            java.util.List r9 = java.util.Collections.emptyList()
            return r9
    }

    @Override
    public final long getEventTime(int r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            if (r4 < 0) goto L6
            r2 = r0
            goto L7
        L6:
            r2 = r1
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            long[] r2 = r3.sortedCueTimesUs
            int r2 = r2.length
            if (r4 >= r2) goto L10
            goto L11
        L10:
            r0 = r1
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            long[] r0 = r3.sortedCueTimesUs
            r1 = r0[r4]
            return r1
    }

    @Override
    public final int getEventTimeCount() {
            r1 = this;
            long[] r0 = r1.sortedCueTimesUs
            int r0 = r0.length
            return r0
    }

    @Override
    public final int getNextEventTimeIndex(long r3) {
            r2 = this;
            long[] r0 = r2.sortedCueTimesUs
            r1 = 0
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r0, r3, r1, r1)
            long[] r4 = r2.sortedCueTimesUs
            int r4 = r4.length
            if (r3 >= r4) goto Ld
            goto Le
        Ld:
            r3 = -1
        Le:
            return r3
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.text.subrip;

public final class SubripDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private static final java.lang.String SUBRIP_TIMECODE = "(?:(\\d+):)?(\\d+):(\\d+),(\\d+)";
    private static final java.util.regex.Pattern SUBRIP_TIMING_LINE = null;
    private static final java.lang.String TAG = "SubripDecoder";
    private final java.lang.StringBuilder textBuilder;

    static {
            java.lang.String r0 = "\\s*((?:(\\d+):)?(\\d+):(\\d+),(\\d+))\\s*-->\\s*((?:(\\d+):)?(\\d+):(\\d+),(\\d+))?\\s*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.subrip.SubripDecoder.SUBRIP_TIMING_LINE = r0
            return
    }

    public SubripDecoder() {
            r1 = this;
            java.lang.String r0 = "SubripDecoder"
            r1.<init>(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.textBuilder = r0
            return
    }

    private static long parseTimecode(java.util.regex.Matcher r8, int r9) {
            int r0 = r9 + 1
            java.lang.String r0 = r8.group(r0)
            long r0 = java.lang.Long.parseLong(r0)
            r2 = 60
            long r0 = r0 * r2
            long r0 = r0 * r2
            r4 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r4
            int r6 = r9 + 2
            java.lang.String r6 = r8.group(r6)
            long r6 = java.lang.Long.parseLong(r6)
            long r6 = r6 * r2
            long r6 = r6 * r4
            long r0 = r0 + r6
            int r2 = r9 + 3
            java.lang.String r2 = r8.group(r2)
            long r2 = java.lang.Long.parseLong(r2)
            long r2 = r2 * r4
            long r0 = r0 + r2
            int r9 = r9 + 4
            java.lang.String r8 = r8.group(r9)
            long r8 = java.lang.Long.parseLong(r8)
            long r0 = r0 + r8
            long r0 = r0 * r4
            return r0
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.subrip.SubripSubtitle r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.subrip.SubripSubtitle decode(byte[] r7, int r8, boolean r9) {
            r6 = this;
            java.lang.String r9 = "SubripDecoder"
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.LongArray
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2.<init>(r7, r8)
        L11:
            java.lang.String r7 = r2.readLine()
            if (r7 == 0) goto Lc5
            int r8 = r7.length()
            if (r8 != 0) goto L1e
            goto L11
        L1e:
            java.lang.Integer.parseInt(r7)     // Catch: java.lang.NumberFormatException -> Laf
            java.lang.String r7 = r2.readLine()
            if (r7 != 0) goto L2e
            java.lang.String r7 = "Unexpected end"
            android.util.Log.w(r9, r7)
            goto Lc5
        L2e:
            java.util.regex.Pattern r8 = com.mbridge.msdk.playercommon.exoplayer2.text.subrip.SubripDecoder.SUBRIP_TIMING_LINE
            java.util.regex.Matcher r8 = r8.matcher(r7)
            boolean r3 = r8.matches()
            if (r3 == 0) goto L99
            r7 = 1
            long r3 = parseTimecode(r8, r7)
            r1.add(r3)
            r3 = 6
            java.lang.String r4 = r8.group(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            r5 = 0
            if (r4 != 0) goto L56
            long r3 = parseTimecode(r8, r3)
            r1.add(r3)
            goto L57
        L56:
            r7 = r5
        L57:
            java.lang.StringBuilder r8 = r6.textBuilder
            r8.setLength(r5)
        L5c:
            java.lang.String r8 = r2.readLine()
            boolean r3 = android.text.TextUtils.isEmpty(r8)
            if (r3 != 0) goto L7f
            java.lang.StringBuilder r3 = r6.textBuilder
            int r3 = r3.length()
            if (r3 <= 0) goto L75
            java.lang.StringBuilder r3 = r6.textBuilder
            java.lang.String r4 = "<br>"
            r3.append(r4)
        L75:
            java.lang.StringBuilder r3 = r6.textBuilder
            java.lang.String r8 = r8.trim()
            r3.append(r8)
            goto L5c
        L7f:
            java.lang.StringBuilder r8 = r6.textBuilder
            java.lang.String r8 = r8.toString()
            android.text.Spanned r8 = android.text.Html.fromHtml(r8)
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r3 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue
            r3.<init>(r8)
            r0.add(r3)
            if (r7 == 0) goto L11
            r7 = 0
            r0.add(r7)
            goto L11
        L99:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = "Skipping invalid timing: "
            r8.append(r3)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            android.util.Log.w(r9, r7)
            goto L11
        Laf:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = "Skipping invalid index: "
            r8.append(r3)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            android.util.Log.w(r9, r7)
            goto L11
        Lc5:
            int r7 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue[] r7 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue[r7]
            r0.toArray(r7)
            long[] r8 = r1.toArray()
            com.mbridge.msdk.playercommon.exoplayer2.text.subrip.SubripSubtitle r9 = new com.mbridge.msdk.playercommon.exoplayer2.text.subrip.SubripSubtitle
            r9.<init>(r7, r8)
            return r9
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

public final class WebvttParserUtil {
    private static final java.util.regex.Pattern COMMENT = null;
    private static final java.util.regex.Pattern HEADER = null;

    static {
            java.lang.String r0 = "^NOTE(( |\t).*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.COMMENT = r0
            java.lang.String r0 = "^\ufeff?WEBVTT(( |\t).*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.HEADER = r0
            return
    }

    private WebvttParserUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.regex.Matcher findNextCueHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
        L0:
            java.lang.String r0 = r2.readLine()
            if (r0 == 0) goto L2c
            java.util.regex.Pattern r1 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.COMMENT
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r1 = r1.matches()
            if (r1 == 0) goto L1f
        L12:
            java.lang.String r0 = r2.readLine()
            if (r0 == 0) goto L0
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L0
            goto L12
        L1f:
            java.util.regex.Pattern r1 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.CUE_HEADER_PATTERN
            java.util.regex.Matcher r0 = r1.matcher(r0)
            boolean r1 = r0.matches()
            if (r1 == 0) goto L0
            return r0
        L2c:
            r2 = 0
            return r2
    }

    public static float parsePercentage(java.lang.String r2) throws java.lang.NumberFormatException {
            java.lang.String r0 = "%"
            boolean r0 = r2.endsWith(r0)
            if (r0 == 0) goto L1b
            r0 = 0
            int r1 = r2.length()
            int r1 = r1 + (-1)
            java.lang.String r2 = r2.substring(r0, r1)
            float r2 = java.lang.Float.parseFloat(r2)
            r0 = 1120403456(0x42c80000, float:100.0)
            float r2 = r2 / r0
            return r2
        L1b:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.String r0 = "Percentages must end with %"
            r2.<init>(r0)
            throw r2
    }

    public static long parseTimestampUs(java.lang.String r8) throws java.lang.NumberFormatException {
            java.lang.String r0 = "\\."
            java.lang.String[] r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.splitAtFirst(r8, r0)
            r0 = 0
            r1 = r8[r0]
            java.lang.String r2 = ":"
            java.lang.String[] r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r1, r2)
            int r2 = r1.length
            r3 = 0
        L12:
            if (r0 >= r2) goto L21
            r5 = r1[r0]
            r6 = 60
            long r3 = r3 * r6
            long r5 = java.lang.Long.parseLong(r5)
            long r3 = r3 + r5
            int r0 = r0 + 1
            goto L12
        L21:
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r0
            int r2 = r8.length
            r5 = 2
            if (r2 != r5) goto L30
            r2 = 1
            r8 = r8[r2]
            long r5 = java.lang.Long.parseLong(r8)
            long r3 = r3 + r5
        L30:
            long r3 = r3 * r0
            return r3
    }

    public static void validateWebvttHeaderLine(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            java.lang.String r3 = r3.readLine()
            if (r3 == 0) goto L13
            java.util.regex.Pattern r0 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.HEADER
            java.util.regex.Matcher r0 = r0.matcher(r3)
            boolean r0 = r0.matches()
            if (r0 == 0) goto L13
            return
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected WEBVTT. Got "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}

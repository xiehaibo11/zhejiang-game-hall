package com.mbridge.msdk.playercommon.exoplayer2.text.ssa;

public final class SsaDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private static final java.lang.String DIALOGUE_LINE_PREFIX = "Dialogue: ";
    private static final java.lang.String FORMAT_LINE_PREFIX = "Format: ";
    private static final java.util.regex.Pattern SSA_TIMECODE_PATTERN = null;
    private static final java.lang.String TAG = "SsaDecoder";
    private int formatEndIndex;
    private int formatKeyCount;
    private int formatStartIndex;
    private int formatTextIndex;
    private final boolean haveInitializationData;

    static {
            java.lang.String r0 = "(?:(\\d+):)?(\\d+):(\\d+)(?::|\\.)(\\d+)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.ssa.SsaDecoder.SSA_TIMECODE_PATTERN = r0
            return
    }

    public SsaDecoder() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public SsaDecoder(java.util.List<byte[]> r4) {
            r3 = this;
            java.lang.String r0 = "SsaDecoder"
            r3.<init>(r0)
            r0 = 0
            if (r4 == 0) goto L36
            boolean r1 = r4.isEmpty()
            if (r1 != 0) goto L36
            r1 = 1
            r3.haveInitializationData = r1
            java.lang.Object r0 = r4.get(r0)
            byte[] r0 = (byte[]) r0
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r0)
            java.lang.String r2 = "Format: "
            boolean r2 = r0.startsWith(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            r3.parseFormatLine(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            java.lang.Object r4 = r4.get(r1)
            byte[] r4 = (byte[]) r4
            r0.<init>(r4)
            r3.parseHeader(r0)
            goto L38
        L36:
            r3.haveInitializationData = r0
        L38:
            return
    }

    private void parseDialogueLine(java.lang.String r11, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r12, com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r13) {
            r10 = this;
            int r0 = r10.formatKeyCount
            java.lang.String r1 = "SsaDecoder"
            if (r0 != 0) goto L1b
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Skipping dialogue line before complete format: "
            r12.append(r13)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            android.util.Log.w(r1, r11)
            return
        L1b:
            r0 = 10
            java.lang.String r0 = r11.substring(r0)
            int r2 = r10.formatKeyCount
            java.lang.String r3 = ","
            java.lang.String[] r0 = r0.split(r3, r2)
            int r2 = r0.length
            int r3 = r10.formatKeyCount
            if (r2 == r3) goto L43
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Skipping dialogue line with fewer columns than format: "
            r12.append(r13)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            android.util.Log.w(r1, r11)
            return
        L43:
            int r2 = r10.formatStartIndex
            r2 = r0[r2]
            long r2 = parseTimecodeUs(r2)
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            java.lang.String r7 = "Skipping invalid timing: "
            if (r6 != 0) goto L69
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r7)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            android.util.Log.w(r1, r11)
            return
        L69:
            int r6 = r10.formatEndIndex
            r6 = r0[r6]
            java.lang.String r8 = r6.trim()
            boolean r8 = r8.isEmpty()
            if (r8 != 0) goto L92
            long r8 = parseTimecodeUs(r6)
            int r6 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r6 != 0) goto L93
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r7)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            android.util.Log.w(r1, r11)
            return
        L92:
            r8 = r4
        L93:
            int r11 = r10.formatTextIndex
            r11 = r0[r11]
            java.lang.String r0 = "\\{.*?\\}"
            java.lang.String r1 = ""
            java.lang.String r11 = r11.replaceAll(r0, r1)
            java.lang.String r0 = "\n"
            java.lang.String r1 = "\\\\N"
            java.lang.String r11 = r11.replaceAll(r1, r0)
            java.lang.String r1 = "\\\\n"
            java.lang.String r11 = r11.replaceAll(r1, r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue
            r0.<init>(r11)
            r12.add(r0)
            r13.add(r2)
            int r11 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r11 == 0) goto Lc3
            r11 = 0
            r12.add(r11)
            r13.add(r8)
        Lc3:
            return
    }

    private void parseEventBody(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r4, com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r5) {
            r2 = this;
        L0:
            java.lang.String r0 = r3.readLine()
            if (r0 == 0) goto L22
            boolean r1 = r2.haveInitializationData
            if (r1 != 0) goto L16
            java.lang.String r1 = "Format: "
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L16
            r2.parseFormatLine(r0)
            goto L0
        L16:
            java.lang.String r1 = "Dialogue: "
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L0
            r2.parseDialogueLine(r0, r4, r5)
            goto L0
        L22:
            return
    }

    private void parseFormatLine(java.lang.String r9) {
            r8 = this;
            r0 = 8
            java.lang.String r9 = r9.substring(r0)
            java.lang.String r0 = ","
            java.lang.String[] r9 = android.text.TextUtils.split(r9, r0)
            int r0 = r9.length
            r8.formatKeyCount = r0
            r0 = -1
            r8.formatStartIndex = r0
            r8.formatEndIndex = r0
            r8.formatTextIndex = r0
            r1 = 0
            r2 = r1
        L18:
            int r3 = r8.formatKeyCount
            if (r2 >= r3) goto L6d
            r3 = r9[r2]
            java.lang.String r3 = r3.trim()
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toLowerInvariant(r3)
            int r4 = r3.hashCode()
            r5 = 100571(0x188db, float:1.4093E-40)
            r6 = 2
            r7 = 1
            if (r4 == r5) goto L50
            r5 = 3556653(0x36452d, float:4.983932E-39)
            if (r4 == r5) goto L46
            r5 = 109757538(0x68ac462, float:5.219839E-35)
            if (r4 == r5) goto L3c
            goto L5a
        L3c:
            java.lang.String r4 = "start"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L5a
            r3 = r1
            goto L5b
        L46:
            java.lang.String r4 = "text"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L5a
            r3 = r6
            goto L5b
        L50:
            java.lang.String r4 = "end"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L5a
            r3 = r7
            goto L5b
        L5a:
            r3 = r0
        L5b:
            if (r3 == 0) goto L68
            if (r3 == r7) goto L65
            if (r3 == r6) goto L62
            goto L6a
        L62:
            r8.formatTextIndex = r2
            goto L6a
        L65:
            r8.formatEndIndex = r2
            goto L6a
        L68:
            r8.formatStartIndex = r2
        L6a:
            int r2 = r2 + 1
            goto L18
        L6d:
            int r9 = r8.formatStartIndex
            if (r9 == r0) goto L79
            int r9 = r8.formatEndIndex
            if (r9 == r0) goto L79
            int r9 = r8.formatTextIndex
            if (r9 != r0) goto L7b
        L79:
            r8.formatKeyCount = r1
        L7b:
            return
    }

    private void parseHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            r2 = this;
        L0:
            java.lang.String r0 = r3.readLine()
            if (r0 == 0) goto Le
            java.lang.String r1 = "[Events]"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L0
        Le:
            return
    }

    public static long parseTimecodeUs(java.lang.String r8) {
            java.util.regex.Pattern r0 = com.mbridge.msdk.playercommon.exoplayer2.text.ssa.SsaDecoder.SSA_TIMECODE_PATTERN
            java.util.regex.Matcher r8 = r0.matcher(r8)
            boolean r0 = r8.matches()
            if (r0 != 0) goto L12
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
        L12:
            r0 = 1
            java.lang.String r0 = r8.group(r0)
            long r0 = java.lang.Long.parseLong(r0)
            r2 = 60
            long r0 = r0 * r2
            long r0 = r0 * r2
            r4 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r0 * r4
            r6 = 2
            java.lang.String r6 = r8.group(r6)
            long r6 = java.lang.Long.parseLong(r6)
            long r6 = r6 * r2
            long r6 = r6 * r4
            long r0 = r0 + r6
            r2 = 3
            java.lang.String r2 = r8.group(r2)
            long r2 = java.lang.Long.parseLong(r2)
            long r2 = r2 * r4
            long r0 = r0 + r2
            r2 = 4
            java.lang.String r8 = r8.group(r2)
            long r2 = java.lang.Long.parseLong(r8)
            r4 = 10000(0x2710, double:4.9407E-320)
            long r2 = r2 * r4
            long r0 = r0 + r2
            return r0
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ssa.SsaSubtitle r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.ssa.SsaSubtitle decode(byte[] r3, int r4, boolean r5) {
            r2 = this;
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.LongArray
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1.<init>(r3, r4)
            boolean r3 = r2.haveInitializationData
            if (r3 != 0) goto L16
            r2.parseHeader(r1)
        L16:
            r2.parseEventBody(r1, r5, r0)
            int r3 = r5.size()
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue[] r3 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue[r3]
            r5.toArray(r3)
            long[] r4 = r0.toArray()
            com.mbridge.msdk.playercommon.exoplayer2.text.ssa.SsaSubtitle r5 = new com.mbridge.msdk.playercommon.exoplayer2.text.ssa.SsaSubtitle
            r5.<init>(r3, r4)
            return r5
    }
}

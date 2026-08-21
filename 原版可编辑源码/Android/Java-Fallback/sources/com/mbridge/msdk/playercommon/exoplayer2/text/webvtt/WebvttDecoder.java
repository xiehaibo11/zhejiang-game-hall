package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

public final class WebvttDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private static final java.lang.String COMMENT_START = "NOTE";
    private static final int EVENT_COMMENT = 1;
    private static final int EVENT_CUE = 3;
    private static final int EVENT_END_OF_FILE = 0;
    private static final int EVENT_NONE = -1;
    private static final int EVENT_STYLE_BLOCK = 2;
    private static final java.lang.String STYLE_START = "STYLE";
    private final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.CssParser cssParser;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser cueParser;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> definedStyles;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray parsableWebvttData;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder webvttCueBuilder;

    public WebvttDecoder() {
            r1 = this;
            java.lang.String r0 = "WebvttDecoder"
            r1.<init>(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser
            r0.<init>()
            r1.cueParser = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r1.parsableWebvttData = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder
            r0.<init>()
            r1.webvttCueBuilder = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.CssParser r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.CssParser
            r0.<init>()
            r1.cssParser = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.definedStyles = r0
            return
    }

    private static int getNextEvent(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) {
            r0 = 0
            r1 = -1
            r3 = r0
            r2 = r1
        L4:
            if (r2 != r1) goto L28
            int r3 = r5.getPosition()
            java.lang.String r2 = r5.readLine()
            if (r2 != 0) goto L12
            r2 = r0
            goto L4
        L12:
            java.lang.String r4 = "STYLE"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L1c
            r2 = 2
            goto L4
        L1c:
            java.lang.String r4 = "NOTE"
            boolean r2 = r4.startsWith(r2)
            if (r2 == 0) goto L26
            r2 = 1
            goto L4
        L26:
            r2 = 3
            goto L4
        L28:
            r5.setPosition(r3)
            return r2
    }

    private static void skipComment(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) {
        L0:
            java.lang.String r0 = r1.readLine()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            goto L0
        Lb:
            return
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttSubtitle r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttSubtitle decode(byte[] r3, int r4, boolean r5) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r2.parsableWebvttData
            r5.reset(r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r3 = r2.webvttCueBuilder
            r3.reset()
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r3 = r2.definedStyles
            r3.clear()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r2.parsableWebvttData
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.validateWebvttHeaderLine(r3)
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r2.parsableWebvttData
            java.lang.String r3 = r3.readLine()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L21
            goto L14
        L21:
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
        L26:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r2.parsableWebvttData
            int r4 = getNextEvent(r4)
            if (r4 == 0) goto L7d
            r5 = 1
            if (r4 != r5) goto L37
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r2.parsableWebvttData
            skipComment(r4)
            goto L26
        L37:
            r5 = 2
            if (r4 != r5) goto L5d
            boolean r4 = r3.isEmpty()
            if (r4 == 0) goto L55
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r2.parsableWebvttData
            r4.readLine()
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.CssParser r4 = r2.cssParser
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r2.parsableWebvttData
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r4 = r4.parseBlock(r5)
            if (r4 == 0) goto L26
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r5 = r2.definedStyles
            r5.add(r4)
            goto L26
        L55:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r3 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.String r4 = "A style block was found after the first cue."
            r3.<init>(r4)
            throw r3
        L5d:
            r5 = 3
            if (r4 != r5) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser r4 = r2.cueParser
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r2.parsableWebvttData
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r0 = r2.webvttCueBuilder
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r1 = r2.definedStyles
            boolean r4 = r4.parseCue(r5, r0, r1)
            if (r4 == 0) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r4 = r2.webvttCueBuilder
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue r4 = r4.build()
            r3.add(r4)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r4 = r2.webvttCueBuilder
            r4.reset()
            goto L26
        L7d:
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttSubtitle r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttSubtitle
            r4.<init>(r3)
            return r4
    }
}

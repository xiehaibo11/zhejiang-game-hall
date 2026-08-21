package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

public final class Mp4WebvttDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private static final int BOX_HEADER_SIZE = 8;
    private static final int TYPE_payl = 0;
    private static final int TYPE_sttg = 0;
    private static final int TYPE_vttc = 0;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder builder;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray sampleData;

    static {
            java.lang.String r0 = "payl"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttDecoder.TYPE_payl = r0
            java.lang.String r0 = "sttg"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttDecoder.TYPE_sttg = r0
            java.lang.String r0 = "vttc"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttDecoder.TYPE_vttc = r0
            return
    }

    public Mp4WebvttDecoder() {
            r1 = this;
            java.lang.String r0 = "Mp4WebvttDecoder"
            r1.<init>(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r1.sampleData = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder
            r0.<init>()
            r1.builder = r0
            return
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.text.Cue parseVttCueBox(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder r5, int r6) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r5.reset()
        L3:
            if (r6 <= 0) goto L43
            r0 = 8
            if (r6 < r0) goto L3b
            int r1 = r4.readInt()
            int r2 = r4.readInt()
            int r6 = r6 + (-8)
            int r1 = r1 - r0
            byte[] r0 = r4.data
            int r3 = r4.getPosition()
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r0, r3, r1)
            r4.skipBytes(r1)
            int r6 = r6 - r1
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttDecoder.TYPE_sttg
            if (r2 != r1) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.parseCueSettingsList(r0, r5)
            goto L3
        L2a:
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttDecoder.TYPE_payl
            if (r2 != r1) goto L3
            r1 = 0
            java.lang.String r0 = r0.trim()
            java.util.List r2 = java.util.Collections.emptyList()
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.parseCueText(r1, r0, r5, r2)
            goto L3
        L3b:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.String r5 = "Incomplete vtt cue box header found."
            r4.<init>(r5)
            throw r4
        L43:
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue r4 = r5.build()
            return r4
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttSubtitle r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttSubtitle decode(byte[] r2, int r3, boolean r4) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r1.sampleData
            r4.reset(r2, r3)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r1.sampleData
            int r3 = r3.bytesLeft()
            if (r3 <= 0) goto L4a
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r1.sampleData
            int r3 = r3.bytesLeft()
            r4 = 8
            if (r3 < r4) goto L42
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r1.sampleData
            int r3 = r3.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r1.sampleData
            int r4 = r4.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttDecoder.TYPE_vttc
            if (r4 != r0) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r1.sampleData
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r0 = r1.builder
            int r3 = r3 + (-8)
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r3 = parseVttCueBox(r4, r0, r3)
            r2.add(r3)
            goto La
        L3a:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r1.sampleData
            int r3 = r3 + (-8)
            r4.skipBytes(r3)
            goto La
        L42:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r2 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.String r3 = "Incomplete Mp4Webvtt Top Level box header found."
            r2.<init>(r3)
            throw r2
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttSubtitle r3 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.Mp4WebvttSubtitle
            r3.<init>(r2)
            return r3
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class DefaultTsPayloadReaderFactory implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.Factory {
    private static final int DESCRIPTOR_TAG_CAPTION_SERVICE = 134;
    public static final int FLAG_ALLOW_NON_IDR_KEYFRAMES = 1;
    public static final int FLAG_DETECT_ACCESS_UNITS = 8;
    public static final int FLAG_IGNORE_AAC_STREAM = 2;
    public static final int FLAG_IGNORE_H264_STREAM = 4;
    public static final int FLAG_IGNORE_SPLICE_INFO_STREAM = 16;
    public static final int FLAG_OVERRIDE_CAPTION_DESCRIPTORS = 32;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> closedCaptionFormats;
    private final int flags;

    public @interface Flags {
    }

    public DefaultTsPayloadReaderFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public DefaultTsPayloadReaderFactory(int r2) {
            r1 = this;
            java.util.List r0 = java.util.Collections.emptyList()
            r1.<init>(r2, r0)
            return
    }

    public DefaultTsPayloadReaderFactory(int r2, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r3) {
            r1 = this;
            r1.<init>()
            r1.flags = r2
            r2 = 32
            boolean r2 = r1.isSet(r2)
            if (r2 != 0) goto L1f
            boolean r2 = r3.isEmpty()
            if (r2 == 0) goto L1f
            r2 = 0
            r3 = 0
            java.lang.String r0 = "application/cea-608"
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = com.mbridge.msdk.playercommon.exoplayer2.Format.createTextSampleFormat(r3, r0, r2, r3)
            java.util.List r3 = java.util.Collections.singletonList(r2)
        L1f:
            r1.closedCaptionFormats = r3
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader buildSeiReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.EsInfo r15) {
            r14 = this;
            r0 = 32
            boolean r0 = r14.isSet(r0)
            if (r0 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r15 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r0 = r14.closedCaptionFormats
            r15.<init>(r0)
            return r15
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            byte[] r15 = r15.descriptorBytes
            r0.<init>(r15)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r15 = r14.closedCaptionFormats
        L19:
            int r1 = r0.bytesLeft()
            if (r1 <= 0) goto L74
            int r1 = r0.readUnsignedByte()
            int r2 = r0.readUnsignedByte()
            int r3 = r0.getPosition()
            int r3 = r3 + r2
            r2 = 134(0x86, float:1.88E-43)
            if (r1 != r2) goto L70
            java.util.ArrayList r15 = new java.util.ArrayList
            r15.<init>()
            int r1 = r0.readUnsignedByte()
            r1 = r1 & 31
            r2 = 0
            r4 = r2
        L3d:
            if (r4 >= r1) goto L70
            r5 = 3
            java.lang.String r11 = r0.readString(r5)
            int r5 = r0.readUnsignedByte()
            r6 = r5 & 128(0x80, float:1.8E-43)
            r7 = 1
            if (r6 == 0) goto L4f
            r6 = r7
            goto L50
        L4f:
            r6 = r2
        L50:
            if (r6 == 0) goto L59
            r5 = r5 & 63
            java.lang.String r6 = "application/cea-708"
            r12 = r5
            r7 = r6
            goto L5d
        L59:
            java.lang.String r5 = "application/cea-608"
            r12 = r7
            r7 = r5
        L5d:
            r6 = 0
            r8 = 0
            r9 = -1
            r10 = 0
            r13 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = com.mbridge.msdk.playercommon.exoplayer2.Format.createTextSampleFormat(r6, r7, r8, r9, r10, r11, r12, r13)
            r15.add(r5)
            r5 = 2
            r0.skipBytes(r5)
            int r4 = r4 + 1
            goto L3d
        L70:
            r0.setPosition(r3)
            goto L19
        L74:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader
            r0.<init>(r15)
            return r0
    }

    private boolean isSet(int r2) {
            r1 = this;
            int r0 = r1.flags
            r2 = r2 & r0
            if (r2 == 0) goto L7
            r2 = 1
            goto L8
        L7:
            r2 = 0
        L8:
            return r2
    }

    @Override
    public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> createInitialPayloadReaders() {
            r1 = this;
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader createPayloadReader(int r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.EsInfo r6) {
            r4 = this;
            r0 = 2
            if (r5 == r0) goto Le3
            r1 = 3
            if (r5 == r1) goto Ld6
            r1 = 4
            if (r5 == r1) goto Ld6
            r2 = 15
            r3 = 0
            if (r5 == r2) goto Lc1
            r2 = 17
            if (r5 == r2) goto Lad
            r0 = 21
            if (r5 == r0) goto La2
            r0 = 27
            if (r5 == r0) goto L81
            r0 = 36
            if (r5 == r0) goto L72
            r0 = 89
            if (r5 == r0) goto L65
            r0 = 138(0x8a, float:1.93E-43)
            if (r5 == r0) goto L58
            r0 = 129(0x81, float:1.81E-43)
            if (r5 == r0) goto L4b
            r0 = 130(0x82, float:1.82E-43)
            if (r5 == r0) goto L58
            r0 = 134(0x86, float:1.88E-43)
            if (r5 == r0) goto L37
            r0 = 135(0x87, float:1.89E-43)
            if (r5 == r0) goto L4b
            return r3
        L37:
            r5 = 16
            boolean r5 = r4.isSet(r5)
            if (r5 == 0) goto L40
            goto L4a
        L40:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionReader r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SpliceInfoSectionReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SpliceInfoSectionReader
            r5.<init>()
            r3.<init>(r5)
        L4a:
            return r3
        L4b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader
            java.lang.String r6 = r6.language
            r0.<init>(r6)
            r5.<init>(r0)
            return r5
        L58:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.DtsReader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.DtsReader
            java.lang.String r6 = r6.language
            r0.<init>(r6)
            r5.<init>(r0)
            return r5
        L65:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.DvbSubtitleReader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.DvbSubtitleReader
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$DvbSubtitleInfo> r6 = r6.dvbSubtitleInfos
            r0.<init>(r6)
            r5.<init>(r0)
            return r5
        L72:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H265Reader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r6 = r4.buildSeiReader(r6)
            r0.<init>(r6)
            r5.<init>(r0)
            return r5
        L81:
            boolean r5 = r4.isSet(r1)
            if (r5 == 0) goto L88
            goto La1
        L88:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H264Reader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SeiReader r6 = r4.buildSeiReader(r6)
            r0 = 1
            boolean r0 = r4.isSet(r0)
            r1 = 8
            boolean r1 = r4.isSet(r1)
            r5.<init>(r6, r0, r1)
            r3.<init>(r5)
        La1:
            return r3
        La2:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Id3Reader r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Id3Reader
            r6.<init>()
            r5.<init>(r6)
            return r5
        Lad:
            boolean r5 = r4.isSet(r0)
            if (r5 == 0) goto Lb4
            goto Lc0
        Lb4:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.LatmReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.LatmReader
            java.lang.String r6 = r6.language
            r5.<init>(r6)
            r3.<init>(r5)
        Lc0:
            return r3
        Lc1:
            boolean r5 = r4.isSet(r0)
            if (r5 == 0) goto Lc8
            goto Ld5
        Lc8:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader
            r0 = 0
            java.lang.String r6 = r6.language
            r5.<init>(r0, r6)
            r3.<init>(r5)
        Ld5:
            return r3
        Ld6:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.MpegAudioReader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.MpegAudioReader
            java.lang.String r6 = r6.language
            r0.<init>(r6)
            r5.<init>(r0)
            return r5
        Le3:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PesReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader
            r6.<init>()
            r5.<init>(r6)
            return r5
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.audio;

public final class Ac3Util {
    private static final int AC3_SYNCFRAME_AUDIO_SAMPLE_COUNT = 1536;
    private static final int AUDIO_SAMPLES_PER_AUDIO_BLOCK = 256;
    private static final int[] BITRATE_BY_HALF_FRMSIZECOD = null;
    private static final int[] BLOCKS_PER_SYNCFRAME_BY_NUMBLKSCOD = null;
    private static final int[] CHANNEL_COUNT_BY_ACMOD = null;
    private static final int[] SAMPLE_RATE_BY_FSCOD = null;
    private static final int[] SAMPLE_RATE_BY_FSCOD2 = null;
    private static final int[] SYNCFRAME_SIZE_WORDS_BY_HALF_FRMSIZECOD_44_1 = null;
    public static final int TRUEHD_RECHUNK_SAMPLE_COUNT = 16;
    public static final int TRUEHD_SYNCFRAME_PREFIX_LENGTH = 10;

    static class 1 {
    }

    public static final class SyncFrameInfo {
        public static final int STREAM_TYPE_TYPE0 = 0;
        public static final int STREAM_TYPE_TYPE1 = 1;
        public static final int STREAM_TYPE_TYPE2 = 2;
        public static final int STREAM_TYPE_UNDEFINED = -1;
        public final int channelCount;
        public final int frameSize;
        public final java.lang.String mimeType;
        public final int sampleCount;
        public final int sampleRate;
        public final int streamType;

        public @interface StreamType {
        }

        private SyncFrameInfo(java.lang.String r1, int r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                r0.<init>()
                r0.mimeType = r1
                r0.streamType = r2
                r0.channelCount = r3
                r0.sampleRate = r4
                r0.frameSize = r5
                r0.sampleCount = r6
                return
        }

        SyncFrameInfo(java.lang.String r1, int r2, int r3, int r4, int r5, int r6, com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.1 r7) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return
        }
    }

    static {
            r0 = 4
            int[] r0 = new int[r0]
            r0 = {x0032: FILL_ARRAY_DATA , data: [1, 2, 3, 6} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.BLOCKS_PER_SYNCFRAME_BY_NUMBLKSCOD = r0
            r0 = 3
            int[] r1 = new int[r0]
            r1 = {x003e: FILL_ARRAY_DATA , data: [48000, 44100, 32000} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD = r1
            int[] r0 = new int[r0]
            r0 = {x0048: FILL_ARRAY_DATA , data: [24000, 22050, 16000} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD2 = r0
            r0 = 8
            int[] r0 = new int[r0]
            r0 = {x0052: FILL_ARRAY_DATA , data: [2, 1, 2, 3, 3, 4, 4, 5} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.CHANNEL_COUNT_BY_ACMOD = r0
            r0 = 19
            int[] r1 = new int[r0]
            r1 = {x0066: FILL_ARRAY_DATA , data: [32, 40, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384, 448, 512, 576, 640} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.BITRATE_BY_HALF_FRMSIZECOD = r1
            int[] r0 = new int[r0]
            r0 = {x0090: FILL_ARRAY_DATA , data: [69, 87, 104, 121, 139, 174, 208, 243, 278, 348, 417, 487, 557, 696, 835, 975, 1114, 1253, 1393} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SYNCFRAME_SIZE_WORDS_BY_HALF_FRMSIZECOD_44_1 = r0
            return
    }

    private Ac3Util() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int findTrueHdSyncframeOffset(java.nio.ByteBuffer r5) {
            int r0 = r5.position()
            int r1 = r5.limit()
            int r1 = r1 + (-10)
            r2 = r0
        Lb:
            if (r2 > r1) goto L21
            int r3 = r2 + 4
            int r3 = r5.getInt(r3)
            r4 = -16777217(0xfffffffffeffffff, float:-1.7014117E38)
            r3 = r3 & r4
            r4 = -1167101192(0xffffffffba6f72f8, float:-9.134258E-4)
            if (r3 != r4) goto L1e
            int r2 = r2 - r0
            return r2
        L1e:
            int r2 = r2 + 1
            goto Lb
        L21:
            r5 = -1
            return r5
    }

    public static int getAc3SyncframeAudioSampleCount() {
            r0 = 1536(0x600, float:2.152E-42)
            return r0
    }

    private static int getAc3SyncframeSize(int r4, int r5) {
            int r0 = r5 / 2
            if (r4 < 0) goto L2e
            int[] r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD
            int r2 = r1.length
            if (r4 >= r2) goto L2e
            if (r5 < 0) goto L2e
            int[] r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SYNCFRAME_SIZE_WORDS_BY_HALF_FRMSIZECOD_44_1
            int r3 = r2.length
            if (r0 < r3) goto L11
            goto L2e
        L11:
            r4 = r1[r4]
            r1 = 44100(0xac44, float:6.1797E-41)
            if (r4 != r1) goto L20
            r4 = r2[r0]
            int r5 = r5 % 2
            int r4 = r4 + r5
            int r4 = r4 * 2
            return r4
        L20:
            int[] r5 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.BITRATE_BY_HALF_FRMSIZECOD
            r5 = r5[r0]
            r0 = 32000(0x7d00, float:4.4842E-41)
            if (r4 != r0) goto L2b
            int r5 = r5 * 6
            return r5
        L2b:
            int r5 = r5 * 4
            return r5
        L2e:
            r4 = -1
            return r4
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format parseAc3AnnexFFormat(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r13, java.lang.String r14, java.lang.String r15, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r16) {
            int r0 = r13.readUnsignedByte()
            r0 = r0 & 192(0xc0, float:2.69E-43)
            int r0 = r0 >> 6
            int[] r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD
            r8 = r1[r0]
            int r0 = r13.readUnsignedByte()
            int[] r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.CHANNEL_COUNT_BY_ACMOD
            r2 = r0 & 56
            int r2 = r2 >> 3
            r1 = r1[r2]
            r0 = r0 & 4
            if (r0 == 0) goto L1e
            int r1 = r1 + 1
        L1e:
            r7 = r1
            r4 = 0
            r5 = -1
            r6 = -1
            r9 = 0
            r11 = 0
            java.lang.String r3 = "audio/ac3"
            r2 = r14
            r10 = r16
            r12 = r15
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SyncFrameInfo parseAc3SyncframeInfo(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r18) {
            r0 = r18
            int r1 = r18.getPosition()
            r2 = 40
            r0.skipBits(r2)
            r2 = 5
            int r3 = r0.readBits(r2)
            r5 = 16
            r6 = 1
            if (r3 != r5) goto L17
            r3 = r6
            goto L18
        L17:
            r3 = 0
        L18:
            r0.setPosition(r1)
            r1 = -1
            r7 = 8
            r8 = 3
            r9 = 6
            r10 = 2
            if (r3 == 0) goto L20a
            r0.skipBits(r5)
            int r3 = r0.readBits(r10)
            if (r3 == 0) goto L35
            if (r3 == r6) goto L33
            if (r3 == r10) goto L31
            goto L36
        L31:
            r1 = r10
            goto L36
        L33:
            r1 = r6
            goto L36
        L35:
            r1 = 0
        L36:
            r0.skipBits(r8)
            r3 = 11
            int r3 = r0.readBits(r3)
            int r3 = r3 + r6
            int r3 = r3 * r10
            int r11 = r0.readBits(r10)
            if (r11 != r8) goto L53
            int[] r12 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD2
            int r13 = r0.readBits(r10)
            r12 = r12[r13]
            r13 = r9
            r14 = r12
            r12 = r8
            goto L5f
        L53:
            int r12 = r0.readBits(r10)
            int[] r13 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.BLOCKS_PER_SYNCFRAME_BY_NUMBLKSCOD
            r13 = r13[r12]
            int[] r14 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD
            r14 = r14[r11]
        L5f:
            int r15 = r13 * 256
            int r4 = r0.readBits(r8)
            boolean r16 = r18.readBit()
            int[] r17 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.CHANNEL_COUNT_BY_ACMOD
            r17 = r17[r4]
            int r17 = r17 + r16
            r8 = 10
            r0.skipBits(r8)
            boolean r8 = r18.readBit()
            if (r8 == 0) goto L7d
            r0.skipBits(r7)
        L7d:
            if (r4 != 0) goto L8b
            r0.skipBits(r2)
            boolean r8 = r18.readBit()
            if (r8 == 0) goto L8b
            r0.skipBits(r7)
        L8b:
            if (r1 != r6) goto L96
            boolean r8 = r18.readBit()
            if (r8 == 0) goto L96
            r0.skipBits(r5)
        L96:
            boolean r5 = r18.readBit()
            r8 = 4
            if (r5 == 0) goto L1ae
            if (r4 <= r10) goto La2
            r0.skipBits(r10)
        La2:
            r5 = r4 & 1
            if (r5 == 0) goto Lab
            if (r4 <= r10) goto Lab
            r0.skipBits(r9)
        Lab:
            r5 = r4 & 4
            if (r5 == 0) goto Lb2
            r0.skipBits(r9)
        Lb2:
            if (r16 == 0) goto Lbd
            boolean r5 = r18.readBit()
            if (r5 == 0) goto Lbd
            r0.skipBits(r2)
        Lbd:
            if (r1 != 0) goto L1ae
            boolean r5 = r18.readBit()
            if (r5 == 0) goto Lc8
            r0.skipBits(r9)
        Lc8:
            if (r4 != 0) goto Ld3
            boolean r5 = r18.readBit()
            if (r5 == 0) goto Ld3
            r0.skipBits(r9)
        Ld3:
            boolean r5 = r18.readBit()
            if (r5 == 0) goto Ldc
            r0.skipBits(r9)
        Ldc:
            int r5 = r0.readBits(r10)
            if (r5 != r6) goto Le7
            r0.skipBits(r2)
            goto L17b
        Le7:
            if (r5 != r10) goto Lf0
            r5 = 12
            r0.skipBits(r5)
            goto L17b
        Lf0:
            r6 = 3
            if (r5 != r6) goto L17b
            int r5 = r0.readBits(r2)
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L157
            r0.skipBits(r2)
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L109
            r0.skipBits(r8)
        L109:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L112
            r0.skipBits(r8)
        L112:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L11b
            r0.skipBits(r8)
        L11b:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L124
            r0.skipBits(r8)
        L124:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L12d
            r0.skipBits(r8)
        L12d:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L136
            r0.skipBits(r8)
        L136:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L13f
            r0.skipBits(r8)
        L13f:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L157
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L14e
            r0.skipBits(r8)
        L14e:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L157
            r0.skipBits(r8)
        L157:
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L173
            r0.skipBits(r2)
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L173
            r6 = 7
            r0.skipBits(r6)
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L173
            r0.skipBits(r7)
        L173:
            int r5 = r5 + r10
            int r5 = r5 * r7
            r0.skipBits(r5)
            r18.byteAlign()
        L17b:
            if (r4 >= r10) goto L193
            boolean r5 = r18.readBit()
            r6 = 14
            if (r5 == 0) goto L188
            r0.skipBits(r6)
        L188:
            if (r4 != 0) goto L193
            boolean r5 = r18.readBit()
            if (r5 == 0) goto L193
            r0.skipBits(r6)
        L193:
            boolean r5 = r18.readBit()
            if (r5 == 0) goto L1ae
            if (r12 != 0) goto L19f
            r0.skipBits(r2)
            goto L1ae
        L19f:
            r5 = 0
        L1a0:
            if (r5 >= r13) goto L1ae
            boolean r6 = r18.readBit()
            if (r6 == 0) goto L1ab
            r0.skipBits(r2)
        L1ab:
            int r5 = r5 + 1
            goto L1a0
        L1ae:
            boolean r5 = r18.readBit()
            if (r5 == 0) goto L1dc
            r0.skipBits(r2)
            if (r4 != r10) goto L1bc
            r0.skipBits(r8)
        L1bc:
            if (r4 < r9) goto L1c1
            r0.skipBits(r10)
        L1c1:
            boolean r2 = r18.readBit()
            if (r2 == 0) goto L1ca
            r0.skipBits(r7)
        L1ca:
            if (r4 != 0) goto L1d5
            boolean r2 = r18.readBit()
            if (r2 == 0) goto L1d5
            r0.skipBits(r7)
        L1d5:
            r2 = 3
            if (r11 >= r2) goto L1dd
            r18.skipBit()
            goto L1dd
        L1dc:
            r2 = 3
        L1dd:
            if (r1 != 0) goto L1e4
            if (r12 == r2) goto L1e4
            r18.skipBit()
        L1e4:
            if (r1 != r10) goto L1f1
            if (r12 == r2) goto L1ee
            boolean r2 = r18.readBit()
            if (r2 == 0) goto L1f1
        L1ee:
            r0.skipBits(r9)
        L1f1:
            boolean r2 = r18.readBit()
            if (r2 == 0) goto L207
            int r2 = r0.readBits(r9)
            r4 = 1
            if (r2 != r4) goto L207
            int r0 = r0.readBits(r7)
            if (r0 != r4) goto L207
            java.lang.String r0 = "audio/eac3-joc"
            goto L24b
        L207:
            java.lang.String r0 = "audio/eac3"
            goto L24b
        L20a:
            r2 = 32
            r0.skipBits(r2)
            int r2 = r0.readBits(r10)
            int r3 = r0.readBits(r9)
            int r3 = getAc3SyncframeSize(r2, r3)
            r0.skipBits(r7)
            r4 = 3
            int r4 = r0.readBits(r4)
            r5 = r4 & 1
            if (r5 == 0) goto L22d
            r5 = 1
            if (r4 == r5) goto L22d
            r0.skipBits(r10)
        L22d:
            r5 = r4 & 4
            if (r5 == 0) goto L234
            r0.skipBits(r10)
        L234:
            if (r4 != r10) goto L239
            r0.skipBits(r10)
        L239:
            int[] r5 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD
            r14 = r5[r2]
            r15 = 1536(0x600, float:2.152E-42)
            boolean r0 = r18.readBit()
            int[] r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.CHANNEL_COUNT_BY_ACMOD
            r2 = r2[r4]
            int r17 = r2 + r0
            java.lang.String r0 = "audio/ac3"
        L24b:
            r5 = r0
            r6 = r1
            r9 = r3
            r8 = r14
            r10 = r15
            r7 = r17
            com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util$SyncFrameInfo r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util$SyncFrameInfo
            r11 = 0
            r4 = r0
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)
            return r0
    }

    public static int parseAc3SyncframeSize(byte[] r2) {
            int r0 = r2.length
            r1 = 5
            if (r0 >= r1) goto L6
            r2 = -1
            return r2
        L6:
            r0 = 4
            r1 = r2[r0]
            r1 = r1 & 192(0xc0, float:2.69E-43)
            int r1 = r1 >> 6
            r2 = r2[r0]
            r2 = r2 & 63
            int r2 = getAc3SyncframeSize(r1, r2)
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format parseEAc3AnnexFFormat(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r15, java.lang.String r16, java.lang.String r17, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r18) {
            r0 = 2
            r1 = r15
            r15.skipBytes(r0)
            int r2 = r15.readUnsignedByte()
            r2 = r2 & 192(0xc0, float:2.69E-43)
            int r2 = r2 >> 6
            int[] r3 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.SAMPLE_RATE_BY_FSCOD
            r10 = r3[r2]
            int r2 = r15.readUnsignedByte()
            int[] r3 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.CHANNEL_COUNT_BY_ACMOD
            r4 = r2 & 14
            int r4 = r4 >> 1
            r3 = r3[r4]
            r2 = r2 & 1
            if (r2 == 0) goto L23
            int r3 = r3 + 1
        L23:
            int r2 = r15.readUnsignedByte()
            r2 = r2 & 30
            int r2 = r2 >> 1
            if (r2 <= 0) goto L36
            int r2 = r15.readUnsignedByte()
            r0 = r0 & r2
            if (r0 == 0) goto L36
            int r3 = r3 + 2
        L36:
            r9 = r3
            int r0 = r15.bytesLeft()
            if (r0 <= 0) goto L48
            int r0 = r15.readUnsignedByte()
            r0 = r0 & 1
            if (r0 == 0) goto L48
            java.lang.String r0 = "audio/eac3-joc"
            goto L4a
        L48:
            java.lang.String r0 = "audio/eac3"
        L4a:
            r5 = r0
            r6 = 0
            r7 = -1
            r8 = -1
            r11 = 0
            r13 = 0
            r4 = r16
            r12 = r18
            r14 = r17
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return r0
    }

    public static int parseEAc3SyncframeAudioSampleCount(java.nio.ByteBuffer r3) {
            int r0 = r3.position()
            int r0 = r0 + 4
            byte r0 = r3.get(r0)
            r0 = r0 & 192(0xc0, float:2.69E-43)
            r1 = 6
            int r0 = r0 >> r1
            r2 = 3
            if (r0 != r2) goto L12
            goto L24
        L12:
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.BLOCKS_PER_SYNCFRAME_BY_NUMBLKSCOD
            int r1 = r3.position()
            int r1 = r1 + 4
            byte r3 = r3.get(r1)
            r3 = r3 & 48
            int r3 = r3 >> 4
            r1 = r0[r3]
        L24:
            int r1 = r1 * 256
            return r1
    }

    public static int parseTrueHdSyncframeAudioSampleCount(java.nio.ByteBuffer r3, int r4) {
            int r0 = r3.position()
            int r0 = r0 + r4
            int r0 = r0 + 7
            byte r0 = r3.get(r0)
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1 = 187(0xbb, float:2.62E-43)
            if (r0 != r1) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = 0
        L14:
            r1 = 40
            int r2 = r3.position()
            int r2 = r2 + r4
            if (r0 == 0) goto L20
            r4 = 9
            goto L22
        L20:
            r4 = 8
        L22:
            int r2 = r2 + r4
            byte r3 = r3.get(r2)
            int r3 = r3 >> 4
            r3 = r3 & 7
            int r3 = r1 << r3
            return r3
    }

    public static int parseTrueHdSyncframeAudioSampleCount(byte[] r5) {
            r0 = 4
            r1 = r5[r0]
            r2 = 0
            r3 = -8
            if (r1 != r3) goto L38
            r1 = 5
            r1 = r5[r1]
            r3 = 114(0x72, float:1.6E-43)
            if (r1 != r3) goto L38
            r1 = 6
            r1 = r5[r1]
            r3 = 111(0x6f, float:1.56E-43)
            if (r1 != r3) goto L38
            r1 = 7
            r3 = r5[r1]
            r3 = r3 & 254(0xfe, float:3.56E-43)
            r4 = 186(0xba, float:2.6E-43)
            if (r3 == r4) goto L1f
            goto L38
        L1f:
            r3 = r5[r1]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = 187(0xbb, float:2.62E-43)
            if (r3 != r4) goto L28
            r2 = 1
        L28:
            r3 = 40
            if (r2 == 0) goto L2f
            r2 = 9
            goto L31
        L2f:
            r2 = 8
        L31:
            r5 = r5[r2]
            int r5 = r5 >> r0
            r5 = r5 & r1
            int r5 = r3 << r5
            return r5
        L38:
            return r2
    }
}

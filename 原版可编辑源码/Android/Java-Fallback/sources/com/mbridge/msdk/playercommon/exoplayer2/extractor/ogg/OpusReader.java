package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

final class OpusReader extends com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader {
    private static final int DEFAULT_SEEK_PRE_ROLL_SAMPLES = 3840;
    private static final int OPUS_CODE = 0;
    private static final byte[] OPUS_SIGNATURE = null;
    private static final int SAMPLE_RATE = 48000;
    private boolean headerRead;

    static {
            java.lang.String r0 = "Opus"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader.OPUS_CODE = r0
            r0 = 8
            byte[] r0 = new byte[r0]
            r0 = {x0012: FILL_ARRAY_DATA , data: [79, 112, 117, 115, 72, 101, 97, 100} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader.OPUS_SIGNATURE = r0
            return
    }

    OpusReader() {
            r0 = this;
            r0.<init>()
            return
    }

    private long getPacketDurationUs(byte[] r7) {
            r6 = this;
            r0 = 0
            r0 = r7[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1 = r0 & 3
            r2 = 2
            r3 = 1
            if (r1 == 0) goto L14
            if (r1 == r3) goto L15
            if (r1 == r2) goto L15
            r7 = r7[r3]
            r2 = r7 & 63
            goto L15
        L14:
            r2 = r3
        L15:
            r7 = 3
            int r0 = r0 >> r7
            r1 = r0 & 3
            r4 = 16
            if (r0 < r4) goto L21
            r7 = 2500(0x9c4, float:3.503E-42)
            int r7 = r7 << r1
            goto L34
        L21:
            r4 = 12
            r5 = 10000(0x2710, float:1.4013E-41)
            if (r0 < r4) goto L2c
            r7 = r1 & 1
            int r7 = r5 << r7
            goto L34
        L2c:
            if (r1 != r7) goto L32
            r7 = 60000(0xea60, float:8.4078E-41)
            goto L34
        L32:
            int r7 = r5 << r1
        L34:
            long r0 = (long) r2
            long r2 = (long) r7
            long r0 = r0 * r2
            return r0
    }

    private void putNativeOrderLong(java.util.List<byte[]> r5, int r6) {
            r4 = this;
            long r0 = (long) r6
            r2 = 1000000000(0x3b9aca00, double:4.94065646E-315)
            long r0 = r0 * r2
            r2 = 48000(0xbb80, double:2.3715E-319)
            long r0 = r0 / r2
            r6 = 8
            java.nio.ByteBuffer r6 = java.nio.ByteBuffer.allocate(r6)
            java.nio.ByteOrder r2 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r6 = r6.order(r2)
            java.nio.ByteBuffer r6 = r6.putLong(r0)
            byte[] r6 = r6.array()
            r5.add(r6)
            return
    }

    public static boolean verifyBitstreamType(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            int r0 = r4.bytesLeft()
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader.OPUS_SIGNATURE
            int r2 = r1.length
            r3 = 0
            if (r0 >= r2) goto Lb
            return r3
        Lb:
            int r0 = r1.length
            byte[] r0 = new byte[r0]
            int r1 = r1.length
            r4.readBytes(r0, r3, r1)
            byte[] r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader.OPUS_SIGNATURE
            boolean r4 = java.util.Arrays.equals(r0, r4)
            return r4
    }

    @Override
    protected final long preparePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            r2 = this;
            byte[] r3 = r3.data
            long r0 = r2.getPacketDurationUs(r3)
            long r0 = r2.convertTimeToGranule(r0)
            return r0
    }

    @Override
    protected final boolean readHeaders(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12, long r13, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader.SetupData r15) throws java.io.IOException, java.lang.InterruptedException {
            r11 = this;
            boolean r13 = r11.headerRead
            r14 = 1
            if (r13 != 0) goto L4a
            byte[] r13 = r12.data
            int r12 = r12.limit()
            byte[] r12 = java.util.Arrays.copyOf(r13, r12)
            r13 = 9
            r13 = r12[r13]
            r5 = r13 & 255(0xff, float:3.57E-43)
            r13 = 11
            r13 = r12[r13]
            r13 = r13 & 255(0xff, float:3.57E-43)
            int r13 = r13 << 8
            r0 = 10
            r0 = r12[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r13 = r13 | r0
            java.util.ArrayList r7 = new java.util.ArrayList
            r0 = 3
            r7.<init>(r0)
            r7.add(r12)
            r11.putNativeOrderLong(r7, r13)
            r12 = 3840(0xf00, float:5.381E-42)
            r11.putNativeOrderLong(r7, r12)
            r0 = 0
            r2 = 0
            r3 = -1
            r4 = -1
            r6 = 48000(0xbb80, float:6.7262E-41)
            r8 = 0
            r9 = 0
            r10 = 0
            java.lang.String r1 = "audio/opus"
            com.mbridge.msdk.playercommon.exoplayer2.Format r12 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r15.format = r12
            r11.headerRead = r14
            return r14
        L4a:
            int r13 = r12.readInt()
            int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader.OPUS_CODE
            r0 = 0
            if (r13 != r15) goto L54
            goto L55
        L54:
            r14 = r0
        L55:
            r12.setPosition(r0)
            return r14
    }

    @Override
    protected final void reset(boolean r1) {
            r0 = this;
            super.reset(r1)
            if (r1 == 0) goto L8
            r1 = 0
            r0.headerRead = r1
        L8:
            return
    }
}

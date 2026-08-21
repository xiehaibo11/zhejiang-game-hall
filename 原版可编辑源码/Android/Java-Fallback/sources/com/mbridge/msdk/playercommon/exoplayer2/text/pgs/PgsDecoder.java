package com.mbridge.msdk.playercommon.exoplayer2.text.pgs;

public final class PgsDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private static final byte INFLATE_HEADER = 120;
    private static final int SECTION_TYPE_BITMAP_PICTURE = 21;
    private static final int SECTION_TYPE_END = 128;
    private static final int SECTION_TYPE_IDENTIFIER = 22;
    private static final int SECTION_TYPE_PALETTE = 20;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray buffer;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder cueBuilder;
    private byte[] inflatedData;
    private int inflatedDataSize;
    private java.util.zip.Inflater inflater;

    private static final class CueBuilder {
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray bitmapData;
        private int bitmapHeight;
        private int bitmapWidth;
        private int bitmapX;
        private int bitmapY;
        private final int[] colors;
        private boolean colorsSet;
        private int planeHeight;
        private int planeWidth;

        public CueBuilder() {
                r1 = this;
                r1.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
                r0.<init>()
                r1.bitmapData = r0
                r0 = 256(0x100, float:3.59E-43)
                int[] r0 = new int[r0]
                r1.colors = r0
                return
        }

        static void access$000(com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder r0, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, int r2) {
                r0.parsePaletteSection(r1, r2)
                return
        }

        static void access$100(com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder r0, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, int r2) {
                r0.parseBitmapSection(r1, r2)
                return
        }

        static void access$200(com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder r0, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, int r2) {
                r0.parseIdentifierSection(r1, r2)
                return
        }

        private void parseBitmapSection(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, int r5) {
                r3 = this;
                r0 = 4
                if (r5 >= r0) goto L4
                return
            L4:
                r1 = 3
                r4.skipBytes(r1)
                int r1 = r4.readUnsignedByte()
                r1 = r1 & 128(0x80, float:1.8E-43)
                if (r1 == 0) goto L12
                r1 = 1
                goto L13
            L12:
                r1 = 0
            L13:
                int r5 = r5 + (-4)
                if (r1 == 0) goto L36
                r1 = 7
                if (r5 >= r1) goto L1b
                return
            L1b:
                int r1 = r4.readUnsignedInt24()
                if (r1 >= r0) goto L22
                return
            L22:
                int r2 = r4.readUnsignedShort()
                r3.bitmapWidth = r2
                int r2 = r4.readUnsignedShort()
                r3.bitmapHeight = r2
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r3.bitmapData
                int r1 = r1 - r0
                r2.reset(r1)
                int r5 = r5 + (-7)
            L36:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.bitmapData
                int r0 = r0.getPosition()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r3.bitmapData
                int r1 = r1.limit()
                if (r0 >= r1) goto L58
                if (r5 <= 0) goto L58
                int r1 = r1 - r0
                int r5 = java.lang.Math.min(r5, r1)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r3.bitmapData
                byte[] r1 = r1.data
                r4.readBytes(r1, r0, r5)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.bitmapData
                int r0 = r0 + r5
                r4.setPosition(r0)
            L58:
                return
        }

        private void parseIdentifierSection(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, int r3) {
                r1 = this;
                r0 = 19
                if (r3 >= r0) goto L5
                return
            L5:
                int r3 = r2.readUnsignedShort()
                r1.planeWidth = r3
                int r3 = r2.readUnsignedShort()
                r1.planeHeight = r3
                r3 = 11
                r2.skipBytes(r3)
                int r3 = r2.readUnsignedShort()
                r1.bitmapX = r3
                int r2 = r2.readUnsignedShort()
                r1.bitmapY = r2
                return
        }

        private void parsePaletteSection(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r18, int r19) {
                r17 = this;
                r0 = r17
                int r1 = r19 % 5
                r2 = 2
                if (r1 == r2) goto L8
                return
            L8:
                r1 = r18
                r1.skipBytes(r2)
                int[] r2 = r0.colors
                r3 = 0
                java.util.Arrays.fill(r2, r3)
                int r2 = r19 / 5
                r4 = r3
            L16:
                if (r4 >= r2) goto L75
                int r5 = r18.readUnsignedByte()
                int r6 = r18.readUnsignedByte()
                int r7 = r18.readUnsignedByte()
                int r8 = r18.readUnsignedByte()
                int r9 = r18.readUnsignedByte()
                double r10 = (double) r6
                r12 = 4608992865850220347(0x3ff66e978d4fdf3b, double:1.402)
                int r7 = r7 + (-128)
                double r6 = (double) r7
                double r12 = r12 * r6
                double r12 = r12 + r10
                int r12 = (int) r12
                r13 = 4599871095020959050(0x3fd60663c74fb54a, double:0.34414)
                int r8 = r8 + (-128)
                r19 = r4
                double r3 = (double) r8
                double r13 = r13 * r3
                double r13 = r10 - r13
                r15 = 4604607620821057148(0x3fe6da3c21187e7c, double:0.71414)
                double r6 = r6 * r15
                double r13 = r13 - r6
                int r6 = (int) r13
                r7 = 4610659197712347431(0x3ffc5a1cac083127, double:1.772)
                double r3 = r3 * r7
                double r10 = r10 + r3
                int r3 = (int) r10
                int[] r4 = r0.colors
                int r7 = r9 << 24
                r8 = 255(0xff, float:3.57E-43)
                r9 = 0
                int r10 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r12, r9, r8)
                int r10 = r10 << 16
                r7 = r7 | r10
                int r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r6, r9, r8)
                int r6 = r6 << 8
                r6 = r6 | r7
                int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r3, r9, r8)
                r3 = r3 | r6
                r4[r5] = r3
                int r4 = r19 + 1
                r3 = r9
                goto L16
            L75:
                r1 = 1
                r0.colorsSet = r1
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.text.Cue build() {
                r12 = this;
                int r0 = r12.planeWidth
                if (r0 == 0) goto Lac
                int r0 = r12.planeHeight
                if (r0 == 0) goto Lac
                int r0 = r12.bitmapWidth
                if (r0 == 0) goto Lac
                int r0 = r12.bitmapHeight
                if (r0 == 0) goto Lac
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r12.bitmapData
                int r0 = r0.limit()
                if (r0 == 0) goto Lac
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r12.bitmapData
                int r0 = r0.getPosition()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r12.bitmapData
                int r1 = r1.limit()
                if (r0 != r1) goto Lac
                boolean r0 = r12.colorsSet
                if (r0 != 0) goto L2c
                goto Lac
            L2c:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r12.bitmapData
                r1 = 0
                r0.setPosition(r1)
                int r0 = r12.bitmapWidth
                int r2 = r12.bitmapHeight
                int r0 = r0 * r2
                int[] r2 = new int[r0]
                r3 = r1
            L3a:
                if (r3 >= r0) goto L7d
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r12.bitmapData
                int r4 = r4.readUnsignedByte()
                if (r4 == 0) goto L4e
                int r5 = r3 + 1
                int[] r6 = r12.colors
                r4 = r6[r4]
                r2[r3] = r4
            L4c:
                r3 = r5
                goto L3a
            L4e:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r12.bitmapData
                int r4 = r4.readUnsignedByte()
                if (r4 == 0) goto L3a
                r5 = r4 & 64
                if (r5 != 0) goto L5d
                r5 = r4 & 63
                goto L68
            L5d:
                r5 = r4 & 63
                int r5 = r5 << 8
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r12.bitmapData
                int r6 = r6.readUnsignedByte()
                r5 = r5 | r6
            L68:
                r4 = r4 & 128(0x80, float:1.8E-43)
                if (r4 != 0) goto L6e
                r4 = r1
                goto L78
            L6e:
                int[] r4 = r12.colors
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r12.bitmapData
                int r6 = r6.readUnsignedByte()
                r4 = r4[r6]
            L78:
                int r5 = r5 + r3
                java.util.Arrays.fill(r2, r3, r5, r4)
                goto L4c
            L7d:
                int r0 = r12.bitmapWidth
                int r1 = r12.bitmapHeight
                android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888
                android.graphics.Bitmap r5 = android.graphics.Bitmap.createBitmap(r2, r0, r1, r3)
                com.mbridge.msdk.playercommon.exoplayer2.text.Cue r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue
                int r1 = r12.bitmapX
                float r1 = (float) r1
                int r2 = r12.planeWidth
                float r3 = (float) r2
                float r6 = r1 / r3
                r7 = 0
                int r1 = r12.bitmapY
                float r1 = (float) r1
                int r3 = r12.planeHeight
                float r4 = (float) r3
                float r8 = r1 / r4
                r9 = 0
                int r1 = r12.bitmapWidth
                float r1 = (float) r1
                float r2 = (float) r2
                float r10 = r1 / r2
                int r1 = r12.bitmapHeight
                float r1 = (float) r1
                float r2 = (float) r3
                float r11 = r1 / r2
                r4 = r0
                r4.<init>(r5, r6, r7, r8, r9, r10, r11)
                return r0
            Lac:
                r0 = 0
                return r0
        }

        public final void reset() {
                r2 = this;
                r0 = 0
                r2.planeWidth = r0
                r2.planeHeight = r0
                r2.bitmapX = r0
                r2.bitmapY = r0
                r2.bitmapWidth = r0
                r2.bitmapHeight = r0
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r2.bitmapData
                r1.reset(r0)
                r2.colorsSet = r0
                return
        }
    }

    public PgsDecoder() {
            r1 = this;
            java.lang.String r0 = "PgsDecoder"
            r1.<init>(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r1.buffer = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder$CueBuilder r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder$CueBuilder
            r0.<init>()
            r1.cueBuilder = r0
            return
    }

    private boolean maybeInflateData(byte[] r6, int r7) {
            r5 = this;
            r0 = 0
            if (r7 == 0) goto L7a
            r1 = r6[r0]
            r2 = 120(0x78, float:1.68E-43)
            if (r1 == r2) goto La
            goto L7a
        La:
            java.util.zip.Inflater r1 = r5.inflater
            if (r1 != 0) goto L19
            java.util.zip.Inflater r1 = new java.util.zip.Inflater
            r1.<init>()
            r5.inflater = r1
            byte[] r1 = new byte[r7]
            r5.inflatedData = r1
        L19:
            r5.inflatedDataSize = r0
            java.util.zip.Inflater r1 = r5.inflater
            r1.setInput(r6, r0, r7)
        L20:
            java.util.zip.Inflater r6 = r5.inflater     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            boolean r6 = r6.finished()     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            if (r6 != 0) goto L62
            java.util.zip.Inflater r6 = r5.inflater     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            boolean r6 = r6.needsDictionary()     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            if (r6 != 0) goto L62
            java.util.zip.Inflater r6 = r5.inflater     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            boolean r6 = r6.needsInput()     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            if (r6 != 0) goto L62
            int r6 = r5.inflatedDataSize     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            byte[] r7 = r5.inflatedData     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r7 = r7.length     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            if (r6 != r7) goto L4c
            byte[] r6 = r5.inflatedData     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            byte[] r7 = r5.inflatedData     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r7 = r7.length     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r7 = r7 * 2
            byte[] r6 = java.util.Arrays.copyOf(r6, r7)     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            r5.inflatedData = r6     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
        L4c:
            int r6 = r5.inflatedDataSize     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            java.util.zip.Inflater r7 = r5.inflater     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            byte[] r1 = r5.inflatedData     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r2 = r5.inflatedDataSize     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            byte[] r3 = r5.inflatedData     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r3 = r3.length     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r4 = r5.inflatedDataSize     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r3 = r3 - r4
            int r7 = r7.inflate(r1, r2, r3)     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            int r6 = r6 + r7
            r5.inflatedDataSize = r6     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            goto L20
        L62:
            java.util.zip.Inflater r6 = r5.inflater     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            boolean r6 = r6.finished()     // Catch: java.lang.Throwable -> L6e java.util.zip.DataFormatException -> L75
            java.util.zip.Inflater r7 = r5.inflater
            r7.reset()
            return r6
        L6e:
            r6 = move-exception
            java.util.zip.Inflater r7 = r5.inflater
            r7.reset()
            throw r6
        L75:
            java.util.zip.Inflater r6 = r5.inflater
            r6.reset()
        L7a:
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.text.Cue readNextSection(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5, com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder r6) {
            int r0 = r5.limit()
            int r1 = r5.readUnsignedByte()
            int r2 = r5.readUnsignedShort()
            int r3 = r5.getPosition()
            int r3 = r3 + r2
            r4 = 0
            if (r3 <= r0) goto L18
            r5.setPosition(r0)
            return r4
        L18:
            r0 = 128(0x80, float:1.8E-43)
            if (r1 == r0) goto L2c
            switch(r1) {
                case 20: goto L28;
                case 21: goto L24;
                case 22: goto L20;
                default: goto L1f;
            }
        L1f:
            goto L33
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder.access$200(r6, r5, r2)
            goto L33
        L24:
            com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder.access$100(r6, r5, r2)
            goto L33
        L28:
            com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder.CueBuilder.access$000(r6, r5, r2)
            goto L33
        L2c:
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r4 = r6.build()
            r6.reset()
        L33:
            r5.setPosition(r3)
            return r4
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            boolean r3 = r0.maybeInflateData(r1, r2)
            if (r3 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.buffer
            byte[] r2 = r0.inflatedData
            int r3 = r0.inflatedDataSize
            r1.reset(r2, r3)
            goto L15
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.buffer
            r3.reset(r1, r2)
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder$CueBuilder r1 = r0.cueBuilder
            r1.reset()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.buffer
            int r2 = r2.bytesLeft()
            r3 = 3
            if (r2 < r3) goto L36
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.buffer
            com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsDecoder$CueBuilder r3 = r0.cueBuilder
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r2 = readNextSection(r2, r3)
            if (r2 == 0) goto L1f
            r1.add(r2)
            goto L1f
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsSubtitle r2 = new com.mbridge.msdk.playercommon.exoplayer2.text.pgs.PgsSubtitle
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            r2.<init>(r1)
            return r2
    }
}

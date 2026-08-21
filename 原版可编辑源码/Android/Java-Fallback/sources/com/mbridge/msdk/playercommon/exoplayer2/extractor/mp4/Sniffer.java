package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

final class Sniffer {
    private static final int[] COMPATIBLE_BRANDS = null;
    private static final int SEARCH_LENGTH = 4096;

    static {
            r0 = 24
            int[] r0 = new int[r0]
            java.lang.String r1 = "isom"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "iso2"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "iso3"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = "iso4"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = "iso5"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = "iso6"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 5
            r0[r2] = r1
            java.lang.String r1 = "avc1"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 6
            r0[r2] = r1
            java.lang.String r1 = "hvc1"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 7
            r0[r2] = r1
            java.lang.String r1 = "hev1"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 8
            r0[r2] = r1
            java.lang.String r1 = "mp41"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 9
            r0[r2] = r1
            java.lang.String r1 = "mp42"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 10
            r0[r2] = r1
            java.lang.String r1 = "3g2a"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 11
            r0[r2] = r1
            java.lang.String r1 = "3g2b"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 12
            r0[r2] = r1
            java.lang.String r1 = "3gr6"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 13
            r0[r2] = r1
            java.lang.String r1 = "3gs6"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 14
            r0[r2] = r1
            java.lang.String r1 = "3ge6"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 15
            r0[r2] = r1
            java.lang.String r1 = "3gg6"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 16
            r0[r2] = r1
            java.lang.String r1 = "M4V "
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 17
            r0[r2] = r1
            java.lang.String r1 = "M4A "
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 18
            r0[r2] = r1
            java.lang.String r1 = "f4v "
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 19
            r0[r2] = r1
            java.lang.String r1 = "kddi"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 20
            r0[r2] = r1
            java.lang.String r1 = "M4VP"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 21
            r0[r2] = r1
            java.lang.String r1 = "qt  "
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 22
            r0[r2] = r1
            java.lang.String r1 = "MSNV"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 23
            r0[r2] = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Sniffer.COMPATIBLE_BRANDS = r0
            return
    }

    private Sniffer() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean isCompatibleBrand(int r6) {
            int r0 = r6 >>> 8
            java.lang.String r1 = "3gp"
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r1)
            r2 = 1
            if (r0 != r1) goto Lc
            return r2
        Lc:
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Sniffer.COMPATIBLE_BRANDS
            int r1 = r0.length
            r3 = 0
            r4 = r3
        L11:
            if (r4 >= r1) goto L1b
            r5 = r0[r4]
            if (r5 != r6) goto L18
            return r2
        L18:
            int r4 = r4 + 1
            goto L11
        L1b:
            return r3
    }

    public static boolean sniffFragmented(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException {
            r0 = 1
            boolean r1 = sniffInternal(r1, r0)
            return r1
    }

    private static boolean sniffInternal(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r16, boolean r17) throws java.io.IOException, java.lang.InterruptedException {
            r0 = r16
            long r1 = r16.getLength()
            r3 = -1
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r6 = 4096(0x1000, double:2.0237E-320)
            if (r5 == 0) goto L12
            int r5 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r5 <= 0) goto L13
        L12:
            r1 = r6
        L13:
            int r1 = (int) r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r5 = 64
            r2.<init>(r5)
            r5 = 0
            r6 = r5
            r7 = r6
        L1e:
            if (r6 >= r1) goto Lb9
            r9 = 8
            r2.reset(r9)
            byte[] r10 = r2.data
            r0.peekFully(r10, r5, r9)
            long r10 = r2.readUnsignedInt()
            int r12 = r2.readInt()
            r13 = 1
            int r13 = (r10 > r13 ? 1 : (r10 == r13 ? 0 : -1))
            r14 = 16
            if (r13 != 0) goto L47
            byte[] r10 = r2.data
            r0.peekFully(r10, r9, r9)
            r2.setLimit(r14)
            long r10 = r2.readUnsignedLongToLong()
            goto L5d
        L47:
            r13 = 0
            int r13 = (r10 > r13 ? 1 : (r10 == r13 ? 0 : -1))
            if (r13 != 0) goto L5c
            long r13 = r16.getLength()
            int r15 = (r13 > r3 ? 1 : (r13 == r3 ? 0 : -1))
            if (r15 == 0) goto L5c
            long r10 = r16.getPosition()
            long r13 = r13 - r10
            long r10 = (long) r9
            long r10 = r10 + r13
        L5c:
            r14 = r9
        L5d:
            long r3 = (long) r14
            int r13 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r13 >= 0) goto L63
            return r5
        L63:
            int r6 = r6 + r14
            int r13 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moov
            if (r12 != r13) goto L6b
        L68:
            r3 = -1
            goto L1e
        L6b:
            int r13 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moof
            if (r12 == r13) goto Lb6
            int r13 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvex
            if (r12 != r13) goto L74
            goto Lb6
        L74:
            long r13 = (long) r6
            long r13 = r13 + r10
            long r13 = r13 - r3
            long r8 = (long) r1
            int r8 = (r13 > r8 ? 1 : (r13 == r8 ? 0 : -1))
            if (r8 < 0) goto L7d
            goto Lb9
        L7d:
            long r10 = r10 - r3
            int r3 = (int) r10
            int r6 = r6 + r3
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ftyp
            if (r12 != r4) goto Lb0
            r4 = 8
            if (r3 >= r4) goto L89
            return r5
        L89:
            r2.reset(r3)
            byte[] r4 = r2.data
            r0.peekFully(r4, r5, r3)
            int r3 = r3 / 4
            r4 = r5
        L94:
            if (r4 >= r3) goto Lad
            r8 = 1
            if (r4 != r8) goto L9e
            r9 = 4
            r2.skipBytes(r9)
            goto Laa
        L9e:
            int r9 = r2.readInt()
            boolean r9 = isCompatibleBrand(r9)
            if (r9 == 0) goto Laa
            r7 = r8
            goto Lad
        Laa:
            int r4 = r4 + 1
            goto L94
        Lad:
            if (r7 != 0) goto L68
            return r5
        Lb0:
            if (r3 == 0) goto L68
            r0.advancePeekPosition(r3)
            goto L68
        Lb6:
            r8 = 1
            r0 = r8
            goto Lbb
        Lb9:
            r8 = 1
            r0 = r5
        Lbb:
            if (r7 == 0) goto Lc2
            r1 = r17
            if (r1 != r0) goto Lc2
            r5 = r8
        Lc2:
            return r5
    }

    public static boolean sniffUnfragmented(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException {
            r0 = 0
            boolean r1 = sniffInternal(r1, r0)
            return r1
    }
}

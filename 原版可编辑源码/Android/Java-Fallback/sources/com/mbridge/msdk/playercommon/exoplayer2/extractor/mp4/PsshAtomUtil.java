package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

public final class PsshAtomUtil {
    private static final java.lang.String TAG = "PsshAtomUtil";

    private static class PsshAtom {
        private final byte[] schemeData;
        private final java.util.UUID uuid;
        private final int version;

        public PsshAtom(java.util.UUID r1, int r2, byte[] r3) {
                r0 = this;
                r0.<init>()
                r0.uuid = r1
                r0.version = r2
                r0.schemeData = r3
                return
        }

        static java.util.UUID access$000(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom r0) {
                java.util.UUID r0 = r0.uuid
                return r0
        }

        static int access$100(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom r0) {
                int r0 = r0.version
                return r0
        }

        static byte[] access$200(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom r0) {
                byte[] r0 = r0.schemeData
                return r0
        }
    }

    private PsshAtomUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] buildPsshAtom(java.util.UUID r1, byte[] r2) {
            r0 = 0
            byte[] r1 = buildPsshAtom(r1, r0, r2)
            return r1
    }

    public static byte[] buildPsshAtom(java.util.UUID r7, java.util.UUID[] r8, byte[] r9) {
            r0 = 0
            if (r8 == 0) goto L5
            r1 = 1
            goto L6
        L5:
            r1 = r0
        L6:
            if (r9 == 0) goto La
            int r2 = r9.length
            goto Lb
        La:
            r2 = r0
        Lb:
            int r3 = r2 + 32
            if (r1 == 0) goto L15
            int r4 = r8.length
            int r4 = r4 * 16
            int r4 = r4 + 4
            int r3 = r3 + r4
        L15:
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r3)
            r4.putInt(r3)
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_pssh
            r4.putInt(r3)
            if (r1 == 0) goto L26
            r3 = 16777216(0x1000000, float:2.3509887E-38)
            goto L27
        L26:
            r3 = r0
        L27:
            r4.putInt(r3)
            long r5 = r7.getMostSignificantBits()
            r4.putLong(r5)
            long r5 = r7.getLeastSignificantBits()
            r4.putLong(r5)
            if (r1 == 0) goto L54
            int r7 = r8.length
            r4.putInt(r7)
            int r7 = r8.length
        L3f:
            if (r0 >= r7) goto L54
            r1 = r8[r0]
            long r5 = r1.getMostSignificantBits()
            r4.putLong(r5)
            long r5 = r1.getLeastSignificantBits()
            r4.putLong(r5)
            int r0 = r0 + 1
            goto L3f
        L54:
            if (r2 == 0) goto L5d
            int r7 = r9.length
            r4.putInt(r7)
            r4.put(r9)
        L5d:
            byte[] r7 = r4.array()
            return r7
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom parsePsshAtom(byte[] r9) {
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>(r9)
            int r9 = r0.limit()
            r1 = 0
            r2 = 32
            if (r9 >= r2) goto Lf
            return r1
        Lf:
            r9 = 0
            r0.setPosition(r9)
            int r2 = r0.readInt()
            int r3 = r0.bytesLeft()
            int r3 = r3 + 4
            if (r2 == r3) goto L20
            return r1
        L20:
            int r2 = r0.readInt()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_pssh
            if (r2 == r3) goto L29
            return r1
        L29:
            int r2 = r0.readInt()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r2)
            r3 = 1
            if (r2 <= r3) goto L4b
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Unsupported pssh version: "
            r9.append(r0)
            r9.append(r2)
            java.lang.String r9 = r9.toString()
            java.lang.String r0 = "PsshAtomUtil"
            android.util.Log.w(r0, r9)
            return r1
        L4b:
            java.util.UUID r4 = new java.util.UUID
            long r5 = r0.readLong()
            long r7 = r0.readLong()
            r4.<init>(r5, r7)
            if (r2 != r3) goto L63
            int r3 = r0.readUnsignedIntToInt()
            int r3 = r3 * 16
            r0.skipBytes(r3)
        L63:
            int r3 = r0.readUnsignedIntToInt()
            int r5 = r0.bytesLeft()
            if (r3 == r5) goto L6e
            return r1
        L6e:
            byte[] r1 = new byte[r3]
            r0.readBytes(r1, r9, r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil$PsshAtom r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil$PsshAtom
            r9.<init>(r4, r2, r1)
            return r9
    }

    public static byte[] parseSchemeSpecificData(byte[] r3, java.util.UUID r4) {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil$PsshAtom r3 = parsePsshAtom(r3)
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            if (r4 == 0) goto L3c
            java.util.UUID r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom.access$000(r3)
            boolean r1 = r4.equals(r1)
            if (r1 != 0) goto L3c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "UUID mismatch. Expected: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ", got: "
            r1.append(r4)
            java.util.UUID r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom.access$000(r3)
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = "PsshAtomUtil"
            android.util.Log.w(r4, r3)
            return r0
        L3c:
            byte[] r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom.access$200(r3)
            return r3
    }

    public static java.util.UUID parseUuid(byte[] r0) {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil$PsshAtom r0 = parsePsshAtom(r0)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom.access$000(r0)
            return r0
    }

    public static int parseVersion(byte[] r0) {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil$PsshAtom r0 = parsePsshAtom(r0)
            if (r0 != 0) goto L8
            r0 = -1
            return r0
        L8:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.PsshAtom.access$100(r0)
            return r0
    }
}

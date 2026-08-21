package com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg;

public final class EventMessageDecoder implements com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder {
    public EventMessageDecoder() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata decode(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r17) {
            r16 = this;
            r0 = r17
            java.nio.ByteBuffer r0 = r0.data
            byte[] r1 = r0.array()
            int r0 = r0.limit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2.<init>(r1, r0)
            java.lang.String r4 = r2.readNullTerminatedString()
            java.lang.String r5 = r2.readNullTerminatedString()
            long r12 = r2.readUnsignedInt()
            long r6 = r2.readUnsignedInt()
            r8 = 1000000(0xf4240, double:4.940656E-318)
            r10 = r12
            long r14 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r6, r8, r10)
            long r6 = r2.readUnsignedInt()
            r8 = 1000(0x3e8, double:4.94E-321)
            long r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r6, r8, r10)
            long r8 = r2.readUnsignedInt()
            int r2 = r2.getPosition()
            byte[] r10 = java.util.Arrays.copyOfRange(r1, r2, r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[r1]
            com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage r2 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage
            r3 = r2
            r11 = r14
            r3.<init>(r4, r5, r6, r8, r10, r11)
            r3 = 0
            r1[r3] = r2
            r0.<init>(r1)
            return r0
    }
}

package com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg;

public final class EventMessageEncoder {
    private final java.io.ByteArrayOutputStream byteArrayOutputStream;
    private final java.io.DataOutputStream dataOutputStream;

    public EventMessageEncoder() {
            r2 = this;
            r2.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r1 = 512(0x200, float:7.17E-43)
            r0.<init>(r1)
            r2.byteArrayOutputStream = r0
            java.io.DataOutputStream r0 = new java.io.DataOutputStream
            java.io.ByteArrayOutputStream r1 = r2.byteArrayOutputStream
            r0.<init>(r1)
            r2.dataOutputStream = r0
            return
    }

    private static void writeNullTerminatedString(java.io.DataOutputStream r0, java.lang.String r1) throws java.io.IOException {
            r0.writeBytes(r1)
            r1 = 0
            r0.writeByte(r1)
            return
    }

    private static void writeUnsignedInt(java.io.DataOutputStream r2, long r3) throws java.io.IOException {
            r0 = 24
            long r0 = r3 >>> r0
            int r0 = (int) r0
            r0 = r0 & 255(0xff, float:3.57E-43)
            r2.writeByte(r0)
            r0 = 16
            long r0 = r3 >>> r0
            int r0 = (int) r0
            r0 = r0 & 255(0xff, float:3.57E-43)
            r2.writeByte(r0)
            r0 = 8
            long r0 = r3 >>> r0
            int r0 = (int) r0
            r0 = r0 & 255(0xff, float:3.57E-43)
            r2.writeByte(r0)
            int r3 = (int) r3
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2.writeByte(r3)
            return
    }

    public final byte[] encode(com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage r10, long r11) {
            r9 = this;
            r0 = 0
            int r0 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r0 < 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            java.io.ByteArrayOutputStream r0 = r9.byteArrayOutputStream
            r0.reset()
            java.io.DataOutputStream r0 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            java.lang.String r1 = r10.schemeIdUri     // Catch: java.io.IOException -> L62
            writeNullTerminatedString(r0, r1)     // Catch: java.io.IOException -> L62
            java.lang.String r0 = r10.value     // Catch: java.io.IOException -> L62
            if (r0 == 0) goto L1f
            java.lang.String r0 = r10.value     // Catch: java.io.IOException -> L62
            goto L21
        L1f:
            java.lang.String r0 = ""
        L21:
            java.io.DataOutputStream r1 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            writeNullTerminatedString(r1, r0)     // Catch: java.io.IOException -> L62
            java.io.DataOutputStream r0 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            writeUnsignedInt(r0, r11)     // Catch: java.io.IOException -> L62
            long r1 = r10.presentationTimeUs     // Catch: java.io.IOException -> L62
            r5 = 1000000(0xf4240, double:4.940656E-318)
            r3 = r11
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r1, r3, r5)     // Catch: java.io.IOException -> L62
            java.io.DataOutputStream r2 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            writeUnsignedInt(r2, r0)     // Catch: java.io.IOException -> L62
            long r3 = r10.durationMs     // Catch: java.io.IOException -> L62
            r7 = 1000(0x3e8, double:4.94E-321)
            r5 = r11
            long r11 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r3, r5, r7)     // Catch: java.io.IOException -> L62
            java.io.DataOutputStream r0 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            writeUnsignedInt(r0, r11)     // Catch: java.io.IOException -> L62
            java.io.DataOutputStream r11 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            long r0 = r10.id     // Catch: java.io.IOException -> L62
            writeUnsignedInt(r11, r0)     // Catch: java.io.IOException -> L62
            java.io.DataOutputStream r11 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            byte[] r10 = r10.messageData     // Catch: java.io.IOException -> L62
            r11.write(r10)     // Catch: java.io.IOException -> L62
            java.io.DataOutputStream r10 = r9.dataOutputStream     // Catch: java.io.IOException -> L62
            r10.flush()     // Catch: java.io.IOException -> L62
            java.io.ByteArrayOutputStream r10 = r9.byteArrayOutputStream     // Catch: java.io.IOException -> L62
            byte[] r10 = r10.toByteArray()     // Catch: java.io.IOException -> L62
            return r10
        L62:
            r10 = move-exception
            java.lang.RuntimeException r11 = new java.lang.RuntimeException
            r11.<init>(r10)
            throw r11
    }
}

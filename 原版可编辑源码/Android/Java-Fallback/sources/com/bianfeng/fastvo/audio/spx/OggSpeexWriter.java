package com.bianfeng.fastvo.audio.spx;

public class OggSpeexWriter extends com.bianfeng.fastvo.audio.spx.AudioFileWriter {
    public static final int PACKETS_PER_OGG_PAGE = 250;
    private int channels;
    private byte[] dataBuffer;
    private int dataBufferPtr;
    private long granulepos;
    private byte[] headerBuffer;
    private int headerBufferPtr;
    private int mode;
    private int nframes;
    private java.io.OutputStream out;
    private int packetCount;
    private int pageCount;
    private int sampleRate;
    private int streamSerialNumber;
    private boolean vbr;

    public OggSpeexWriter() {
            r2 = this;
            r2.<init>()
            int r0 = r2.streamSerialNumber
            if (r0 != 0) goto L12
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            int r0 = r0.nextInt()
            r2.streamSerialNumber = r0
        L12:
            r0 = 65565(0x1001d, float:9.1876E-41)
            byte[] r0 = new byte[r0]
            r2.dataBuffer = r0
            r0 = 0
            r2.dataBufferPtr = r0
            r1 = 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]
            r2.headerBuffer = r1
            r2.headerBufferPtr = r0
            r2.pageCount = r0
            r2.packetCount = r0
            r0 = 0
            r2.granulepos = r0
            return
    }

    public OggSpeexWriter(int r1, int r2, int r3, int r4, boolean r5) {
            r0 = this;
            r0.<init>()
            r0.setFormat(r1, r2, r3, r4, r5)
            return
    }

    private void flush(boolean r9) throws java.io.IOException {
            r8 = this;
            r0 = 0
            if (r9 == 0) goto L6
            r9 = 4
            r1 = 4
            goto L7
        L6:
            r1 = 0
        L7:
            long r2 = r8.granulepos
            int r4 = r8.streamSerialNumber
            int r5 = r8.pageCount
            int r9 = r5 + 1
            r8.pageCount = r9
            int r6 = r8.packetCount
            byte[] r7 = r8.headerBuffer
            byte[] r9 = buildOggPageHeader(r1, r2, r4, r5, r6, r7)
            int r1 = r9.length
            int r1 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r0, r9, r0, r1)
            byte[] r2 = r8.dataBuffer
            int r3 = r8.dataBufferPtr
            int r1 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r1, r2, r0, r3)
            r2 = 22
            writeInt(r9, r2, r1)
            java.io.OutputStream r1 = r8.out
            r1.write(r9)
            java.io.OutputStream r9 = r8.out
            byte[] r1 = r8.dataBuffer
            int r2 = r8.dataBufferPtr
            r9.write(r1, r0, r2)
            r8.dataBufferPtr = r0
            r8.headerBufferPtr = r0
            r8.packetCount = r0
            return
    }

    private void setFormat(int r1, int r2, int r3, int r4, boolean r5) {
            r0 = this;
            r0.mode = r1
            r0.sampleRate = r2
            r0.channels = r3
            r0.nframes = r4
            r0.vbr = r5
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.flush(r0)
            java.io.OutputStream r0 = r1.out
            r0.close()
            return
    }

    @Override
    public void open(java.io.File r2) throws java.io.IOException {
            r1 = this;
            r2.delete()
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r2)
            r1.out = r0
            return
    }

    @Override
    public void open(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r1.open(r0)
            return
    }

    public void setSerialNumber(int r1) {
            r0 = this;
            r0.streamSerialNumber = r1
            return
    }

    @Override
    public void writeHeader(java.lang.String r18) throws java.io.IOException {
            r17 = this;
            r0 = r17
            int r4 = r0.streamSerialNumber
            int r5 = r0.pageCount
            int r1 = r5 + 1
            r0.pageCount = r1
            r8 = 1
            byte[] r7 = new byte[r8]
            r1 = 80
            r9 = 0
            r7[r9] = r1
            r1 = 2
            r2 = 0
            r6 = 1
            byte[] r1 = buildOggPageHeader(r1, r2, r4, r5, r6, r7)
            int r2 = r0.sampleRate
            int r3 = r0.mode
            int r4 = r0.channels
            boolean r5 = r0.vbr
            int r6 = r0.nframes
            byte[] r2 = buildSpeexHeader(r2, r3, r4, r5, r6)
            int r3 = r1.length
            int r3 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r9, r1, r9, r3)
            int r4 = r2.length
            int r3 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r3, r2, r9, r4)
            r4 = 22
            writeInt(r1, r4, r3)
            java.io.OutputStream r3 = r0.out
            r3.write(r1)
            java.io.OutputStream r1 = r0.out
            r1.write(r2)
            int r13 = r0.streamSerialNumber
            int r14 = r0.pageCount
            int r1 = r14 + 1
            r0.pageCount = r1
            byte[] r1 = new byte[r8]
            int r2 = r18.length()
            int r2 = r2 + 8
            byte r2 = (byte) r2
            r1[r9] = r2
            r10 = 0
            r11 = 0
            r15 = 1
            r16 = r1
            byte[] r1 = buildOggPageHeader(r10, r11, r13, r14, r15, r16)
            byte[] r2 = buildSpeexComment(r18)
            int r3 = r1.length
            int r3 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r9, r1, r9, r3)
            int r5 = r2.length
            int r3 = com.bianfeng.fastvo.audio.spx.OggCrc.checksum(r3, r2, r9, r5)
            writeInt(r1, r4, r3)
            java.io.OutputStream r3 = r0.out
            r3.write(r1)
            java.io.OutputStream r1 = r0.out
            r1.write(r2)
            return
    }

    @Override
    public void writePacket(byte[] r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            if (r6 > 0) goto L3
            return
        L3:
            int r0 = r3.packetCount
            r1 = 250(0xfa, float:3.5E-43)
            if (r0 <= r1) goto Ld
            r0 = 0
            r3.flush(r0)
        Ld:
            byte[] r0 = r3.dataBuffer
            int r1 = r3.dataBufferPtr
            java.lang.System.arraycopy(r4, r5, r0, r1, r6)
            int r4 = r3.dataBufferPtr
            int r4 = r4 + r6
            r3.dataBufferPtr = r4
            byte[] r4 = r3.headerBuffer
            int r5 = r3.headerBufferPtr
            int r0 = r5 + 1
            r3.headerBufferPtr = r0
            byte r6 = (byte) r6
            r4[r5] = r6
            int r4 = r3.packetCount
            r5 = 1
            int r4 = r4 + r5
            r3.packetCount = r4
            long r0 = r3.granulepos
            int r4 = r3.nframes
            int r6 = r3.mode
            r2 = 2
            if (r6 != r2) goto L36
            r5 = 640(0x280, float:8.97E-43)
            goto L3d
        L36:
            if (r6 != r5) goto L3b
            r5 = 320(0x140, float:4.48E-43)
            goto L3d
        L3b:
            r5 = 160(0xa0, float:2.24E-43)
        L3d:
            int r4 = r4 * r5
            long r4 = (long) r4
            long r0 = r0 + r4
            r3.granulepos = r0
            return
    }
}

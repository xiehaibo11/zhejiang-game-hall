package com.bianfeng.fastvo.audio.spx;

public abstract class AudioFileWriter {
    public AudioFileWriter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] buildOggPageHeader(int r10, long r11, int r13, int r14, int r15, byte[] r16) {
            int r0 = r15 + 27
            byte[] r9 = new byte[r0]
            r1 = 0
            r0 = r9
            r2 = r10
            r3 = r11
            r5 = r13
            r6 = r14
            r7 = r15
            r8 = r16
            writeOggPageHeader(r0, r1, r2, r3, r5, r6, r7, r8)
            return r9
    }

    public static byte[] buildSpeexComment(java.lang.String r2) {
            int r0 = r2.length()
            int r0 = r0 + 8
            byte[] r0 = new byte[r0]
            r1 = 0
            writeSpeexComment(r0, r1, r2)
            return r0
    }

    public static byte[] buildSpeexHeader(int r8, int r9, int r10, boolean r11, int r12) {
            r0 = 80
            byte[] r0 = new byte[r0]
            r2 = 0
            r1 = r0
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            writeSpeexHeader(r1, r2, r3, r4, r5, r6, r7)
            return r0
    }

    public static void writeInt(java.io.DataOutput r1, int r2) throws java.io.IOException {
            r0 = r2 & 255(0xff, float:3.57E-43)
            r1.writeByte(r0)
            int r0 = r2 >>> 8
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1.writeByte(r0)
            int r0 = r2 >>> 16
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1.writeByte(r0)
            int r2 = r2 >>> 24
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1.writeByte(r2)
            return
    }

    public static void writeInt(java.io.OutputStream r1, int r2) throws java.io.IOException {
            r0 = r2 & 255(0xff, float:3.57E-43)
            r1.write(r0)
            int r0 = r2 >>> 8
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1.write(r0)
            int r0 = r2 >>> 16
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1.write(r0)
            int r2 = r2 >>> 24
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1.write(r2)
            return
    }

    public static void writeInt(byte[] r2, int r3, int r4) {
            r0 = r4 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r2[r3] = r0
            int r0 = r3 + 1
            int r1 = r4 >>> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2[r0] = r1
            int r0 = r3 + 2
            int r1 = r4 >>> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2[r0] = r1
            int r3 = r3 + 3
            int r4 = r4 >>> 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r2[r3] = r4
            return
    }

    public static void writeLong(java.io.OutputStream r4, long r5) throws java.io.IOException {
            r0 = 255(0xff, double:1.26E-321)
            long r2 = r5 & r0
            int r3 = (int) r2
            r4.write(r3)
            r2 = 8
            long r2 = r5 >>> r2
            long r2 = r2 & r0
            int r3 = (int) r2
            r4.write(r3)
            r2 = 16
            long r2 = r5 >>> r2
            long r2 = r2 & r0
            int r3 = (int) r2
            r4.write(r3)
            r2 = 24
            long r2 = r5 >>> r2
            long r2 = r2 & r0
            int r3 = (int) r2
            r4.write(r3)
            r2 = 32
            long r2 = r5 >>> r2
            long r2 = r2 & r0
            int r3 = (int) r2
            r4.write(r3)
            r2 = 40
            long r2 = r5 >>> r2
            long r2 = r2 & r0
            int r3 = (int) r2
            r4.write(r3)
            r2 = 48
            long r2 = r5 >>> r2
            long r2 = r2 & r0
            int r3 = (int) r2
            r4.write(r3)
            r2 = 56
            long r5 = r5 >>> r2
            long r5 = r5 & r0
            int r6 = (int) r5
            r4.write(r6)
            return
    }

    public static void writeLong(byte[] r5, int r6, long r7) {
            r0 = 255(0xff, double:1.26E-321)
            long r2 = r7 & r0
            int r3 = (int) r2
            byte r2 = (byte) r3
            r5[r6] = r2
            int r2 = r6 + 1
            r3 = 8
            long r3 = r7 >>> r3
            long r3 = r3 & r0
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r2] = r3
            int r2 = r6 + 2
            r3 = 16
            long r3 = r7 >>> r3
            long r3 = r3 & r0
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r2] = r3
            int r2 = r6 + 3
            r3 = 24
            long r3 = r7 >>> r3
            long r3 = r3 & r0
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r2] = r3
            int r2 = r6 + 4
            r3 = 32
            long r3 = r7 >>> r3
            long r3 = r3 & r0
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r2] = r3
            int r2 = r6 + 5
            r3 = 40
            long r3 = r7 >>> r3
            long r3 = r3 & r0
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r2] = r3
            int r2 = r6 + 6
            r3 = 48
            long r3 = r7 >>> r3
            long r3 = r3 & r0
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r2] = r3
            int r6 = r6 + 7
            r2 = 56
            long r7 = r7 >>> r2
            long r7 = r7 & r0
            int r8 = (int) r7
            byte r7 = (byte) r8
            r5[r6] = r7
            return
    }

    public static int writeOggPageHeader(byte[] r2, int r3, int r4, long r5, int r7, int r8, int r9, byte[] r10) {
            java.lang.String r0 = "OggS"
            writeString(r2, r3, r0)
            int r0 = r3 + 4
            r1 = 0
            r2[r0] = r1
            int r0 = r3 + 5
            byte r4 = (byte) r4
            r2[r0] = r4
            int r4 = r3 + 6
            writeLong(r2, r4, r5)
            int r4 = r3 + 14
            writeInt(r2, r4, r7)
            int r4 = r3 + 18
            writeInt(r2, r4, r8)
            int r4 = r3 + 22
            writeInt(r2, r4, r1)
            int r4 = r3 + 26
            byte r5 = (byte) r9
            r2[r4] = r5
            int r3 = r3 + 27
            java.lang.System.arraycopy(r10, r1, r2, r3, r9)
            int r9 = r9 + 27
            return r9
    }

    public static void writeShort(java.io.DataOutput r1, short r2) throws java.io.IOException {
            r0 = r2 & 255(0xff, float:3.57E-43)
            r1.writeByte(r0)
            int r2 = r2 >>> 8
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1.writeByte(r2)
            return
    }

    public static void writeShort(java.io.OutputStream r1, short r2) throws java.io.IOException {
            r0 = r2 & 255(0xff, float:3.57E-43)
            r1.write(r0)
            int r2 = r2 >>> 8
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1.write(r2)
            return
    }

    public static void writeShort(byte[] r1, int r2, int r3) {
            r0 = r3 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r1[r2] = r0
            int r2 = r2 + 1
            int r3 = r3 >>> 8
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r1[r2] = r3
            return
    }

    public static int writeSpeexComment(byte[] r2, int r3, java.lang.String r4) {
            int r0 = r4.length()
            writeInt(r2, r3, r0)
            int r1 = r3 + 4
            writeString(r2, r1, r4)
            int r3 = r3 + r0
            int r3 = r3 + 4
            r4 = 0
            writeInt(r2, r3, r4)
            int r0 = r0 + 8
            return r0
    }

    public static int writeSpeexHeader(byte[] r4, int r5, int r6, int r7, int r8, boolean r9, int r10) {
            java.lang.String r0 = "Speex   "
            writeString(r4, r5, r0)
            int r0 = r5 + 8
            java.lang.String r1 = "speex-1.2rc"
            writeString(r4, r0, r1)
            r0 = 11
            byte[] r1 = new byte[r0]
            int r2 = r5 + 17
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r4, r2, r0)
            int r0 = r5 + 28
            r1 = 1
            writeInt(r4, r0, r1)
            int r0 = r5 + 32
            r1 = 80
            writeInt(r4, r0, r1)
            int r0 = r5 + 36
            writeInt(r4, r0, r6)
            int r6 = r5 + 40
            writeInt(r4, r6, r7)
            int r6 = r5 + 44
            r0 = 4
            writeInt(r4, r6, r0)
            int r6 = r5 + 48
            writeInt(r4, r6, r8)
            int r6 = r5 + 52
            r8 = -1
            writeInt(r4, r6, r8)
            int r6 = r5 + 56
            r8 = 160(0xa0, float:2.24E-43)
            int r7 = r8 << r7
            writeInt(r4, r6, r7)
            int r6 = r5 + 60
            writeInt(r4, r6, r9)
            int r6 = r5 + 64
            writeInt(r4, r6, r10)
            int r6 = r5 + 68
            writeInt(r4, r6, r3)
            int r6 = r5 + 72
            writeInt(r4, r6, r3)
            int r5 = r5 + 76
            writeInt(r4, r5, r3)
            return r1
    }

    public static void writeString(byte[] r2, int r3, java.lang.String r4) {
            byte[] r4 = r4.getBytes()
            int r0 = r4.length
            r1 = 0
            java.lang.System.arraycopy(r4, r1, r2, r3, r0)
            return
    }

    public abstract void close() throws java.io.IOException;

    public abstract void open(java.io.File r1) throws java.io.IOException;

    public abstract void open(java.lang.String r1) throws java.io.IOException;

    public abstract void writeHeader(java.lang.String r1) throws java.io.IOException;

    public abstract void writePacket(byte[] r1, int r2, int r3) throws java.io.IOException;
}

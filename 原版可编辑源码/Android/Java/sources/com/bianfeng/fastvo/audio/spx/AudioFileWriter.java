package com.bianfeng.fastvo.audio.spx;

import java.io.DataOutput;
import java.io.File;
import java.io.IOException;
import java.io.OutputStream;

public abstract class AudioFileWriter {
    public abstract void close() throws IOException;

    public abstract void open(File file) throws IOException;

    public abstract void open(String str) throws IOException;

    public abstract void writeHeader(String str) throws IOException;

    public abstract void writePacket(byte[] bArr, int i, int i2) throws IOException;

    public static int writeOggPageHeader(byte[] bArr, int i, int i2, long j, int i3, int i4, int i5, byte[] bArr2) {
        writeString(bArr, i, "OggS");
        bArr[i + 4] = 0;
        bArr[i + 5] = (byte) i2;
        writeLong(bArr, i + 6, j);
        writeInt(bArr, i + 14, i3);
        writeInt(bArr, i + 18, i4);
        writeInt(bArr, i + 22, 0);
        bArr[i + 26] = (byte) i5;
        System.arraycopy(bArr2, 0, bArr, i + 27, i5);
        return i5 + 27;
    }

    public static byte[] buildOggPageHeader(int i, long j, int i2, int i3, int i4, byte[] bArr) {
        byte[] bArr2 = new byte[i4 + 27];
        writeOggPageHeader(bArr2, 0, i, j, i2, i3, i4, bArr);
        return bArr2;
    }

    public static int writeSpeexHeader(byte[] bArr, int i, int i2, int i3, int i4, boolean z, int i5) {
        writeString(bArr, i, "Speex   ");
        writeString(bArr, i + 8, "speex-1.2rc");
        System.arraycopy(new byte[11], 0, bArr, i + 17, 11);
        writeInt(bArr, i + 28, 1);
        writeInt(bArr, i + 32, 80);
        writeInt(bArr, i + 36, i2);
        writeInt(bArr, i + 40, i3);
        writeInt(bArr, i + 44, 4);
        writeInt(bArr, i + 48, i4);
        writeInt(bArr, i + 52, -1);
        writeInt(bArr, i + 56, 160 << i3);
        writeInt(bArr, i + 60, z ? 1 : 0);
        writeInt(bArr, i + 64, i5);
        writeInt(bArr, i + 68, 0);
        writeInt(bArr, i + 72, 0);
        writeInt(bArr, i + 76, 0);
        return 80;
    }

    public static byte[] buildSpeexHeader(int i, int i2, int i3, boolean z, int i4) {
        byte[] bArr = new byte[80];
        writeSpeexHeader(bArr, 0, i, i2, i3, z, i4);
        return bArr;
    }

    public static int writeSpeexComment(byte[] bArr, int i, String str) {
        int length = str.length();
        writeInt(bArr, i, length);
        writeString(bArr, i + 4, str);
        writeInt(bArr, i + length + 4, 0);
        return length + 8;
    }

    public static byte[] buildSpeexComment(String str) {
        byte[] bArr = new byte[str.length() + 8];
        writeSpeexComment(bArr, 0, str);
        return bArr;
    }

    public static void writeShort(DataOutput dataOutput, short s) throws IOException {
        dataOutput.writeByte(s & 255);
        dataOutput.writeByte((s >>> 8) & 255);
    }

    public static void writeInt(DataOutput dataOutput, int i) throws IOException {
        dataOutput.writeByte(i & 255);
        dataOutput.writeByte((i >>> 8) & 255);
        dataOutput.writeByte((i >>> 16) & 255);
        dataOutput.writeByte((i >>> 24) & 255);
    }

    public static void writeShort(OutputStream outputStream, short s) throws IOException {
        outputStream.write(s & 255);
        outputStream.write((s >>> 8) & 255);
    }

    public static void writeInt(OutputStream outputStream, int i) throws IOException {
        outputStream.write(i & 255);
        outputStream.write((i >>> 8) & 255);
        outputStream.write((i >>> 16) & 255);
        outputStream.write((i >>> 24) & 255);
    }

    public static void writeLong(OutputStream outputStream, long j) throws IOException {
        outputStream.write((int) (j & 255));
        outputStream.write((int) ((j >>> 8) & 255));
        outputStream.write((int) ((j >>> 16) & 255));
        outputStream.write((int) ((j >>> 24) & 255));
        outputStream.write((int) ((j >>> 32) & 255));
        outputStream.write((int) ((j >>> 40) & 255));
        outputStream.write((int) ((j >>> 48) & 255));
        outputStream.write((int) ((j >>> 56) & 255));
    }

    public static void writeShort(byte[] bArr, int i, int i2) {
        bArr[i] = (byte) (i2 & 255);
        bArr[i + 1] = (byte) ((i2 >>> 8) & 255);
    }

    public static void writeInt(byte[] bArr, int i, int i2) {
        bArr[i] = (byte) (i2 & 255);
        bArr[i + 1] = (byte) ((i2 >>> 8) & 255);
        bArr[i + 2] = (byte) ((i2 >>> 16) & 255);
        bArr[i + 3] = (byte) ((i2 >>> 24) & 255);
    }

    public static void writeLong(byte[] bArr, int i, long j) {
        bArr[i] = (byte) (j & 255);
        bArr[i + 1] = (byte) ((j >>> 8) & 255);
        bArr[i + 2] = (byte) ((j >>> 16) & 255);
        bArr[i + 3] = (byte) ((j >>> 24) & 255);
        bArr[i + 4] = (byte) ((j >>> 32) & 255);
        bArr[i + 5] = (byte) ((j >>> 40) & 255);
        bArr[i + 6] = (byte) ((j >>> 48) & 255);
        bArr[i + 7] = (byte) ((j >>> 56) & 255);
    }

    public static void writeString(byte[] bArr, int i, String str) {
        byte[] bytes = str.getBytes();
        System.arraycopy(bytes, 0, bArr, i, bytes.length);
    }
}

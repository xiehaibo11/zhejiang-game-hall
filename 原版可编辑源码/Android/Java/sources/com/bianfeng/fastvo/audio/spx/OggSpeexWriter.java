package com.bianfeng.fastvo.audio.spx;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.util.Random;

public class OggSpeexWriter extends AudioFileWriter {
    public static final int PACKETS_PER_OGG_PAGE = 250;
    private int channels;
    private byte[] dataBuffer;
    private int dataBufferPtr;
    private long granulepos;
    private byte[] headerBuffer;
    private int headerBufferPtr;
    private int mode;
    private int nframes;
    private OutputStream out;
    private int packetCount;
    private int pageCount;
    private int sampleRate;
    private int streamSerialNumber;
    private boolean vbr;

    public OggSpeexWriter() {
        if (this.streamSerialNumber == 0) {
            this.streamSerialNumber = new Random().nextInt();
        }
        this.dataBuffer = new byte[65565];
        this.dataBufferPtr = 0;
        this.headerBuffer = new byte[255];
        this.headerBufferPtr = 0;
        this.pageCount = 0;
        this.packetCount = 0;
        this.granulepos = 0L;
    }

    public OggSpeexWriter(int i, int i2, int i3, int i4, boolean z) {
        this();
        setFormat(i, i2, i3, i4, z);
    }

    private void setFormat(int i, int i2, int i3, int i4, boolean z) {
        this.mode = i;
        this.sampleRate = i2;
        this.channels = i3;
        this.nframes = i4;
        this.vbr = z;
    }

    public void setSerialNumber(int i) {
        this.streamSerialNumber = i;
    }

    @Override
    public void close() throws IOException {
        flush(true);
        this.out.close();
    }

    @Override
    public void open(File file) throws IOException {
        file.delete();
        this.out = new FileOutputStream(file);
    }

    @Override
    public void open(String str) throws IOException {
        open(new File(str));
    }

    @Override
    public void writeHeader(String str) throws IOException {
        int i = this.streamSerialNumber;
        int i2 = this.pageCount;
        this.pageCount = i2 + 1;
        byte[] bArrBuildOggPageHeader = buildOggPageHeader(2, 0L, i, i2, 1, new byte[]{80});
        byte[] bArrBuildSpeexHeader = buildSpeexHeader(this.sampleRate, this.mode, this.channels, this.vbr, this.nframes);
        writeInt(bArrBuildOggPageHeader, 22, OggCrc.checksum(OggCrc.checksum(0, bArrBuildOggPageHeader, 0, bArrBuildOggPageHeader.length), bArrBuildSpeexHeader, 0, bArrBuildSpeexHeader.length));
        this.out.write(bArrBuildOggPageHeader);
        this.out.write(bArrBuildSpeexHeader);
        int i3 = this.streamSerialNumber;
        int i4 = this.pageCount;
        this.pageCount = i4 + 1;
        byte[] bArrBuildOggPageHeader2 = buildOggPageHeader(0, 0L, i3, i4, 1, new byte[]{(byte) (str.length() + 8)});
        byte[] bArrBuildSpeexComment = buildSpeexComment(str);
        writeInt(bArrBuildOggPageHeader2, 22, OggCrc.checksum(OggCrc.checksum(0, bArrBuildOggPageHeader2, 0, bArrBuildOggPageHeader2.length), bArrBuildSpeexComment, 0, bArrBuildSpeexComment.length));
        this.out.write(bArrBuildOggPageHeader2);
        this.out.write(bArrBuildSpeexComment);
    }

    @Override
    public void writePacket(byte[] bArr, int i, int i2) throws IOException {
        if (i2 <= 0) {
            return;
        }
        if (this.packetCount > 250) {
            flush(false);
        }
        System.arraycopy(bArr, i, this.dataBuffer, this.dataBufferPtr, i2);
        this.dataBufferPtr += i2;
        byte[] bArr2 = this.headerBuffer;
        int i3 = this.headerBufferPtr;
        this.headerBufferPtr = i3 + 1;
        bArr2[i3] = (byte) i2;
        this.packetCount++;
        long j = this.granulepos;
        int i4 = this.nframes;
        int i5 = this.mode;
        this.granulepos = j + ((long) (i4 * (i5 == 2 ? 640 : i5 == 1 ? 320 : 160)));
    }

    private void flush(boolean z) throws IOException {
        int i = z ? 4 : 0;
        long j = this.granulepos;
        int i2 = this.streamSerialNumber;
        int i3 = this.pageCount;
        this.pageCount = i3 + 1;
        byte[] bArrBuildOggPageHeader = buildOggPageHeader(i, j, i2, i3, this.packetCount, this.headerBuffer);
        writeInt(bArrBuildOggPageHeader, 22, OggCrc.checksum(OggCrc.checksum(0, bArrBuildOggPageHeader, 0, bArrBuildOggPageHeader.length), this.dataBuffer, 0, this.dataBufferPtr));
        this.out.write(bArrBuildOggPageHeader);
        this.out.write(this.dataBuffer, 0, this.dataBufferPtr);
        this.dataBufferPtr = 0;
        this.headerBufferPtr = 0;
        this.packetCount = 0;
    }
}

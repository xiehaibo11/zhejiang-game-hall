package com.qihoo360.replugin.ext.parser.struct;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ChunkHeader {
    private long chunkSize;
    private int chunkType;
    private int headerSize;

    public ChunkHeader(int i, int i2, long j) {
        this.chunkType = i;
        this.headerSize = i2;
        this.chunkSize = j;
    }

    public int getBodySize() {
        return (int) (this.chunkSize - ((long) this.headerSize));
    }

    public int getChunkType() {
        return this.chunkType;
    }

    public void setChunkType(int i) {
        this.chunkType = i;
    }

    public int getHeaderSize() {
        return this.headerSize;
    }

    public void setHeaderSize(int i) {
        this.headerSize = i;
    }

    public long getChunkSize() {
        return this.chunkSize;
    }

    public void setChunkSize(long j) {
        this.chunkSize = j;
    }
}

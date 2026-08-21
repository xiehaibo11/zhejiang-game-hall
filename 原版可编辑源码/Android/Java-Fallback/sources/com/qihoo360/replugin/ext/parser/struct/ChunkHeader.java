package com.qihoo360.replugin.ext.parser.struct;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ChunkHeader {
    private long chunkSize;
    private int chunkType;
    private int headerSize;

    public ChunkHeader(int r1, int r2, long r3) {
            r0 = this;
            r0.<init>()
            r0.chunkType = r1
            r0.headerSize = r2
            r0.chunkSize = r3
            return
    }

    public int getBodySize() {
            r4 = this;
            long r0 = r4.chunkSize
            int r2 = r4.headerSize
            long r2 = (long) r2
            long r0 = r0 - r2
            int r0 = (int) r0
            return r0
    }

    public long getChunkSize() {
            r2 = this;
            long r0 = r2.chunkSize
            return r0
    }

    public int getChunkType() {
            r1 = this;
            int r0 = r1.chunkType
            return r0
    }

    public int getHeaderSize() {
            r1 = this;
            int r0 = r1.headerSize
            return r0
    }

    public void setChunkSize(long r1) {
            r0 = this;
            r0.chunkSize = r1
            return
    }

    public void setChunkType(int r1) {
            r0 = this;
            r0.chunkType = r1
            return
    }

    public void setHeaderSize(int r1) {
            r0 = this;
            r0.headerSize = r1
            return
    }
}

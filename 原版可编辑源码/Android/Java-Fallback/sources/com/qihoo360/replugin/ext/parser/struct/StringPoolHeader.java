package com.qihoo360.replugin.ext.parser.struct;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class StringPoolHeader extends com.qihoo360.replugin.ext.parser.struct.ChunkHeader {
    public static final int SORTED_FLAG = 1;
    public static final int UTF8_FLAG = 256;
    private long flags;
    private long stringCount;
    private long stringsStart;
    private long styleCount;
    private long stylesStart;

    public StringPoolHeader(int r1, int r2, long r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public long getFlags() {
            r2 = this;
            long r0 = r2.flags
            return r0
    }

    public long getStringCount() {
            r2 = this;
            long r0 = r2.stringCount
            return r0
    }

    public long getStringsStart() {
            r2 = this;
            long r0 = r2.stringsStart
            return r0
    }

    public long getStyleCount() {
            r2 = this;
            long r0 = r2.styleCount
            return r0
    }

    public long getStylesStart() {
            r2 = this;
            long r0 = r2.stylesStart
            return r0
    }

    public void setFlags(long r1) {
            r0 = this;
            r0.flags = r1
            return
    }

    public void setStringCount(long r1) {
            r0 = this;
            r0.stringCount = r1
            return
    }

    public void setStringsStart(long r1) {
            r0 = this;
            r0.stringsStart = r1
            return
    }

    public void setStyleCount(long r1) {
            r0 = this;
            r0.styleCount = r1
            return
    }

    public void setStylesStart(long r1) {
            r0 = this;
            r0.stylesStart = r1
            return
    }
}

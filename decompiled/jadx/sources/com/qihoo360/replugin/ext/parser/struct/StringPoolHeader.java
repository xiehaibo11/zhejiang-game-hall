package com.qihoo360.replugin.ext.parser.struct;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class StringPoolHeader extends ChunkHeader {
    public static final int SORTED_FLAG = 1;
    public static final int UTF8_FLAG = 256;
    private long flags;
    private long stringCount;
    private long stringsStart;
    private long styleCount;
    private long stylesStart;

    public StringPoolHeader(int i, int i2, long j) {
        super(i, i2, j);
    }

    public long getStringCount() {
        return this.stringCount;
    }

    public void setStringCount(long j) {
        this.stringCount = j;
    }

    public long getStyleCount() {
        return this.styleCount;
    }

    public void setStyleCount(long j) {
        this.styleCount = j;
    }

    public long getFlags() {
        return this.flags;
    }

    public void setFlags(long j) {
        this.flags = j;
    }

    public long getStringsStart() {
        return this.stringsStart;
    }

    public void setStringsStart(long j) {
        this.stringsStart = j;
    }

    public long getStylesStart() {
        return this.stylesStart;
    }

    public void setStylesStart(long j) {
        this.stylesStart = j;
    }
}

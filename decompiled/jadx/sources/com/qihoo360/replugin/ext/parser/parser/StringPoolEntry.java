package com.qihoo360.replugin.ext.parser.parser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class StringPoolEntry {
    private int idx;
    private long offset;

    public StringPoolEntry(int i, long j) {
        this.idx = i;
        this.offset = j;
    }

    public int getIdx() {
        return this.idx;
    }

    public void setIdx(int i) {
        this.idx = i;
    }

    public long getOffset() {
        return this.offset;
    }

    public void setOffset(long j) {
        this.offset = j;
    }
}

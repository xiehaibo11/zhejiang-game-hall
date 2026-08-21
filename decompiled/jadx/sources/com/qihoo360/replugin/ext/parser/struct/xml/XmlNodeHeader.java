package com.qihoo360.replugin.ext.parser.struct.xml;

import com.qihoo360.replugin.ext.parser.struct.ChunkHeader;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class XmlNodeHeader extends ChunkHeader {
    private int commentRef;
    private int lineNum;

    public XmlNodeHeader(int i, int i2, long j) {
        super(i, i2, j);
    }

    public int getLineNum() {
        return this.lineNum;
    }

    public void setLineNum(int i) {
        this.lineNum = i;
    }

    public int getCommentRef() {
        return this.commentRef;
    }

    public void setCommentRef(int i) {
        this.commentRef = i;
    }
}

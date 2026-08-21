package com.qihoo360.replugin.ext.parser.struct.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class XmlNodeHeader extends com.qihoo360.replugin.ext.parser.struct.ChunkHeader {
    private int commentRef;
    private int lineNum;

    public XmlNodeHeader(int r1, int r2, long r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public int getCommentRef() {
            r1 = this;
            int r0 = r1.commentRef
            return r0
    }

    public int getLineNum() {
            r1 = this;
            int r0 = r1.lineNum
            return r0
    }

    public void setCommentRef(int r1) {
            r0 = this;
            r0.commentRef = r1
            return
    }

    public void setLineNum(int r1) {
            r0 = this;
            r0.lineNum = r1
            return
    }
}

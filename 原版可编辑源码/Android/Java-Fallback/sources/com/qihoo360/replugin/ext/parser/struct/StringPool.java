package com.qihoo360.replugin.ext.parser.struct;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class StringPool {
    private java.lang.String[] pool;

    public StringPool(int r1) {
            r0 = this;
            r0.<init>()
            java.lang.String[] r1 = new java.lang.String[r1]
            r0.pool = r1
            return
    }

    public java.lang.String get(int r2) {
            r1 = this;
            java.lang.String[] r0 = r1.pool
            r2 = r0[r2]
            return r2
    }

    public void set(int r2, java.lang.String r3) {
            r1 = this;
            java.lang.String[] r0 = r1.pool
            r0[r2] = r3
            return
    }
}

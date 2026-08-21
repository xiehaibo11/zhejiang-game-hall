package com.qihoo360.replugin.ext.parser.struct;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class StringPool {
    private String[] pool;

    public StringPool(int i) {
        this.pool = new String[i];
    }

    public String get(int i) {
        return this.pool[i];
    }

    public void set(int i, String str) {
        this.pool[i] = str;
    }
}

package com.xiaomi.push;

public class jc {
    public final byte a;
    public final String a;
    public final short a;

    public jc() {
        this("", (byte) 0, (short) 0);
    }

    public jc(String str, byte b, short s) {
        this.a = str;
        this.a = b;
        this.a = s;
    }

    public String toString() {
        return "<TField name:'" + this.a + "' type:" + ((int) this.a) + " field-id:" + ((int) this.a) + ">";
    }
}

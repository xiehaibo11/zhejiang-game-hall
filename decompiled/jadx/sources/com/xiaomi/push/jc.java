package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public class jc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final byte f8248a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public final String f822a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public final short f823a;

    public jc() {
        this("", (byte) 0, (short) 0);
    }

    public jc(String str, byte b, short s) {
        this.f822a = str;
        this.f8248a = b;
        this.f823a = s;
    }

    public String toString() {
        return "<TField name:'" + this.f822a + "' type:" + ((int) this.f8248a) + " field-id:" + ((int) this.f823a) + ">";
    }
}

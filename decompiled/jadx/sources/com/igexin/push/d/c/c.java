package com.igexin.push.d.c;

import okio.Utf8;

/* JADX INFO: loaded from: classes2.dex */
public abstract class c extends com.igexin.b.a.d.a {
    public int i;
    public byte j;
    public byte k = 11;

    protected int a(String str) {
        if (str.equals("UTF-8")) {
            return 1;
        }
        if (str.equals("UTF-16")) {
            return 2;
        }
        if (str.equals("UTF-16BE")) {
            return 16;
        }
        if (str.equals("UTF-16LE")) {
            return 17;
        }
        if (str.equals("GBK")) {
            return 25;
        }
        if (str.equals("GB2312")) {
            return 26;
        }
        if (str.equals("GB18030")) {
            return 27;
        }
        return str.equals("ISO-8859-1") ? 33 : 1;
    }

    protected String a(byte b) {
        int i = b & Utf8.REPLACEMENT_BYTE;
        if (i == 1) {
            return "UTF-8";
        }
        if (i == 2) {
            return "UTF-16";
        }
        if (i == 16) {
            return "UTF-16BE";
        }
        if (i == 17) {
            return "UTF-16LE";
        }
        if (i == 33) {
            return "ISO-8859-1";
        }
        switch (i) {
        }
        return "UTF-8";
    }

    public abstract void a(byte[] bArr);

    @Override // com.igexin.b.a.d.a.e
    public int b_() {
        return this.i;
    }

    public abstract byte[] c();
}

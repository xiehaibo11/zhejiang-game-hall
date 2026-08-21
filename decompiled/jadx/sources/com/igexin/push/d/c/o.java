package com.igexin.push.d.c;

import android.text.TextUtils;
import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public class o extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f2607a;
    public String b = "";
    public String c = "";
    public String d = "";

    public o() {
        this.i = 9;
    }

    private String a(byte[] bArr, int i, int i2) {
        try {
            return new String(bArr, i, i2, "UTF-8");
        } catch (Exception unused) {
            return "";
        }
    }

    @Override // com.igexin.push.d.c.c
    public void a(byte[] bArr) {
        this.f2607a = com.igexin.b.a.b.f.e(bArr, 0);
        int i = 8;
        if (bArr.length > 8) {
            int i2 = bArr[8] & UByte.MAX_VALUE;
            if (i2 > 0) {
                this.b = a(bArr, 9, i2);
                i = i2 + 9;
            } else {
                i = 9;
            }
        }
        if (bArr.length > i) {
            int i3 = i + 1;
            int i4 = bArr[i] & UByte.MAX_VALUE;
            if (i4 > 0) {
                this.c = a(bArr, i3, i4);
                i = i4 + i3;
            } else {
                i = i3;
            }
        }
        if (bArr.length > i) {
            int i5 = i + 1;
            int i6 = bArr[i] & UByte.MAX_VALUE;
            if (i6 > 0) {
                this.d = a(bArr, i5, i6);
            }
        }
    }

    @Override // com.igexin.push.d.c.c
    public byte[] c() {
        if (TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.d)) {
            byte[] bytes = this.b.getBytes();
            byte[] bArr = new byte[bytes.length + 8 + 1];
            com.igexin.b.a.b.f.a(this.f2607a, bArr, 0);
            com.igexin.b.a.b.f.c(bytes.length, bArr, 8);
            System.arraycopy(bytes, 0, bArr, 9, bytes.length);
            return bArr;
        }
        byte[] bytes2 = this.b.getBytes();
        byte[] bytes3 = this.c.getBytes();
        byte[] bytes4 = this.d.getBytes();
        byte[] bArr2 = new byte[bytes2.length + 8 + bytes3.length + bytes4.length + 3];
        com.igexin.b.a.b.f.a(this.f2607a, bArr2, 0);
        com.igexin.b.a.b.f.c(bytes2.length, bArr2, 8);
        System.arraycopy(bytes2, 0, bArr2, 9, bytes2.length);
        int length = 9 + bytes2.length;
        int i = length + 1;
        com.igexin.b.a.b.f.c(bytes3.length, bArr2, length);
        System.arraycopy(bytes3, 0, bArr2, i, bytes3.length);
        int length2 = i + bytes3.length;
        com.igexin.b.a.b.f.c(bytes4.length, bArr2, length2);
        System.arraycopy(bytes4, 0, bArr2, length2 + 1, bytes4.length);
        return bArr2;
    }
}

package com.igexin.push.d.c;

import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public class p extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f2608a;

    public p() {
        this.i = 20;
    }

    @Override // com.igexin.push.d.c.c
    public void a(byte[] bArr) {
        if (bArr.length == 1) {
            this.f2608a = bArr[0] & UByte.MAX_VALUE;
        }
    }

    @Override // com.igexin.push.d.c.c
    public byte[] c() {
        return null;
    }
}

package com.igexin.push.d.c;

/* JADX INFO: loaded from: classes2.dex */
public class h extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte f2601a;
    public byte b;

    public h() {
        this.i = 97;
    }

    @Override // com.igexin.push.d.c.c
    public void a(byte[] bArr) {
        this.f2601a = bArr[0];
        this.b = bArr[1];
    }

    @Override // com.igexin.push.d.c.c
    public byte[] c() {
        return new byte[]{this.f2601a, this.b};
    }
}

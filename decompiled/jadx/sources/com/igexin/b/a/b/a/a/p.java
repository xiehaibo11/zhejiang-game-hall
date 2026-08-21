package com.igexin.b.a.b.a.a;

import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes2.dex */
public class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private BufferedOutputStream f2439a;

    public p(OutputStream outputStream) {
        this.f2439a = new BufferedOutputStream(outputStream);
    }

    public void a(byte[] bArr) throws IOException {
        this.f2439a.write(bArr, 0, bArr.length);
        this.f2439a.flush();
    }
}

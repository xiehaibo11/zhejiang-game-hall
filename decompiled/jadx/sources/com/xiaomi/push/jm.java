package com.xiaomi.push;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes4.dex */
public class jm extends jp {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected InputStream f8256a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected OutputStream f827a;

    protected jm() {
        this.f8256a = null;
        this.f827a = null;
    }

    public jm(OutputStream outputStream) {
        this.f8256a = null;
        this.f827a = null;
        this.f827a = outputStream;
    }

    @Override // com.xiaomi.push.jp
    public int a(byte[] bArr, int i, int i2) throws jq {
        InputStream inputStream = this.f8256a;
        if (inputStream == null) {
            throw new jq(1, "Cannot read from null inputStream");
        }
        try {
            int i3 = inputStream.read(bArr, i, i2);
            if (i3 >= 0) {
                return i3;
            }
            throw new jq(4);
        } catch (IOException e) {
            throw new jq(0, e);
        }
    }

    @Override // com.xiaomi.push.jp
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo569a(byte[] bArr, int i, int i2) throws jq {
        OutputStream outputStream = this.f827a;
        if (outputStream == null) {
            throw new jq(1, "Cannot write to null outputStream");
        }
        try {
            outputStream.write(bArr, i, i2);
        } catch (IOException e) {
            throw new jq(0, e);
        }
    }
}

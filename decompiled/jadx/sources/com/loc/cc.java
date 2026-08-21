package com.loc;

import java.io.ByteArrayOutputStream;
import java.io.IOException;

/* JADX INFO: compiled from: ByteJoinDataStrategy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cc extends ci {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    ByteArrayOutputStream f2900a;

    public cc() {
        this.f2900a = new ByteArrayOutputStream();
    }

    public cc(ci ciVar) {
        super(ciVar);
        this.f2900a = new ByteArrayOutputStream();
    }

    @Override // com.loc.ci
    protected final byte[] a(byte[] bArr) {
        byte[] byteArray = this.f2900a.toByteArray();
        try {
            this.f2900a.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        this.f2900a = new ByteArrayOutputStream();
        return byteArray;
    }

    @Override // com.loc.ci
    public final void b(byte[] bArr) {
        try {
            this.f2900a.write(bArr);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}

package com.huawei.updatesdk.a.a.b;

import java.util.ArrayDeque;
import java.util.Queue;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static final a b = new a();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Queue<byte[]> f2292a = new ArrayDeque(0);

    private a() {
    }

    public static a b() {
        return b;
    }

    public void a(byte[] bArr) {
        if (bArr.length == 65536) {
            synchronized (this.f2292a) {
                if (this.f2292a.size() < 32 && !this.f2292a.offer(bArr)) {
                    com.huawei.updatesdk.a.a.c.a.a.a.a("ByteArrayPool", "releaseBytes false");
                }
            }
        }
    }

    public byte[] a() {
        byte[] bArrPoll;
        synchronized (this.f2292a) {
            bArrPoll = this.f2292a.poll();
        }
        return bArrPoll == null ? new byte[65536] : bArrPoll;
    }
}

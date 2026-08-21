package com.huawei.updatesdk.a.a.b;

import java.util.ArrayDeque;
import java.util.Queue;

public final class a {
    private static final a b = new a();
    private final Queue<byte[]> a = new ArrayDeque(0);

    private a() {
    }

    public static a b() {
        return b;
    }

    public void a(byte[] bArr) {
        if (bArr.length == 65536) {
            synchronized (this.a) {
                if (this.a.size() < 32 && !this.a.offer(bArr)) {
                    com.huawei.updatesdk.a.a.c.a.a.a.a("ByteArrayPool", "releaseBytes false");
                }
            }
        }
    }

    public byte[] a() {
        byte[] bArrPoll;
        synchronized (this.a) {
            bArrPoll = this.a.poll();
        }
        return bArrPoll == null ? new byte[65536] : bArrPoll;
    }
}

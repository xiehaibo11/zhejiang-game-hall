package com.meizu.cloud.pushsdk.c.g;

import java.io.InterruptedIOException;

/* JADX INFO: loaded from: classes3.dex */
public class n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final n f4562a = new n() { // from class: com.meizu.cloud.pushsdk.c.g.n.1
        @Override // com.meizu.cloud.pushsdk.c.g.n
        public void a() {
        }
    };
    private boolean b;
    private long c;

    public void a() throws InterruptedIOException {
        if (Thread.interrupted()) {
            throw new InterruptedIOException("thread interrupted");
        }
        if (this.b && this.c - System.nanoTime() <= 0) {
            throw new InterruptedIOException("deadline reached");
        }
    }
}

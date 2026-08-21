package com.meizu.cloud.pushsdk.c.g;

import java.io.InterruptedIOException;

public class n {
    public static final n a = new n() {
        @Override
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

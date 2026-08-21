package com.igexin.push.core;

import android.os.HandlerThread;

public class f extends HandlerThread {
    public f() {
        super("CoreThread");
    }

    @Override
    protected void onLooperPrepared() {
        c.a().c();
    }
}

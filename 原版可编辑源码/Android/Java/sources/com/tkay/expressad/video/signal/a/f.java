package com.tkay.expressad.video.signal.a;

import android.content.res.Configuration;

public class f implements com.tkay.expressad.video.signal.i {
    protected static final String a = "js";

    @Override
    public String a() {
        return "{}";
    }

    @Override
    public void a(String str) {
    }

    @Override
    public void b(String str) {
    }

    @Override
    public void handlerPlayableException(String str) {
    }

    @Override
    public void notifyCloseBtn(int i) {
    }

    @Override
    public void readyStatus(int i) {
    }

    @Override
    public void toggleCloseBtn(int i) {
    }

    @Override
    public void webviewshow() {
    }

    @Override
    public void install(com.tkay.expressad.foundation.d.c cVar) {
        new StringBuilder("install:campaignEx=").append(cVar);
    }

    @Override
    public void orientation(Configuration configuration) {
        new StringBuilder("orientation，config=").append(configuration);
    }
}

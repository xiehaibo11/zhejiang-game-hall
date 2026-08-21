package com.tkay.expressad.video.signal.a;

import android.content.res.Configuration;

/* JADX INFO: loaded from: classes3.dex */
public class f implements com.tkay.expressad.video.signal.i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f7347a = "js";

    @Override // com.tkay.expressad.video.signal.i
    public String a() {
        return "{}";
    }

    @Override // com.tkay.expressad.video.signal.i
    public void a(String str) {
    }

    @Override // com.tkay.expressad.video.signal.i
    public void b(String str) {
    }

    @Override // com.tkay.expressad.video.signal.i, com.tkay.expressad.video.signal.h
    public void handlerPlayableException(String str) {
    }

    @Override // com.tkay.expressad.video.signal.h
    public void notifyCloseBtn(int i) {
    }

    @Override // com.tkay.expressad.video.signal.h
    public void readyStatus(int i) {
    }

    @Override // com.tkay.expressad.video.signal.h
    public void toggleCloseBtn(int i) {
    }

    @Override // com.tkay.expressad.video.signal.h
    public void webviewshow() {
    }

    @Override // com.tkay.expressad.video.signal.h
    public void install(com.tkay.expressad.foundation.d.c cVar) {
        new StringBuilder("install:campaignEx=").append(cVar);
    }

    @Override // com.tkay.expressad.video.signal.h
    public void orientation(Configuration configuration) {
        new StringBuilder("orientation，config=").append(configuration);
    }
}

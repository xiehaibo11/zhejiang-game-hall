package com.tkay.expressad.video.signal.a;

import com.tkay.expressad.video.module.TkayVideoView;

/* JADX INFO: loaded from: classes3.dex */
public class e implements com.tkay.expressad.video.signal.g {
    protected static final String m = "DefaultJSNotifyProxy";

    @Override // com.tkay.expressad.video.signal.g
    public void a() {
    }

    @Override // com.tkay.expressad.video.signal.g
    public void a(int i) {
    }

    @Override // com.tkay.expressad.video.signal.g
    public void a(int i, int i2, int i3, int i4) {
    }

    @Override // com.tkay.expressad.video.signal.g
    public void a(int i, String str) {
        StringBuilder sb = new StringBuilder("onClick:");
        sb.append(i);
        sb.append(",pt:");
        sb.append(str);
    }

    @Override // com.tkay.expressad.video.signal.g
    public void a(TkayVideoView.a aVar) {
        new StringBuilder("onProgressNotify:").append(aVar.toString());
    }

    @Override // com.tkay.expressad.video.signal.g
    public void a(Object obj) {
        new StringBuilder("onWebviewShow:").append(obj);
    }
}

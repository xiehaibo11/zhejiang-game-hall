package com.tkay.expressad.video.signal.a;

import com.tkay.expressad.video.module.TkayVideoView;

public class e implements com.tkay.expressad.video.signal.g {
    protected static final String m = "DefaultJSNotifyProxy";

    @Override
    public void a() {
    }

    @Override
    public void a(int i) {
    }

    @Override
    public void a(int i, int i2, int i3, int i4) {
    }

    @Override
    public void a(int i, String str) {
        StringBuilder sb = new StringBuilder("onClick:");
        sb.append(i);
        sb.append(",pt:");
        sb.append(str);
    }

    @Override
    public void a(TkayVideoView.a aVar) {
        new StringBuilder("onProgressNotify:").append(aVar.toString());
    }

    @Override
    public void a(Object obj) {
        new StringBuilder("onWebviewShow:").append(obj);
    }
}

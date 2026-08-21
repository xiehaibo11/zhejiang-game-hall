package com.tkay.expressad.video.module.a.a;

/* JADX INFO: loaded from: classes3.dex */
public class f implements com.tkay.expressad.video.module.a.a {
    protected static final String U = "NotifyListener";

    @Override // com.tkay.expressad.video.module.a.a
    public void a(int i, Object obj) {
        StringBuilder sb = new StringBuilder("onNotify,type=");
        sb.append(i);
        sb.append(",pt=");
        sb.append(obj);
    }
}

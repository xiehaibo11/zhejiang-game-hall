package com.mbridge.msdk.video.module.a.a;

/* JADX INFO: compiled from: ProxyOnNotifyListener.java */
/* JADX INFO: loaded from: classes3.dex */
public class h extends e {
    protected com.mbridge.msdk.video.module.a.a b;

    public h(com.mbridge.msdk.video.module.a.a aVar) {
        this.b = aVar;
    }

    @Override // com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
    public void a(int i, Object obj) {
        super.a(i, obj);
        com.mbridge.msdk.video.module.a.a aVar = this.b;
        if (aVar != null) {
            aVar.a(i, obj);
        }
    }
}

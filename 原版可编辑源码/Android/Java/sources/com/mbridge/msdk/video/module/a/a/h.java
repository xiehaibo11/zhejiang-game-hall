package com.mbridge.msdk.video.module.a.a;

public class h extends e {
    protected com.mbridge.msdk.video.module.a.a b;

    public h(com.mbridge.msdk.video.module.a.a aVar) {
        this.b = aVar;
    }

    @Override
    public void a(int i, Object obj) {
        super.a(i, obj);
        com.mbridge.msdk.video.module.a.a aVar = this.b;
        if (aVar != null) {
            aVar.a(i, obj);
        }
    }
}

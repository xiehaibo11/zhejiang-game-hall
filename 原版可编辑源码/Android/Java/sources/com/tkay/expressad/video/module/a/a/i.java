package com.tkay.expressad.video.module.a.a;

public class i extends f {
    protected com.tkay.expressad.video.module.a.a V;

    public i(com.tkay.expressad.video.module.a.a aVar) {
        this.V = aVar;
    }

    @Override
    public void a(int i, Object obj) {
        super.a(i, obj);
        com.tkay.expressad.video.module.a.a aVar = this.V;
        if (aVar != null) {
            aVar.a(i, obj);
        }
    }
}

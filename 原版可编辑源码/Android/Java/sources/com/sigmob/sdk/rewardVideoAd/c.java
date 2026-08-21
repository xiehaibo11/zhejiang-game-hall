package com.sigmob.sdk.rewardVideoAd;

import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import java.util.List;

public class c {
    private final d a;

    public c(boolean z) {
        this.a = new d(z);
    }

    public void a(LoadAdRequest loadAdRequest) {
        this.a.a(loadAdRequest);
    }

    public void a(LoadAdRequest loadAdRequest, g gVar) {
        this.a.a(loadAdRequest, gVar);
    }

    public void a(f fVar) {
        this.a.a(fVar);
    }

    public boolean a() {
        return this.a.a();
    }

    public void b() {
        d dVar = this.a;
        if (dVar != null) {
            dVar.b();
        }
    }

    public String c() {
        d dVar = this.a;
        if (dVar != null) {
            return dVar.c();
        }
        return null;
    }

    public List<BaseAdUnit> d() {
        d dVar = this.a;
        if (dVar != null) {
            return dVar.d();
        }
        return null;
    }
}

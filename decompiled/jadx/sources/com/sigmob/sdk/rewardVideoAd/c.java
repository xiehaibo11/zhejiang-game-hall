package com.sigmob.sdk.rewardVideoAd;

import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final d f5142a;

    public c(boolean z) {
        this.f5142a = new d(z);
    }

    public void a(LoadAdRequest loadAdRequest) {
        this.f5142a.a(loadAdRequest);
    }

    public void a(LoadAdRequest loadAdRequest, g gVar) {
        this.f5142a.a(loadAdRequest, gVar);
    }

    public void a(f fVar) {
        this.f5142a.a(fVar);
    }

    public boolean a() {
        return this.f5142a.a();
    }

    public void b() {
        d dVar = this.f5142a;
        if (dVar != null) {
            dVar.b();
        }
    }

    public String c() {
        d dVar = this.f5142a;
        if (dVar != null) {
            return dVar.c();
        }
        return null;
    }

    public List<BaseAdUnit> d() {
        d dVar = this.f5142a;
        if (dVar != null) {
            return dVar.d();
        }
        return null;
    }
}

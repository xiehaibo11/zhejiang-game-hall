package com.sigmob.sdk.base.common;

import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes3.dex */
public class r implements ab {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Set<q> f4862a;
    private BaseAdUnit b;

    public r() {
        HashSet hashSet = new HashSet();
        this.f4862a = hashSet;
        hashSet.add(new aa());
    }

    @Override // com.sigmob.sdk.base.common.ab
    public void a() {
        SigmobLog.d("endDisplaySession() called");
        Iterator<q> it = this.f4862a.iterator();
        while (it.hasNext()) {
            it.next().b(this.b);
        }
    }

    public void a(int i, int i2) {
        SigmobLog.d("onVideoPrepared() called  mDuration = [" + i + "]");
        Iterator<q> it = this.f4862a.iterator();
        while (it.hasNext()) {
            it.next().a(this.b, i, i2);
        }
    }

    @Override // com.sigmob.sdk.base.common.ab
    public void a(a aVar, int i) {
        SigmobLog.d("startDeferredDisplaySession() called");
        Iterator<q> it = this.f4862a.iterator();
        while (it.hasNext()) {
            it.next().a(this.b, aVar, i);
        }
    }

    @Override // com.sigmob.sdk.base.common.ab
    public void a(BaseAdUnit baseAdUnit) {
        this.b = baseAdUnit;
        Iterator<q> it = this.f4862a.iterator();
        while (it.hasNext()) {
            it.next().a(baseAdUnit);
            baseAdUnit.setSessionManager(this);
        }
    }

    public void a(boolean z, int i) {
        Iterator<q> it = this.f4862a.iterator();
        while (it.hasNext()) {
            it.next().a(this.b, z, i);
        }
    }
}

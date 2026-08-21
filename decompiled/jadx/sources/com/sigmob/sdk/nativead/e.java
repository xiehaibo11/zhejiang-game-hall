package com.sigmob.sdk.nativead;

import com.sigmob.sdk.base.models.BaseAdUnit;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: loaded from: classes3.dex */
public class e implements com.sigmob.sdk.base.common.ab {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final HashSet<d> f5103a;
    private boolean d;
    private int e;
    private int b = 0;
    private BaseAdUnit c = null;
    private int f = 0;

    public e() {
        HashSet<d> hashSet = new HashSet<>();
        this.f5103a = hashSet;
        hashSet.add(new d());
    }

    @Override // com.sigmob.sdk.base.common.ab
    public void a() {
        Iterator<d> it = this.f5103a.iterator();
        while (it.hasNext()) {
            it.next().b(this.c);
            this.c.setSessionManager(null);
            this.c = null;
        }
    }

    @Override // com.sigmob.sdk.base.common.ab
    public void a(com.sigmob.sdk.base.common.a aVar, int i) {
        Iterator<d> it = this.f5103a.iterator();
        while (it.hasNext()) {
            it.next().a(this.c, aVar, i);
        }
    }

    @Override // com.sigmob.sdk.base.common.ab
    public void a(BaseAdUnit baseAdUnit) {
        Iterator<d> it = this.f5103a.iterator();
        while (it.hasNext()) {
            it.next().a(baseAdUnit);
            this.c = baseAdUnit;
            baseAdUnit.setSessionManager(this);
        }
    }
}

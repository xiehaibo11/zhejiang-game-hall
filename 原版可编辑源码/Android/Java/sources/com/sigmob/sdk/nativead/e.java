package com.sigmob.sdk.nativead;

import com.sigmob.sdk.base.models.BaseAdUnit;
import java.util.HashSet;
import java.util.Iterator;

public class e implements com.sigmob.sdk.base.common.ab {
    private final HashSet<d> a;
    private boolean d;
    private int e;
    private int b = 0;
    private BaseAdUnit c = null;
    private int f = 0;

    public e() {
        HashSet<d> hashSet = new HashSet<>();
        this.a = hashSet;
        hashSet.add(new d());
    }

    @Override
    public void a() {
        Iterator<d> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().b(this.c);
            this.c.setSessionManager(null);
            this.c = null;
        }
    }

    @Override
    public void a(com.sigmob.sdk.base.common.a aVar, int i) {
        Iterator<d> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(this.c, aVar, i);
        }
    }

    @Override
    public void a(BaseAdUnit baseAdUnit) {
        Iterator<d> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(baseAdUnit);
            this.c = baseAdUnit;
            baseAdUnit.setSessionManager(this);
        }
    }
}

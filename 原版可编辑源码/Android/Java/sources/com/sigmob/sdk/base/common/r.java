package com.sigmob.sdk.base.common;

import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class r implements ab {
    private final Set<q> a;
    private BaseAdUnit b;

    public r() {
        HashSet hashSet = new HashSet();
        this.a = hashSet;
        hashSet.add(new aa());
    }

    @Override
    public void a() {
        SigmobLog.d("endDisplaySession() called");
        Iterator<q> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().b(this.b);
        }
    }

    public void a(int i, int i2) {
        SigmobLog.d("onVideoPrepared() called  mDuration = [" + i + "]");
        Iterator<q> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(this.b, i, i2);
        }
    }

    @Override
    public void a(a aVar, int i) {
        SigmobLog.d("startDeferredDisplaySession() called");
        Iterator<q> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(this.b, aVar, i);
        }
    }

    @Override
    public void a(BaseAdUnit baseAdUnit) {
        this.b = baseAdUnit;
        Iterator<q> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(baseAdUnit);
            baseAdUnit.setSessionManager(this);
        }
    }

    public void a(boolean z, int i) {
        Iterator<q> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(this.b, z, i);
        }
    }
}

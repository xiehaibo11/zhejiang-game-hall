package com.mbridge.msdk.dycreator.g;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: compiled from: BaseAbstractSubject.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class a extends com.mbridge.msdk.dycreator.c.a {
    private List<Object> b = new ArrayList();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected ConcurrentHashMap<Integer, Object> f3305a = new ConcurrentHashMap<>();

    public final synchronized void a(Object obj, int i) {
        if (obj != null) {
            if (this.f3305a != null && !this.f3305a.containsValue(obj)) {
                this.f3305a.put(Integer.valueOf(i), obj);
            }
        }
    }

    public final synchronized void a() {
        this.f3305a.clear();
    }
}

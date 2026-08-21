package com.alipay.sdk.m.x;

import java.util.Iterator;
import java.util.Stack;

/* JADX INFO: loaded from: classes.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Stack<e> f1297a = new Stack<>();

    public void a(e eVar) {
        this.f1297a.push(eVar);
    }

    public boolean b() {
        return this.f1297a.isEmpty();
    }

    public e c() {
        return this.f1297a.pop();
    }

    public void a() {
        if (b()) {
            return;
        }
        Iterator<e> it = this.f1297a.iterator();
        while (it.hasNext()) {
            it.next().a();
        }
        this.f1297a.clear();
    }
}

package com.bianfeng.ymnsdk.feature;

import com.bianfeng.ymnsdk.util.Logger;

/* JADX INFO: compiled from: YmnWarning.java */
/* JADX INFO: loaded from: classes.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1437a;
    private a b;

    /* JADX INFO: compiled from: YmnWarning.java */
    public interface a {
        void a(String str);
    }

    public f(String message) {
        this.f1437a = message;
    }

    public f a(a runnable) {
        this.b = runnable;
        return this;
    }

    public f a() {
        Logger.wRich(this.f1437a);
        a aVar = this.b;
        if (aVar != null) {
            aVar.a(this.f1437a);
        }
        return this;
    }
}

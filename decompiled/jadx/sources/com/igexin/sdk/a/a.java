package com.igexin.sdk.a;

import com.igexin.push.core.stub.PushCore;
import com.igexin.sdk.IPushCore;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static a b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IPushCore f2664a;

    private a() {
    }

    public static a a() {
        if (b == null) {
            b = new a();
        }
        return b;
    }

    public void b() {
        this.f2664a = new PushCore();
    }

    public IPushCore c() {
        return this.f2664a;
    }
}

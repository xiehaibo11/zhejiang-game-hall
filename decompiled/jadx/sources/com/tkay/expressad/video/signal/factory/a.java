package com.tkay.expressad.video.signal.factory;

import com.tkay.expressad.video.signal.a.d;
import com.tkay.expressad.video.signal.a.f;
import com.tkay.expressad.video.signal.c;
import com.tkay.expressad.video.signal.e;
import com.tkay.expressad.video.signal.g;
import com.tkay.expressad.video.signal.i;
import com.tkay.expressad.video.signal.j;

/* JADX INFO: loaded from: classes3.dex */
public class a implements IJSFactory {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected com.tkay.expressad.video.signal.a f7447a;
    protected c b;
    protected j c;
    protected g d;
    protected e e;
    protected i f;
    protected com.tkay.expressad.video.signal.b g;

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public com.tkay.expressad.video.signal.a getActivityProxy() {
        if (this.f7447a == null) {
            this.f7447a = new com.tkay.expressad.video.signal.a.a();
        }
        return this.f7447a;
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public c getJSCommon() {
        if (this.b == null) {
            this.b = new com.tkay.expressad.video.signal.a.c();
        }
        return this.b;
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public j getJSVideoModule() {
        if (this.c == null) {
            this.c = new com.tkay.expressad.video.signal.a.g();
        }
        return this.c;
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public g getJSNotifyProxy() {
        if (this.d == null) {
            this.d = new com.tkay.expressad.video.signal.a.e();
        }
        return this.d;
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public e getJSContainerModule() {
        if (this.e == null) {
            this.e = new d();
        }
        return this.e;
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public i getIJSRewardVideoV1() {
        if (this.f == null) {
            this.f = new f();
        }
        return this.f;
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public com.tkay.expressad.video.signal.b getJSBTModule() {
        if (this.g == null) {
            this.g = new com.tkay.expressad.video.signal.a.b();
        }
        return this.g;
    }
}

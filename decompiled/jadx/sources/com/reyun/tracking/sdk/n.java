package com.reyun.tracking.sdk;

/* JADX INFO: loaded from: classes3.dex */
class n implements com.reyun.tracking.b.l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ m f4742a;

    n(m mVar) {
        this.f4742a = mVar;
    }

    @Override // com.reyun.tracking.b.l
    public void a(String str, boolean z) {
        com.reyun.tracking.a.a.d(Tracking.TAG, "getOaid success:" + str + " isOaidTrackLimited:" + z);
        this.f4742a.a();
    }
}

package com.mbridge.msdk.foundation.same.net.b;

import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: CommonStringResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class a extends f<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3431a = a.class.getSimpleName();

    public abstract void a(String str);

    public abstract void b(String str);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<String> kVar) {
        if (kVar != null) {
            a(kVar.f3462a);
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(f3431a, "errorCode = " + aVar.f3429a);
        b(com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}

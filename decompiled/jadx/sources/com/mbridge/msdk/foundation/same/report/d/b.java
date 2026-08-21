package com.mbridge.msdk.foundation.same.report.d;

import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: ReportResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class b extends f<String> {
    private static final String TAG = b.class.getSimpleName();

    public abstract void onFailed(String str);

    public abstract void onSuccess(String str);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<String> kVar) {
        if (kVar != null) {
            onSuccess(kVar.f3462a);
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(TAG, "errorCode = " + aVar.f3429a);
        onFailed(com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}

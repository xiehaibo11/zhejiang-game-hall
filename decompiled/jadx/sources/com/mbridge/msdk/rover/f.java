package com.mbridge.msdk.rover;

import com.mbridge.msdk.foundation.same.net.k;
import org.json.JSONObject;

/* JADX INFO: compiled from: RoverReportResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class f extends com.mbridge.msdk.foundation.same.net.f<JSONObject> {
    public abstract void a();

    public abstract void a(String str);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<JSONObject> kVar) {
        a();
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        a(aVar.f3429a + "");
    }
}

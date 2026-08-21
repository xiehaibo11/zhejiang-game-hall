package com.kwad.sdk.core.network;

import com.kwad.sdk.core.network.NormalResultData;
import com.kwad.sdk.core.network.o;

/* JADX INFO: loaded from: classes2.dex */
public abstract class n<R extends o, T extends NormalResultData> extends a<R> {
    private static final String TAG = "NormalNetworking";
    private h<R, T> mListener = null;

    private void onRequest(h<R, T> hVar) {
        this.mListener = hVar;
    }

    @Override // com.kwad.sdk.core.network.a
    protected void cancel() {
        super.cancel();
        this.mListener = null;
    }

    protected abstract T createResponseData();

    @Override // com.kwad.sdk.core.network.a
    protected void fetchImpl() {
        String str;
        R rCreateRequest = createRequest();
        c cVar = null;
        try {
            String url = rCreateRequest.getUrl();
            cVar = rCreateRequest.getMethod().equals("POST") ? com.kwad.sdk.g.wX().doPost(url, rCreateRequest.getHeader(), rCreateRequest.getBody()) : com.kwad.sdk.g.wX().doGet(url, rCreateRequest.getHeader());
            if (cVar == null || cVar.code != 200) {
                str = "normal request failed";
            } else {
                str = "normal request success:" + cVar.code;
            }
            com.kwad.sdk.core.e.c.d(TAG, str);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            if (cVar == null) {
                cVar = new c();
            }
            cVar.code = -1;
            cVar.aoL = e;
        }
        onResponse((o) rCreateRequest, cVar);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.kwad.sdk.core.network.a
    public void onResponse(R r, c cVar) {
        if (this.mListener == null) {
            return;
        }
        if (!cVar.Bd()) {
            this.mListener.onError(r, cVar.code, cVar.aoL != null ? cVar.aoL.getMessage() : "");
            return;
        }
        NormalResultData normalResultDataCreateResponseData = createResponseData();
        parseResponse(normalResultDataCreateResponseData, cVar);
        this.mListener.onSuccess(r, normalResultDataCreateResponseData);
    }

    protected void parseResponse(T t, c cVar) {
        t.parseResponse(cVar);
    }

    public void request(h<R, T> hVar) {
        onRequest(hVar);
        fetch();
    }
}

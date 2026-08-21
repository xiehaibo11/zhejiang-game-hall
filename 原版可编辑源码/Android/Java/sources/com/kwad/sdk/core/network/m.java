package com.kwad.sdk.core.network;

import android.text.TextUtils;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.network.idc.DomainException;
import com.kwad.sdk.export.proxy.AdHttpProxy;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ag;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class m<R extends g, T extends BaseResultData> extends a<R> {
    private static final String TAG = "Networking";
    private h<R, T> mListener = null;
    private final com.kwad.sdk.core.network.b.b mMonitorRecorder = com.kwad.sdk.core.network.b.c.BA();

    private void checkAndSetHasData(BaseResultData baseResultData) {
        if (baseResultData.hasData()) {
            this.mMonitorRecorder.ca(1);
        }
    }

    private void checkIpDirect(c cVar) {
        com.kwad.sdk.service.a.e eVar;
        if (cVar == null || cVar.Bd() || (eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)) == null || !ag.isNetworkConnected(eVar.getContext())) {
            return;
        }
        com.kwad.sdk.ip.direct.a.FS();
    }

    private void notifyOnErrorListener(R r, int i, String str) {
        i.Bh().b(r, i);
        h<R, T> hVar = this.mListener;
        if (hVar == null) {
            return;
        }
        hVar.onError(r, i, str);
        this.mMonitorRecorder.Bz();
    }

    private void notifyOnErrorListener(R r, c cVar, String str) {
        String url = r.getUrl();
        com.kwad.sdk.core.network.idc.a.Bo().a(url, url.contains("/rest/zt/emoticon/package/list") ? "zt" : "api", new DomainException(cVar.aoK, cVar.aoL));
        notifyOnErrorListener(r, cVar.code, str);
    }

    private void notifyOnStartRequest(R r) {
        h<R, T> hVar = this.mListener;
        if (hVar == null) {
            return;
        }
        hVar.onStartRequest(r);
    }

    private void notifyOnSuccess(R r, T t) {
        h<R, T> hVar = this.mListener;
        if (hVar == null) {
            return;
        }
        hVar.onSuccess(r, t);
        this.mMonitorRecorder.Bz();
    }

    private void onRequest(h<R, T> hVar) {
        this.mMonitorRecorder.Bt();
        this.mListener = hVar;
    }

    private void parseCommonData(String str, String str2) {
        try {
            r.Bk().N(str, new JSONObject(str2).optString("requestSessionData"));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private void setMonitorRequestId(g gVar) {
        Map<String, String> header = gVar.getHeader();
        if (header != null) {
            String str = header.get(d.TRACK_ID_KEY);
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.mMonitorRecorder.dj(str);
        }
    }

    protected void afterParseData(T t) {
    }

    @Override
    public void cancel() {
        super.cancel();
        this.mListener = null;
    }

    protected boolean enableMonitorReport() {
        return true;
    }

    @Override
    protected void fetchImpl() {
        try {
            this.mMonitorRecorder.Bx();
            R rCreateRequest = createRequest();
            notifyOnStartRequest(rCreateRequest);
            this.mMonitorRecorder.df(rCreateRequest.getUrl()).dg(rCreateRequest.getUrl());
            setMonitorRequestId(rCreateRequest);
            if (ag.isNetworkConnected(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext())) {
                c cVarDoPost = null;
                try {
                    String url = rCreateRequest.getUrl();
                    AdHttpProxy adHttpProxyWX = com.kwad.sdk.g.wX();
                    (adHttpProxyWX instanceof com.kwad.sdk.core.network.c.b ? this.mMonitorRecorder.di("ok_http") : this.mMonitorRecorder.di("http")).Bw();
                    cVarDoPost = isPostByJson() ? adHttpProxyWX.doPost(url, rCreateRequest.getHeader(), rCreateRequest.getBody()) : adHttpProxyWX.doPost(url, rCreateRequest.getHeader(), rCreateRequest.getBodyMap());
                } catch (Exception e) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                    this.mMonitorRecorder.dh("requestError:" + e.getMessage());
                }
                this.mMonitorRecorder.Bu().Bv().cc(com.kwad.sdk.ip.direct.a.getType());
                try {
                    onResponse(rCreateRequest, cVarDoPost);
                } catch (Exception e2) {
                    this.mMonitorRecorder.dh("onResponseError:" + e2.getMessage());
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e2);
                }
            } else {
                notifyOnErrorListener(rCreateRequest, f.aoS.errorCode, f.aoS.msg);
                this.mMonitorRecorder.bZ(f.aoS.errorCode).dh(f.aoS.msg);
            }
        } catch (Throwable th) {
            try {
                try {
                    this.mMonitorRecorder.dh("requestError:" + th.getMessage());
                } finally {
                    try {
                        if (enableMonitorReport()) {
                            this.mMonitorRecorder.report();
                        }
                    } catch (Exception unused) {
                    }
                }
            } catch (Exception unused2) {
            }
            com.kwad.sdk.core.e.c.printStackTrace(th);
            try {
                if (enableMonitorReport()) {
                    this.mMonitorRecorder.report();
                }
            } catch (Exception unused3) {
            }
        }
    }

    protected boolean isPostByJson() {
        return true;
    }

    @Override
    protected void onResponse(R r, c cVar) {
        if (cVar == null) {
            notifyOnErrorListener(r, f.aoS.errorCode, f.aoS.msg);
            this.mMonitorRecorder.dh("responseBase is null");
            com.kwad.sdk.core.e.c.e(TAG, "request responseBase is null");
            return;
        }
        this.mMonitorRecorder.bZ(cVar.code);
        checkIpDirect(cVar);
        if (TextUtils.isEmpty(cVar.aoM) || !cVar.Bd()) {
            notifyOnErrorListener(r, cVar, "网络错误");
            this.mMonitorRecorder.dh("httpCodeError:" + cVar.code + Constants.COLON_SEPARATOR + cVar.aoM);
            StringBuilder sb = new StringBuilder("request responseBase httpCodeError:");
            sb.append(cVar.code);
            com.kwad.sdk.core.e.c.w(TAG, sb.toString());
            return;
        }
        try {
            parseCommonData(r.getUrl(), cVar.aoM);
            BaseResultData data = parseData(cVar.aoM);
            afterParseData(data);
            if (cVar.aoM != null) {
                this.mMonitorRecorder.Y(cVar.aoM.length()).By().cb(data.result);
            }
            if (!data.isResultOk()) {
                this.mMonitorRecorder.dh("serverCodeError:" + data.result + Constants.COLON_SEPARATOR + data.errorMsg);
                if (data.notifyFailOnResultError()) {
                    notifyOnErrorListener(r, data.result, data.errorMsg);
                    return;
                }
            }
            if (data.isDataEmpty()) {
                notifyOnErrorListener(r, f.aoU.errorCode, !TextUtils.isEmpty(data.testErrorMsg) ? data.testErrorMsg : f.aoU.msg);
            } else {
                checkAndSetHasData(data);
                notifyOnSuccess(r, data);
            }
        } catch (Exception e) {
            notifyOnErrorListener(r, f.aoT.errorCode, f.aoT.msg);
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            this.mMonitorRecorder.dh("parseDataError:" + e.getMessage());
        }
    }

    protected abstract T parseData(String str);

    public void request(h<R, T> hVar) {
        onRequest(hVar);
        fetch();
    }
}

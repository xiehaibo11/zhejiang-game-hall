package com.sigmob.sdk.base.network;

import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.models.ModelBuilderCreator;
import com.czhj.sdk.common.network.SigmobRequest;
import com.czhj.sdk.common.utils.AESUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.ParseError;
import com.czhj.volley.Response;
import com.czhj.volley.toolbox.HttpHeaderParser;
import com.sigmob.sdk.base.models.config.SdkConfigRequest;
import com.sigmob.sdk.base.models.config.SdkConfigResponse;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class e extends SigmobRequest<SdkConfigResponse> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final a f4920a;
    private final SdkConfigRequest.Builder b;

    public interface a extends Response.ErrorListener {
        void a(SdkConfigResponse sdkConfigResponse);
    }

    public e(String str, a aVar) {
        super(str, 1, aVar);
        this.f4920a = aVar;
        setRetryPolicy(new DefaultRetryPolicy(10000, 2, 0.0f));
        setShouldCache(false);
        this.b = a();
    }

    public static SdkConfigRequest.Builder a() {
        SdkConfigRequest.Builder builder = new SdkConfigRequest.Builder();
        if (ClientMetadata.getInstance() != null && ClientMetadata.getInstance().getDeviceLocale() != null) {
            builder.app(com.sigmob.sdk.base.network.a.b().build());
            builder.user(com.sigmob.sdk.base.network.a.c().build());
            builder.privacy(com.sigmob.sdk.base.network.a.d().build());
            builder.network(ModelBuilderCreator.createNetwork().build());
            builder.device(ModelBuilderCreator.createDevice().did(ModelBuilderCreator.createDeviceId().build()).build());
        }
        return builder;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.czhj.volley.Request
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void deliverResponse(SdkConfigResponse sdkConfigResponse) {
        this.f4920a.a(sdkConfigResponse);
    }

    public a b() {
        return this.f4920a;
    }

    @Override // com.czhj.sdk.common.network.SigmobRequest, com.czhj.volley.Request
    public byte[] getBody() {
        SdkConfigRequest sdkConfigRequestBuild = this.b.build();
        SigmobLog.d("send SdkConfig Request: " + sdkConfigRequestBuild.toString());
        try {
            return AESUtil.Encrypt(sdkConfigRequestBuild.encode(), "KGpfzbYsn4T9Jyuq");
        } catch (Exception e) {
            e.printStackTrace();
            return sdkConfigRequestBuild.encode();
        }
    }

    @Override // com.czhj.sdk.common.network.SigmobRequest, com.czhj.volley.Request
    public String getBodyContentType() {
        return "application/octet-stream";
    }

    @Override // com.czhj.sdk.common.network.SigmobRequest, com.czhj.volley.Request
    public Map<String, String> getHeaders() {
        Map<String, String> headers = super.getHeaders();
        headers.put("e", "1");
        return headers;
    }

    @Override // com.czhj.sdk.common.network.SigmobRequest, com.czhj.volley.Request
    protected Response<SdkConfigResponse> parseNetworkResponse(NetworkResponse networkResponse) {
        try {
            return Response.success(SdkConfigResponse.ADAPTER.decode(networkResponse.data), HttpHeaderParser.parseCacheHeaders(networkResponse));
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return Response.error(new ParseError(th));
        }
    }
}

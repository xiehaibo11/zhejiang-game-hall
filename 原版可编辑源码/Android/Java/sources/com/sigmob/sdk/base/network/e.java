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

public class e extends SigmobRequest<SdkConfigResponse> {
    private final a a;
    private final SdkConfigRequest.Builder b;

    public interface a extends Response.ErrorListener {
        void a(SdkConfigResponse sdkConfigResponse);
    }

    public e(String str, a aVar) {
        super(str, 1, aVar);
        this.a = aVar;
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

    @Override
    protected void deliverResponse(SdkConfigResponse sdkConfigResponse) {
        this.a.a(sdkConfigResponse);
    }

    public a b() {
        return this.a;
    }

    @Override
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

    @Override
    public String getBodyContentType() {
        return "application/octet-stream";
    }

    @Override
    public Map<String, String> getHeaders() {
        Map<String, String> headers = super.getHeaders();
        headers.put("e", "1");
        return headers;
    }

    @Override
    protected Response<SdkConfigResponse> parseNetworkResponse(NetworkResponse networkResponse) {
        try {
            return Response.success(SdkConfigResponse.ADAPTER.decode(networkResponse.data), HttpHeaderParser.parseCacheHeaders(networkResponse));
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return Response.error(new ParseError(th));
        }
    }
}

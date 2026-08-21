package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.OfflineCompoNetworking;
import com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData;
import com.kwad.sdk.core.network.c;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.internal.api.SceneImpl;
import java.util.Map;
import org.json.JSONObject;

public class NetworkingAdapter<R extends IOfflineCompoRequest, T extends CommonOfflineCompoResultData> extends m<RequestAdapter<R>, ResultDataAdapter<T>> {
    private final OfflineCompoNetworking<R, T> mOfflineCompoNetworking;

    public NetworkingAdapter(OfflineCompoNetworking<R, T> offlineCompoNetworking) {
        this.mOfflineCompoNetworking = offlineCompoNetworking;
    }

    @Override
    protected RequestAdapter<R> createRequest() {
        final R rCreateRequest = this.mOfflineCompoNetworking.createRequest();
        return (RequestAdapter<R>) new RequestAdapter<R>() {
            @Override
            public boolean encryptDisable() {
                return rCreateRequest.encryptDisable();
            }

            @Override
            public JSONObject getBody() {
                return rCreateRequest.getBody();
            }

            @Override
            public Map<String, String> getBodyMap() {
                return rCreateRequest.getBodyMap();
            }

            @Override
            public Map<String, String> getHeader() {
                return rCreateRequest.getHeader();
            }

            @Override
            public R getOfflineCompoRequest() {
                return (R) rCreateRequest;
            }

            @Override
            public String getRequestHost() {
                return rCreateRequest.getRequestHost();
            }

            @Override
            public SceneImpl getScene() {
                return null;
            }

            @Override
            public String getUrl() {
                return rCreateRequest.getUrl();
            }
        };
    }

    @Override
    public boolean enableMonitorReport() {
        return this.mOfflineCompoNetworking.enableMonitorReport();
    }

    @Override
    public boolean isPostByJson() {
        return this.mOfflineCompoNetworking.isPostByJson();
    }

    @Override
    protected void onResponse(RequestAdapter<R> requestAdapter, c cVar) {
        super.onResponse(requestAdapter, cVar);
        this.mOfflineCompoNetworking.onResponse(requestAdapter.getOfflineCompoRequest(), cVar);
    }

    @Override
    protected ResultDataAdapter<T> parseData(String str) {
        return new ResultDataAdapter<>(this.mOfflineCompoNetworking.parseData(str));
    }
}

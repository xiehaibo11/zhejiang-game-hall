package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.OfflineCompoNormalNetworking;
import com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData;
import com.kwad.sdk.core.network.n;
import com.kwad.sdk.internal.api.SceneImpl;
import java.util.Map;
import org.json.JSONObject;

public class NormalNetworkingAdapter<R extends IOfflineCompoRequest, T extends NormalOfflineCompoResultData> extends n<NormalRequestAdapter<R>, NormalResultDataAdapter<T>> {
    private final OfflineCompoNormalNetworking<R, T> mOfflineCompoNetworking;

    public NormalNetworkingAdapter(OfflineCompoNormalNetworking<R, T> offlineCompoNormalNetworking) {
        this.mOfflineCompoNetworking = offlineCompoNormalNetworking;
    }

    @Override
    public void cancel() {
        super.cancel();
    }

    @Override
    protected NormalRequestAdapter<R> createRequest() {
        final R rCreateRequest = this.mOfflineCompoNetworking.createRequest();
        return (NormalRequestAdapter<R>) new NormalRequestAdapter<R>() {
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
            public String getMethod() {
                return rCreateRequest.getMethod();
            }

            @Override
            public R getOfflineCompoRequest() {
                return (R) rCreateRequest;
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
    protected NormalResultDataAdapter<T> createResponseData() {
        return new NormalResultDataAdapter<>(this.mOfflineCompoNetworking.createResponseData());
    }
}

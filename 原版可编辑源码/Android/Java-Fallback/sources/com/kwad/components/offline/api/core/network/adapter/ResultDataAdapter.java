package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData;

public class ResultDataAdapter<T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData> extends com.kwad.sdk.core.network.BaseResultData {
    private static final long serialVersionUID = -6920968714292152136L;
    private final T mOfflineCompoResultData;

    public ResultDataAdapter(T r1) {
            r0 = this;
            r0.<init>()
            r0.mOfflineCompoResultData = r1
            return
    }

    public T getOfflineCompoResultData() {
            r1 = this;
            T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            return r0
    }

    @Override
    public boolean hasData() {
            r1 = this;
            T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            boolean r0 = r0.hasData()
            return r0
    }

    @Override
    public boolean isDataEmpty() {
            r1 = this;
            T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            boolean r0 = r0.isDataEmpty()
            return r0
    }

    @Override
    public boolean isResultOk() {
            r1 = this;
            T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            boolean r0 = r0.isResultOk()
            return r0
    }

    @Override
    public boolean notifyFailOnResultError() {
            r1 = this;
            T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            boolean r0 = r0.notifyFailOnResultError()
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            super.parseJson(r2)
            T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r0 = r1.mOfflineCompoResultData
            r0.parseJson(r2)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r2 = this;
            org.json.JSONObject r0 = super.toJson()
            T extends com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData r1 = r2.mOfflineCompoResultData
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.utils.t.merge(r0, r1)
            return r0
    }
}

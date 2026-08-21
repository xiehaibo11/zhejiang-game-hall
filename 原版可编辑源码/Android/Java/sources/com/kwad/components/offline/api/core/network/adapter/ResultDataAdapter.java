package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.model.CommonOfflineCompoResultData;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public class ResultDataAdapter<T extends CommonOfflineCompoResultData> extends BaseResultData {
    private static final long serialVersionUID = -6920968714292152136L;
    private final T mOfflineCompoResultData;

    public ResultDataAdapter(T t) {
        this.mOfflineCompoResultData = t;
    }

    public T getOfflineCompoResultData() {
        return this.mOfflineCompoResultData;
    }

    @Override
    public boolean hasData() {
        return this.mOfflineCompoResultData.hasData();
    }

    @Override
    public boolean isDataEmpty() {
        return this.mOfflineCompoResultData.isDataEmpty();
    }

    @Override
    public boolean isResultOk() {
        return this.mOfflineCompoResultData.isResultOk();
    }

    @Override
    public boolean notifyFailOnResultError() {
        return this.mOfflineCompoResultData.notifyFailOnResultError();
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
        super.parseJson(jSONObject);
        this.mOfflineCompoResultData.parseJson(jSONObject);
    }

    @Override
    public JSONObject toJson() {
        JSONObject json = super.toJson();
        t.merge(json, this.mOfflineCompoResultData.toJson());
        return json;
    }
}

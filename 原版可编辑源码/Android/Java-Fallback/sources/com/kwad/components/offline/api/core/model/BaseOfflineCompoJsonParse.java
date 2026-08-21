package com.kwad.components.offline.api.core.model;

import com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse;

public abstract class BaseOfflineCompoJsonParse<T extends com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse> implements com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse {
    public BaseOfflineCompoJsonParse() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void parseJson(T r1, org.json.JSONObject r2);

    @Override
    public void parseJson(org.json.JSONObject r1) {
            r0 = this;
            r0.parseJson(r0, r1)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.toJson(r1)
            return r0
    }

    public abstract org.json.JSONObject toJson(T r1);

    public abstract org.json.JSONObject toJson(T r1, org.json.JSONObject r2);
}

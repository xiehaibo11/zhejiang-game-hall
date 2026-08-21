package com.kwad.components.offline.api.core.model;

import org.json.JSONObject;

public interface IOfflineCompoJsonParse {
    void parseJson(JSONObject jSONObject);

    JSONObject toJson();
}

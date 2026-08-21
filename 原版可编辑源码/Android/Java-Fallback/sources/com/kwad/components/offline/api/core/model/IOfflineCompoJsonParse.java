package com.kwad.components.offline.api.core.model;

public interface IOfflineCompoJsonParse {
    void parseJson(org.json.JSONObject r1);

    org.json.JSONObject toJson();
}

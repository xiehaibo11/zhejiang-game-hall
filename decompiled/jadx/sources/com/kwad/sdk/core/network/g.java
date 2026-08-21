package com.kwad.sdk.core.network;

import com.kwad.sdk.internal.api.SceneImpl;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public interface g {
    JSONObject getBody();

    Map<String, String> getBodyMap();

    Map<String, String> getHeader();

    SceneImpl getScene();

    String getUrl();
}

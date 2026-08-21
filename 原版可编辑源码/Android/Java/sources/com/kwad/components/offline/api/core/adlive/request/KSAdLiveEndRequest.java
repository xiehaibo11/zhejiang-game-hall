package com.kwad.components.offline.api.core.adlive.request;

import android.text.TextUtils;
import com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest;
import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.utils.JsonHelper;
import com.kwad.components.offline.api.core.utils.LiveRequestDataUtils;
import com.kwad.sdk.api.KsScene;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class KSAdLiveEndRequest implements IOfflineCompoRequest {
    private final IAdLiveEndRequest mAdLiveEndRequest;
    private final Map<String, String> mHeader = new HashMap();

    public KSAdLiveEndRequest(IAdLiveEndRequest iAdLiveEndRequest) {
        this.mAdLiveEndRequest = iAdLiveEndRequest;
    }

    @Override
    public boolean encryptDisable() {
        return false;
    }

    @Override
    public JSONObject getBody() {
        return JsonHelper.parseMap2JSON(this.mAdLiveEndRequest.getBodyMap());
    }

    @Override
    public Map<String, String> getBodyMap() {
        return this.mAdLiveEndRequest.getBodyMap();
    }

    @Override
    public Map<String, String> getHeader() {
        IAdLiveEndRequest iAdLiveEndRequest = this.mAdLiveEndRequest;
        if (iAdLiveEndRequest == null || iAdLiveEndRequest.getHeader() == null || this.mAdLiveEndRequest.getHeader().size() <= 0) {
            return this.mHeader;
        }
        for (String str : this.mAdLiveEndRequest.getHeader().keySet()) {
            if (!TextUtils.isEmpty(this.mAdLiveEndRequest.getHeader().get(str))) {
                this.mHeader.put(str, this.mAdLiveEndRequest.getHeader().get(str));
            }
        }
        return this.mHeader;
    }

    @Override
    public String getMethod() {
        return "POST";
    }

    @Override
    public String getRequestHost() {
        return null;
    }

    @Override
    public KsScene getScene() {
        return null;
    }

    @Override
    public String getUrl() {
        return LiveRequestDataUtils.appendUrl(this.mAdLiveEndRequest.getUrl(), this.mAdLiveEndRequest.getUrlParam());
    }
}

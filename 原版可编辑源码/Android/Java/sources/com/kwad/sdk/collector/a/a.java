package com.kwad.sdk.collector.a;

import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.core.network.d;
import com.kwad.sdk.h;
import com.kwad.sdk.utils.t;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.List;
import org.json.JSONObject;

public final class a extends d {
    private a ajO;

    static class a {
        private List<String> ajP;

        public a(List<String> list) {
            this.ajP = list;
        }

        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, this.ajP);
            return jSONObject;
        }
    }

    public a(List<String> list) {
        a aVar = new a(list);
        this.ajO = aVar;
        putBody("targetAppInfo", aVar.toJson());
        putBody(com.heytap.mcssdk.constant.b.C, BuildConfig.VERSION_NAME);
        putBody("sdkVersionCode", BuildConfig.VERSION_CODE);
    }

    @Override
    public final String getUrl() {
        return h.xi();
    }
}

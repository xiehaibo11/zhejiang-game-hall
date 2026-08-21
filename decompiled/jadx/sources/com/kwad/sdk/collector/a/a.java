package com.kwad.sdk.collector.a;

import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.core.network.d;
import com.kwad.sdk.h;
import com.kwad.sdk.utils.t;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends d {
    private C0200a ajO;

    /* JADX INFO: renamed from: com.kwad.sdk.collector.a.a$a, reason: collision with other inner class name */
    static class C0200a {
        private List<String> ajP;

        public C0200a(List<String> list) {
            this.ajP = list;
        }

        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, this.ajP);
            return jSONObject;
        }
    }

    public a(List<String> list) {
        C0200a c0200a = new C0200a(list);
        this.ajO = c0200a;
        putBody("targetAppInfo", c0200a.toJson());
        putBody(com.heytap.mcssdk.constant.b.C, BuildConfig.VERSION_NAME);
        putBody("sdkVersionCode", BuildConfig.VERSION_CODE);
    }

    @Override // com.kwad.sdk.core.network.b, com.kwad.sdk.core.network.g
    public final String getUrl() {
        return h.xi();
    }
}

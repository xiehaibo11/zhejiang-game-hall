package com.kwad.sdk.core;

import android.text.TextUtils;
import com.kwad.sdk.core.download.DownloadParams;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONException;
import org.json.JSONObject;

public final class a {
    private ConcurrentHashMap<String, DownloadParams> akb;
    private ConcurrentHashMap<String, AdTemplate> akc;

    static final class a {
        private static final a akd = new a(0);
    }

    private a() {
        this.akb = new ConcurrentHashMap<>();
        this.akc = new ConcurrentHashMap<>();
    }

    a(byte b) {
        this();
    }

    public static a yT() {
        return a.akd;
    }

    public final void a(String str, DownloadParams downloadParams) {
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return;
        }
        this.akb.put(str, downloadParams);
        ((e) ServiceProvider.get(e.class)).getContext().getSharedPreferences("ksadsdk_notification_download_complete", 0).edit().putString(str, downloadParams.toJson().toString()).apply();
    }

    public final void c(String str, AdTemplate adTemplate) {
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return;
        }
        this.akc.put(str, adTemplate);
        ((e) ServiceProvider.get(e.class)).getContext().getSharedPreferences("ksadsdk_notification_download_complete", 0).edit().putString(str, adTemplate.toJson().toString()).apply();
    }

    public final DownloadParams cp(String str) {
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return null;
        }
        DownloadParams downloadParams = this.akb.get(str);
        if (downloadParams != null) {
            return downloadParams;
        }
        String string = ((e) ServiceProvider.get(e.class)).getContext().getSharedPreferences("ksadsdk_notification_download_complete", 0).getString(str, "");
        if (!TextUtils.isEmpty(string)) {
            DownloadParams downloadParams2 = new DownloadParams();
            try {
                downloadParams2.parseJson(new JSONObject(string));
                return downloadParams2;
            } catch (JSONException e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        return null;
    }

    public final void cq(String str) {
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return;
        }
        this.akb.remove(str);
        ((e) ServiceProvider.get(e.class)).getContext().getSharedPreferences("ksadsdk_notification_download_complete", 0).edit().remove(str).apply();
    }

    public final AdTemplate cr(String str) {
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return null;
        }
        AdTemplate adTemplate = this.akc.get(str);
        if (adTemplate != null) {
            return adTemplate;
        }
        String string = ((e) ServiceProvider.get(e.class)).getContext().getSharedPreferences("ksadsdk_notification_download_complete", 0).getString(str, "");
        if (!TextUtils.isEmpty(string)) {
            AdTemplate adTemplate2 = new AdTemplate();
            try {
                adTemplate2.parseJson(new JSONObject(string));
                return adTemplate2;
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return null;
    }

    public final void cs(String str) {
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return;
        }
        this.akc.remove(str);
        ((e) ServiceProvider.get(e.class)).getContext().getSharedPreferences("ksadsdk_notification_download_complete", 0).edit().remove(str).apply();
    }
}

package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONException;
import org.json.JSONObject;

class u implements n {
    final s a;

    u(s sVar) {
        this.a = sVar;
    }

    @Override
    public void a(int i, Object obj) {
        try {
            JSONObject jSONObject = ((JSONObject) obj).getJSONObject(DBDefinition.SEGMENT_INFO);
            if (Tracking.getDeepLinkListener() != null) {
                Tracking.getDeepLinkListener().onComplete(true, jSONObject.toString());
            }
        } catch (JSONException e) {
            e.printStackTrace();
            if (Tracking.getDeepLinkListener() != null) {
                Tracking.getDeepLinkListener().onComplete(false, "");
            }
        }
        if (Tracking.getOnDataUploadListener() != null) {
            Tracking.getOnDataUploadListener().b("dpquery", ((JSONObject) obj).toString());
        }
    }

    @Override
    public void a(Throwable th, String str) {
        com.reyun.tracking.a.a.a("Tracking", "Upload dp query failed!:" + str);
        if (Tracking.getDeepLinkListener() != null) {
            Tracking.getDeepLinkListener().onComplete(false, "");
        }
        if (Tracking.getOnDataUploadListener() != null) {
            Tracking.getOnDataUploadListener().b("dpquery", "{}");
        }
    }
}

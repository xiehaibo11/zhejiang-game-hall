package com.kwad.sdk.collector.model.jni;

import com.kwad.sdk.collector.AppStatusNative;
import com.kwad.sdk.collector.model.d;
import com.kwad.sdk.service.c;
import com.kwad.sdk.utils.t;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.Arrays;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public class RulesTargetNative extends NativeObject implements d {
    private static final long serialVersionUID = -4726982809581153390L;

    public RulesTargetNative() {
        this.mPtr = AppStatusNative.nativeCreateRulesTarget();
    }

    public RulesTargetNative(long j) {
        this.mPtr = j;
    }

    @Override
    public void destroy() {
        if (this.mPtr != 0) {
            AppStatusNative.nativeDeleteRulesTarget(this.mPtr);
            this.mPtr = 0L;
        }
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        try {
            AppStatusNative.rulesTargetSetPackageName(this, jSONObject.optString(DBDefinition.PACKAGE_NAME));
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("paths");
            if (jSONArrayOptJSONArray != null) {
                int length = jSONArrayOptJSONArray.length();
                String[] strArr = new String[length];
                for (int i = 0; i < length; i++) {
                    strArr[i] = jSONArrayOptJSONArray.getString(i);
                }
                AppStatusNative.rulesTargetSetPaths(this, strArr);
            }
        } catch (Exception e) {
            c.gatherException(e);
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    @Override
    public JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, AppStatusNative.rulesTargetGetPackageName(this));
        t.putValue(jSONObject, "paths", (List<?>) Arrays.asList(AppStatusNative.rulesTargetGetPaths(this)));
        return jSONObject;
    }
}

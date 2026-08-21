package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import java.io.Serializable;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class InstallActivateReminderConfigItem extends b<InstallActivateReminderConfig> {

    public static class InstallActivateReminderConfig extends com.kwad.sdk.core.response.a.a implements Serializable {
        private static final long serialVersionUID = -6457271849826128465L;
        public int noticeTotalCount = 3;
        public int perAppNoticeCount = 2;
        public int noticeAppearTime = 15000;
        public int noticeContinueTime = 15000;
    }

    public InstallActivateReminderConfigItem() {
        super("installActivateReminderConfig", new InstallActivateReminderConfig());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        InstallActivateReminderConfig value = getValue();
        if (value == null) {
            value = new InstallActivateReminderConfig();
        }
        JSONObject jSONObject = null;
        try {
            jSONObject = new JSONObject(sharedPreferences.getString(getKey(), ""));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        if (jSONObject != null) {
            value.parseJson(jSONObject);
        }
        setValue(value);
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        String key;
        String string;
        if (getValue() == null || getValue().toJson() == null) {
            key = getKey();
            string = "";
        } else {
            key = getKey();
            string = getValue().toJson().toString();
        }
        editor.putString(key, string);
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        JSONObject jSONObjectOptJSONObject;
        if (jSONObject == null || (jSONObjectOptJSONObject = jSONObject.optJSONObject(getKey())) == null) {
            setValue(zZ());
            return;
        }
        InstallActivateReminderConfig installActivateReminderConfig = new InstallActivateReminderConfig();
        installActivateReminderConfig.parseJson(jSONObjectOptJSONObject);
        setValue(installActivateReminderConfig);
    }
}

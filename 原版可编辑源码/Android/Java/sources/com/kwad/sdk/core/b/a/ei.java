package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem;
import org.json.JSONObject;

public final class ei implements com.kwad.sdk.core.d<InstallActivateReminderConfigItem.InstallActivateReminderConfig> {
    private static void a(InstallActivateReminderConfigItem.InstallActivateReminderConfig installActivateReminderConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        installActivateReminderConfig.noticeTotalCount = jSONObject.optInt("noticeTotalCount", new Integer("3").intValue());
        installActivateReminderConfig.perAppNoticeCount = jSONObject.optInt("perAppNoticeCount", new Integer("2").intValue());
        installActivateReminderConfig.noticeAppearTime = jSONObject.optInt("noticeAppearTime", new Integer("15000").intValue());
        installActivateReminderConfig.noticeContinueTime = jSONObject.optInt("noticeContinueTime", new Integer("15000").intValue());
    }

    private static JSONObject b(InstallActivateReminderConfigItem.InstallActivateReminderConfig installActivateReminderConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "noticeTotalCount", installActivateReminderConfig.noticeTotalCount);
        com.kwad.sdk.utils.t.putValue(jSONObject, "perAppNoticeCount", installActivateReminderConfig.perAppNoticeCount);
        com.kwad.sdk.utils.t.putValue(jSONObject, "noticeAppearTime", installActivateReminderConfig.noticeAppearTime);
        com.kwad.sdk.utils.t.putValue(jSONObject, "noticeContinueTime", installActivateReminderConfig.noticeContinueTime);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((InstallActivateReminderConfigItem.InstallActivateReminderConfig) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((InstallActivateReminderConfigItem.InstallActivateReminderConfig) bVar, jSONObject);
    }
}

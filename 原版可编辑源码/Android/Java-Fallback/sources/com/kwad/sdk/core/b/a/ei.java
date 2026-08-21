package com.kwad.sdk.core.b.a;

public final class ei implements com.kwad.sdk.core.d<com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem.InstallActivateReminderConfig> {
    public ei() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem.InstallActivateReminderConfig r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "3"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "noticeTotalCount"
            int r0 = r4.optInt(r1, r0)
            r3.noticeTotalCount = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "2"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "perAppNoticeCount"
            int r0 = r4.optInt(r1, r0)
            r3.perAppNoticeCount = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "15000"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "noticeAppearTime"
            int r0 = r4.optInt(r2, r0)
            r3.noticeAppearTime = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "noticeContinueTime"
            int r4 = r4.optInt(r1, r0)
            r3.noticeContinueTime = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem.InstallActivateReminderConfig r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.noticeTotalCount
            java.lang.String r1 = "noticeTotalCount"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.perAppNoticeCount
            java.lang.String r1 = "perAppNoticeCount"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.noticeAppearTime
            java.lang.String r1 = "noticeAppearTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r2 = r2.noticeContinueTime
            java.lang.String r0 = "noticeContinueTime"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem$InstallActivateReminderConfig r1 = (com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem.InstallActivateReminderConfig) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem$InstallActivateReminderConfig r1 = (com.kwad.sdk.core.config.item.InstallActivateReminderConfigItem.InstallActivateReminderConfig) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

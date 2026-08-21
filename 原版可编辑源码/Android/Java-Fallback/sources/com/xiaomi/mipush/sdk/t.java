package com.xiaomi.mipush.sdk;

public class t {
    public static <T extends com.xiaomi.push.iu<T, ?>> void a(android.content.Context r4, com.xiaomi.clientreport.data.Config r5) {
            if (r5 != 0) goto L3
            return
        L3:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "action_cr_config"
            r0.setAction(r1)
            boolean r1 = r5.isEventUploadSwitchOpen()
            java.lang.String r2 = "action_cr_event_switch"
            r0.putExtra(r2, r1)
            long r1 = r5.getEventUploadFrequency()
            java.lang.String r3 = "action_cr_event_frequency"
            r0.putExtra(r3, r1)
            boolean r1 = r5.isPerfUploadSwitchOpen()
            java.lang.String r2 = "action_cr_perf_switch"
            r0.putExtra(r2, r1)
            long r1 = r5.getPerfUploadFrequency()
            java.lang.String r3 = "action_cr_perf_frequency"
            r0.putExtra(r3, r1)
            boolean r1 = r5.isEventEncrypted()
            java.lang.String r2 = "action_cr_event_en"
            r0.putExtra(r2, r1)
            long r1 = r5.getMaxFileLength()
            java.lang.String r5 = "action_cr_max_file_size"
            r0.putExtra(r5, r1)
            com.xiaomi.mipush.sdk.ao r4 = com.xiaomi.mipush.sdk.ao.a(r4)
            r4.a(r0)
            return
    }
}

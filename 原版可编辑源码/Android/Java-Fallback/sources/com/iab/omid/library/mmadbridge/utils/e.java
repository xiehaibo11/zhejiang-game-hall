package com.iab.omid.library.mmadbridge.utils;

public class e {
    private static com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus a;

    class a extends android.content.BroadcastReceiver {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.String r2 = r3.getAction()
                java.lang.String r0 = "android.media.action.HDMI_AUDIO_PLUG"
                if (r2 != r0) goto L1d
                r2 = -1
                java.lang.String r0 = "android.media.extra.AUDIO_PLUG_STATE"
                int r2 = r3.getIntExtra(r0, r2)
                if (r2 != 0) goto L17
                com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r2 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.NOT_DETECTED
            L13:
                com.iab.omid.library.mmadbridge.utils.e.a(r2)
                goto L1d
            L17:
                r3 = 1
                if (r2 != r3) goto L1d
                com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r2 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.UNKNOWN
                goto L13
            L1d:
                return
        }
    }

    static {
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r0 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.UNKNOWN
            com.iab.omid.library.mmadbridge.utils.e.a = r0
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus a() {
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r0 = com.iab.omid.library.mmadbridge.utils.a.a()
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r1 = com.iab.omid.library.mmadbridge.adsession.DeviceCategory.CTV
            if (r0 == r1) goto Lb
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r0 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.UNKNOWN
            return r0
        Lb:
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r0 = com.iab.omid.library.mmadbridge.utils.e.a
            return r0
    }

    static com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus a(com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r0) {
            com.iab.omid.library.mmadbridge.utils.e.a = r0
            return r0
    }

    public static void a(android.content.Context r2) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.media.action.HDMI_AUDIO_PLUG"
            r0.<init>(r1)
            com.iab.omid.library.mmadbridge.utils.e$a r1 = new com.iab.omid.library.mmadbridge.utils.e$a
            r1.<init>()
            r2.registerReceiver(r1, r0)
            return
    }
}

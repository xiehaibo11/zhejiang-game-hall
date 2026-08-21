package com.iab.omid.library.mmadbridge.utils;

public final class a {
    private static android.app.UiModeManager a;

    static {
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.DeviceCategory a() {
            android.app.UiModeManager r0 = com.iab.omid.library.mmadbridge.utils.a.a
            int r0 = r0.getCurrentModeType()
            r1 = 1
            if (r0 == r1) goto L12
            r1 = 4
            if (r0 == r1) goto Lf
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r0 = com.iab.omid.library.mmadbridge.adsession.DeviceCategory.OTHER
            return r0
        Lf:
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r0 = com.iab.omid.library.mmadbridge.adsession.DeviceCategory.CTV
            return r0
        L12:
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r0 = com.iab.omid.library.mmadbridge.adsession.DeviceCategory.MOBILE
            return r0
    }

    public static void a(android.content.Context r1) {
            if (r1 == 0) goto Lc
            java.lang.String r0 = "uimode"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.app.UiModeManager r1 = (android.app.UiModeManager) r1
            com.iab.omid.library.mmadbridge.utils.a.a = r1
        Lc:
            return
    }
}

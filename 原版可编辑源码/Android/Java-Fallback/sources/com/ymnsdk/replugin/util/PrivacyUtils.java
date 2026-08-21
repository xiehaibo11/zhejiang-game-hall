package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PrivacyUtils {
    private static final java.lang.String USER_PRIVACY_ALONE = "replugin_user_privacy_agree_alone";

    public PrivacyUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getUserPrivacyAlone(android.content.Context r1) {
            java.lang.String r0 = "replugin_user_privacy_agree_alone"
            java.lang.Boolean r1 = com.ymnsdk.replugin.util.MainfestUtils.getMetaDataWithBool(r1, r0)
            boolean r1 = r1.booleanValue()
            return r1
    }
}

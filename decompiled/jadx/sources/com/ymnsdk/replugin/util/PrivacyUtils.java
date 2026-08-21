package com.ymnsdk.replugin.util;

import android.content.Context;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PrivacyUtils {
    private static final String USER_PRIVACY_ALONE = "replugin_user_privacy_agree_alone";

    public static boolean getUserPrivacyAlone(Context context) {
        return MainfestUtils.getMetaDataWithBool(context, USER_PRIVACY_ALONE).booleanValue();
    }
}

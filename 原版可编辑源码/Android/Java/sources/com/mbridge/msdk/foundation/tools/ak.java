package com.mbridge.msdk.foundation.tools;

import android.net.Uri;
import android.text.TextUtils;
import android.webkit.URLUtil;
import java.net.URL;

public final class ak {
    public static String a(String str) {
        try {
            return (TextUtils.isEmpty(str) || !URLUtil.isValidUrl(str)) ? str : new URL(str).getPath();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static String a(String str, String str2) {
        try {
            return (TextUtils.isEmpty(str) || !URLUtil.isValidUrl(str)) ? str : Uri.parse(str).getQueryParameter(str2);
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static int b(String str) {
        try {
            if (TextUtils.isEmpty(str) || !URLUtil.isValidUrl(str)) {
                return 0;
            }
            return Uri.parse(str).getQueryParameterNames().size();
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }
}

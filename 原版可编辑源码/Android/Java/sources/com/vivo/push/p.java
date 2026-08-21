package com.vivo.push;

import android.net.Uri;
import com.kwad.library.solder.lib.ext.PluginError;

public final class p {
    public static final Uri a = Uri.parse("content://com.vivo.push.sdk.service.SystemPushConfig/config");
    public static final Uri b = Uri.parse("content://com.vivo.push.sdk.service.SystemPushConfig/permission");
    public static final Uri c = Uri.parse("content://com.vivo.push.sdk.service.SystemPushConfig/clientState");
    public static final Uri d = Uri.parse("content://com.vivo.push.sdk.service.SystemPushConfig/debugInfo");

    public static String a(int i) {
        switch (i) {
            case 2002:
                return "method_alias_bind";
            case 2003:
                return "method_alias_unbind";
            case 2004:
                return "method_tag_bind";
            case 2005:
                return "method_tag_unbind";
            case PluginError.ERROR_UPD_REQUEST:
                return "method_sdk_bind";
            case PluginError.ERROR_UPD_NOT_WIFI_DOWNLOAD:
                return "method_sdk_unbind";
            case PluginError.ERROR_UPD_NO_DOWNLOADER:
                return "method_stop";
            default:
                return null;
        }
    }
}

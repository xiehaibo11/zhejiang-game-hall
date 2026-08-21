package com.vivo.push;

import android.net.Uri;
import com.kwad.library.solder.lib.ext.PluginError;

/* JADX INFO: loaded from: classes4.dex */
public final class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Uri f7933a = Uri.parse("content://com.vivo.push.sdk.service.SystemPushConfig/config");
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
            case PluginError.ERROR_UPD_REQUEST /* 2006 */:
                return "method_sdk_bind";
            case PluginError.ERROR_UPD_NOT_WIFI_DOWNLOAD /* 2007 */:
                return "method_sdk_unbind";
            case PluginError.ERROR_UPD_NO_DOWNLOADER /* 2008 */:
                return "method_stop";
            default:
                return null;
        }
    }
}

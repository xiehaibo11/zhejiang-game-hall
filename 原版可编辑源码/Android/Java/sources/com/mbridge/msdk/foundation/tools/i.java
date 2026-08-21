package com.mbridge.msdk.foundation.tools;

import android.net.Uri;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.download.DownloadError;
import com.mbridge.msdk.foundation.download.DownloadMessage;
import com.mbridge.msdk.foundation.download.DownloadPriority;
import com.mbridge.msdk.foundation.download.DownloadResourceType;
import com.mbridge.msdk.foundation.download.MBDownloadManager;
import com.mbridge.msdk.foundation.download.OnDownloadStateListener;
import com.mbridge.msdk.foundation.download.resource.MBResourceManager;
import java.io.File;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

public final class i {
    static final List<String> a;

    public interface a {
        void a(String str, DownloadError downloadError);

        void a(String str, String str2, String str3);
    }

    static {
        ArrayList arrayList = new ArrayList(4);
        a = arrayList;
        if (arrayList != null) {
            arrayList.add("mbridge_splash_native_template_v_v1.xml");
            a.add("mbridge_splash_native_template_h_v1.xml");
        }
    }

    private static String b(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        try {
            String path = new URL(str).getPath();
            String strSubstring = path.substring(path.lastIndexOf(47) + 1);
            if (TextUtils.isEmpty(strSubstring)) {
                return "";
            }
            String strReplace = strSubstring.replace(".zip", "");
            return a != null ? !a.contains(strReplace) ? strReplace : "" : "";
        } catch (Exception unused) {
            return "";
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0072  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(int i, String str, final String str2, final a aVar) {
        String strB;
        String path;
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        try {
            strB = b(i, str, str2);
        } catch (Exception unused) {
            strB = "";
        }
        final String str3 = com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.l) + File.separator;
        File file = null;
        try {
            if (!TextUtils.isEmpty(strB)) {
                file = new File(str3, strB);
            }
        } catch (Exception unused2) {
        }
        if (file == null || !file.exists()) {
            file = new File(str3 + File.separator + strB.replace(".xml", ""), strB);
        }
        if (file != null) {
            path = (file.exists() && file.isFile()) ? file.getPath() : "";
        }
        if (!TextUtils.isEmpty(path) && !TextUtils.isEmpty(strB)) {
            if (aVar != null) {
                try {
                    aVar.a(str2, path, strB);
                    return;
                } catch (Exception e) {
                    z.d("DynamicViewResourceManager", e.getMessage());
                    return;
                }
            }
            return;
        }
        try {
            String path2 = new URL(str2).getPath();
            final String strSubstring = path2.substring(path2.lastIndexOf(47) + 1);
            final String strReplace = strSubstring.replace(".zip", "");
            MBDownloadManager.getInstance().download(new DownloadMessage<>(new Object(), str2, strSubstring, 100, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_OTHER)).withReadTimeout(30000L).withConnectTimeout(20000L).withDownloadPriority(DownloadPriority.MEDIUM).withHttpRetryCounter(1).withDirectoryPathInternal(str3).withDownloadStateListener(new OnDownloadStateListener() {
                @Override
                public final void onCancelDownload(DownloadMessage downloadMessage) {
                }

                @Override
                public final void onDownloadStart(DownloadMessage downloadMessage) {
                }

                @Override
                public final void onDownloadComplete(DownloadMessage downloadMessage) {
                    try {
                        String str4 = str3 + File.separator + strSubstring;
                        String str5 = str3;
                        MBResourceManager.getInstance().unZip(str4, str5);
                        if (aVar != null) {
                            try {
                                aVar.a(str2, str5, strReplace);
                            } catch (Exception e2) {
                                z.d("DynamicViewResourceManager", e2.getMessage());
                            }
                        }
                    } catch (Exception unused3) {
                    }
                }

                @Override
                public final void onDownloadError(DownloadMessage downloadMessage, DownloadError downloadError) {
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        try {
                            aVar2.a(str2, downloadError);
                        } catch (Exception e2) {
                            z.d("DynamicViewResourceManager", e2.getMessage());
                        }
                    }
                }
            }).build().start();
        } catch (Exception e2) {
            z.d("DynamicViewResourceManager", e2.getMessage());
        }
    }

    public static String a(int i, String str, String str2) {
        String strB;
        if (TextUtils.isEmpty(str2)) {
            return "";
        }
        try {
            strB = b(i, str, str2);
        } catch (Exception unused) {
            strB = "";
        }
        File file = null;
        String str3 = com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.l) + File.separator;
        try {
            if (!TextUtils.isEmpty(strB)) {
                file = new File(str3, strB);
            }
        } catch (Exception unused2) {
        }
        if (file == null || !file.exists()) {
            file = new File(str3 + File.separator + strB.replace(".xml", ""), strB);
        }
        return file != null ? file.getPath() : "";
    }

    private static String b(int i, String str, String str2) {
        if (TextUtils.isEmpty(str2)) {
            return "";
        }
        try {
            String path = new URL(str2).getPath();
            String strSubstring = path.substring(path.lastIndexOf(47) + 1);
            return !TextUtils.isEmpty(strSubstring) ? strSubstring.replace(".zip", "") : "";
        } catch (Exception unused) {
            return "";
        }
    }

    public static String a(String str) {
        String strB;
        final String str2;
        File file;
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        try {
            String queryParameter = Uri.parse(str).getQueryParameter("natmp");
            if (!TextUtils.isEmpty(queryParameter)) {
                if (!queryParameter.equals("1")) {
                    return "";
                }
            }
        } catch (Throwable unused) {
        }
        try {
            strB = b(str);
        } catch (Exception unused2) {
            strB = "";
        }
        if (TextUtils.isEmpty(strB)) {
            return "";
        }
        try {
            str2 = com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.l) + File.separator;
            file = new File(str2, strB);
        } catch (Exception unused3) {
        }
        if (file.isFile() && file.exists()) {
            return file.getPath();
        }
        String path = new URL(str).getPath();
        final String strSubstring = path.substring(path.lastIndexOf(47) + 1);
        MBDownloadManager.getInstance().download(new DownloadMessage<>(new Object(), str, strSubstring, 100, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_OTHER)).withReadTimeout(30000L).withConnectTimeout(20000L).withDownloadPriority(DownloadPriority.MEDIUM).withHttpRetryCounter(1).withDirectoryPathInternal(str2).withDownloadStateListener(new OnDownloadStateListener() {
            @Override
            public final void onCancelDownload(DownloadMessage downloadMessage) {
            }

            @Override
            public final void onDownloadError(DownloadMessage downloadMessage, DownloadError downloadError) {
            }

            @Override
            public final void onDownloadStart(DownloadMessage downloadMessage) {
            }

            @Override
            public final void onDownloadComplete(DownloadMessage downloadMessage) {
                try {
                    MBResourceManager.getInstance().unZip(str2 + File.separator + strSubstring, str2);
                } catch (Exception unused4) {
                }
            }
        }).build().start();
        return "";
    }
}

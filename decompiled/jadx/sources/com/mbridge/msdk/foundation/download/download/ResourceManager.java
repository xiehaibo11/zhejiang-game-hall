package com.mbridge.msdk.foundation.download.download;

import android.net.Uri;
import android.text.TextUtils;
import com.iab.omid.library.mmadbridge.ScriptInjector;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.c.b;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.w;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class ResourceManager {
    public static final int EXPIRE_TIME = 259200000;
    public static final String KEY_INDEX_HTML = "foldername";
    public static final String KEY_MD5CHECK = "nc";
    public static final String KEY_MD5FILENAME = "md5filename";
    private static String TAG = "ResourceManager";
    private String mFileSaveSDDir;

    private static class ResourceManagerHolder {
        public static ResourceManager instance = new ResourceManager();

        private ResourceManagerHolder() {
        }
    }

    private ResourceManager() {
        init();
    }

    public static ResourceManager getinstance() {
        return ResourceManagerHolder.instance;
    }

    public void init() {
        this.mFileSaveSDDir = e.b(c.MBRIDGE_700_RES);
    }

    public void cleanZipRes() {
        try {
            if (TextUtils.isEmpty(this.mFileSaveSDDir)) {
                return;
            }
            DownloadTask.getInstance().runTask(new a() { // from class: com.mbridge.msdk.foundation.download.download.ResourceManager.1
                @Override // com.mbridge.msdk.foundation.same.e.a
                public void cancelTask() {
                }

                @Override // com.mbridge.msdk.foundation.same.e.a
                public void pauseTask(boolean z) {
                }

                @Override // com.mbridge.msdk.foundation.same.e.a
                public void runTask() {
                    x.c(ResourceManager.this.mFileSaveSDDir);
                }
            });
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public synchronized String saveResFile(String str, byte[] bArr) {
        String message;
        String strSave = "unknow exception ";
        if (bArr != null) {
            try {
                if (bArr.length > 0) {
                    String str2 = this.mFileSaveSDDir + "/" + SameMD5.getMD5(ak.a(str)) + ".zip";
                    File file = new File(str2);
                    if (x.a(bArr, file)) {
                        Uri uri = Uri.parse(str);
                        List<String> queryParameters = uri.getQueryParameters("nc");
                        if (queryParameters == null || queryParameters.size() == 0) {
                            List<String> queryParameters2 = uri.getQueryParameters("md5filename");
                            if (queryParameters2 != null && queryParameters2.size() > 0) {
                                String str3 = queryParameters2.get(0);
                                if (!TextUtils.isEmpty(str3) && str3.equals(w.a(file))) {
                                    strSave = save(str, str2, file);
                                }
                            }
                        } else {
                            strSave = save(str, str2, file);
                        }
                    }
                    if (!TextUtils.isEmpty(strSave)) {
                        x.b(file);
                    }
                }
                message = strSave;
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
                message = e.getMessage();
            }
        } else {
            message = strSave;
        }
        return message;
    }

    private String save(String str, String str2, File file) throws Throwable {
        String strA = x.a(str2, this.mFileSaveSDDir + "/" + SameMD5.getMD5(ak.a(str)));
        return TextUtils.isEmpty(strA) ? x.b(file) : strA;
    }

    public String getResDirFromCampaign(String str) throws Throwable {
        String strSubstring;
        String str2 = "";
        try {
            String str3 = this.mFileSaveSDDir + "/" + SameMD5.getMD5(ak.a(str));
            List<String> queryParameters = Uri.parse(str).getQueryParameters("foldername");
            z.a(TAG, "check zip 下载情况：url:" + str);
            z.a(TAG, "check zip 下载情况：indexHtml:" + queryParameters);
            if (queryParameters == null || queryParameters.size() <= 0) {
                return null;
            }
            String str4 = queryParameters.get(0);
            if (TextUtils.isEmpty(str4)) {
                return null;
            }
            String str5 = str3 + "/" + str4 + "/" + str4 + ".html";
            if (!x.a(str5)) {
                return null;
            }
            com.mbridge.msdk.c.a aVarB = b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null && !TextUtils.isEmpty(aVarB.aL())) {
                File file = new File(str5);
                x.a(com.mbridge.msdk.a.b.a(ScriptInjector.injectScriptContentIntoHtml(MBridgeConstans.OMID_JS_SERVICE_CONTENT, x.a(file))).getBytes(), file);
            }
            try {
                strSubstring = str.substring(str.indexOf("?") + 1);
            } catch (Exception unused) {
                strSubstring = "";
            }
            if (!TextUtils.isEmpty(strSubstring)) {
                str2 = "?" + strSubstring;
            }
            return "file://" + str5 + str2;
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return null;
            }
            e.printStackTrace();
            return null;
        }
    }
}

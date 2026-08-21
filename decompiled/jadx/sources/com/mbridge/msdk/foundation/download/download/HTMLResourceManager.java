package com.mbridge.msdk.foundation.download.download;

import android.text.TextUtils;
import com.iab.omid.library.mmadbridge.ScriptInjector;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.c.b;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public class HTMLResourceManager {
    public static final int EXPIRE_TIME = 259200000;
    private static final String TAG = "HTMLResourceManager";
    private String mFileSaveSDDir;

    private static class ResourceManagerHolder {
        public static HTMLResourceManager instance = new HTMLResourceManager();

        private ResourceManagerHolder() {
        }
    }

    private HTMLResourceManager() {
        init();
    }

    public static HTMLResourceManager getInstance() {
        return ResourceManagerHolder.instance;
    }

    public void init() {
        this.mFileSaveSDDir = e.b(c.MBRIDGE_700_HTML);
    }

    public void cleanHtmlRes() {
        try {
            if (TextUtils.isEmpty(this.mFileSaveSDDir)) {
                return;
            }
            DownloadTask.getInstance().runTask(new a() { // from class: com.mbridge.msdk.foundation.download.download.HTMLResourceManager.1
                @Override // com.mbridge.msdk.foundation.same.e.a
                public void cancelTask() {
                }

                @Override // com.mbridge.msdk.foundation.same.e.a
                public void pauseTask(boolean z) {
                }

                @Override // com.mbridge.msdk.foundation.same.e.a
                public void runTask() {
                    x.c(HTMLResourceManager.this.mFileSaveSDDir);
                }
            });
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public boolean saveResHtmlFile(String str, byte[] bArr) {
        try {
            z.b(TAG, "saveResHtmlFile url:" + str);
            if (bArr == null || bArr.length <= 0) {
                return false;
            }
            String str2 = this.mFileSaveSDDir + "/" + SameMD5.getMD5(ak.a(str)) + ".html";
            z.b(TAG, "saveResHtmlFile folderName:" + str2);
            return x.a(bArr, new File(str2));
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            e.printStackTrace();
            return false;
        }
    }

    public String getHtmlPathFromUrl(String str) {
        try {
            String str2 = this.mFileSaveSDDir + "/" + SameMD5.getMD5(ak.a(str)) + ".html";
            File file = new File(str2);
            if (!file.exists()) {
                return null;
            }
            com.mbridge.msdk.c.a aVarB = b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null && !TextUtils.isEmpty(aVarB.aL())) {
                x.a(com.mbridge.msdk.a.b.a(ScriptInjector.injectScriptContentIntoHtml(MBridgeConstans.OMID_JS_SERVICE_CONTENT, x.a(file))).getBytes(), file);
            }
            return "file:////" + str2;
        } catch (Throwable th) {
            if (!MBridgeConstans.DEBUG) {
                return null;
            }
            th.printStackTrace();
            return null;
        }
    }

    public String getHtmlContentFromUrl(String str) {
        try {
            File file = new File(this.mFileSaveSDDir + "/" + SameMD5.getMD5(ak.a(str)) + ".html");
            if (file.exists()) {
                return x.a(file);
            }
            return null;
        } catch (Throwable th) {
            if (!MBridgeConstans.DEBUG) {
                return null;
            }
            th.printStackTrace();
            return null;
        }
    }
}

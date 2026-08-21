package com.igexin.push.core.a.a;

import android.content.Intent;
import android.net.Uri;
import com.huawei.hms.framework.common.ContainerUtils;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONException;
import org.json.JSONObject;

public class i implements a {
    private static final String a = com.igexin.push.config.i.a;

    /* JADX WARN: Removed duplicated region for block: B:12:0x002d A[PHI: r5 r13
      0x002d: PHI (r5v7 java.lang.String) = (r5v5 java.lang.String), (r5v8 java.lang.String) binds: [B:16:0x0063, B:11:0x002b] A[DONT_GENERATE, DONT_INLINE]
      0x002d: PHI (r13v7 java.lang.String) = (r13v6 java.lang.String), (r13v8 java.lang.String) binds: [B:16:0x0063, B:11:0x002b] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(com.igexin.push.core.bean.k kVar, String str) {
        int iIndexOf;
        String strSubstring;
        String strA = kVar.a();
        if (strA == null || (iIndexOf = strA.indexOf(str)) == -1) {
            return;
        }
        String strSubstring2 = null;
        int iIndexOf2 = strA.indexOf("&");
        String strSubstring3 = "";
        if (iIndexOf2 == -1) {
            strSubstring3 = strA.substring(0, iIndexOf - 1);
            strSubstring = strA.substring(iIndexOf);
            if (strSubstring.contains(ContainerUtils.KEY_VALUE_DELIMITER)) {
                strSubstring2 = strSubstring.substring(strSubstring.indexOf(ContainerUtils.KEY_VALUE_DELIMITER) + 1);
            }
        } else {
            int i = iIndexOf - 1;
            if (strA.charAt(i) == '?') {
                strSubstring3 = strA.substring(0, iIndexOf) + strA.substring(iIndexOf2 + 1);
                strSubstring = strA.substring(iIndexOf, iIndexOf2);
                if (strSubstring.contains(ContainerUtils.KEY_VALUE_DELIMITER)) {
                }
            } else if (strA.charAt(i) == '&') {
                String strSubstring4 = strA.substring(0, i);
                String strSubstring5 = strA.substring(iIndexOf);
                int iIndexOf3 = strSubstring5.indexOf("&");
                if (iIndexOf3 != -1) {
                    strSubstring3 = strSubstring5.substring(iIndexOf3);
                    strSubstring5 = strSubstring5.substring(0, iIndexOf3);
                }
                strSubstring3 = strSubstring4 + strSubstring3;
                strSubstring2 = strSubstring5.substring(strSubstring5.indexOf(ContainerUtils.KEY_VALUE_DELIMITER) + 1);
            }
        }
        kVar.a(strSubstring3);
        kVar.b(strSubstring2);
    }

    @Override
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.a;
    }

    @Override
    public BaseAction a(JSONObject jSONObject) {
        try {
            if (!jSONObject.has("url") || !jSONObject.has("do") || !jSONObject.has("actionid")) {
                return null;
            }
            String string = jSONObject.getString("url");
            if (string.equals("")) {
                return null;
            }
            com.igexin.push.core.bean.k kVar = new com.igexin.push.core.bean.k();
            kVar.setType("startweb");
            kVar.setActionId(jSONObject.getString("actionid"));
            kVar.setDoActionId(jSONObject.getString("do"));
            kVar.a(string);
            if (jSONObject.has("is_withcid") && jSONObject.getString("is_withcid").equals("true")) {
                kVar.a(true);
            }
            if (jSONObject.has("is_withnettype") && jSONObject.getString("is_withnettype").equals("true")) {
                kVar.b(true);
            }
            return kVar;
        } catch (JSONException unused) {
            return null;
        }
    }

    @Override
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.core.bean.k kVar = (com.igexin.push.core.bean.k) baseAction;
        a(kVar, "targetpkgname");
        Intent intent = new Intent();
        intent.setAction("android.intent.action.VIEW");
        intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.setPackage(kVar.b());
        intent.setData(Uri.parse(kVar.c()));
        try {
            com.igexin.push.core.d.g.startActivity(intent);
        } catch (Exception unused) {
        }
        if (baseAction.getDoActionId().equals("")) {
            return true;
        }
        com.igexin.push.core.a.e.a().a(pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), baseAction.getDoActionId());
        return true;
    }
}

package com.igexin.push.core.a.a;

import android.content.Intent;
import android.net.Uri;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class i implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2501a = com.igexin.push.config.i.f2493a;

    /* JADX WARN: Removed duplicated region for block: B:12:0x002d A[PHI: r5 r13
      0x002d: PHI (r5v7 java.lang.String) = (r5v5 java.lang.String), (r5v8 java.lang.String) binds: [B:16:0x0063, B:11:0x002b] A[DONT_GENERATE, DONT_INLINE]
      0x002d: PHI (r13v7 java.lang.String) = (r13v6 java.lang.String), (r13v8 java.lang.String) binds: [B:16:0x0063, B:11:0x002b] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(com.igexin.push.core.bean.k r12, java.lang.String r13) {
        /*
            r11 = this;
            java.lang.String r0 = r12.a()
            if (r0 != 0) goto L7
            return
        L7:
            int r13 = r0.indexOf(r13)
            r1 = -1
            if (r13 != r1) goto Lf
            return
        Lf:
            r2 = 0
            java.lang.String r3 = "&"
            int r4 = r0.indexOf(r3)
            java.lang.String r5 = ""
            r6 = 0
            java.lang.String r7 = "="
            if (r4 != r1) goto L38
            int r1 = r13 + (-1)
            java.lang.String r5 = r0.substring(r6, r1)
            java.lang.String r13 = r0.substring(r13)
            boolean r0 = r13.contains(r7)
            if (r0 == 0) goto L9e
        L2d:
            int r0 = r13.indexOf(r7)
            int r0 = r0 + 1
            java.lang.String r2 = r13.substring(r0)
            goto L9e
        L38:
            int r8 = r13 + (-1)
            char r9 = r0.charAt(r8)
            r10 = 63
            if (r9 != r10) goto L66
            java.lang.String r1 = r0.substring(r6, r13)
            int r3 = r4 + 1
            java.lang.String r3 = r0.substring(r3)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            java.lang.String r13 = r0.substring(r13, r4)
            boolean r0 = r13.contains(r7)
            if (r0 == 0) goto L9e
            goto L2d
        L66:
            char r4 = r0.charAt(r8)
            r9 = 38
            if (r4 != r9) goto L9e
            java.lang.String r2 = r0.substring(r6, r8)
            java.lang.String r13 = r0.substring(r13)
            int r0 = r13.indexOf(r3)
            if (r0 == r1) goto L84
            java.lang.String r5 = r13.substring(r0)
            java.lang.String r13 = r13.substring(r6, r0)
        L84:
            int r0 = r13.indexOf(r7)
            int r0 = r0 + 1
            java.lang.String r13 = r13.substring(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r2 = r13
        L9e:
            r12.a(r5)
            r12.b(r2)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.a.a.i.a(com.igexin.push.core.bean.k, java.lang.String):void");
    }

    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.success;
    }

    @Override // com.igexin.push.core.a.a.a
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

    @Override // com.igexin.push.core.a.a.a
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

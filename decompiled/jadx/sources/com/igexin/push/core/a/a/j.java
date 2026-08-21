package com.igexin.push.core.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class j implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2502a = j.class.getName();

    private static void a(Context context, String str) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 0);
            Intent intent = new Intent("android.intent.action.MAIN", (Uri) null);
            intent.addCategory("android.intent.category.LAUNCHER");
            intent.setPackage(packageInfo.packageName);
            ResolveInfo next = context.getPackageManager().queryIntentActivities(intent, 0).iterator().next();
            if (next != null) {
                String str2 = next.activityInfo.packageName;
                String str3 = next.activityInfo.name;
                Intent intent2 = new Intent("android.intent.action.MAIN");
                intent2.addCategory("android.intent.category.LAUNCHER");
                intent2.setFlags(270532608);
                intent2.setComponent(new ComponentName(str2, str3));
                context.startActivity(intent2);
            }
        } catch (Exception unused) {
        }
    }

    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.success;
    }

    @Override // com.igexin.push.core.a.a.a
    public BaseAction a(JSONObject jSONObject) {
        try {
            com.igexin.push.core.bean.i iVar = new com.igexin.push.core.bean.i();
            iVar.setType("startapp");
            iVar.setActionId(jSONObject.getString("actionid"));
            iVar.setDoActionId(jSONObject.getString("do"));
            if (jSONObject.has("appstartupid")) {
                iVar.a(jSONObject.getJSONObject("appstartupid").getString("android"));
            }
            if (jSONObject.has("is_autostart")) {
                iVar.d(jSONObject.getString("is_autostart"));
            }
            if (jSONObject.has("appid")) {
                iVar.b(jSONObject.getString("appid"));
            }
            if (jSONObject.has("noinstall_action")) {
                iVar.c(jSONObject.getString("noinstall_action"));
            }
            return iVar;
        } catch (JSONException unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x004b A[Catch: Exception -> 0x00e6, TRY_ENTER, TryCatch #0 {Exception -> 0x00e6, blocks: (B:15:0x004b, B:17:0x0068, B:18:0x006f, B:20:0x0075, B:21:0x0081, B:22:0x0085, B:23:0x0089, B:25:0x00a4, B:27:0x00ae, B:30:0x00bc, B:32:0x00c2, B:33:0x00cf, B:35:0x00d5), top: B:39:0x0049 }] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0089 A[Catch: Exception -> 0x00e6, TryCatch #0 {Exception -> 0x00e6, blocks: (B:15:0x004b, B:17:0x0068, B:18:0x006f, B:20:0x0075, B:21:0x0081, B:22:0x0085, B:23:0x0089, B:25:0x00a4, B:27:0x00ae, B:30:0x00bc, B:32:0x00c2, B:33:0x00cf, B:35:0x00d5), top: B:39:0x0049 }] */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00bc A[Catch: Exception -> 0x00e6, TryCatch #0 {Exception -> 0x00e6, blocks: (B:15:0x004b, B:17:0x0068, B:18:0x006f, B:20:0x0075, B:21:0x0081, B:22:0x0085, B:23:0x0089, B:25:0x00a4, B:27:0x00ae, B:30:0x00bc, B:32:0x00c2, B:33:0x00cf, B:35:0x00d5), top: B:39:0x0049 }] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00cf A[Catch: Exception -> 0x00e6, TryCatch #0 {Exception -> 0x00e6, blocks: (B:15:0x004b, B:17:0x0068, B:18:0x006f, B:20:0x0075, B:21:0x0081, B:22:0x0085, B:23:0x0089, B:25:0x00a4, B:27:0x00ae, B:30:0x00bc, B:32:0x00c2, B:33:0x00cf, B:35:0x00d5), top: B:39:0x0049 }] */
    @Override // com.igexin.push.core.a.a.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean b(com.igexin.push.core.bean.PushTaskBean r12, com.igexin.push.core.bean.BaseAction r13) {
        /*
            Method dump skipped, instruction units count: 231
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.a.a.j.b(com.igexin.push.core.bean.PushTaskBean, com.igexin.push.core.bean.BaseAction):boolean");
    }
}

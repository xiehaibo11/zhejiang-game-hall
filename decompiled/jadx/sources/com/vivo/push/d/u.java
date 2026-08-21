package com.vivo.push.d;

import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.net.Uri;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.vivo.push.model.InsideNotificationItem;
import com.vivo.push.model.UPSNotificationMessage;
import com.vivo.push.util.NotifyAdapterUtil;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
final class u extends z {
    u(com.vivo.push.o oVar) {
        super(oVar);
    }

    private void a(UPSNotificationMessage uPSNotificationMessage) {
        com.vivo.push.m.c(new w(this, uPSNotificationMessage));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static Intent b(Intent intent, Map<String, String> map) {
        if (map != null && map.entrySet() != null) {
            for (Map.Entry<String, String> entry : map.entrySet()) {
                if (entry != null && entry.getKey() != null) {
                    intent.putExtra(entry.getKey(), entry.getValue());
                }
            }
        }
        return intent;
    }

    @Override // com.vivo.push.l
    protected final void a(com.vivo.push.o oVar) {
        String strConcat;
        Intent uri;
        String str;
        com.vivo.push.b.p pVar = (com.vivo.push.b.p) oVar;
        InsideNotificationItem insideNotificationItemF = pVar.f();
        if (insideNotificationItemF == null) {
            com.vivo.push.util.p.d("OnNotificationClickTask", "current notification item is null");
            return;
        }
        UPSNotificationMessage uPSNotificationMessageA = com.vivo.push.util.q.a(insideNotificationItemF);
        boolean zEquals = this.f7928a.getPackageName().equals(pVar.d());
        if (zEquals) {
            NotifyAdapterUtil.cancelNotify(this.f7928a);
        }
        if (!zEquals) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "notify is " + uPSNotificationMessageA + " ; isMatch is " + zEquals);
            return;
        }
        com.vivo.push.b.x xVar = new com.vivo.push.b.x(1030L);
        HashMap<String, String> map = new HashMap<>();
        map.put("type", "2");
        map.put(com.heytap.mcssdk.constant.b.c, String.valueOf(pVar.e()));
        map.put("platform", this.f7928a.getPackageName());
        String strB = com.vivo.push.util.z.b(this.f7928a, this.f7928a.getPackageName());
        if (!TextUtils.isEmpty(strB)) {
            map.put("remoteAppId", strB);
        }
        xVar.a(map);
        com.vivo.push.e.a().a(xVar);
        com.vivo.push.util.p.d("OnNotificationClickTask", "notification is clicked by skip type[" + uPSNotificationMessageA.getSkipType() + "]");
        int skipType = uPSNotificationMessageA.getSkipType();
        boolean z = true;
        if (skipType == 1) {
            new Thread(new v(this, this.f7928a, uPSNotificationMessageA.getParams())).start();
            a(uPSNotificationMessageA);
            return;
        }
        if (skipType == 2) {
            String skipContent = uPSNotificationMessageA.getSkipContent();
            if (!skipContent.startsWith("http://") && !skipContent.startsWith("https://")) {
                z = false;
            }
            if (z) {
                Uri uri2 = Uri.parse(skipContent);
                Intent intent = new Intent("android.intent.action.VIEW", uri2);
                intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                b(intent, uPSNotificationMessageA.getParams());
                try {
                    this.f7928a.startActivity(intent);
                } catch (Exception unused) {
                    strConcat = "startActivity error : ".concat(String.valueOf(uri2));
                    com.vivo.push.util.p.a("OnNotificationClickTask", strConcat);
                }
                a(uPSNotificationMessageA);
                return;
            }
            strConcat = "url not legal";
            com.vivo.push.util.p.a("OnNotificationClickTask", strConcat);
            a(uPSNotificationMessageA);
            return;
        }
        if (skipType == 3) {
            a(uPSNotificationMessageA);
            return;
        }
        if (skipType != 4) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "illegitmacy skip type error : " + uPSNotificationMessageA.getSkipType());
            return;
        }
        String skipContent2 = uPSNotificationMessageA.getSkipContent();
        try {
            uri = Intent.parseUri(skipContent2, 1);
            str = uri.getPackage();
        } catch (Exception e) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "open activity error : ".concat(String.valueOf(skipContent2)), e);
        }
        if (!TextUtils.isEmpty(str) && !this.f7928a.getPackageName().equals(str)) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "open activity error : local pkgName is " + this.f7928a.getPackageName() + "; but remote pkgName is " + uri.getPackage());
            return;
        }
        String packageName = uri.getComponent() == null ? null : uri.getComponent().getPackageName();
        if (!TextUtils.isEmpty(packageName) && !this.f7928a.getPackageName().equals(packageName)) {
            com.vivo.push.util.p.a("OnNotificationClickTask", "open activity component error : local pkgName is " + this.f7928a.getPackageName() + "; but remote pkgName is " + uri.getPackage());
            return;
        }
        uri.setSelector(null);
        uri.setPackage(this.f7928a.getPackageName());
        uri.addFlags(335544320);
        b(uri, uPSNotificationMessageA.getParams());
        ActivityInfo activityInfoResolveActivityInfo = uri.resolveActivityInfo(this.f7928a.getPackageManager(), 65536);
        if (activityInfoResolveActivityInfo == null || activityInfoResolveActivityInfo.exported) {
            this.f7928a.startActivity(uri);
            a(uPSNotificationMessageA);
        } else {
            com.vivo.push.util.p.a("OnNotificationClickTask", "activity is not exported : " + activityInfoResolveActivityInfo.toString());
        }
    }
}

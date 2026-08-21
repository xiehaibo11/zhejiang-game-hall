package com.vivo.push.d;

import android.net.NetworkInfo;
import android.text.TextUtils;
import com.vivo.push.model.InsideNotificationItem;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
final class s implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ InsideNotificationItem f7913a;
    final /* synthetic */ com.vivo.push.b.q b;
    final /* synthetic */ r c;

    s(r rVar, InsideNotificationItem insideNotificationItem, com.vivo.push.b.q qVar) {
        this.c = rVar;
        this.f7913a = insideNotificationItem;
        this.b = qVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        char c;
        if (this.c.b.onNotificationMessageArrived(this.c.f7928a, com.vivo.push.util.q.a(this.f7913a))) {
            com.vivo.push.util.p.b("OnNotificationArrivedTask", "pkg name : " + this.c.f7928a.getPackageName() + " 应用主动拦截通知");
            com.vivo.push.util.p.b(this.c.f7928a, "应用主动拦截通知，导致通知无法展示，如需打开请在onNotificationMessageArrived中返回false");
            HashMap map = new HashMap();
            map.put(com.heytap.mcssdk.constant.b.c, String.valueOf(this.b.f()));
            String strB = com.vivo.push.util.z.b(this.c.f7928a, this.c.f7928a.getPackageName());
            if (!TextUtils.isEmpty(strB)) {
                map.put("remoteAppId", strB);
            }
            com.vivo.push.util.e.a(2120L, map);
            return;
        }
        int iB = this.c.b();
        if (iB > 0) {
            com.vivo.push.util.p.b("OnNotificationArrivedTask", "pkg name : " + this.c.f7928a.getPackageName() + " notify channel switch is " + iB);
            com.vivo.push.util.p.b(this.c.f7928a, "允许通知开关或者推送通知渠道开关关闭，导致通知无法展示，请到设置页打开应用通知开关 ".concat(String.valueOf(iB)));
            HashMap map2 = new HashMap();
            map2.put(com.heytap.mcssdk.constant.b.c, String.valueOf(this.b.f()));
            String strB2 = com.vivo.push.util.z.b(this.c.f7928a, this.c.f7928a.getPackageName());
            if (!TextUtils.isEmpty(strB2)) {
                map2.put("remoteAppId", strB2);
            }
            com.vivo.push.util.e.a(iB, map2);
            return;
        }
        com.vivo.push.util.k kVar = new com.vivo.push.util.k(this.c.f7928a, this.f7913a, this.b.f(), this.c.b.isAllowNet(this.c.f7928a), new t(this));
        boolean zIsShowBigPicOnMobileNet = this.f7913a.isShowBigPicOnMobileNet();
        String purePicUrl = this.f7913a.getPurePicUrl();
        if (TextUtils.isEmpty(purePicUrl)) {
            purePicUrl = this.f7913a.getCoverUrl();
        }
        if (!TextUtils.isEmpty(purePicUrl)) {
            com.vivo.push.util.p.c("OnNotificationArrivedTask", "showCode=".concat(String.valueOf(zIsShowBigPicOnMobileNet)));
            if (zIsShowBigPicOnMobileNet) {
                com.vivo.push.util.p.a(this.c.f7928a, "mobile net show");
            } else {
                com.vivo.push.util.p.a(this.c.f7928a, "mobile net unshow");
                NetworkInfo networkInfoA = com.vivo.push.util.r.a(this.c.f7928a);
                if (networkInfoA != null && networkInfoA.getState() == NetworkInfo.State.CONNECTED) {
                    int type = networkInfoA.getType();
                    c = type == 1 ? (char) 2 : type == 0 ? (char) 1 : (char) 3;
                } else {
                    c = 0;
                }
                if (c == 1) {
                    purePicUrl = null;
                    this.f7913a.clearCoverUrl();
                    this.f7913a.clearPurePicUrl();
                }
            }
        }
        kVar.execute(this.f7913a.getIconUrl(), purePicUrl);
    }
}

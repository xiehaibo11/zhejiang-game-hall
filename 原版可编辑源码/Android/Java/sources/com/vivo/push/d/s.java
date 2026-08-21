package com.vivo.push.d;

import android.net.NetworkInfo;
import android.text.TextUtils;
import com.vivo.push.model.InsideNotificationItem;
import java.util.HashMap;

final class s implements Runnable {
    final InsideNotificationItem a;
    final com.vivo.push.b.q b;
    final r c;

    s(r rVar, InsideNotificationItem insideNotificationItem, com.vivo.push.b.q qVar) {
        this.c = rVar;
        this.a = insideNotificationItem;
        this.b = qVar;
    }

    @Override
    public final void run() {
        char c;
        if (this.c.b.onNotificationMessageArrived(this.c.a, com.vivo.push.util.q.a(this.a))) {
            com.vivo.push.util.p.b("OnNotificationArrivedTask", "pkg name : " + this.c.a.getPackageName() + " 应用主动拦截通知");
            com.vivo.push.util.p.b(this.c.a, "应用主动拦截通知，导致通知无法展示，如需打开请在onNotificationMessageArrived中返回false");
            HashMap map = new HashMap();
            map.put(com.heytap.mcssdk.constant.b.c, String.valueOf(this.b.f()));
            String strB = com.vivo.push.util.z.b(this.c.a, this.c.a.getPackageName());
            if (!TextUtils.isEmpty(strB)) {
                map.put("remoteAppId", strB);
            }
            com.vivo.push.util.e.a(2120L, map);
            return;
        }
        int iB = this.c.b();
        if (iB > 0) {
            com.vivo.push.util.p.b("OnNotificationArrivedTask", "pkg name : " + this.c.a.getPackageName() + " notify channel switch is " + iB);
            com.vivo.push.util.p.b(this.c.a, "允许通知开关或者推送通知渠道开关关闭，导致通知无法展示，请到设置页打开应用通知开关 ".concat(String.valueOf(iB)));
            HashMap map2 = new HashMap();
            map2.put(com.heytap.mcssdk.constant.b.c, String.valueOf(this.b.f()));
            String strB2 = com.vivo.push.util.z.b(this.c.a, this.c.a.getPackageName());
            if (!TextUtils.isEmpty(strB2)) {
                map2.put("remoteAppId", strB2);
            }
            com.vivo.push.util.e.a(iB, map2);
            return;
        }
        com.vivo.push.util.k kVar = new com.vivo.push.util.k(this.c.a, this.a, this.b.f(), this.c.b.isAllowNet(this.c.a), new t(this));
        boolean zIsShowBigPicOnMobileNet = this.a.isShowBigPicOnMobileNet();
        String purePicUrl = this.a.getPurePicUrl();
        if (TextUtils.isEmpty(purePicUrl)) {
            purePicUrl = this.a.getCoverUrl();
        }
        if (!TextUtils.isEmpty(purePicUrl)) {
            com.vivo.push.util.p.c("OnNotificationArrivedTask", "showCode=".concat(String.valueOf(zIsShowBigPicOnMobileNet)));
            if (zIsShowBigPicOnMobileNet) {
                com.vivo.push.util.p.a(this.c.a, "mobile net show");
            } else {
                com.vivo.push.util.p.a(this.c.a, "mobile net unshow");
                NetworkInfo networkInfoA = com.vivo.push.util.r.a(this.c.a);
                if (networkInfoA != null && networkInfoA.getState() == NetworkInfo.State.CONNECTED) {
                    int type = networkInfoA.getType();
                    c = type == 1 ? (char) 2 : type == 0 ? (char) 1 : (char) 3;
                } else {
                    c = 0;
                }
                if (c == 1) {
                    purePicUrl = null;
                    this.a.clearCoverUrl();
                    this.a.clearPurePicUrl();
                }
            }
        }
        kVar.execute(this.a.getIconUrl(), purePicUrl);
    }
}

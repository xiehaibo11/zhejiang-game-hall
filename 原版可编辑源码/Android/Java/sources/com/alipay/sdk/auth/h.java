package com.alipay.sdk.auth;

import android.app.Activity;
import android.content.Intent;
import android.text.TextUtils;
import java.util.List;

final class h implements Runnable {
    final Activity a;
    final StringBuilder b;
    final APAuthInfo c;

    h(Activity activity, StringBuilder sb, APAuthInfo aPAuthInfo) {
        this.a = activity;
        this.b = sb;
        this.c = aPAuthInfo;
    }

    @Override
    public void run() {
        com.alipay.sdk.packet.b bVarA;
        try {
            try {
                bVarA = new com.alipay.sdk.packet.impl.a().a(this.a, this.b.toString());
            } catch (Throwable th) {
                com.alipay.sdk.util.c.a(com.alipay.sdk.m.o.a.a, th);
                bVarA = null;
            }
            if (g.c != null) {
                g.c.c();
                com.alipay.sdk.widget.a unused = g.c = null;
            }
        } catch (Exception unused2) {
            if (g.c == null) {
                return;
            }
        } catch (Throwable th2) {
            if (g.c != null) {
                g.c.c();
            }
            throw th2;
        }
        if (bVarA == null) {
            String unused3 = g.d = this.c.getRedirectUri() + "?resultCode=202";
            g.a(this.a, g.d);
            if (g.c != null) {
                g.c.c();
                return;
            }
            return;
        }
        List<com.alipay.sdk.protocol.b> listA = com.alipay.sdk.protocol.b.a(bVarA.c().optJSONObject("form").optJSONObject("onload"));
        int i = 0;
        while (true) {
            if (i >= listA.size()) {
                break;
            }
            if (listA.get(i).b() == com.alipay.sdk.protocol.a.b) {
                String unused4 = g.d = listA.get(i).c()[0];
                break;
            }
            i++;
        }
        if (!TextUtils.isEmpty(g.d)) {
            Intent intent = new Intent(this.a, (Class<?>) AuthActivity.class);
            intent.putExtra("params", g.d);
            intent.putExtra("redirectUri", this.c.getRedirectUri());
            this.a.startActivity(intent);
            if (g.c == null) {
                return;
            }
            g.c.c();
            return;
        }
        String unused5 = g.d = this.c.getRedirectUri() + "?resultCode=202";
        g.a(this.a, g.d);
        if (g.c != null) {
            g.c.c();
        }
    }
}

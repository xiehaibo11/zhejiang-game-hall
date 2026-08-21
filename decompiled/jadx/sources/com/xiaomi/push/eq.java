package com.xiaomi.push;

import android.app.Notification;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Color;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.widget.RemoteViews;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class eq extends Notification.Builder {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8136a;

    public eq(Context context) {
        super(context);
        this.f8136a = context;
    }

    public int a(Resources resources, String str, String str2, String str3) {
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        return resources.getIdentifier(str, str2, str3);
    }

    public final int a(String str) {
        return a(a().getResources(), str, "id", a().getPackageName());
    }

    protected Context a() {
        return this.f8136a;
    }

    @Override // android.app.Notification.Builder
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public eq addExtras(Bundle bundle) {
        if (Build.VERSION.SDK_INT >= 20) {
            super.addExtras(bundle);
        }
        return this;
    }

    @Override // android.app.Notification.Builder
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public eq setCustomContentView(RemoteViews remoteViews) {
        if (Build.VERSION.SDK_INT >= 24) {
            super.setCustomContentView(remoteViews);
        } else {
            super.setContent(remoteViews);
        }
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public eq mo319a(String str) {
        if (!TextUtils.isEmpty(str)) {
            try {
                bk.a((Object) this, "setColor", Integer.valueOf(Color.parseColor(str)));
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d("fail to set color. " + e);
            }
        }
        return this;
    }

    public eq a(Map<String, String> map) {
        return this;
    }

    /* JADX INFO: renamed from: a */
    protected void mo317a() {
    }

    @Override // android.app.Notification.Builder
    public Notification build() {
        mo317a();
        return super.build();
    }
}

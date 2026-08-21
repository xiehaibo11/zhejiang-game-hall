package com.xiaomi.push;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Bundle;
import android.text.TextUtils;
import android.widget.RemoteViews;

/* JADX INFO: loaded from: classes4.dex */
public class ep extends es {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8135a;
    private Bitmap b;
    private Bitmap c;

    public ep(Context context, String str) {
        super(context, str);
        this.f8135a = 16777216;
    }

    @Override // com.xiaomi.push.es
    /* JADX INFO: renamed from: a */
    public ep setLargeIcon(Bitmap bitmap) {
        if (b() && bitmap != null) {
            if (bitmap.getWidth() != 984 || 184 > bitmap.getHeight() || bitmap.getHeight() > 1678) {
                com.xiaomi.channel.commonutils.logger.b.m43a("colorful notification banner image resolution error, must belong to [984*184, 984*1678]");
            } else {
                this.b = bitmap;
            }
        }
        return this;
    }

    @Override // com.xiaomi.push.eq
    /* JADX INFO: renamed from: a */
    public ep mo319a(String str) {
        if (b() && !TextUtils.isEmpty(str)) {
            try {
                this.f8135a = Color.parseColor(str);
            } catch (Exception unused) {
                com.xiaomi.channel.commonutils.logger.b.m43a("parse banner notification image text color error");
            }
        }
        return this;
    }

    @Override // com.xiaomi.push.es, android.app.Notification.Builder
    /* JADX INFO: renamed from: a */
    public es setLargeIcon(Bitmap bitmap) {
        return this;
    }

    @Override // com.xiaomi.push.es
    /* JADX INFO: renamed from: a */
    protected String mo324a() {
        return "notification_banner";
    }

    @Override // com.xiaomi.push.es, com.xiaomi.push.eq
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo317a() {
        RemoteViews remoteViewsA;
        Bitmap bitmapA;
        if (!b() || this.b == null) {
            b();
            return;
        }
        super.mo317a();
        Resources resources = mo324a().getResources();
        String packageName = mo324a().getPackageName();
        int iA = a(resources, "bg", "id", packageName);
        if (m.a(mo324a()) >= 10) {
            remoteViewsA = mo324a();
            bitmapA = a(this.b, 30.0f);
        } else {
            remoteViewsA = mo324a();
            bitmapA = this.b;
        }
        remoteViewsA.setImageViewBitmap(iA, bitmapA);
        int iA2 = a(resources, "icon", "id", packageName);
        if (this.c != null) {
            mo324a().setImageViewBitmap(iA2, this.c);
        } else {
            a(iA2);
        }
        int iA3 = a(resources, "title", "id", packageName);
        mo324a().setTextViewText(iA3, this.f332a);
        if (this.f335a != null && this.f8135a == 16777216) {
            mo319a(this.f335a.get("notification_image_text_color"));
        }
        RemoteViews remoteViewsA2 = mo324a();
        int i = this.f8135a;
        remoteViewsA2.setTextColor(iA3, (i == 16777216 || !a(i)) ? -1 : -16777216);
        setCustomContentView(mo324a());
        Bundle bundle = new Bundle();
        bundle.putBoolean("miui.customHeight", true);
        addExtras(bundle);
    }

    @Override // com.xiaomi.push.es
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected boolean mo318a() {
        if (!m.m574a()) {
            return false;
        }
        Resources resources = mo324a().getResources();
        String packageName = mo324a().getPackageName();
        return (a(mo324a().getResources(), "bg", "id", mo324a().getPackageName()) == 0 || a(resources, "icon", "id", packageName) == 0 || a(resources, "title", "id", packageName) == 0 || m.a(mo324a()) < 9) ? false : true;
    }

    public ep b(Bitmap bitmap) {
        if (b() && bitmap != null) {
            this.c = bitmap;
        }
        return this;
    }

    @Override // com.xiaomi.push.es
    protected String b() {
        return null;
    }
}

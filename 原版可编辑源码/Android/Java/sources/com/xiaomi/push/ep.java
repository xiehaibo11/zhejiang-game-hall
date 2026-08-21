package com.xiaomi.push;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Bundle;
import android.text.TextUtils;
import android.widget.RemoteViews;

public class ep extends es {
    private int a;
    private Bitmap b;
    private Bitmap c;

    public ep(Context context, String str) {
        super(context, str);
        this.a = 16777216;
    }

    @Override
    public ep setLargeIcon(Bitmap bitmap) {
        if (b() && bitmap != null) {
            if (bitmap.getWidth() != 984 || 184 > bitmap.getHeight() || bitmap.getHeight() > 1678) {
                com.xiaomi.channel.commonutils.logger.b.a("colorful notification banner image resolution error, must belong to [984*184, 984*1678]");
            } else {
                this.b = bitmap;
            }
        }
        return this;
    }

    @Override
    public ep a(String str) {
        if (b() && !TextUtils.isEmpty(str)) {
            try {
                this.a = Color.parseColor(str);
            } catch (Exception unused) {
                com.xiaomi.channel.commonutils.logger.b.a("parse banner notification image text color error");
            }
        }
        return this;
    }

    @Override
    public es setLargeIcon(Bitmap bitmap) {
        return this;
    }

    @Override
    protected String a() {
        return "notification_banner";
    }

    @Override
    public void a() {
        RemoteViews remoteViewsA;
        Bitmap bitmapA;
        if (!b() || this.b == null) {
            b();
            return;
        }
        super.a();
        Resources resources = a().getResources();
        String packageName = a().getPackageName();
        int iA = a(resources, "bg", "id", packageName);
        if (m.a(a()) >= 10) {
            remoteViewsA = a();
            bitmapA = a(this.b, 30.0f);
        } else {
            remoteViewsA = a();
            bitmapA = this.b;
        }
        remoteViewsA.setImageViewBitmap(iA, bitmapA);
        int iA2 = a(resources, "icon", "id", packageName);
        if (this.c != null) {
            a().setImageViewBitmap(iA2, this.c);
        } else {
            a(iA2);
        }
        int iA3 = a(resources, "title", "id", packageName);
        a().setTextViewText(iA3, this.a);
        if (this.a != null && this.a == 16777216) {
            a(this.a.get("notification_image_text_color"));
        }
        RemoteViews remoteViewsA2 = a();
        int i = this.a;
        remoteViewsA2.setTextColor(iA3, (i == 16777216 || !a(i)) ? -1 : -16777216);
        setCustomContentView(a());
        Bundle bundle = new Bundle();
        bundle.putBoolean("miui.customHeight", true);
        addExtras(bundle);
    }

    @Override
    protected boolean a() {
        if (!m.a()) {
            return false;
        }
        Resources resources = a().getResources();
        String packageName = a().getPackageName();
        return (a(a().getResources(), "bg", "id", a().getPackageName()) == 0 || a(resources, "icon", "id", packageName) == 0 || a(resources, "title", "id", packageName) == 0 || m.a(a()) < 9) ? false : true;
    }

    public ep b(Bitmap bitmap) {
        if (b() && bitmap != null) {
            this.c = bitmap;
        }
        return this;
    }

    @Override
    protected String b() {
        return null;
    }
}

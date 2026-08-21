package com.xiaomi.push;

import android.app.PendingIntent;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.RoundRectShape;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.widget.RemoteViews;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;

/* JADX INFO: loaded from: classes4.dex */
public class er extends es {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8137a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private PendingIntent f327a;
    private int b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private Bitmap f328b;
    private int c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    private CharSequence f329c;

    public er(Context context, int i, String str) {
        super(context, i, str);
        this.f8137a = 16777216;
        this.b = 16777216;
        this.c = 16777216;
    }

    private Drawable a(int i, int i2, int i3, float f) {
        ShapeDrawable shapeDrawable = new ShapeDrawable();
        shapeDrawable.setShape(new RoundRectShape(new float[]{f, f, f, f, f, f, f, f}, null, null));
        shapeDrawable.getPaint().setColor(i);
        shapeDrawable.getPaint().setStyle(Paint.Style.FILL);
        shapeDrawable.setIntrinsicWidth(i2);
        shapeDrawable.setIntrinsicHeight(i3);
        return shapeDrawable;
    }

    private void a(RemoteViews remoteViews, int i, int i2, int i3, boolean z) {
        int iA = a(6.0f);
        remoteViews.setViewPadding(i, iA, 0, iA, 0);
        int i4 = z ? -1 : -16777216;
        remoteViews.setTextColor(i2, i4);
        remoteViews.setTextColor(i3, i4);
    }

    @Override // com.xiaomi.push.es
    /* JADX INFO: renamed from: a */
    public er setLargeIcon(Bitmap bitmap) {
        if (b() && bitmap != null) {
            if (bitmap.getWidth() != 984 || bitmap.getHeight() < 177 || bitmap.getHeight() > 207) {
                com.xiaomi.channel.commonutils.logger.b.m43a("colorful notification bg image resolution error, must [984*177, 984*207]");
            } else {
                this.f328b = bitmap;
            }
        }
        return this;
    }

    public er a(CharSequence charSequence, PendingIntent pendingIntent) {
        if (b()) {
            super.addAction(0, charSequence, pendingIntent);
            this.f329c = charSequence;
            this.f327a = pendingIntent;
        }
        return this;
    }

    @Override // com.xiaomi.push.eq
    /* JADX INFO: renamed from: a */
    public er mo319a(String str) {
        if (b() && !TextUtils.isEmpty(str)) {
            try {
                this.b = Color.parseColor(str);
            } catch (Exception unused) {
                com.xiaomi.channel.commonutils.logger.b.m43a("parse colorful notification button bg color error");
            }
        }
        return this;
    }

    @Override // com.xiaomi.push.es
    /* JADX INFO: renamed from: a */
    protected String mo324a() {
        return "notification_colorful";
    }

    @Override // com.xiaomi.push.es, com.xiaomi.push.eq
    /* JADX INFO: renamed from: a */
    public void mo317a() {
        RemoteViews remoteViewsA;
        Bitmap bitmapA;
        boolean zA;
        RemoteViews remoteViewsA2;
        RemoteViews remoteViewsA3;
        Drawable drawableA;
        if (!b()) {
            b();
            return;
        }
        super.mo317a();
        Resources resources = mo324a().getResources();
        String packageName = mo324a().getPackageName();
        int iA = a(resources, "icon", "id", packageName);
        if (this.f330a == null) {
            a(iA);
        } else {
            mo324a().setImageViewBitmap(iA, this.f330a);
        }
        int iA2 = a(resources, "title", "id", packageName);
        int iA3 = a(resources, "content", "id", packageName);
        mo324a().setTextViewText(iA2, this.f332a);
        mo324a().setTextViewText(iA3, this.f337b);
        if (!TextUtils.isEmpty(this.f329c)) {
            int iA4 = a(resources, "buttonContainer", "id", packageName);
            int iA5 = a(resources, "button", "id", packageName);
            int iA6 = a(resources, "buttonBg", "id", packageName);
            mo324a().setViewVisibility(iA4, 0);
            mo324a().setTextViewText(iA5, this.f329c);
            mo324a().setOnClickPendingIntent(iA4, this.f327a);
            if (this.b != 16777216) {
                int iA7 = a(70.0f);
                int iA8 = a(29.0f);
                mo324a().setImageViewBitmap(iA6, com.xiaomi.push.service.al.a(a(this.b, iA7, iA8, iA8 / 2.0f)));
                mo324a().setTextColor(iA5, a(this.b) ? -1 : -16777216);
            }
        }
        int iA9 = a(resources, "bg", "id", packageName);
        int iA10 = a(resources, "container", "id", packageName);
        if (this.f8137a != 16777216) {
            if (m.a(mo324a()) >= 10) {
                remoteViewsA3 = mo324a();
                drawableA = a(this.f8137a, 984, PsExtractor.AUDIO_STREAM, 30.0f);
            } else {
                remoteViewsA3 = mo324a();
                drawableA = a(this.f8137a, 984, PsExtractor.AUDIO_STREAM, 0.0f);
            }
            remoteViewsA3.setImageViewBitmap(iA9, com.xiaomi.push.service.al.a(drawableA));
            remoteViewsA2 = mo324a();
            zA = a(this.f8137a);
        } else {
            if (this.f328b == null) {
                if (Build.VERSION.SDK_INT >= 24) {
                    mo324a().setViewVisibility(iA, 8);
                    mo324a().setViewVisibility(iA9, 8);
                    try {
                        bk.a((Object) this, "setStyle", v.a(mo324a(), "android.app.Notification$DecoratedCustomViewStyle").getConstructor(new Class[0]).newInstance(new Object[0]));
                    } catch (Exception unused) {
                        com.xiaomi.channel.commonutils.logger.b.m43a("load class DecoratedCustomViewStyle failed");
                    }
                }
                Bundle bundle = new Bundle();
                bundle.putBoolean("miui.customHeight", true);
                addExtras(bundle);
                setCustomContentView(mo324a());
            }
            if (m.a(mo324a()) >= 10) {
                remoteViewsA = mo324a();
                bitmapA = a(this.f328b, 30.0f);
            } else {
                remoteViewsA = mo324a();
                bitmapA = this.f328b;
            }
            remoteViewsA.setImageViewBitmap(iA9, bitmapA);
            if (this.f335a != null && this.c == 16777216) {
                c(this.f335a.get("notification_image_text_color"));
            }
            int i = this.c;
            zA = i == 16777216 || !a(i);
            remoteViewsA2 = mo324a();
        }
        a(remoteViewsA2, iA10, iA2, iA3, zA);
        Bundle bundle2 = new Bundle();
        bundle2.putBoolean("miui.customHeight", true);
        addExtras(bundle2);
        setCustomContentView(mo324a());
    }

    @Override // com.xiaomi.push.es
    /* JADX INFO: renamed from: a */
    protected boolean mo318a() {
        if (!m.m574a()) {
            return false;
        }
        Resources resources = mo324a().getResources();
        String packageName = mo324a().getPackageName();
        return (a(resources, "icon", "id", packageName) == 0 || a(resources, "title", "id", packageName) == 0 || a(resources, "content", "id", packageName) == 0) ? false : true;
    }

    public er b(String str) {
        if (b() && !TextUtils.isEmpty(str)) {
            try {
                this.f8137a = Color.parseColor(str);
            } catch (Exception unused) {
                com.xiaomi.channel.commonutils.logger.b.m43a("parse colorful notification bg color error");
            }
        }
        return this;
    }

    @Override // com.xiaomi.push.es
    protected String b() {
        return "notification_colorful_copy";
    }

    public er c(String str) {
        if (b() && !TextUtils.isEmpty(str)) {
            try {
                this.c = Color.parseColor(str);
            } catch (Exception unused) {
                com.xiaomi.channel.commonutils.logger.b.m43a("parse colorful notification image text color error");
            }
        }
        return this;
    }
}

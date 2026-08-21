package com.xiaomi.push;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.Rect;
import android.graphics.RectF;
import android.os.Build;
import android.os.Bundle;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import android.widget.RemoteViews;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public abstract class es extends eq {
    private int a;
    protected Bitmap a;
    private RemoteViews a;
    protected CharSequence a;
    private String a;
    private ArrayList<Notification.Action> a;
    protected Map<String, String> a;
    private boolean a;
    private int b;
    protected CharSequence b;
    private boolean b;

    public es(Context context, int i, String str) {
        super(context);
        this.a = new ArrayList<>();
        this.b = 0;
        this.a = str;
        this.a = i;
        c();
    }

    public es(Context context, String str) {
        this(context, 0, str);
    }

    private Bitmap a() {
        return com.xiaomi.push.service.al.a(h.a(a(), this.a));
    }

    private String c() {
        boolean zE = e();
        this.b = zE;
        return zE ? b() : a();
    }

    private void c() {
        int iA = a(a().getResources(), c(), "layout", a().getPackageName());
        if (iA == 0) {
            com.xiaomi.channel.commonutils.logger.b.a("create RemoteViews failed, no such layout resource was found");
        } else {
            this.a = new RemoteViews(a().getPackageName(), iA);
            this.a = a();
        }
    }

    private boolean c() {
        Map<String, String> map = this.a;
        return map != null && Boolean.parseBoolean(map.get("custom_builder_set_title"));
    }

    private void d() {
        super.setContentTitle(this.a);
        super.setContentText(this.b);
    }

    private boolean d() {
        return (TextUtils.isEmpty(b()) || TextUtils.isEmpty(this.a)) ? false : true;
    }

    private boolean e() {
        return d() && f();
    }

    private boolean f() {
        List<StatusBarNotification> listB;
        if (Build.VERSION.SDK_INT >= 20 && (listB = com.xiaomi.push.service.ax.a(a(), this.a).b()) != null && !listB.isEmpty()) {
            for (StatusBarNotification statusBarNotification : listB) {
                if (statusBarNotification.getId() == this.a) {
                    if (statusBarNotification.getNotification() == null) {
                        return false;
                    }
                    return !r0.extras.getBoolean("mipush.customCopyLayout", true);
                }
            }
        }
        return false;
    }

    protected int a(float f) {
        return (int) ((f * a().getResources().getDisplayMetrics().density) + 0.5f);
    }

    protected Bitmap a(Bitmap bitmap, float f) {
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(bitmapCreateBitmap);
        Paint paint = new Paint();
        paint.setAntiAlias(true);
        Rect rect = new Rect(0, 0, bitmap.getWidth(), bitmap.getHeight());
        canvas.drawRoundRect(new RectF(rect), f, f, paint);
        paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC_IN));
        canvas.drawBitmap(bitmap, rect, rect, paint);
        if (!bitmap.isRecycled()) {
            bitmap.recycle();
        }
        return bitmapCreateBitmap;
    }

    public final RemoteViews a() {
        return this.a;
    }

    @Override
    public eq a(Map<String, String> map) {
        this.a = map;
        return this;
    }

    @Override
    public es addAction(int i, CharSequence charSequence, PendingIntent pendingIntent) {
        addAction(new Notification.Action(i, charSequence, pendingIntent));
        return this;
    }

    @Override
    public es addAction(Notification.Action action) {
        if (action != null) {
            this.a.add(action);
        }
        int i = this.b;
        this.b = i + 1;
        a(i, action);
        return this;
    }

    @Override
    public es setLargeIcon(Bitmap bitmap) {
        this.a = bitmap;
        return this;
    }

    @Override
    public es setContentTitle(CharSequence charSequence) {
        this.a = charSequence;
        return this;
    }

    protected abstract String a();

    @Override
    protected void a() {
        super.a();
        Bundle bundle = new Bundle();
        if (d()) {
            bundle.putBoolean("mipush.customCopyLayout", this.b);
        } else {
            bundle.putBoolean("mipush.customCopyLayout", false);
        }
        bundle.putBoolean("miui.customHeight", false);
        bundle.putBoolean("mipush.customNotification", true);
        bundle.putInt("mipush.customLargeIconId", a("large_icon"));
        if (this.a.size() > 0) {
            Notification.Action[] actionArr = new Notification.Action[this.a.size()];
            this.a.toArray(actionArr);
            bundle.putParcelableArray("mipush.customActions", actionArr);
        }
        if (c() || !com.xiaomi.push.service.ay.a(a().getContentResolver())) {
            d();
        } else {
            bundle.putCharSequence("mipush.customTitle", this.a);
            bundle.putCharSequence("mipush.customContent", this.b);
        }
        addExtras(bundle);
    }

    protected void a(int i) {
        Bitmap bitmapA = a();
        if (bitmapA != null) {
            a().setImageViewBitmap(i, bitmapA);
            return;
        }
        int iB = h.b(a(), this.a);
        if (iB != 0) {
            a().setImageViewResource(i, iB);
        }
    }

    protected void a(int i, Notification.Action action) {
    }

    protected abstract boolean a();

    protected final boolean a(int i) {
        return ((((double) Color.red(i)) * 0.299d) + (((double) Color.green(i)) * 0.587d)) + (((double) Color.blue(i)) * 0.114d) < 192.0d;
    }

    @Override
    public es setContentText(CharSequence charSequence) {
        this.b = charSequence;
        return this;
    }

    protected abstract String b();

    protected final void b() {
        super.setContentTitle(this.a);
        super.setContentText(this.b);
        Bitmap bitmap = this.a;
        if (bitmap != null) {
            super.setLargeIcon(bitmap);
        }
    }

    protected final boolean b() {
        return this.a;
    }
}

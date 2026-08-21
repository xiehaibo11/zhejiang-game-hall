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

/* JADX INFO: loaded from: classes4.dex */
public abstract class es extends eq {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8138a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected Bitmap f330a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private RemoteViews f331a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected CharSequence f332a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f333a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ArrayList<Notification.Action> f334a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected Map<String, String> f335a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f336a;
    private int b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    protected CharSequence f337b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private boolean f338b;

    public es(Context context, int i, String str) {
        super(context);
        this.f334a = new ArrayList<>();
        this.b = 0;
        this.f333a = str;
        this.f8138a = i;
        m320c();
    }

    public es(Context context, String str) {
        this(context, 0, str);
    }

    private Bitmap a() {
        return com.xiaomi.push.service.al.a(h.m396a(a(), this.f333a));
    }

    private String c() {
        boolean zE = e();
        this.f338b = zE;
        return zE ? b() : mo324a();
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    private void m320c() {
        int iA = a(a().getResources(), c(), "layout", a().getPackageName());
        if (iA == 0) {
            com.xiaomi.channel.commonutils.logger.b.m43a("create RemoteViews failed, no such layout resource was found");
        } else {
            this.f331a = new RemoteViews(a().getPackageName(), iA);
            this.f336a = mo318a();
        }
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    private boolean m321c() {
        Map<String, String> map = this.f335a;
        return map != null && Boolean.parseBoolean(map.get("custom_builder_set_title"));
    }

    private void d() {
        super.setContentTitle(this.f332a);
        super.setContentText(this.f337b);
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    private boolean m322d() {
        return (TextUtils.isEmpty(b()) || TextUtils.isEmpty(this.f333a)) ? false : true;
    }

    private boolean e() {
        return m322d() && f();
    }

    private boolean f() {
        List<StatusBarNotification> listM645b;
        if (Build.VERSION.SDK_INT >= 20 && (listM645b = com.xiaomi.push.service.ax.a(a(), this.f333a).m645b()) != null && !listM645b.isEmpty()) {
            for (StatusBarNotification statusBarNotification : listM645b) {
                if (statusBarNotification.getId() == this.f8138a) {
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

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public final RemoteViews m323a() {
        return this.f331a;
    }

    @Override // com.xiaomi.push.eq
    public eq a(Map<String, String> map) {
        this.f335a = map;
        return this;
    }

    @Override // android.app.Notification.Builder
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public es addAction(int i, CharSequence charSequence, PendingIntent pendingIntent) {
        addAction(new Notification.Action(i, charSequence, pendingIntent));
        return this;
    }

    @Override // android.app.Notification.Builder
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public es addAction(Notification.Action action) {
        if (action != null) {
            this.f334a.add(action);
        }
        int i = this.b;
        this.b = i + 1;
        a(i, action);
        return this;
    }

    @Override // android.app.Notification.Builder
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public es setLargeIcon(Bitmap bitmap) {
        this.f330a = bitmap;
        return this;
    }

    @Override // android.app.Notification.Builder
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public es setContentTitle(CharSequence charSequence) {
        this.f332a = charSequence;
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected abstract String mo324a();

    @Override // com.xiaomi.push.eq
    /* JADX INFO: renamed from: a */
    protected void mo317a() {
        super.mo317a();
        Bundle bundle = new Bundle();
        if (m322d()) {
            bundle.putBoolean("mipush.customCopyLayout", this.f338b);
        } else {
            bundle.putBoolean("mipush.customCopyLayout", false);
        }
        bundle.putBoolean("miui.customHeight", false);
        bundle.putBoolean("mipush.customNotification", true);
        bundle.putInt("mipush.customLargeIconId", a("large_icon"));
        if (this.f334a.size() > 0) {
            Notification.Action[] actionArr = new Notification.Action[this.f334a.size()];
            this.f334a.toArray(actionArr);
            bundle.putParcelableArray("mipush.customActions", actionArr);
        }
        if (m321c() || !com.xiaomi.push.service.ay.m647a(a().getContentResolver())) {
            d();
        } else {
            bundle.putCharSequence("mipush.customTitle", this.f332a);
            bundle.putCharSequence("mipush.customContent", this.f337b);
        }
        addExtras(bundle);
    }

    protected void a(int i) {
        Bitmap bitmapA = a();
        if (bitmapA != null) {
            m323a().setImageViewBitmap(i, bitmapA);
            return;
        }
        int iB = h.b(a(), this.f333a);
        if (iB != 0) {
            m323a().setImageViewResource(i, iB);
        }
    }

    protected void a(int i, Notification.Action action) {
    }

    /* JADX INFO: renamed from: a */
    protected abstract boolean mo318a();

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected final boolean m325a(int i) {
        return ((((double) Color.red(i)) * 0.299d) + (((double) Color.green(i)) * 0.587d)) + (((double) Color.blue(i)) * 0.114d) < 192.0d;
    }

    @Override // android.app.Notification.Builder
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public es setContentText(CharSequence charSequence) {
        this.f337b = charSequence;
        return this;
    }

    protected abstract String b();

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    protected final void m326b() {
        super.setContentTitle(this.f332a);
        super.setContentText(this.f337b);
        Bitmap bitmap = this.f330a;
        if (bitmap != null) {
            super.setLargeIcon(bitmap);
        }
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    protected final boolean m327b() {
        return this.f336a;
    }
}

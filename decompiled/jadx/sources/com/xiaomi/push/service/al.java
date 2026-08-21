package com.xiaomi.push.service;

import android.app.ActivityManager;
import android.app.Notification;
import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import android.util.Pair;
import android.widget.RemoteViews;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tencent.connect.common.Constants;
import com.tkay.expressad.foundation.d.c;
import com.xiaomi.push.Cif;
import com.xiaomi.push.eo;
import com.xiaomi.push.ep;
import com.xiaomi.push.eq;
import com.xiaomi.push.er;
import com.xiaomi.push.h;
import com.xiaomi.push.hj;
import com.xiaomi.push.hw;
import com.xiaomi.push.service.aw;
import java.lang.reflect.Method;
import java.net.MalformedURLException;
import java.net.URISyntaxException;
import java.net.URL;
import java.text.SimpleDateFormat;
import java.util.Arrays;
import java.util.Date;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class al {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static long f8305a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static volatile as f903a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final LinkedList<Pair<Integer, Cif>> f904a = new LinkedList<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static ExecutorService f905a = Executors.newCachedThreadPool();

    class a implements Callable<Bitmap> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Context f8306a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f906a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f907a;

        public a(String str, Context context, boolean z) {
            this.f8306a = context;
            this.f906a = str;
            this.f907a = z;
        }

        @Override // java.util.concurrent.Callable
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public Bitmap call() throws Throwable {
            Bitmap bitmapA = null;
            if (TextUtils.isEmpty(this.f906a)) {
                com.xiaomi.channel.commonutils.logger.b.m43a("Failed get online picture/icon resource cause picUrl is empty");
                return null;
            }
            if (this.f906a.startsWith("http")) {
                aw.b bVarA = aw.a(this.f8306a, this.f906a, this.f907a);
                if (bVarA != null) {
                    return bVarA.f925a;
                }
            } else {
                bitmapA = aw.a(this.f8306a, this.f906a);
                if (bitmapA != null) {
                    return bitmapA;
                }
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("Failed get online picture/icon resource");
            return bitmapA;
        }
    }

    public class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        long f8307a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        Notification f908a;
    }

    public class c {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public String f909a;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public long f8308a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public boolean f910a = false;
    }

    static int a(Context context, String str) {
        return context.getSharedPreferences("pref_notify_type", 0).getInt(str, Integer.MAX_VALUE);
    }

    private static int a(Context context, String str, String str2) {
        if (str.equals(context.getPackageName())) {
            return context.getResources().getIdentifier(str2, com.tkay.expressad.foundation.h.i.c, str);
        }
        return 0;
    }

    private static int a(Context context, String str, Map<String, String> map, int i) {
        ComponentName componentNameA;
        Intent intentB = b(context, str, map, i);
        if (intentB == null || (componentNameA = l.a(context, intentB)) == null) {
            return 0;
        }
        return componentNameA.hashCode();
    }

    private static int a(Map<String, String> map) {
        String str = map == null ? null : map.get("timeout");
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        try {
            return Integer.parseInt(str);
        } catch (Exception unused) {
            return 0;
        }
    }

    private static Notification a(Notification notification) {
        Object objA = com.xiaomi.push.bk.a(notification, "extraNotification");
        if (objA != null) {
            com.xiaomi.push.bk.a(objA, "setCustomizedIcon", true);
        }
        return notification;
    }

    private static PendingIntent a(Context context, Cif cif, String str, byte[] bArr, int i) {
        return a(context, cif, str, bArr, i, 0, a(context, cif, str));
    }

    private static PendingIntent a(Context context, Cif cif, String str, byte[] bArr, int i, int i2, boolean z) {
        Intent intent;
        int i3 = c(cif) ? 1000 : m623a(cif) ? 3000 : -1;
        hw hwVarM478a = cif.m478a();
        String strM444a = hwVarM478a != null ? hwVarM478a.m444a() : "";
        boolean zM623a = m623a(cif);
        if (hwVarM478a != null && !TextUtils.isEmpty(hwVarM478a.f563e)) {
            Intent intent2 = new Intent("android.intent.action.VIEW");
            intent2.setData(Uri.parse(hwVarM478a.f563e));
            try {
                String protocol = new URL(hwVarM478a.f563e).getProtocol();
                if ("http".equals(protocol) || "https".equals(protocol)) {
                    ay.a(context, str, intent2);
                } else {
                    intent2.setPackage(str);
                }
            } catch (MalformedURLException unused) {
                com.xiaomi.channel.commonutils.logger.b.m43a("meet URL exception : " + hwVarM478a.f563e);
                intent2.setPackage(str);
            }
            intent2.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent2.putExtra("messageId", strM444a);
            intent2.putExtra("eventMessageType", i3);
            return Build.VERSION.SDK_INT >= 31 ? PendingIntent.getActivity(context, 0, intent2, 167772160) : PendingIntent.getActivity(context, 0, intent2, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        }
        if (zM623a) {
            intent = new Intent();
            intent.setComponent(new ComponentName("com.xiaomi.xmsf", "com.xiaomi.mipush.sdk.PushMessageHandler"));
        } else {
            intent = new Intent("com.xiaomi.mipush.RECEIVE_MESSAGE");
            intent.setComponent(new ComponentName(str, "com.xiaomi.mipush.sdk.PushMessageHandler"));
        }
        intent.putExtra("mipush_payload", bArr);
        intent.putExtra("mipush_notified", true);
        intent.addCategory(String.valueOf(i));
        intent.addCategory(String.valueOf(strM444a));
        intent.putExtra("notification_click_button", i2);
        intent.putExtra("messageId", strM444a);
        intent.putExtra("eventMessageType", i3);
        if (zM623a || !z) {
            a(context, intent, cif, hwVarM478a, strM444a, i2);
            return Build.VERSION.SDK_INT >= 31 ? PendingIntent.getService(context, 0, intent, 167772160) : PendingIntent.getService(context, 0, intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        }
        Intent intent3 = new Intent();
        intent3.setComponent(a(str));
        intent3.addFlags(276824064);
        intent3.putExtra("mipush_serviceIntent", intent);
        intent3.addCategory(String.valueOf(i));
        intent3.addCategory(String.valueOf(strM444a));
        intent3.addCategory(String.valueOf(i2));
        a(context, intent3, cif, hwVarM478a, strM444a, i2);
        a(intent3);
        return Build.VERSION.SDK_INT >= 31 ? PendingIntent.getActivity(context, 0, intent3, 167772160) : PendingIntent.getActivity(context, 0, intent3, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
    }

    private static PendingIntent a(Context context, String str, Cif cif, byte[] bArr, int i, int i2) {
        Map<String, String> mapM445a = cif.m478a().m445a();
        if (mapM445a == null) {
            return null;
        }
        boolean zA = a(context, cif, str);
        if (zA) {
            return a(context, cif, str, bArr, i, i2, zA);
        }
        Intent intentM618a = m618a(context, str, mapM445a, i2);
        if (intentM618a != null) {
            return PendingIntent.getActivity(context, 0, intentM618a, Build.VERSION.SDK_INT >= 31 ? 167772160 : DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        }
        return null;
    }

    public static ComponentName a(String str) {
        return new ComponentName(str, "com.xiaomi.mipush.sdk.NotificationClickedActivity");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static Intent m618a(Context context, String str, Map<String, String> map, int i) {
        if (m628b(map)) {
            return a(context, str, map, String.format("cust_btn_%s_ne", Integer.valueOf(i)), String.format("cust_btn_%s_iu", Integer.valueOf(i)), String.format("cust_btn_%s_ic", Integer.valueOf(i)), String.format("cust_btn_%s_wu", Integer.valueOf(i)));
        }
        if (i == 1) {
            return a(context, str, map, "notification_style_button_left_notify_effect", "notification_style_button_left_intent_uri", "notification_style_button_left_intent_class", "notification_style_button_left_web_uri");
        }
        if (i == 2) {
            return a(context, str, map, "notification_style_button_mid_notify_effect", "notification_style_button_mid_intent_uri", "notification_style_button_mid_intent_class", "notification_style_button_mid_web_uri");
        }
        if (i == 3) {
            return a(context, str, map, "notification_style_button_right_notify_effect", "notification_style_button_right_intent_uri", "notification_style_button_right_intent_class", "notification_style_button_right_web_uri");
        }
        if (i != 4) {
            return null;
        }
        return a(context, str, map, "notification_colorful_button_notify_effect", "notification_colorful_button_intent_uri", "notification_colorful_button_intent_class", "notification_colorful_button_web_uri");
    }

    private static Intent a(Context context, String str, Map<String, String> map, String str2, String str3, String str4, String str5) {
        Intent launchIntentForPackage;
        Intent intent;
        String protocol;
        Intent uri;
        String str6 = map.get(str2);
        if (TextUtils.isEmpty(str6)) {
            return null;
        }
        if (bk.f8338a.equals(str6)) {
            try {
                launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str);
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e.getMessage());
                launchIntentForPackage = null;
            }
        } else if (bk.b.equals(str6)) {
            if (map.containsKey(str3)) {
                String str7 = map.get(str3);
                if (str7 != null) {
                    try {
                        uri = Intent.parseUri(str7, 1);
                    } catch (URISyntaxException e2) {
                        e = e2;
                        uri = null;
                    }
                    try {
                        uri.setPackage(str);
                    } catch (URISyntaxException e3) {
                        e = e3;
                        com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e.getMessage());
                    }
                    launchIntentForPackage = uri;
                }
            } else if (map.containsKey(str4)) {
                String str8 = map.get(str4);
                intent = new Intent();
                intent.setComponent(new ComponentName(str, str8));
                launchIntentForPackage = intent;
            }
            launchIntentForPackage = null;
        } else {
            if (bk.c.equals(str6)) {
                String str9 = map.get(str5);
                if (!TextUtils.isEmpty(str9)) {
                    String strTrim = str9.trim();
                    if (!strTrim.startsWith("http://") && !strTrim.startsWith("https://")) {
                        strTrim = "http://" + strTrim;
                    }
                    try {
                        protocol = new URL(strTrim).getProtocol();
                    } catch (MalformedURLException e4) {
                        e = e4;
                        intent = null;
                    }
                    if ("http".equals(protocol) || "https".equals(protocol)) {
                        intent = new Intent("android.intent.action.VIEW");
                        try {
                            intent.setData(Uri.parse(strTrim));
                            ay.a(context, str, intent);
                        } catch (MalformedURLException e5) {
                            e = e5;
                            com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e.getMessage());
                        }
                        launchIntentForPackage = intent;
                    }
                }
            }
            launchIntentForPackage = null;
        }
        if (launchIntentForPackage != null) {
            launchIntentForPackage.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            try {
                if (context.getPackageManager().resolveActivity(launchIntentForPackage, 65536) != null) {
                    return launchIntentForPackage;
                }
                if (Build.VERSION.SDK_INT >= 30 && !com.xiaomi.push.m.m575a(context) && bk.c.equals(str6)) {
                    return launchIntentForPackage;
                }
                com.xiaomi.channel.commonutils.logger.b.m43a("not resolve activity:" + launchIntentForPackage + "for buttons");
            } catch (Exception e6) {
                com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e6.getMessage());
            }
        }
        return null;
    }

    private static Bitmap a(Context context, int i) {
        return a(context.getResources().getDrawable(i));
    }

    private static Bitmap a(Context context, String str, boolean z) {
        Bitmap bitmap;
        Future futureSubmit = f905a.submit(new a(str, context, z));
        try {
            try {
                bitmap = (Bitmap) futureSubmit.get(180L, TimeUnit.SECONDS);
                if (bitmap == null) {
                }
            } finally {
                futureSubmit.cancel(true);
            }
        } catch (InterruptedException | ExecutionException | TimeoutException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            futureSubmit.cancel(true);
            bitmap = null;
        }
        return bitmap;
    }

    public static Bitmap a(Drawable drawable) {
        if (drawable instanceof BitmapDrawable) {
            return ((BitmapDrawable) drawable).getBitmap();
        }
        int intrinsicWidth = drawable.getIntrinsicWidth();
        if (intrinsicWidth <= 0) {
            intrinsicWidth = 1;
        }
        int intrinsicHeight = drawable.getIntrinsicHeight();
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(intrinsicWidth, intrinsicHeight > 0 ? intrinsicHeight : 1, Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(bitmapCreateBitmap);
        drawable.setBounds(0, 0, canvas.getWidth(), canvas.getHeight());
        drawable.draw(canvas);
        return bitmapCreateBitmap;
    }

    private static RemoteViews a(Context context, Cif cif, byte[] bArr) {
        hw hwVarM478a = cif.m478a();
        String strA = a(cif);
        if (hwVarM478a != null && hwVarM478a.m445a() != null) {
            Map<String, String> mapM445a = hwVarM478a.m445a();
            String str = mapM445a.get("layout_name");
            String str2 = mapM445a.get("layout_value");
            if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
                try {
                    Resources resourcesForApplication = context.getPackageManager().getResourcesForApplication(strA);
                    int identifier = resourcesForApplication.getIdentifier(str, "layout", strA);
                    if (identifier == 0) {
                        return null;
                    }
                    RemoteViews remoteViews = new RemoteViews(strA, identifier);
                    try {
                        JSONObject jSONObject = new JSONObject(str2);
                        if (jSONObject.has("text")) {
                            JSONObject jSONObject2 = jSONObject.getJSONObject("text");
                            Iterator<String> itKeys = jSONObject2.keys();
                            while (itKeys.hasNext()) {
                                String next = itKeys.next();
                                String string = jSONObject2.getString(next);
                                int identifier2 = resourcesForApplication.getIdentifier(next, "id", strA);
                                if (identifier2 > 0) {
                                    remoteViews.setTextViewText(identifier2, string);
                                }
                            }
                        }
                        if (jSONObject.has(c.C0460c.e)) {
                            JSONObject jSONObject3 = jSONObject.getJSONObject(c.C0460c.e);
                            Iterator<String> itKeys2 = jSONObject3.keys();
                            while (itKeys2.hasNext()) {
                                String next2 = itKeys2.next();
                                String string2 = jSONObject3.getString(next2);
                                int identifier3 = resourcesForApplication.getIdentifier(next2, "id", strA);
                                int identifier4 = resourcesForApplication.getIdentifier(string2, com.tkay.expressad.foundation.h.i.c, strA);
                                if (identifier3 > 0) {
                                    remoteViews.setImageViewResource(identifier3, identifier4);
                                }
                            }
                        }
                        if (jSONObject.has("time")) {
                            JSONObject jSONObject4 = jSONObject.getJSONObject("time");
                            Iterator<String> itKeys3 = jSONObject4.keys();
                            while (itKeys3.hasNext()) {
                                String next3 = itKeys3.next();
                                String string3 = jSONObject4.getString(next3);
                                if (string3.length() == 0) {
                                    string3 = "yy-MM-dd hh:mm";
                                }
                                int identifier5 = resourcesForApplication.getIdentifier(next3, "id", strA);
                                if (identifier5 > 0) {
                                    remoteViews.setTextViewText(identifier5, new SimpleDateFormat(string3).format(new Date(System.currentTimeMillis())));
                                }
                            }
                        }
                        return remoteViews;
                    } catch (JSONException e) {
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                        return null;
                    }
                } catch (PackageManager.NameNotFoundException e2) {
                    com.xiaomi.channel.commonutils.logger.b.a(e2);
                }
            }
        }
        return null;
    }

    private static eq a(Context context, Cif cif, byte[] bArr, String str, int i) {
        PendingIntent pendingIntentA;
        String strA = a(cif);
        Map<String, String> mapM445a = cif.m478a().m445a();
        String str2 = mapM445a.get("notification_style_type");
        eq eqVarA = (!com.xiaomi.push.m.m575a(context) || f903a == null) ? null : f903a.a(context, i, strA, mapM445a);
        if (eqVarA != null) {
            eqVarA.a(mapM445a);
            return eqVarA;
        }
        if ("2".equals(str2)) {
            eq eqVar = new eq(context);
            Bitmap bitmapA = TextUtils.isEmpty(mapM445a.get("notification_bigPic_uri")) ? null : a(context, mapM445a.get("notification_bigPic_uri"), false);
            if (bitmapA == null) {
                com.xiaomi.channel.commonutils.logger.b.m43a("can not get big picture.");
                return eqVar;
            }
            Notification.BigPictureStyle bigPictureStyle = new Notification.BigPictureStyle(eqVar);
            bigPictureStyle.bigPicture(bitmapA);
            bigPictureStyle.setSummaryText(str);
            bigPictureStyle.bigLargeIcon((Bitmap) null);
            eqVar.setStyle(bigPictureStyle);
            return eqVar;
        }
        if ("1".equals(str2)) {
            eq eqVar2 = new eq(context);
            eqVar2.setStyle(new Notification.BigTextStyle().bigText(str));
            return eqVar2;
        }
        if ("4".equals(str2) && com.xiaomi.push.m.m574a()) {
            ep epVar = new ep(context, strA);
            if (!TextUtils.isEmpty(mapM445a.get("notification_banner_image_uri"))) {
                epVar.setLargeIcon(a(context, mapM445a.get("notification_banner_image_uri"), false));
            }
            if (!TextUtils.isEmpty(mapM445a.get("notification_banner_icon_uri"))) {
                epVar.b(a(context, mapM445a.get("notification_banner_icon_uri"), false));
            }
            epVar.a(mapM445a);
            return epVar;
        }
        if (!"3".equals(str2) || !com.xiaomi.push.m.m574a()) {
            return new eq(context);
        }
        er erVar = new er(context, i, strA);
        if (!TextUtils.isEmpty(mapM445a.get("notification_colorful_button_text")) && (pendingIntentA = a(context, strA, cif, bArr, i, 4)) != null) {
            erVar.a(mapM445a.get("notification_colorful_button_text"), pendingIntentA).mo319a(mapM445a.get("notification_colorful_button_bg_color"));
        }
        if (!TextUtils.isEmpty(mapM445a.get("notification_colorful_bg_color"))) {
            erVar.b(mapM445a.get("notification_colorful_bg_color"));
        } else if (!TextUtils.isEmpty(mapM445a.get("notification_colorful_bg_image_uri"))) {
            erVar.setLargeIcon(a(context, mapM445a.get("notification_colorful_bg_image_uri"), false));
        }
        erVar.a(mapM445a);
        return erVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:113:0x02ce  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00de  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x01ae  */
    /* JADX WARN: Type inference failed for: r12v25 */
    /* JADX WARN: Type inference failed for: r12v27 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.xiaomi.push.service.al.b a(android.content.Context r28, com.xiaomi.push.Cif r29, byte[] r30, android.widget.RemoteViews r31, android.app.PendingIntent r32, int r33) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 1226
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.service.al.a(android.content.Context, com.xiaomi.push.if, byte[], android.widget.RemoteViews, android.app.PendingIntent, int):com.xiaomi.push.service.al$b");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static c m619a(Context context, Cif cif, byte[] bArr) {
        int iC;
        Map<String, String> mapM445a;
        String str;
        c cVar = new c();
        h.a aVarA = com.xiaomi.push.h.a(context, a(cif), true);
        hw hwVarM478a = cif.m478a();
        if (hwVarM478a != null) {
            iC = hwVarM478a.c();
            mapM445a = hwVarM478a.m445a();
        } else {
            iC = 0;
            mapM445a = null;
        }
        int iB = com.xiaomi.push.w.b(a(cif), iC);
        if (com.xiaomi.push.m.m575a(context) && aVarA == h.a.NOT_ALLOWED) {
            if (hwVarM478a != null) {
                eo.a(context.getApplicationContext()).a(cif.b(), b(cif), hwVarM478a.m444a(), "10:" + a(cif));
            }
            str = "Do not notify because user block " + a(cif) + "‘s notification";
        } else if (com.xiaomi.push.m.m575a(context) && f903a != null && f903a.m630a(context, iB, a(cif), mapM445a)) {
            if (hwVarM478a != null) {
                eo.a(context.getApplicationContext()).a(cif.b(), b(cif), hwVarM478a.m444a(), "14:" + a(cif));
            }
            str = "Do not notify because card notification is canceled or sequence incorrect";
        } else {
            RemoteViews remoteViewsA = a(context, cif, bArr);
            PendingIntent pendingIntentA = a(context, cif, cif.b(), bArr, iB);
            if (pendingIntentA != null) {
                b bVarA = a(context, cif, bArr, remoteViewsA, pendingIntentA, iB);
                cVar.f8308a = bVarA.f8307a;
                cVar.f909a = a(cif);
                Notification notification = bVarA.f908a;
                if (com.xiaomi.push.m.m574a()) {
                    if (!TextUtils.isEmpty(hwVarM478a.m444a())) {
                        notification.extras.putString("message_id", hwVarM478a.m444a());
                    }
                    notification.extras.putString("local_paid", cif.m479a());
                    ay.a(mapM445a, notification.extras, "msg_busi_type");
                    ay.a(mapM445a, notification.extras, "disable_notification_flags");
                    String str2 = hwVarM478a.m450b() == null ? null : hwVarM478a.m450b().get("score_info");
                    if (!TextUtils.isEmpty(str2)) {
                        notification.extras.putString("score_info", str2);
                    }
                    notification.extras.putString("pushUid", a(hwVarM478a.f554a, "n_stats_expose"));
                    int i = -1;
                    if (c(cif)) {
                        i = 1000;
                    } else if (m623a(cif)) {
                        i = 3000;
                    }
                    notification.extras.putString("eventMessageType", String.valueOf(i));
                    notification.extras.putString(HiAnalyticsConstant.BI_KEY_TARGET_PACKAGE, a(cif));
                }
                String str3 = hwVarM478a.m445a() == null ? null : hwVarM478a.m445a().get("message_count");
                if (com.xiaomi.push.m.m574a() && str3 != null) {
                    try {
                        ay.a(notification, Integer.parseInt(str3));
                    } catch (NumberFormatException e) {
                        if (hwVarM478a != null) {
                            eo.a(context.getApplicationContext()).b(cif.b(), b(cif), hwVarM478a.m444a(), "8");
                        }
                        com.xiaomi.channel.commonutils.logger.b.d("fail to set message count. " + e);
                    }
                }
                String strA = a(cif);
                if (!com.xiaomi.push.m.m579c() && com.xiaomi.push.m.m575a(context)) {
                    ay.m646a(notification, strA);
                }
                ax axVarA = ax.a(context, strA);
                if (com.xiaomi.push.m.m575a(context) && f903a != null) {
                    f903a.a(cif, hwVarM478a.m445a(), iB, notification);
                }
                if (com.xiaomi.push.m.m575a(context) && f903a != null && f903a.a(hwVarM478a.m445a(), iB, notification)) {
                    com.xiaomi.channel.commonutils.logger.b.b("consume this notificaiton by agent");
                } else {
                    axVarA.a(iB, notification);
                    cVar.f910a = true;
                    com.xiaomi.channel.commonutils.logger.b.m43a("notification: " + hwVarM478a.m444a() + " is notifyied");
                }
                if (com.xiaomi.push.m.m574a() && com.xiaomi.push.m.m575a(context)) {
                    au.a().a(context, iB, notification);
                    cc.m670a(context, strA, iB, hwVarM478a.m444a(), notification);
                }
                if (m623a(cif)) {
                    eo.a(context.getApplicationContext()).a(cif.b(), b(cif), hwVarM478a.m444a(), 3002, null);
                }
                if (c(cif)) {
                    eo.a(context.getApplicationContext()).a(cif.b(), b(cif), hwVarM478a.m444a(), 1002, null);
                }
                if (Build.VERSION.SDK_INT < 26) {
                    String strM444a = hwVarM478a != null ? hwVarM478a.m444a() : null;
                    com.xiaomi.push.al alVarA = com.xiaomi.push.al.a(context);
                    int iA = a(hwVarM478a.m445a());
                    if (iA > 0 && !TextUtils.isEmpty(strM444a)) {
                        String str4 = "n_timeout_" + strM444a;
                        alVarA.m121a(str4);
                        alVarA.b(new am(str4, axVarA, iB), iA);
                    }
                }
                Pair<Integer, Cif> pair = new Pair<>(Integer.valueOf(iB), cif);
                synchronized (f904a) {
                    f904a.add(pair);
                    if (f904a.size() > 100) {
                        f904a.remove();
                    }
                }
                return cVar;
            }
            if (hwVarM478a != null) {
                eo.a(context.getApplicationContext()).a(cif.b(), b(cif), hwVarM478a.m444a(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE);
            }
            str = "The click PendingIntent is null. ";
        }
        com.xiaomi.channel.commonutils.logger.b.m43a(str);
        return cVar;
    }

    private static String a(Context context, String str, Map<String, String> map) {
        return (map == null || TextUtils.isEmpty(map.get("channel_name"))) ? com.xiaomi.push.h.m400b(context, str) : map.get("channel_name");
    }

    public static String a(Cif cif) {
        hw hwVarM478a;
        if ("com.xiaomi.xmsf".equals(cif.f646b) && (hwVarM478a = cif.m478a()) != null && hwVarM478a.m445a() != null) {
            String str = hwVarM478a.m445a().get("miui_package_name");
            if (!TextUtils.isEmpty(str)) {
                return str;
            }
        }
        return cif.f646b;
    }

    public static String a(Map<String, String> map, int i) {
        String str = i == 0 ? "notify_effect" : m628b(map) ? String.format("cust_btn_%s_ne", Integer.valueOf(i)) : i == 1 ? "notification_style_button_left_notify_effect" : i == 2 ? "notification_style_button_mid_notify_effect" : i == 3 ? "notification_style_button_right_notify_effect" : i == 4 ? "notification_colorful_button_notify_effect" : null;
        if (map == null || str == null) {
            return null;
        }
        return map.get(str);
    }

    private static String a(Map<String, String> map, String str) {
        if (map != null) {
            return map.get(str);
        }
        return null;
    }

    private static void a(Context context, Intent intent, Cif cif, hw hwVar, String str, int i) {
        if (cif == null || hwVar == null || TextUtils.isEmpty(str)) {
            return;
        }
        String strA = a(hwVar.m445a(), i);
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        if (bk.f8338a.equals(strA) || bk.b.equals(strA) || bk.c.equals(strA)) {
            intent.putExtra("messageId", str);
            intent.putExtra("local_paid", cif.f642a);
            if (!TextUtils.isEmpty(cif.f646b)) {
                intent.putExtra(HiAnalyticsConstant.BI_KEY_TARGET_PACKAGE, cif.f646b);
            }
            intent.putExtra("job_key", a(hwVar.m445a(), "jobkey"));
            intent.putExtra(i + "_target_component", a(context, cif.f646b, hwVar.m445a(), i));
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m620a(Context context, String str) {
        a(context, str, -1);
    }

    public static void a(Context context, String str, int i) {
        a(context, str, i, -1);
    }

    public static void a(Context context, String str, int i, int i2) {
        int iHashCode;
        if (context == null || TextUtils.isEmpty(str) || i < -1) {
            return;
        }
        ax axVarA = ax.a(context, str);
        List<StatusBarNotification> listM645b = axVarA.m645b();
        if (com.xiaomi.push.w.a(listM645b)) {
            return;
        }
        LinkedList linkedList = new LinkedList();
        boolean z = false;
        if (i == -1) {
            z = true;
            iHashCode = 0;
        } else {
            iHashCode = ((str.hashCode() / 10) * 10) + i;
        }
        Iterator<StatusBarNotification> it = listM645b.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            StatusBarNotification next = it.next();
            if (!TextUtils.isEmpty(String.valueOf(next.getId()))) {
                int id = next.getId();
                if (z) {
                    linkedList.add(next);
                    axVarA.a(id);
                } else if (iHashCode == id) {
                    d.a(context, next, i2);
                    linkedList.add(next);
                    axVarA.a(id);
                    break;
                }
            }
        }
        a(context, (LinkedList<? extends Object>) linkedList);
    }

    public static void a(Context context, String str, String str2, String str3) {
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3)) {
            return;
        }
        ax axVarA = ax.a(context, str);
        List<StatusBarNotification> listM645b = axVarA.m645b();
        if (com.xiaomi.push.w.a(listM645b)) {
            return;
        }
        LinkedList linkedList = new LinkedList();
        for (StatusBarNotification statusBarNotification : listM645b) {
            Notification notification = statusBarNotification.getNotification();
            if (notification != null && !TextUtils.isEmpty(String.valueOf(statusBarNotification.getId()))) {
                int id = statusBarNotification.getId();
                String strA = ay.a(notification);
                String strB = ay.b(notification);
                if (!TextUtils.isEmpty(strA) && !TextUtils.isEmpty(strB) && a(strA, str2) && a(strB, str3)) {
                    linkedList.add(statusBarNotification);
                    axVarA.a(id);
                }
            }
        }
        a(context, (LinkedList<? extends Object>) linkedList);
    }

    public static void a(Context context, LinkedList<? extends Object> linkedList) {
        if (linkedList == null || linkedList.size() <= 0) {
            return;
        }
        bz.a(context, "category_clear_notification", "clear_notification", linkedList.size(), "");
    }

    private static void a(Intent intent) {
        try {
            Method declaredMethod = intent.getClass().getDeclaredMethod("addMiuiFlags", Integer.TYPE);
            declaredMethod.setAccessible(true);
            declaredMethod.invoke(intent, 2);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.b("insert flags error " + e);
        }
    }

    private static void a(eq eqVar, Context context, String str, Cif cif, byte[] bArr, int i) {
        PendingIntent pendingIntentA;
        PendingIntent pendingIntentA2;
        PendingIntent pendingIntentA3;
        PendingIntent pendingIntentA4;
        Map<String, String> mapM445a = cif.m478a().m445a();
        if (TextUtils.equals("3", mapM445a.get("notification_style_type")) || TextUtils.equals("4", mapM445a.get("notification_style_type"))) {
            return;
        }
        if (m628b(mapM445a)) {
            for (int i2 = 1; i2 <= 3; i2++) {
                String str2 = mapM445a.get(String.format("cust_btn_%s_n", Integer.valueOf(i2)));
                if (!TextUtils.isEmpty(str2) && (pendingIntentA4 = a(context, str, cif, bArr, i, i2)) != null) {
                    eqVar.addAction(0, str2, pendingIntentA4);
                }
            }
            return;
        }
        if (!TextUtils.isEmpty(mapM445a.get("notification_style_button_left_name")) && (pendingIntentA3 = a(context, str, cif, bArr, i, 1)) != null) {
            eqVar.addAction(0, mapM445a.get("notification_style_button_left_name"), pendingIntentA3);
        }
        if (!TextUtils.isEmpty(mapM445a.get("notification_style_button_mid_name")) && (pendingIntentA2 = a(context, str, cif, bArr, i, 2)) != null) {
            eqVar.addAction(0, mapM445a.get("notification_style_button_mid_name"), pendingIntentA2);
        }
        if (TextUtils.isEmpty(mapM445a.get("notification_style_button_right_name")) || (pendingIntentA = a(context, str, cif, bArr, i, 3)) == null) {
            return;
        }
        eqVar.addAction(0, mapM445a.get("notification_style_button_right_name"), pendingIntentA);
    }

    private static boolean a(Context context, Cif cif, String str) {
        if (cif != null && cif.m478a() != null && cif.m478a().m445a() != null && !TextUtils.isEmpty(str)) {
            return Boolean.parseBoolean(cif.m478a().m445a().get("use_clicked_activity")) && l.a(context, a(str));
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("should clicked activity params are null.");
        return false;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m621a(Context context, String str) {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) context.getSystemService("activity")).getRunningAppProcesses();
        if (runningAppProcesses == null) {
            return false;
        }
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
            if (runningAppProcessInfo.importance == 100 && Arrays.asList(runningAppProcessInfo.pkgList).contains(str)) {
                return true;
            }
        }
        return false;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m622a(Context context, String str, boolean z) {
        return com.xiaomi.push.m.m574a() && !z && m621a(context, str);
    }

    private static boolean a(hw hwVar) {
        if (hwVar == null) {
            return false;
        }
        String strM444a = hwVar.m444a();
        return !TextUtils.isEmpty(strM444a) && strM444a.length() == 22 && "satuigmo".indexOf(strM444a.charAt(0)) >= 0;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m623a(Cif cif) {
        hw hwVarM478a = cif.m478a();
        return a(hwVarM478a) && hwVarM478a.l();
    }

    private static boolean a(String str, String str2) {
        return TextUtils.isEmpty(str) || str2.contains(str);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m624a(Map<String, String> map) {
        if (map == null || !map.containsKey("notify_foreground")) {
            return true;
        }
        return "1".equals(map.get("notify_foreground"));
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0072 A[PHI: r0 r3
      0x0072: PHI (r0v4 java.lang.String) = (r0v2 java.lang.String), (r0v5 java.lang.String) binds: [B:18:0x0070, B:10:0x004e] A[DONT_GENERATE, DONT_INLINE]
      0x0072: PHI (r3v15 java.lang.String) = (r3v14 java.lang.String), (r3v21 java.lang.String) binds: [B:18:0x0070, B:10:0x004e] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String[] a(android.content.Context r3, com.xiaomi.push.hw r4) {
        /*
            java.lang.String r0 = r4.m452c()
            java.lang.String r1 = r4.d()
            java.util.Map r4 = r4.m445a()
            if (r4 == 0) goto L73
            android.content.res.Resources r2 = r3.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.widthPixels
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            float r3 = r3.density
            float r2 = (float) r2
            float r2 = r2 / r3
            r3 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r3
            java.lang.Float r3 = java.lang.Float.valueOf(r2)
            int r3 = r3.intValue()
            r2 = 320(0x140, float:4.48E-43)
            if (r3 > r2) goto L51
            java.lang.String r3 = "title_short"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L42
            r0 = r3
        L42:
            java.lang.String r3 = "description_short"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L73
            goto L72
        L51:
            r2 = 360(0x168, float:5.04E-43)
            if (r3 <= r2) goto L73
            java.lang.String r3 = "title_long"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L64
            r0 = r3
        L64:
            java.lang.String r3 = "description_long"
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L73
        L72:
            r1 = r3
        L73:
            r3 = 2
            java.lang.String[] r3 = new java.lang.String[r3]
            r4 = 0
            r3[r4] = r0
            r4 = 1
            r3[r4] = r1
            return r3
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.service.al.a(android.content.Context, com.xiaomi.push.hw):java.lang.String[]");
    }

    private static int b(Context context, String str) {
        int iA = a(context, str, "mipush_notification");
        int iA2 = a(context, str, "mipush_small_notification");
        if (iA <= 0) {
            iA = iA2 > 0 ? iA2 : context.getApplicationInfo().icon;
        }
        return iA == 0 ? context.getApplicationInfo().logo : iA;
    }

    private static int b(Map<String, String> map) {
        if (map == null) {
            return 3;
        }
        String str = map.get("channel_importance");
        if (TextUtils.isEmpty(str)) {
            return 3;
        }
        try {
            com.xiaomi.channel.commonutils.logger.b.c("importance=" + str);
            return Integer.parseInt(str);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("parsing channel importance error: " + e);
            return 3;
        }
    }

    public static Intent b(Context context, String str, Map<String, String> map, int i) {
        Intent launchIntentForPackage;
        String str2;
        Intent intent;
        String protocol;
        Intent uri;
        if (map == null) {
            return null;
        }
        if (i != 0) {
            return m618a(context, str, map, i);
        }
        if (!map.containsKey("notify_effect")) {
            return null;
        }
        String str3 = map.get("notify_effect");
        int i2 = -1;
        String str4 = map.get("intent_flag");
        try {
            if (!TextUtils.isEmpty(str4)) {
                i2 = Integer.parseInt(str4);
            }
        } catch (NumberFormatException e) {
            com.xiaomi.channel.commonutils.logger.b.d("Cause by intent_flag: " + e.getMessage());
        }
        if (bk.f8338a.equals(str3)) {
            try {
                launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str);
            } catch (Exception e2) {
                com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e2.getMessage());
                launchIntentForPackage = null;
            }
        } else if (bk.b.equals(str3)) {
            if (map.containsKey("intent_uri")) {
                String str5 = map.get("intent_uri");
                if (str5 != null) {
                    try {
                        uri = Intent.parseUri(str5, 1);
                    } catch (URISyntaxException e3) {
                        e = e3;
                        uri = null;
                    }
                    try {
                        uri.setPackage(str);
                    } catch (URISyntaxException e4) {
                        e = e4;
                        com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e.getMessage());
                    }
                    launchIntentForPackage = uri;
                }
            } else if (map.containsKey("class_name")) {
                String str6 = map.get("class_name");
                intent = new Intent();
                intent.setComponent(new ComponentName(str, str6));
                launchIntentForPackage = intent;
            }
            launchIntentForPackage = null;
        } else {
            if (bk.c.equals(str3) && (str2 = map.get("web_uri")) != null) {
                String strTrim = str2.trim();
                if (!strTrim.startsWith("http://") && !strTrim.startsWith("https://")) {
                    strTrim = "http://" + strTrim;
                }
                try {
                    protocol = new URL(strTrim).getProtocol();
                } catch (MalformedURLException e5) {
                    e = e5;
                    intent = null;
                }
                if ("http".equals(protocol) || "https".equals(protocol)) {
                    intent = new Intent("android.intent.action.VIEW");
                    try {
                        intent.setData(Uri.parse(strTrim));
                        ay.a(context, str, intent);
                    } catch (MalformedURLException e6) {
                        e = e6;
                        com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e.getMessage());
                    }
                    launchIntentForPackage = intent;
                }
            }
            launchIntentForPackage = null;
        }
        if (launchIntentForPackage != null) {
            if (i2 >= 0) {
                launchIntentForPackage.setFlags(i2);
            }
            launchIntentForPackage.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            try {
                if (context.getPackageManager().resolveActivity(launchIntentForPackage, 65536) != null) {
                    return launchIntentForPackage;
                }
                if (Build.VERSION.SDK_INT >= 30 && !com.xiaomi.push.m.m575a(context) && bk.c.equals(str3)) {
                    return launchIntentForPackage;
                }
                com.xiaomi.channel.commonutils.logger.b.m43a("not resolve activity:" + launchIntentForPackage);
            } catch (Exception e7) {
                com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e7.getMessage());
            }
        }
        return null;
    }

    public static String b(Cif cif) {
        return m623a(cif) ? "E100002" : c(cif) ? "E100000" : m627b(cif) ? "E100001" : d(cif) ? "E100003" : "";
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public static void m625b(Context context, String str) {
        if (!com.xiaomi.push.m.m575a(context) || f903a == null || TextUtils.isEmpty(str)) {
            return;
        }
        f903a.a(str);
    }

    static void b(Context context, String str, int i) {
        context.getSharedPreferences("pref_notify_type", 0).edit().putInt(str, i).commit();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    static boolean m626b(Context context, String str) {
        return context.getSharedPreferences("pref_notify_type", 0).contains(str);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public static boolean m627b(Cif cif) {
        hw hwVarM478a = cif.m478a();
        return a(hwVarM478a) && hwVarM478a.f556b == 1 && !m623a(cif);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    private static boolean m628b(Map<String, String> map) {
        if (map != null) {
            return "6".equals(map.get("notification_style_type"));
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("meta extra is null");
        return false;
    }

    private static int c(Map<String, String> map) {
        if (map == null) {
            return 0;
        }
        String str = map.get("notification_priority");
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        try {
            com.xiaomi.channel.commonutils.logger.b.c("priority=" + str);
            return Integer.parseInt(str);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("parsing notification priority error: " + e);
            return 0;
        }
    }

    static void c(Context context, String str) {
        context.getSharedPreferences("pref_notify_type", 0).edit().remove(str).commit();
    }

    public static boolean c(Cif cif) {
        hw hwVarM478a = cif.m478a();
        return a(hwVarM478a) && hwVarM478a.f556b == 0 && !m623a(cif);
    }

    public static boolean d(Cif cif) {
        return cif.a() == hj.Registration;
    }

    public static boolean e(Cif cif) {
        return m623a(cif) || c(cif) || m627b(cif);
    }
}

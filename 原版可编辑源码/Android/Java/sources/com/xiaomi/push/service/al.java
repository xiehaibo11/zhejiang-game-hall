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
import android.graphics.drawable.Icon;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import android.util.Pair;
import android.widget.RemoteViews;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tencent.connect.common.Constants;
import com.tkay.expressad.foundation.d.c;
import com.xiaomi.push.eo;
import com.xiaomi.push.ep;
import com.xiaomi.push.eq;
import com.xiaomi.push.er;
import com.xiaomi.push.h;
import com.xiaomi.push.hj;
import com.xiaomi.push.hw;
import com.xiaomi.push.if;
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
import java.util.Objects;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import org.json.JSONException;
import org.json.JSONObject;

public class al {
    public static long a;
    private static volatile as a;
    private static final LinkedList<Pair<Integer, if>> a = new LinkedList<>();
    private static ExecutorService a = Executors.newCachedThreadPool();

    class a implements Callable<Bitmap> {
        private Context a;
        private String a;
        private boolean a;

        public a(String str, Context context, boolean z) {
            this.a = context;
            this.a = str;
            this.a = z;
        }

        @Override
        public Bitmap call() throws Throwable {
            Bitmap bitmapA = null;
            if (TextUtils.isEmpty(this.a)) {
                com.xiaomi.channel.commonutils.logger.b.a("Failed get online picture/icon resource cause picUrl is empty");
                return null;
            }
            if (this.a.startsWith("http")) {
                aw.b bVarA = aw.a(this.a, this.a, this.a);
                if (bVarA != null) {
                    return bVarA.a;
                }
            } else {
                bitmapA = aw.a(this.a, this.a);
                if (bitmapA != null) {
                    return bitmapA;
                }
            }
            com.xiaomi.channel.commonutils.logger.b.a("Failed get online picture/icon resource");
            return bitmapA;
        }
    }

    public class b {
        long a = 0;
        Notification a;
    }

    public class c {
        public String a;
        public long a = 0;
        public boolean a = false;
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

    private static PendingIntent a(Context context, if ifVar, String str, byte[] bArr, int i) {
        return a(context, ifVar, str, bArr, i, 0, a(context, ifVar, str));
    }

    private static PendingIntent a(Context context, if ifVar, String str, byte[] bArr, int i, int i2, boolean z) {
        Intent intent;
        int i3 = c(ifVar) ? 1000 : a(ifVar) ? 3000 : -1;
        hw hwVarA = ifVar.a();
        String strA = hwVarA != null ? hwVarA.a() : "";
        boolean zA = a(ifVar);
        if (hwVarA != null && !TextUtils.isEmpty(hwVarA.e)) {
            Intent intent2 = new Intent("android.intent.action.VIEW");
            intent2.setData(Uri.parse(hwVarA.e));
            try {
                String protocol = new URL(hwVarA.e).getProtocol();
                if ("http".equals(protocol) || "https".equals(protocol)) {
                    ay.a(context, str, intent2);
                } else {
                    intent2.setPackage(str);
                }
            } catch (MalformedURLException unused) {
                com.xiaomi.channel.commonutils.logger.b.a("meet URL exception : " + hwVarA.e);
                intent2.setPackage(str);
            }
            intent2.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent2.putExtra("messageId", strA);
            intent2.putExtra("eventMessageType", i3);
            return Build.VERSION.SDK_INT >= 31 ? PendingIntent.getActivity(context, 0, intent2, 167772160) : PendingIntent.getActivity(context, 0, intent2, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        }
        if (zA) {
            intent = new Intent();
            intent.setComponent(new ComponentName("com.xiaomi.xmsf", "com.xiaomi.mipush.sdk.PushMessageHandler"));
        } else {
            intent = new Intent("com.xiaomi.mipush.RECEIVE_MESSAGE");
            intent.setComponent(new ComponentName(str, "com.xiaomi.mipush.sdk.PushMessageHandler"));
        }
        intent.putExtra("mipush_payload", bArr);
        intent.putExtra("mipush_notified", true);
        intent.addCategory(String.valueOf(i));
        intent.addCategory(String.valueOf(strA));
        intent.putExtra("notification_click_button", i2);
        intent.putExtra("messageId", strA);
        intent.putExtra("eventMessageType", i3);
        if (zA || !z) {
            a(context, intent, ifVar, hwVarA, strA, i2);
            return Build.VERSION.SDK_INT >= 31 ? PendingIntent.getService(context, 0, intent, 167772160) : PendingIntent.getService(context, 0, intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        }
        Intent intent3 = new Intent();
        intent3.setComponent(a(str));
        intent3.addFlags(276824064);
        intent3.putExtra("mipush_serviceIntent", intent);
        intent3.addCategory(String.valueOf(i));
        intent3.addCategory(String.valueOf(strA));
        intent3.addCategory(String.valueOf(i2));
        a(context, intent3, ifVar, hwVarA, strA, i2);
        a(intent3);
        return Build.VERSION.SDK_INT >= 31 ? PendingIntent.getActivity(context, 0, intent3, 167772160) : PendingIntent.getActivity(context, 0, intent3, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
    }

    private static PendingIntent a(Context context, String str, if ifVar, byte[] bArr, int i, int i2) {
        Map<String, String> mapA = ifVar.a().a();
        if (mapA == null) {
            return null;
        }
        boolean zA = a(context, ifVar, str);
        if (zA) {
            return a(context, ifVar, str, bArr, i, i2, zA);
        }
        Intent intentA = a(context, str, mapA, i2);
        if (intentA != null) {
            return PendingIntent.getActivity(context, 0, intentA, Build.VERSION.SDK_INT >= 31 ? 167772160 : DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        }
        return null;
    }

    public static ComponentName a(String str) {
        return new ComponentName(str, "com.xiaomi.mipush.sdk.NotificationClickedActivity");
    }

    public static Intent a(Context context, String str, Map<String, String> map, int i) {
        if (b(map)) {
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
        if (bk.a.equals(str6)) {
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
                if (Build.VERSION.SDK_INT >= 30 && !com.xiaomi.push.m.a(context) && bk.c.equals(str6)) {
                    return launchIntentForPackage;
                }
                com.xiaomi.channel.commonutils.logger.b.a("not resolve activity:" + launchIntentForPackage + "for buttons");
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
        Future futureSubmit = a.submit(new a(str, context, z));
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

    private static RemoteViews a(Context context, if ifVar, byte[] bArr) {
        hw hwVarA = ifVar.a();
        String strA = a(ifVar);
        if (hwVarA != null && hwVarA.a() != null) {
            Map<String, String> mapA = hwVarA.a();
            String str = mapA.get("layout_name");
            String str2 = mapA.get("layout_value");
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
                        if (jSONObject.has(c.c.e)) {
                            JSONObject jSONObject3 = jSONObject.getJSONObject(c.c.e);
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

    private static eq a(Context context, if ifVar, byte[] bArr, String str, int i) {
        PendingIntent pendingIntentA;
        String strA = a(ifVar);
        Map<String, String> mapA = ifVar.a().a();
        String str2 = mapA.get("notification_style_type");
        eq eqVarA = (!com.xiaomi.push.m.a(context) || a == null) ? null : a.a(context, i, strA, mapA);
        if (eqVarA != null) {
            eqVarA.a(mapA);
            return eqVarA;
        }
        if ("2".equals(str2)) {
            eq eqVar = new eq(context);
            Bitmap bitmapA = TextUtils.isEmpty(mapA.get("notification_bigPic_uri")) ? null : a(context, mapA.get("notification_bigPic_uri"), false);
            if (bitmapA == null) {
                com.xiaomi.channel.commonutils.logger.b.a("can not get big picture.");
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
        if ("4".equals(str2) && com.xiaomi.push.m.a()) {
            ep epVar = new ep(context, strA);
            if (!TextUtils.isEmpty(mapA.get("notification_banner_image_uri"))) {
                epVar.setLargeIcon(a(context, mapA.get("notification_banner_image_uri"), false));
            }
            if (!TextUtils.isEmpty(mapA.get("notification_banner_icon_uri"))) {
                epVar.b(a(context, mapA.get("notification_banner_icon_uri"), false));
            }
            epVar.a(mapA);
            return epVar;
        }
        if (!"3".equals(str2) || !com.xiaomi.push.m.a()) {
            return new eq(context);
        }
        er erVar = new er(context, i, strA);
        if (!TextUtils.isEmpty(mapA.get("notification_colorful_button_text")) && (pendingIntentA = a(context, strA, ifVar, bArr, i, 4)) != null) {
            erVar.a(mapA.get("notification_colorful_button_text"), pendingIntentA).a(mapA.get("notification_colorful_button_bg_color"));
        }
        if (!TextUtils.isEmpty(mapA.get("notification_colorful_bg_color"))) {
            erVar.b(mapA.get("notification_colorful_bg_color"));
        } else if (!TextUtils.isEmpty(mapA.get("notification_colorful_bg_image_uri"))) {
            erVar.setLargeIcon(a(context, mapA.get("notification_colorful_bg_image_uri"), false));
        }
        erVar.a(mapA);
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
    */
    private static b a(Context context, if ifVar, byte[] bArr, RemoteViews remoteViews, PendingIntent pendingIntent, int i) throws Throwable {
        eq eqVar;
        boolean z;
        int iA;
        boolean z2;
        boolean z3;
        boolean z4;
        String strA;
        boolean z5;
        boolean z6;
        b bVar;
        int iA2;
        String str;
        boolean z7;
        int i2;
        Bitmap bitmapA;
        int i3;
        Bitmap bitmapA2;
        StringBuilder sb;
        String strA2;
        b bVar2 = new b();
        hw hwVarA = ifVar.a();
        String strA3 = a(ifVar);
        Map<String, String> mapA = hwVarA.a();
        String[] strArrA = a(context, hwVarA);
        if (remoteViews != null) {
            eqVar = new eq(context);
            eqVar.setCustomContentView(remoteViews);
        } else {
            eqVar = (mapA == null || !mapA.containsKey("notification_style_type")) ? new eq(context) : a(context, ifVar, bArr, strArrA[1], i);
        }
        eq eqVar2 = eqVar;
        a(eqVar2, context, ifVar.b(), ifVar, bArr, i);
        eqVar2.setContentTitle(strArrA[0]);
        eqVar2.setContentText(strArrA[1]);
        long jCurrentTimeMillis = System.currentTimeMillis();
        eqVar2.setWhen(jCurrentTimeMillis);
        String strA4 = a(mapA, "notification_show_when");
        if (!TextUtils.isEmpty(strA4)) {
            eqVar2.setShowWhen(Boolean.parseBoolean(strA4));
        } else if (Build.VERSION.SDK_INT >= 24) {
            eqVar2.setShowWhen(true);
        }
        eqVar2.setContentIntent(pendingIntent);
        int iA3 = a(context, strA3, "mipush_notification");
        int iA4 = a(context, strA3, "mipush_small_notification");
        if (iA3 > 0 && iA4 > 0) {
            eqVar2.setLargeIcon(a(context, iA3));
            eqVar2.setSmallIcon(iA4);
        } else if (!com.xiaomi.push.m.a(context)) {
            String strA5 = a(mapA, "fcm_icon_uri");
            String strA6 = a(mapA, "fcm_icon_color");
            if (TextUtils.isEmpty(strA5) || TextUtils.isEmpty(strA6) || (iA = a(context, strA3, strA5)) <= 0) {
                z = false;
            } else {
                eqVar2.setSmallIcon(iA);
                eqVar2.a(strA6);
                z = true;
            }
            if (!z) {
                if (Build.VERSION.SDK_INT >= 23) {
                    eqVar2.setSmallIcon(Icon.createWithResource(strA3, ay.a(context, strA3)));
                } else {
                    eqVar2.setSmallIcon(b(context, strA3));
                }
            }
        }
        if (Build.VERSION.SDK_INT >= 23) {
            if (mapA == null) {
                bitmapA2 = null;
                i3 = 1;
            } else {
                i3 = 1;
                bitmapA2 = a(context, mapA.get("notification_small_icon_uri"), true);
            }
            if (bitmapA2 != null) {
                Object[] objArr = new Object[i3];
                objArr[0] = bitmapA2;
                Object objA = com.xiaomi.push.bk.a("android.graphics.drawable.Icon", "createWithBitmap", objArr);
                if (objA != null) {
                    Object[] objArr2 = new Object[i3];
                    objArr2[0] = objA;
                    com.xiaomi.push.bk.a((Object) eqVar2, "setSmallIcon", objArr2);
                    Bundle bundle = new Bundle();
                    bundle.putBoolean("miui.isGrayscaleIcon", i3);
                    eqVar2.addExtras(bundle);
                    eqVar2.a(a(mapA, "notification_small_icon_color"));
                } else {
                    sb = new StringBuilder();
                    sb.append("failed te get small icon with url:");
                    strA2 = mapA.get("notification_small_icon_uri");
                }
            } else {
                sb = new StringBuilder();
                sb.append("failed to get small icon url:");
                strA2 = a(mapA, "notification_small_icon_uri");
            }
            sb.append(strA2);
            com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
            eqVar2.a(a(mapA, "notification_small_icon_color"));
        }
        String strA7 = a(mapA, "__dynamic_icon_uri");
        boolean z8 = Boolean.parseBoolean(a(mapA, "__adiom")) || !com.xiaomi.push.m.a();
        if (TextUtils.isEmpty(strA7) || !z8) {
            z2 = false;
        } else {
            if (strA7.startsWith("http")) {
                aw.b bVarA = aw.a(context, strA7, true);
                if (bVarA != null) {
                    bitmapA = bVarA.a;
                    bVar2.a = bVarA.a;
                } else {
                    bitmapA = null;
                }
            } else {
                bitmapA = aw.a(context, strA7);
            }
            if (bitmapA != null) {
                eqVar2.setLargeIcon(bitmapA);
                z2 = true;
            }
        }
        Bitmap bitmapA3 = mapA == null ? null : a(context, mapA.get("notification_large_icon_uri"), true);
        if (bitmapA3 != null) {
            eqVar2.setLargeIcon(bitmapA3);
        }
        if (mapA == null || Build.VERSION.SDK_INT < 24) {
            z3 = false;
            z4 = false;
            strA = null;
            z5 = true;
        } else {
            String strA8 = mapA.get("notification_group");
            boolean z9 = Boolean.parseBoolean(mapA.get("notification_is_summary"));
            boolean z10 = Boolean.parseBoolean(mapA.get("notification_group_disable_default"));
            if (TextUtils.isEmpty(strA8) && (com.xiaomi.push.m.a() || !z10)) {
                strA8 = a(ifVar);
            }
            String str2 = strA8;
            com.xiaomi.push.bk.a((Object) eqVar2, "setGroupSummary", Boolean.valueOf(z9));
            String str3 = mapA.get("notification_style_type");
            if ("com.xiaomi.xmsf".equals(context.getPackageName()) && ("4".equals(str3) || "3".equals(str3))) {
                z4 = true;
                z5 = true;
                strA = a(ifVar) + "_custom_" + jCurrentTimeMillis;
                z3 = z9;
            } else {
                z4 = false;
                z3 = z9;
                z5 = true;
                strA = str2;
            }
        }
        eqVar2.setAutoCancel(z5);
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        if (mapA != null && mapA.containsKey(RemoteMessageConst.Notification.TICKER)) {
            eqVar2.setTicker(mapA.get(RemoteMessageConst.Notification.TICKER));
        }
        if (jCurrentTimeMillis2 - a > com.heytap.mcssdk.constant.a.q) {
            a = jCurrentTimeMillis2;
            iA2 = hwVarA.a;
            if (b(context, strA3)) {
                iA2 = a(context, strA3);
            }
            eqVar2.setDefaults(iA2);
            if (mapA == null || (iA2 & 1) == 0) {
                z6 = z2;
                bVar = bVar2;
            } else {
                String str4 = mapA.get("sound_uri");
                if (!TextUtils.isEmpty(str4)) {
                    bVar = bVar2;
                    StringBuilder sb2 = new StringBuilder();
                    z6 = z2;
                    sb2.append("android.resource://");
                    sb2.append(strA3);
                    if (str4.startsWith(sb2.toString())) {
                        eqVar2.setDefaults(iA2 ^ 1);
                        eqVar2.setSound(Uri.parse(str4));
                    }
                }
            }
        } else {
            z6 = z2;
            bVar = bVar2;
            iA2 = -100;
        }
        if (mapA == null || Build.VERSION.SDK_INT < 26) {
            str = "com.xiaomi.xmsf";
            z7 = z4;
            if (mapA != null && Build.VERSION.SDK_INT < 26) {
                com.xiaomi.push.bk.a((Object) eqVar2, "setPriority", Integer.valueOf(c(mapA)));
            }
        } else {
            ax axVarA = ax.a(context, strA3);
            str = "com.xiaomi.xmsf";
            if (a(mapA) > 0) {
                z7 = z4;
                i2 = iA2;
                com.xiaomi.push.bk.a((Object) eqVar2, "setTimeoutAfter", Long.valueOf(r15 * 1000));
            } else {
                z7 = z4;
                i2 = iA2;
            }
            at.a(hwVarA);
            String str5 = mapA.get(IPaymentFeature.ARG_CHANNEL_ID);
            if (!TextUtils.isEmpty(str5) || context.getApplicationInfo().targetSdkVersion >= 26) {
                String strA9 = a(context, strA3, mapA);
                int iB = b(mapA);
                int i4 = hwVarA.a;
                String str6 = mapA.get("channel_description");
                String str7 = mapA.get("sound_uri");
                String str8 = mapA.get("channel_perm");
                cc.a(context, mapA, eqVar2, jCurrentTimeMillis);
                com.xiaomi.push.bk.a((Object) eqVar2, "setChannelId", at.a(axVarA, str5, strA9, str6, i4, iB, str7, str8));
                if (i2 == -100 && ay.a(mapA)) {
                    ay.a(eqVar2, z3);
                }
                if ("pulldown".equals(ay.a((Object) mapA)) && ay.a(mapA) && Objects.equals(mapA.get("pull_down_pop_type"), "0")) {
                    ay.a(eqVar2, z3);
                }
                if ("tts".equals(ay.a((Object) mapA)) && ay.a(mapA)) {
                    ay.a(eqVar2, z3);
                }
            }
            String str9 = mapA.get("background_color");
            if (!TextUtils.isEmpty(str9)) {
                try {
                    int i5 = Integer.parseInt(str9);
                    eqVar2.setOngoing(true);
                    eqVar2.setColor(i5);
                    com.xiaomi.push.bk.a((Object) eqVar2, "setColorized", true);
                } catch (Exception e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
        }
        if (strA != null) {
            if (!z7) {
                strA = au.a().a(context, eqVar2, strA);
            }
            com.xiaomi.push.bk.a((Object) eqVar2, "setGroup", strA);
        }
        if (com.xiaomi.push.m.c() && str.equals(context.getPackageName())) {
            com.xiaomi.push.bk.a("miui.util.NotificationHelper", "setTargetPkg", context, eqVar2, a(ifVar));
        }
        Notification notification = eqVar2.getNotification();
        if (z6 && com.xiaomi.push.m.a()) {
            a(notification);
        }
        if (mapA != null) {
            if (notification.extras == null) {
                notification.extras = new Bundle();
            }
            if (!TextUtils.isEmpty(mapA.get("enable_keyguard"))) {
                ay.b(notification, Boolean.parseBoolean(mapA.get("enable_keyguard")));
            }
            if (!TextUtils.isEmpty(mapA.get("enable_float"))) {
                ay.a(notification, Boolean.parseBoolean(mapA.get("enable_float")));
            }
            if (!TextUtils.isEmpty(mapA.get("float_small_win")) && "0".equals(mapA.get("float_small_win")) && com.xiaomi.push.h.d(context, strA3)) {
                ay.a(notification, false);
            }
            int iA5 = com.xiaomi.push.w.a(mapA.get("section_is_prr"), -1);
            int iA6 = com.xiaomi.push.w.a(mapA.get("section_prr_cl"), -1);
            if (iA5 >= 0 && iA6 >= 0) {
                ay.a(notification, iA5, iA6);
            }
        }
        b bVar3 = bVar;
        bVar3.a = notification;
        return bVar3;
    }

    public static c a(Context context, if ifVar, byte[] bArr) {
        int iC;
        Map<String, String> mapA;
        String str;
        c cVar = new c();
        h.a aVarA = com.xiaomi.push.h.a(context, a(ifVar), true);
        hw hwVarA = ifVar.a();
        if (hwVarA != null) {
            iC = hwVarA.c();
            mapA = hwVarA.a();
        } else {
            iC = 0;
            mapA = null;
        }
        int iB = com.xiaomi.push.w.b(a(ifVar), iC);
        if (com.xiaomi.push.m.a(context) && aVarA == h.a.c) {
            if (hwVarA != null) {
                eo.a(context.getApplicationContext()).a(ifVar.b(), b(ifVar), hwVarA.a(), "10:" + a(ifVar));
            }
            str = "Do not notify because user block " + a(ifVar) + "‘s notification";
        } else if (com.xiaomi.push.m.a(context) && a != null && a.a(context, iB, a(ifVar), mapA)) {
            if (hwVarA != null) {
                eo.a(context.getApplicationContext()).a(ifVar.b(), b(ifVar), hwVarA.a(), "14:" + a(ifVar));
            }
            str = "Do not notify because card notification is canceled or sequence incorrect";
        } else {
            RemoteViews remoteViewsA = a(context, ifVar, bArr);
            PendingIntent pendingIntentA = a(context, ifVar, ifVar.b(), bArr, iB);
            if (pendingIntentA != null) {
                b bVarA = a(context, ifVar, bArr, remoteViewsA, pendingIntentA, iB);
                cVar.a = bVarA.a;
                cVar.a = a(ifVar);
                Notification notification = bVarA.a;
                if (com.xiaomi.push.m.a()) {
                    if (!TextUtils.isEmpty(hwVarA.a())) {
                        notification.extras.putString("message_id", hwVarA.a());
                    }
                    notification.extras.putString("local_paid", ifVar.a());
                    ay.a(mapA, notification.extras, "msg_busi_type");
                    ay.a(mapA, notification.extras, "disable_notification_flags");
                    String str2 = hwVarA.b() == null ? null : hwVarA.b().get("score_info");
                    if (!TextUtils.isEmpty(str2)) {
                        notification.extras.putString("score_info", str2);
                    }
                    notification.extras.putString("pushUid", a(hwVarA.a, "n_stats_expose"));
                    int i = -1;
                    if (c(ifVar)) {
                        i = 1000;
                    } else if (a(ifVar)) {
                        i = 3000;
                    }
                    notification.extras.putString("eventMessageType", String.valueOf(i));
                    notification.extras.putString(HiAnalyticsConstant.BI_KEY_TARGET_PACKAGE, a(ifVar));
                }
                String str3 = hwVarA.a() == null ? null : hwVarA.a().get("message_count");
                if (com.xiaomi.push.m.a() && str3 != null) {
                    try {
                        ay.a(notification, Integer.parseInt(str3));
                    } catch (NumberFormatException e) {
                        if (hwVarA != null) {
                            eo.a(context.getApplicationContext()).b(ifVar.b(), b(ifVar), hwVarA.a(), "8");
                        }
                        com.xiaomi.channel.commonutils.logger.b.d("fail to set message count. " + e);
                    }
                }
                String strA = a(ifVar);
                if (!com.xiaomi.push.m.c() && com.xiaomi.push.m.a(context)) {
                    ay.a(notification, strA);
                }
                ax axVarA = ax.a(context, strA);
                if (com.xiaomi.push.m.a(context) && a != null) {
                    a.a(ifVar, hwVarA.a(), iB, notification);
                }
                if (com.xiaomi.push.m.a(context) && a != null && a.a(hwVarA.a(), iB, notification)) {
                    com.xiaomi.channel.commonutils.logger.b.b("consume this notificaiton by agent");
                } else {
                    axVarA.a(iB, notification);
                    cVar.a = true;
                    com.xiaomi.channel.commonutils.logger.b.a("notification: " + hwVarA.a() + " is notifyied");
                }
                if (com.xiaomi.push.m.a() && com.xiaomi.push.m.a(context)) {
                    au.a().a(context, iB, notification);
                    cc.a(context, strA, iB, hwVarA.a(), notification);
                }
                if (a(ifVar)) {
                    eo.a(context.getApplicationContext()).a(ifVar.b(), b(ifVar), hwVarA.a(), 3002, null);
                }
                if (c(ifVar)) {
                    eo.a(context.getApplicationContext()).a(ifVar.b(), b(ifVar), hwVarA.a(), 1002, null);
                }
                if (Build.VERSION.SDK_INT < 26) {
                    String strA2 = hwVarA != null ? hwVarA.a() : null;
                    com.xiaomi.push.al alVarA = com.xiaomi.push.al.a(context);
                    int iA = a(hwVarA.a());
                    if (iA > 0 && !TextUtils.isEmpty(strA2)) {
                        String str4 = "n_timeout_" + strA2;
                        alVarA.a(str4);
                        alVarA.b(new am(str4, axVarA, iB), iA);
                    }
                }
                Pair<Integer, if> pair = new Pair<>(Integer.valueOf(iB), ifVar);
                synchronized (a) {
                    a.add(pair);
                    if (a.size() > 100) {
                        a.remove();
                    }
                }
                return cVar;
            }
            if (hwVarA != null) {
                eo.a(context.getApplicationContext()).a(ifVar.b(), b(ifVar), hwVarA.a(), Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE);
            }
            str = "The click PendingIntent is null. ";
        }
        com.xiaomi.channel.commonutils.logger.b.a(str);
        return cVar;
    }

    private static String a(Context context, String str, Map<String, String> map) {
        return (map == null || TextUtils.isEmpty(map.get("channel_name"))) ? com.xiaomi.push.h.b(context, str) : map.get("channel_name");
    }

    public static String a(if ifVar) {
        hw hwVarA;
        if ("com.xiaomi.xmsf".equals(ifVar.b) && (hwVarA = ifVar.a()) != null && hwVarA.a() != null) {
            String str = hwVarA.a().get("miui_package_name");
            if (!TextUtils.isEmpty(str)) {
                return str;
            }
        }
        return ifVar.b;
    }

    public static String a(Map<String, String> map, int i) {
        String str = i == 0 ? "notify_effect" : b(map) ? String.format("cust_btn_%s_ne", Integer.valueOf(i)) : i == 1 ? "notification_style_button_left_notify_effect" : i == 2 ? "notification_style_button_mid_notify_effect" : i == 3 ? "notification_style_button_right_notify_effect" : i == 4 ? "notification_colorful_button_notify_effect" : null;
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

    private static void a(Context context, Intent intent, if ifVar, hw hwVar, String str, int i) {
        if (ifVar == null || hwVar == null || TextUtils.isEmpty(str)) {
            return;
        }
        String strA = a(hwVar.a(), i);
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        if (bk.a.equals(strA) || bk.b.equals(strA) || bk.c.equals(strA)) {
            intent.putExtra("messageId", str);
            intent.putExtra("local_paid", ifVar.a);
            if (!TextUtils.isEmpty(ifVar.b)) {
                intent.putExtra(HiAnalyticsConstant.BI_KEY_TARGET_PACKAGE, ifVar.b);
            }
            intent.putExtra("job_key", a(hwVar.a(), "jobkey"));
            intent.putExtra(i + "_target_component", a(context, ifVar.b, hwVar.a(), i));
        }
    }

    public static void a(Context context, String str) {
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
        List<StatusBarNotification> listB = axVarA.b();
        if (com.xiaomi.push.w.a(listB)) {
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
        Iterator<StatusBarNotification> it = listB.iterator();
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
        List<StatusBarNotification> listB = axVarA.b();
        if (com.xiaomi.push.w.a(listB)) {
            return;
        }
        LinkedList linkedList = new LinkedList();
        for (StatusBarNotification statusBarNotification : listB) {
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

    private static void a(eq eqVar, Context context, String str, if ifVar, byte[] bArr, int i) {
        PendingIntent pendingIntentA;
        PendingIntent pendingIntentA2;
        PendingIntent pendingIntentA3;
        PendingIntent pendingIntentA4;
        Map<String, String> mapA = ifVar.a().a();
        if (TextUtils.equals("3", mapA.get("notification_style_type")) || TextUtils.equals("4", mapA.get("notification_style_type"))) {
            return;
        }
        if (b(mapA)) {
            for (int i2 = 1; i2 <= 3; i2++) {
                String str2 = mapA.get(String.format("cust_btn_%s_n", Integer.valueOf(i2)));
                if (!TextUtils.isEmpty(str2) && (pendingIntentA4 = a(context, str, ifVar, bArr, i, i2)) != null) {
                    eqVar.addAction(0, str2, pendingIntentA4);
                }
            }
            return;
        }
        if (!TextUtils.isEmpty(mapA.get("notification_style_button_left_name")) && (pendingIntentA3 = a(context, str, ifVar, bArr, i, 1)) != null) {
            eqVar.addAction(0, mapA.get("notification_style_button_left_name"), pendingIntentA3);
        }
        if (!TextUtils.isEmpty(mapA.get("notification_style_button_mid_name")) && (pendingIntentA2 = a(context, str, ifVar, bArr, i, 2)) != null) {
            eqVar.addAction(0, mapA.get("notification_style_button_mid_name"), pendingIntentA2);
        }
        if (TextUtils.isEmpty(mapA.get("notification_style_button_right_name")) || (pendingIntentA = a(context, str, ifVar, bArr, i, 3)) == null) {
            return;
        }
        eqVar.addAction(0, mapA.get("notification_style_button_right_name"), pendingIntentA);
    }

    private static boolean a(Context context, if ifVar, String str) {
        if (ifVar != null && ifVar.a() != null && ifVar.a().a() != null && !TextUtils.isEmpty(str)) {
            return Boolean.parseBoolean(ifVar.a().a().get("use_clicked_activity")) && l.a(context, a(str));
        }
        com.xiaomi.channel.commonutils.logger.b.a("should clicked activity params are null.");
        return false;
    }

    public static boolean a(Context context, String str) {
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

    public static boolean a(Context context, String str, boolean z) {
        return com.xiaomi.push.m.a() && !z && a(context, str);
    }

    private static boolean a(hw hwVar) {
        if (hwVar == null) {
            return false;
        }
        String strA = hwVar.a();
        return !TextUtils.isEmpty(strA) && strA.length() == 22 && "satuigmo".indexOf(strA.charAt(0)) >= 0;
    }

    public static boolean a(if ifVar) {
        hw hwVarA = ifVar.a();
        return a(hwVarA) && hwVarA.l();
    }

    private static boolean a(String str, String str2) {
        return TextUtils.isEmpty(str) || str2.contains(str);
    }

    public static boolean a(Map<String, String> map) {
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
    */
    private static String[] a(Context context, hw hwVar) {
        String str;
        String strC = hwVar.c();
        String strD = hwVar.d();
        Map<String, String> mapA = hwVar.a();
        if (mapA != null) {
            int iIntValue = Float.valueOf((context.getResources().getDisplayMetrics().widthPixels / context.getResources().getDisplayMetrics().density) + 0.5f).intValue();
            if (iIntValue <= 320) {
                String str2 = mapA.get("title_short");
                if (!TextUtils.isEmpty(str2)) {
                    strC = str2;
                }
                str = mapA.get("description_short");
                if (!TextUtils.isEmpty(str)) {
                    strD = str;
                }
            } else if (iIntValue > 360) {
                String str3 = mapA.get("title_long");
                if (!TextUtils.isEmpty(str3)) {
                    strC = str3;
                }
                str = mapA.get("description_long");
                if (!TextUtils.isEmpty(str)) {
                }
            }
        }
        return new String[]{strC, strD};
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
            return a(context, str, map, i);
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
        if (bk.a.equals(str3)) {
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
                if (Build.VERSION.SDK_INT >= 30 && !com.xiaomi.push.m.a(context) && bk.c.equals(str3)) {
                    return launchIntentForPackage;
                }
                com.xiaomi.channel.commonutils.logger.b.a("not resolve activity:" + launchIntentForPackage);
            } catch (Exception e7) {
                com.xiaomi.channel.commonutils.logger.b.d("Cause: " + e7.getMessage());
            }
        }
        return null;
    }

    public static String b(if ifVar) {
        return a(ifVar) ? "E100002" : c(ifVar) ? "E100000" : b(ifVar) ? "E100001" : d(ifVar) ? "E100003" : "";
    }

    public static void b(Context context, String str) {
        if (!com.xiaomi.push.m.a(context) || a == null || TextUtils.isEmpty(str)) {
            return;
        }
        a.a(str);
    }

    static void b(Context context, String str, int i) {
        context.getSharedPreferences("pref_notify_type", 0).edit().putInt(str, i).commit();
    }

    static boolean b(Context context, String str) {
        return context.getSharedPreferences("pref_notify_type", 0).contains(str);
    }

    public static boolean b(if ifVar) {
        hw hwVarA = ifVar.a();
        return a(hwVarA) && hwVarA.b == 1 && !a(ifVar);
    }

    private static boolean b(Map<String, String> map) {
        if (map != null) {
            return "6".equals(map.get("notification_style_type"));
        }
        com.xiaomi.channel.commonutils.logger.b.a("meta extra is null");
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

    public static boolean c(if ifVar) {
        hw hwVarA = ifVar.a();
        return a(hwVarA) && hwVarA.b == 0 && !a(ifVar);
    }

    public static boolean d(if ifVar) {
        return ifVar.a() == hj.a;
    }

    public static boolean e(if ifVar) {
        return a(ifVar) || c(ifVar) || b(ifVar);
    }
}

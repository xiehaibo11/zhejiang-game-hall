package com.mbridge.msdk.widget.custom.a;

import android.content.Context;
import android.text.TextUtils;
import android.util.Xml;
import android.view.View;
import android.view.ViewGroup;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.tkay.expressad.foundation.h.i;
import java.io.IOException;
import java.io.InputStream;
import java.lang.ref.SoftReference;
import java.lang.reflect.Field;
import java.util.HashMap;
import org.xmlpull.v1.XmlPullParser;

/* JADX INFO: compiled from: MBResource.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b {
    private static b g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private SoftReference<HashMap<String, c>> f4420a;
    private SoftReference<HashMap<String, String>> b;
    private SoftReference<HashMap<String, c>> c;
    private String d;
    private String e;
    private Context f;

    private b() {
    }

    public static b a() {
        if (g == null) {
            g = new b();
        }
        return g;
    }

    public final void a(String str) {
        this.f = com.mbridge.msdk.foundation.controller.a.f().j();
        if (com.mbridge.msdk.widget.custom.b.d.f4438a) {
            this.d = this.f.getFilesDir().toString();
        } else {
            this.d = str;
        }
        com.mbridge.msdk.widget.custom.b.a.a(this.f);
        this.e = "/drawable/";
        com.mbridge.msdk.widget.custom.b.d.a("屏幕：" + this.e);
        this.f = this.f;
    }

    public final HashMap b() {
        SoftReference<HashMap<String, c>> softReference = this.f4420a;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap();
            map.put("layout_width", c.layout_width);
            map.put("layout_height", c.layout_height);
            map.put("orientation", c.orientation);
            map.put("layout_centerHorizontal", c.layout_centerHorizontal);
            map.put("layout_centerVertical", c.layout_centerVertical);
            map.put("layout_marginLeft", c.layout_marginLeft);
            map.put("layout_marginRight", c.layout_marginRight);
            map.put("layout_margin", c.layout_margin);
            map.put("layout_gravity", c.layout_gravity);
            map.put("layout_alignParentRight", c.layout_alignParentRight);
            map.put("layout_weight", c.layout_weight);
            map.put("contentDescription", c.contentDescription);
            map.put("gravity", c.gravity);
            map.put("id", c.id);
            map.put("layout_below", c.layout_below);
            map.put("layout_above", c.layout_above);
            map.put("layout_toLeftOf", c.layout_toLeftOf);
            map.put("layout_toRightOf", c.layout_toRightOf);
            map.put("background", c.background);
            map.put("layout_marginTop", c.layout_marginTop);
            map.put("layout_marginBottom", c.layout_marginBottom);
            map.put("layout_marginLeft", c.layout_marginLeft);
            map.put("layout_marginRight", c.layout_marginRight);
            map.put("layout_alignParentBottom", c.layout_alignParentBottom);
            map.put("layout_alignParentTop", c.layout_alignParentTop);
            map.put("layout_alignParentLeft", c.layout_alignParentLeft);
            this.f4420a = new SoftReference<>(map);
        }
        return this.f4420a.get();
    }

    public final HashMap<String, c> c() {
        SoftReference<HashMap<String, c>> softReference = this.c;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap();
            map.put("id", c.id);
            map.put("text", c.text);
            map.put("ellipsize", c.ellipsize);
            map.put("fadingEdge", c.fadingEdge);
            map.put("scrollHorizontally", c.scrollHorizontally);
            map.put("textColor", c.textColor);
            map.put("textSize", c.textSize);
            map.put(RemoteMessageConst.Notification.VISIBILITY, c.visibility);
            map.put("background", c.background);
            map.put("textStyle", c.textStyle);
            map.put("style", c.style);
            map.put("layout_width", c.layout_width);
            map.put("layout_height", c.layout_height);
            map.put("layout_below", c.layout_below);
            map.put("contentDescription", c.contentDescription);
            map.put("src", c.src);
            map.put("gravity", c.gravity);
            map.put("orientation", c.orientation);
            map.put("numColumns", c.numColumns);
            map.put("verticalSpacing", c.verticalSpacing);
            map.put("horizontalSpacing", c.horizontalSpacing);
            map.put("background", c.background);
            map.put("layout_marginBottom", c.layout_marginBottom);
            map.put("scaleType", c.scaleType);
            map.put("singleLine", c.singleLine);
            map.put("paddingBottom", c.paddingBottom);
            map.put("paddingTop", c.paddingTop);
            map.put("letterSpacing", c.letterSpacing);
            map.put("paddingRight", c.paddingRight);
            map.put("layout_right", c.layout_right);
            this.c = new SoftReference<>(map);
        }
        return this.c.get();
    }

    public final int b(String str) {
        if (TextUtils.isEmpty(str) || !str.startsWith("#")) {
            return -16777216;
        }
        int length = str.length();
        if (length == 7) {
            return (int) Long.decode(str.replace("#", "#FF")).longValue();
        }
        if (length == 9) {
            return (int) Long.decode(str).longValue();
        }
        com.mbridge.msdk.widget.custom.b.d.a("返回白色背景");
        return -1;
    }

    public final int c(String str) {
        try {
            return Integer.parseInt(str);
        } catch (Exception unused) {
            int iIndexOf = str.indexOf("d");
            int iIndexOf2 = str.indexOf("s");
            if (iIndexOf == -1) {
                iIndexOf = iIndexOf2;
            }
            int i = Integer.parseInt(str.substring(0, iIndexOf));
            return str.contains("d") ? com.mbridge.msdk.widget.custom.b.a.a(this.f, i) : i;
        }
    }

    public final int d(String str) {
        String[] strArrSplit = str.toUpperCase().split("\\|");
        int i = 48;
        try {
            Class<?> cls = Class.forName("android.view.Gravity");
            for (String str2 : strArrSplit) {
                i |= cls.getField(str2).getInt(null);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return i;
    }

    public final int a(Context context, String str) {
        String packageName = context.getPackageName();
        StringBuilder sb = new StringBuilder();
        sb.append(packageName);
        sb.append(".R$");
        String[] strArrSplit = str.split("\\.");
        sb.append(strArrSplit[1]);
        try {
            Class<?> cls = Class.forName(sb.toString());
            Object objNewInstance = cls.newInstance();
            Field declaredField = cls.getDeclaredField(strArrSplit[2]);
            declaredField.setAccessible(true);
            return ((Integer) declaredField.get(objNewInstance)).intValue();
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public final String e(String str) {
        if (!str.startsWith("@")) {
            return str;
        }
        SoftReference<HashMap<String, String>> softReference = this.b;
        if (softReference == null || softReference.get() == null) {
            com.mbridge.msdk.widget.custom.b.d.a("字符串变空了");
            this.b = new SoftReference<>(d());
        }
        return this.b.get().get(str.substring(8));
    }

    private HashMap<String, String> d() {
        InputStream inputStreamOpen;
        try {
            inputStreamOpen = this.f.getAssets().open("strings.xml");
        } catch (IOException e) {
            e.printStackTrace();
            inputStreamOpen = null;
        }
        XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
        try {
            xmlPullParserNewPullParser.setInput(inputStreamOpen, "utf-8");
            HashMap<String, String> map = new HashMap<>();
            for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.next()) {
                if (eventType == 2) {
                    if (i.g.equals(xmlPullParserNewPullParser.getName())) {
                        map.put(xmlPullParserNewPullParser.getAttributeValue(0), xmlPullParserNewPullParser.nextText());
                    }
                }
            }
            return map;
        } catch (Exception e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public final View f(String str) {
        a aVar = new a(this.f);
        return aVar.a(aVar.a(str), (ViewGroup) null, false);
    }
}

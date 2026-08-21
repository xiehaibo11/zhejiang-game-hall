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

public final class b {
    private static b g;
    private SoftReference<HashMap<String, c>> a;
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
        if (com.mbridge.msdk.widget.custom.b.d.a) {
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
        SoftReference<HashMap<String, c>> softReference = this.a;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap();
            map.put("layout_width", c.b);
            map.put("layout_height", c.c);
            map.put("orientation", c.d);
            map.put("layout_centerHorizontal", c.e);
            map.put("layout_centerVertical", c.f);
            map.put("layout_marginLeft", c.k);
            map.put("layout_marginRight", c.l);
            map.put("layout_margin", c.p);
            map.put("layout_gravity", c.q);
            map.put("layout_alignParentRight", c.r);
            map.put("layout_weight", c.v);
            map.put("contentDescription", c.P);
            map.put("gravity", c.N);
            map.put("id", c.a);
            map.put("layout_below", c.g);
            map.put("layout_above", c.h);
            map.put("layout_toLeftOf", c.j);
            map.put("layout_toRightOf", c.i);
            map.put("background", c.J);
            map.put("layout_marginTop", c.m);
            map.put("layout_marginBottom", c.n);
            map.put("layout_marginLeft", c.k);
            map.put("layout_marginRight", c.l);
            map.put("layout_alignParentBottom", c.t);
            map.put("layout_alignParentTop", c.u);
            map.put("layout_alignParentLeft", c.s);
            this.a = new SoftReference<>(map);
        }
        return this.a.get();
    }

    public final HashMap<String, c> c() {
        SoftReference<HashMap<String, c>> softReference = this.c;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap();
            map.put("id", c.a);
            map.put("text", c.B);
            map.put("ellipsize", c.C);
            map.put("fadingEdge", c.D);
            map.put("scrollHorizontally", c.E);
            map.put("textColor", c.F);
            map.put("textSize", c.G);
            map.put(RemoteMessageConst.Notification.VISIBILITY, c.I);
            map.put("background", c.J);
            map.put("textStyle", c.K);
            map.put("style", c.L);
            map.put("layout_width", c.b);
            map.put("layout_height", c.c);
            map.put("layout_below", c.g);
            map.put("contentDescription", c.P);
            map.put("src", c.M);
            map.put("gravity", c.N);
            map.put("orientation", c.d);
            map.put("numColumns", c.O);
            map.put("verticalSpacing", c.z);
            map.put("horizontalSpacing", c.A);
            map.put("background", c.J);
            map.put("layout_marginBottom", c.n);
            map.put("scaleType", c.Q);
            map.put("singleLine", c.H);
            map.put("paddingBottom", c.R);
            map.put("paddingTop", c.S);
            map.put("letterSpacing", c.T);
            map.put("paddingRight", c.U);
            map.put("layout_right", c.V);
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

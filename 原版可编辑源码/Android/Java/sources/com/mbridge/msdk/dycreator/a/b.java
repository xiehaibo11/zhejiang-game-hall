package com.mbridge.msdk.dycreator.a;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.text.TextUtils;
import android.util.TypedValue;
import android.util.Xml;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils;
import com.mbridge.msdk.dycreator.e.e;
import com.mbridge.msdk.dycreator.e.g;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import java.io.IOException;
import java.io.InputStream;
import java.lang.ref.SoftReference;
import java.lang.reflect.Field;
import java.util.HashMap;
import org.xmlpull.v1.XmlPullParser;

public class b {
    private static volatile b g;
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
            synchronized (b.class) {
                if (g == null) {
                    g = new b();
                }
            }
        }
        return g;
    }

    public final void a(Context context, String str) {
        try {
            if (g.a) {
                this.d = context.getFilesDir().toString();
            } else {
                this.d = str;
            }
            if (e.a(context).heightPixels > 320 && !g.a) {
                this.e = "/drawable-hdpi/";
            } else {
                this.e = "/drawable-mdpi/";
            }
            this.f = context;
            com.mbridge.msdk.dycreator.e.b.a = a().d();
        } catch (Exception e) {
            z.d("MBResource", e.getMessage());
        }
    }

    public final void a(Context context) {
        try {
            if (e.a(context).heightPixels > 320 && !g.a) {
                this.e = "/drawable-hdpi/";
            } else {
                this.e = "/drawable-mdpi/";
            }
            this.f = context;
            com.mbridge.msdk.dycreator.e.b.a = a().d();
        } catch (Exception e) {
            z.d("MBResource", e.getMessage());
        }
    }

    public final HashMap b() {
        SoftReference<HashMap<String, c>> softReference = this.a;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap(45);
            map.put("layout_width", c.b);
            map.put("layout_height", c.c);
            map.put("orientation", c.d);
            map.put("layout_centerHorizontal", c.e);
            map.put("layout_centerVertical", c.f);
            map.put("layout_marginLeft", c.l);
            map.put("layout_marginRight", c.m);
            map.put("layout_margin", c.q);
            map.put("layout_gravity", c.r);
            map.put("layout_alignParentRight", c.s);
            map.put("layout_weight", c.x);
            map.put("contentDescription", c.W);
            map.put("gravity", c.U);
            map.put("id", c.a);
            map.put("layout_below", c.g);
            map.put("layout_above", c.h);
            map.put("layout_toLeftOf", c.j);
            map.put("layout_toRightOf", c.i);
            map.put("layout_toEndOf", c.k);
            map.put("background", c.Q);
            map.put("layout_marginTop", c.n);
            map.put("layout_marginBottom", c.o);
            map.put("layout_marginLeft", c.l);
            map.put("layout_marginRight", c.m);
            map.put("layout_alignParentBottom", c.u);
            map.put("layout_alignParentTop", c.v);
            map.put("layout_alignParentLeft", c.t);
            map.put("layout_alignWithParentIfMissing", c.w);
            map.put("layout_alignTop", c.ad);
            map.put("layout_alignBottom", c.ac);
            map.put("layout_alignLeft", c.af);
            map.put("layout_alignRight", c.ag);
            map.put("layout_centerInParent", c.ae);
            map.put("layout_alignParentEnd", c.y);
            this.a = new SoftReference<>(map);
        }
        return this.a.get();
    }

    public final HashMap<String, c> c() {
        SoftReference<HashMap<String, c>> softReference = this.c;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap(55);
            map.put("id", c.a);
            map.put("text", c.G);
            map.put("ellipsize", c.H);
            map.put("singleLine", c.I);
            map.put("lines", c.K);
            map.put("maxLength", c.J);
            map.put("drawableLeft", c.aa);
            map.put("drawablePadding", c.ab);
            map.put("fadingEdge", c.L);
            map.put("scrollHorizontally", c.M);
            map.put("textColor", c.N);
            map.put("textSize", c.O);
            map.put(RemoteMessageConst.Notification.VISIBILITY, c.P);
            map.put("background", c.Q);
            map.put("textStyle", c.R);
            map.put("style", c.S);
            map.put("layout_width", c.b);
            map.put("layout_height", c.c);
            map.put("layout_below", c.g);
            map.put("layout_centerInParent", c.ae);
            map.put("contentDescription", c.W);
            map.put("src", c.T);
            map.put("gravity", c.U);
            map.put("orientation", c.d);
            map.put("numColumns", c.V);
            map.put("verticalSpacing", c.E);
            map.put("horizontalSpacing", c.F);
            map.put("background", c.Q);
            map.put("layout_marginBottom", c.o);
            map.put("scaleType", c.X);
            map.put(RemoteMessageConst.Notification.TAG, c.Y);
            map.put("layout_gravity", c.r);
            map.put("parent_view", c.Z);
            map.put("padding", c.ah);
            map.put("paddingTop", c.ai);
            map.put("paddingBottom", c.aj);
            map.put("paddingLeft", c.ak);
            map.put("paddingRight", c.al);
            map.put("divider", c.z);
            map.put("scrollbars", c.A);
            map.put("listSelector", c.B);
            this.c = new SoftReference<>(map);
        }
        return this.c.get();
    }

    public final int a(String str) {
        if (TextUtils.isEmpty(str)) {
            return -16777216;
        }
        if (str.startsWith("#")) {
            int length = str.length();
            if (length == 7) {
                return (int) Long.decode(str.replace("#", "#FF")).longValue();
            }
            if (length == 9) {
                return (int) Long.decode(str).longValue();
            }
            g.a("返回白色背景");
            return -1;
        }
        if (!str.startsWith("@color/")) {
            return -16777216;
        }
        String strSubstring = str.substring(7);
        if (Build.VERSION.SDK_INT >= 23) {
            return com.mbridge.msdk.foundation.controller.a.f().j().getColor(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), strSubstring, "color"));
        }
        return -16777216;
    }

    public final GradientDrawable a(String[] strArr) {
        try {
            GradientDrawable gradientDrawable = new GradientDrawable(GradientOrientationUtils.getOrientation(strArr[2]), new int[]{Color.parseColor(strArr[0]), Color.parseColor(strArr[1])});
            gradientDrawable.setGradientType(0);
            return gradientDrawable;
        } catch (Exception e) {
            z.d("MBResource", e.getMessage());
            return null;
        }
    }

    public final int b(String str) {
        try {
            return Integer.parseInt(str);
        } catch (Exception unused) {
            int iIndexOf = str.indexOf("d");
            int iIndexOf2 = str.indexOf("s");
            if (iIndexOf == -1) {
                iIndexOf = iIndexOf2;
            }
            int i = Integer.parseInt(str.substring(0, iIndexOf));
            if (!str.contains("d")) {
                str.contains("s");
                return i;
            }
            return (int) TypedValue.applyDimension(1, i, this.f.getResources().getDisplayMetrics());
        }
    }

    public final int c(String str) {
        String[] strArrSplit = str.toUpperCase().split("\\|");
        int i = 48;
        try {
            Class<?> cls = Class.forName("android.view.Gravity");
            for (String str2 : strArrSplit) {
                i = cls.getField(str2).getInt(null);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return i;
    }

    public final int d(String str) {
        Context context = this.f;
        if (context != null) {
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
            }
        }
        return 0;
    }

    public final String e(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (!str.startsWith("@")) {
            return str;
        }
        SoftReference<HashMap<String, String>> softReference = this.b;
        if (softReference == null || softReference.get() == null) {
            this.b = new SoftReference<>(d());
        }
        String strSubstring = str.substring(8);
        if (this.b.get() == null || this.b.get().size() <= 0) {
            return null;
        }
        String str2 = this.b.get().get(strSubstring);
        if (!TextUtils.isEmpty(str2)) {
            return str2;
        }
        try {
            return com.mbridge.msdk.foundation.controller.a.f().j().getString(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), strSubstring, i.g));
        } catch (Exception e) {
            z.d("MBResource", e.getMessage());
            return null;
        }
    }

    private HashMap<String, String> d() {
        InputStream inputStreamOpen;
        try {
            inputStreamOpen = this.f.getAssets().open("rv_binddatas.xml");
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

    public final void a(String str, ImageView imageView) {
        Context context;
        if (str == null || !str.startsWith("@drawable/") || (context = this.f) == null) {
            return;
        }
        try {
            imageView.setImageResource(context.getResources().getIdentifier(str, i.c, this.f.getPackageName()));
        } catch (Exception e) {
            z.d("MBResource", e.getMessage());
        }
    }

    public final View f(String str) {
        if (this.f != null) {
            try {
                a aVar = new a(this.f);
                new String();
                g.a(str.toString());
                return aVar.a(str.toString(), (ViewGroup) null);
            } catch (Exception e) {
                z.d("MBResource", e.getMessage());
            }
        }
        return null;
    }
}

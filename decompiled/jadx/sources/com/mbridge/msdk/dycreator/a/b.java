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

/* JADX INFO: compiled from: MBResource.java */
/* JADX INFO: loaded from: classes2.dex */
public class b {
    private static volatile b g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private SoftReference<HashMap<String, c>> f3181a;
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
            if (g.f3302a) {
                this.d = context.getFilesDir().toString();
            } else {
                this.d = str;
            }
            if (e.a(context).heightPixels > 320 && !g.f3302a) {
                this.e = "/drawable-hdpi/";
            } else {
                this.e = "/drawable-mdpi/";
            }
            this.f = context;
            com.mbridge.msdk.dycreator.e.b.f3300a = a().d();
        } catch (Exception e) {
            z.d("MBResource", e.getMessage());
        }
    }

    public final void a(Context context) {
        try {
            if (e.a(context).heightPixels > 320 && !g.f3302a) {
                this.e = "/drawable-hdpi/";
            } else {
                this.e = "/drawable-mdpi/";
            }
            this.f = context;
            com.mbridge.msdk.dycreator.e.b.f3300a = a().d();
        } catch (Exception e) {
            z.d("MBResource", e.getMessage());
        }
    }

    public final HashMap b() {
        SoftReference<HashMap<String, c>> softReference = this.f3181a;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap(45);
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
            map.put("layout_toEndOf", c.layout_toEndOf);
            map.put("background", c.background);
            map.put("layout_marginTop", c.layout_marginTop);
            map.put("layout_marginBottom", c.layout_marginBottom);
            map.put("layout_marginLeft", c.layout_marginLeft);
            map.put("layout_marginRight", c.layout_marginRight);
            map.put("layout_alignParentBottom", c.layout_alignParentBottom);
            map.put("layout_alignParentTop", c.layout_alignParentTop);
            map.put("layout_alignParentLeft", c.layout_alignParentLeft);
            map.put("layout_alignWithParentIfMissing", c.layout_alignWithParentIfMissing);
            map.put("layout_alignTop", c.layout_alignTop);
            map.put("layout_alignBottom", c.layout_alignBottom);
            map.put("layout_alignLeft", c.layout_alignLeft);
            map.put("layout_alignRight", c.layout_alignRight);
            map.put("layout_centerInParent", c.layout_centerInParent);
            map.put("layout_alignParentEnd", c.layout_alignParentEnd);
            this.f3181a = new SoftReference<>(map);
        }
        return this.f3181a.get();
    }

    public final HashMap<String, c> c() {
        SoftReference<HashMap<String, c>> softReference = this.c;
        if (softReference == null || softReference.get() == null) {
            HashMap map = new HashMap(55);
            map.put("id", c.id);
            map.put("text", c.text);
            map.put("ellipsize", c.ellipsize);
            map.put("singleLine", c.singleLine);
            map.put("lines", c.lines);
            map.put("maxLength", c.maxLength);
            map.put("drawableLeft", c.drawableLeft);
            map.put("drawablePadding", c.drawablePadding);
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
            map.put("layout_centerInParent", c.layout_centerInParent);
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
            map.put(RemoteMessageConst.Notification.TAG, c.tag);
            map.put("layout_gravity", c.layout_gravity);
            map.put("parent_view", c.parent_view);
            map.put("padding", c.padding);
            map.put("paddingTop", c.paddingTop);
            map.put("paddingBottom", c.paddingBottom);
            map.put("paddingLeft", c.paddingLeft);
            map.put("paddingRight", c.paddingRight);
            map.put("divider", c.divider);
            map.put("scrollbars", c.scrollbars);
            map.put("listSelector", c.listSelector);
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

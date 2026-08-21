package com.xiaomi.push;

import java.io.InputStream;
import java.net.URL;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserFactory;

/* JADX INFO: loaded from: classes4.dex */
public class gu {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static gu f8192a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Map<String, Object> f462a = new ConcurrentHashMap();
    private Map<String, Object> b = new ConcurrentHashMap();

    private gu() {
        m390a();
    }

    public static synchronized gu a() {
        if (f8192a == null) {
            f8192a = new gu();
        }
        return f8192a;
    }

    private String a(String str, String str2) {
        StringBuilder sb = new StringBuilder();
        sb.append("<");
        sb.append(str);
        sb.append("/>");
        if (str != null) {
            sb.append("<");
            sb.append(str2);
            sb.append("/>");
        }
        return sb.toString();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private ClassLoader[] m388a() {
        ClassLoader[] classLoaderArr = {gu.class.getClassLoader(), Thread.currentThread().getContextClassLoader()};
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < 2; i++) {
            ClassLoader classLoader = classLoaderArr[i];
            if (classLoader != null) {
                arrayList.add(classLoader);
            }
        }
        return (ClassLoader[]) arrayList.toArray(new ClassLoader[arrayList.size()]);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Object m389a(String str, String str2) {
        return this.f462a.get(a(str, str2));
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected void m390a() {
        Map<String, Object> map;
        Object objNewInstance;
        Map<String, Object> map2;
        Object objNewInstance2;
        try {
            for (ClassLoader classLoader : m388a()) {
                Enumeration<URL> resources = classLoader.getResources("META-INF/smack.providers");
                while (resources.hasMoreElements()) {
                    InputStream inputStreamOpenStream = null;
                    try {
                        inputStreamOpenStream = resources.nextElement().openStream();
                        XmlPullParser xmlPullParserNewPullParser = XmlPullParserFactory.newInstance().newPullParser();
                        xmlPullParserNewPullParser.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", true);
                        xmlPullParserNewPullParser.setInput(inputStreamOpenStream, "UTF-8");
                        int eventType = xmlPullParserNewPullParser.getEventType();
                        do {
                            if (eventType == 2) {
                                if (xmlPullParserNewPullParser.getName().equals("iqProvider")) {
                                    xmlPullParserNewPullParser.next();
                                    xmlPullParserNewPullParser.next();
                                    String strNextText = xmlPullParserNewPullParser.nextText();
                                    xmlPullParserNewPullParser.next();
                                    xmlPullParserNewPullParser.next();
                                    String strNextText2 = xmlPullParserNewPullParser.nextText();
                                    xmlPullParserNewPullParser.next();
                                    xmlPullParserNewPullParser.next();
                                    String strNextText3 = xmlPullParserNewPullParser.nextText();
                                    String strA = a(strNextText, strNextText2);
                                    if (!this.b.containsKey(strA)) {
                                        try {
                                            Class<?> cls = Class.forName(strNextText3);
                                            if (gs.class.isAssignableFrom(cls)) {
                                                map2 = this.b;
                                                objNewInstance2 = cls.newInstance();
                                            } else if (gl.class.isAssignableFrom(cls)) {
                                                map2 = this.b;
                                                objNewInstance2 = cls;
                                            }
                                            map2.put(strA, objNewInstance2);
                                        } catch (ClassNotFoundException e) {
                                            e = e;
                                            e.printStackTrace();
                                        }
                                    }
                                } else if (xmlPullParserNewPullParser.getName().equals("extensionProvider")) {
                                    xmlPullParserNewPullParser.next();
                                    xmlPullParserNewPullParser.next();
                                    String strNextText4 = xmlPullParserNewPullParser.nextText();
                                    xmlPullParserNewPullParser.next();
                                    xmlPullParserNewPullParser.next();
                                    String strNextText5 = xmlPullParserNewPullParser.nextText();
                                    xmlPullParserNewPullParser.next();
                                    xmlPullParserNewPullParser.next();
                                    String strNextText6 = xmlPullParserNewPullParser.nextText();
                                    String strA2 = a(strNextText4, strNextText5);
                                    if (!this.f462a.containsKey(strA2)) {
                                        try {
                                            Class<?> cls2 = Class.forName(strNextText6);
                                            if (gt.class.isAssignableFrom(cls2)) {
                                                map = this.f462a;
                                                objNewInstance = cls2.newInstance();
                                            } else if (go.class.isAssignableFrom(cls2)) {
                                                map = this.f462a;
                                                objNewInstance = cls2;
                                            }
                                            map.put(strA2, objNewInstance);
                                        } catch (ClassNotFoundException e2) {
                                            e = e2;
                                            e.printStackTrace();
                                        }
                                    }
                                }
                            }
                            eventType = xmlPullParserNewPullParser.next();
                        } while (eventType != 1);
                        inputStreamOpenStream.close();
                    } catch (Throwable th) {
                        try {
                            inputStreamOpenStream.close();
                        } catch (Exception unused) {
                        }
                        throw th;
                    }
                }
            }
        } catch (Exception e3) {
            e3.printStackTrace();
        }
    }

    public void a(String str, String str2, Object obj) {
        if (!(obj instanceof gt) && !(obj instanceof Class)) {
            throw new IllegalArgumentException("Provider must be a PacketExtensionProvider or a Class instance.");
        }
        this.f462a.put(a(str, str2), obj);
    }
}

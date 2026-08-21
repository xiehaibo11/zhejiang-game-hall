package com.tramini.plugin.a.e;

import android.os.Build;
import android.text.TextUtils;
import android.webkit.ValueCallback;
import android.webkit.WebView;
import com.tramini.plugin.a.e.f;
import java.io.IOException;
import java.io.StringReader;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Properties;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public final class b extends f {
    public static com.tramini.plugin.a.c.a a(JSONObject jSONObject, com.tramini.plugin.a.c.c cVar, String str, String str2) {
        return a(a(jSONObject.optString("in_na"), str), "", jSONObject.optString("tobj_k"), jSONObject.optLong("bwt", com.heytap.mcssdk.constant.a.q), jSONObject.optLong("bswt", 2000L), jSONObject, jSONObject.optString("bu_k"), cVar.e, str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x026b A[Catch: all -> 0x02ae, TRY_LEAVE, TryCatch #4 {all -> 0x02ae, blocks: (B:3:0x002f, B:6:0x003e, B:8:0x0042, B:10:0x004b, B:12:0x0055, B:15:0x006a, B:17:0x0070, B:20:0x0080, B:84:0x0206, B:86:0x0211, B:88:0x0217, B:90:0x021d, B:92:0x0227, B:94:0x022f, B:96:0x0239, B:98:0x023f, B:100:0x0245, B:105:0x0268, B:102:0x0253, B:104:0x0259, B:107:0x026b, B:110:0x0277, B:112:0x027d, B:113:0x0285, B:115:0x028f, B:116:0x0297, B:118:0x029d, B:119:0x02a2, B:38:0x00c1, B:42:0x00e5, B:80:0x01d7, B:73:0x019c, B:75:0x01aa, B:77:0x01d2), top: B:133:0x002f }] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x0211 A[Catch: all -> 0x02ae, TryCatch #4 {all -> 0x02ae, blocks: (B:3:0x002f, B:6:0x003e, B:8:0x0042, B:10:0x004b, B:12:0x0055, B:15:0x006a, B:17:0x0070, B:20:0x0080, B:84:0x0206, B:86:0x0211, B:88:0x0217, B:90:0x021d, B:92:0x0227, B:94:0x022f, B:96:0x0239, B:98:0x023f, B:100:0x0245, B:105:0x0268, B:102:0x0253, B:104:0x0259, B:107:0x026b, B:110:0x0277, B:112:0x027d, B:113:0x0285, B:115:0x028f, B:116:0x0297, B:118:0x029d, B:119:0x02a2, B:38:0x00c1, B:42:0x00e5, B:80:0x01d7, B:73:0x019c, B:75:0x01aa, B:77:0x01d2), top: B:133:0x002f }] */
    /* JADX WARN: Removed duplicated region for block: B:93:0x022d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tramini.plugin.a.c.a a(java.lang.Object r33, java.lang.String r34, java.lang.String r35, long r36, long r38, org.json.JSONObject r40, java.lang.String r41, org.json.JSONArray r42, java.lang.String r43) {
        /*
            Method dump skipped, instruction units count: 687
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tramini.plugin.a.e.b.a(java.lang.Object, java.lang.String, java.lang.String, long, long, org.json.JSONObject, java.lang.String, org.json.JSONArray, java.lang.String):com.tramini.plugin.a.c.a");
    }

    /* JADX WARN: Removed duplicated region for block: B:45:0x00f6  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x015d A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:95:0x015e A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String a(java.lang.String r8, java.lang.Object r9, org.json.JSONObject r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
        /*
            Method dump skipped, instruction units count: 378
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tramini.plugin.a.e.b.a(java.lang.String, java.lang.Object, org.json.JSONObject, java.lang.String, java.lang.String, java.lang.String, java.lang.String):java.lang.String");
    }

    private static String d(String str, String str2) {
        try {
            JSONArray jSONArray = new JSONArray(str);
            String strA = "";
            for (int i = 0; i < jSONArray.length(); i++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null) {
                    int iOptInt = jSONObjectOptJSONObject.optInt("action", -1);
                    String strOptString = jSONObjectOptJSONObject.optString("param", "");
                    if (iOptInt == 101) {
                        if (TextUtils.isEmpty(str2)) {
                            continue;
                        } else {
                            strA = f.b.a(str2, strOptString);
                        }
                    }
                    if (!TextUtils.isEmpty(strA)) {
                        return strA;
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return "";
    }

    private static JSONObject c(Object obj, String str) {
        try {
            ArrayList<Field> arrayList = new ArrayList();
            a(obj.getClass(), arrayList);
            for (Field field : arrayList) {
                if (field != null) {
                    field.setAccessible(true);
                    Object obj2 = field.get(obj);
                    if (obj2 != null && (obj2 instanceof JSONObject) && !TextUtils.isEmpty(((JSONObject) obj2).optString(str, ""))) {
                        return (JSONObject) obj2;
                    }
                }
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    private static String a(Object obj) {
        if (obj == null) {
            return "";
        }
        try {
            ArrayList<Field> arrayList = new ArrayList();
            a(obj.getClass(), arrayList);
            for (Field field : arrayList) {
                if (field != null) {
                    field.setAccessible(true);
                    Object obj2 = field.get(obj);
                    if (obj2 != null && (obj2 instanceof String) && ((String) obj2).endsWith(".mp4")) {
                        return (String) obj2;
                    }
                }
            }
            return "";
        } catch (Throwable unused) {
            return "";
        }
    }

    private static String b(Object obj) {
        if (obj == null) {
            return "";
        }
        try {
            ArrayList<Field> arrayList = new ArrayList();
            a(obj.getClass(), arrayList);
            for (Field field : arrayList) {
                if (field != null) {
                    field.setAccessible(true);
                    Object obj2 = field.get(obj);
                    if (obj2 != null && (obj2 instanceof String) && ((String) obj2).contains("<!DOCTYPE html>")) {
                        return (String) obj2;
                    }
                }
            }
            return "";
        } catch (Throwable unused) {
            return "";
        }
    }

    private static String a(WebView webView, long j, long j2) {
        if (Build.VERSION.SDK_INT < 19) {
            return "";
        }
        try {
            Thread.sleep(j);
        } catch (InterruptedException unused) {
        }
        ExecutorService executorServiceNewFixedThreadPool = Executors.newFixedThreadPool(2);
        String[] strArr = new String[1];
        try {
            executorServiceNewFixedThreadPool.submit(new AnonymousClass1(webView, executorServiceNewFixedThreadPool, strArr));
        } catch (Throwable unused2) {
        }
        try {
            synchronized (executorServiceNewFixedThreadPool) {
                executorServiceNewFixedThreadPool.wait(j + j2);
            }
            executorServiceNewFixedThreadPool.shutdown();
            return strArr[0] != null ? strArr[0] : "";
        } catch (Exception unused3) {
            return "";
        }
    }

    /* JADX INFO: renamed from: com.tramini.plugin.a.e.b$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ WebView f7843a;
        final /* synthetic */ ExecutorService b;
        final /* synthetic */ String[] c;

        AnonymousClass1(WebView webView, ExecutorService executorService, String[] strArr) {
            this.f7843a = webView;
            this.b = executorService;
            this.c = strArr;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                if (this.f7843a == null) {
                    synchronized (this.b) {
                        this.b.notifyAll();
                    }
                }
                this.f7843a.post(new Runnable() { // from class: com.tramini.plugin.a.e.b.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (Build.VERSION.SDK_INT >= 19) {
                            AnonymousClass1.this.f7843a.evaluateJavascript("(function() { return (document.getElementsByTagName('html')[0].innerHTML); })();", new ValueCallback<String>() { // from class: com.tramini.plugin.a.e.b.1.1.1
                                @Override // android.webkit.ValueCallback
                                public final /* synthetic */ void onReceiveValue(String str) {
                                    Properties properties = new Properties();
                                    try {
                                        properties.load(new StringReader("unicodedString=".concat(String.valueOf(str))));
                                    } catch (IOException unused) {
                                    }
                                    String property = properties.getProperty("unicodedString");
                                    if (property.length() > 2) {
                                        AnonymousClass1.this.c[0] = property.substring(1, property.length() - 1);
                                    }
                                    synchronized (AnonymousClass1.this.b) {
                                        AnonymousClass1.this.b.notifyAll();
                                    }
                                }

                                private void a(String str) {
                                    Properties properties = new Properties();
                                    try {
                                        properties.load(new StringReader("unicodedString=".concat(String.valueOf(str))));
                                    } catch (IOException unused) {
                                    }
                                    String property = properties.getProperty("unicodedString");
                                    if (property.length() > 2) {
                                        AnonymousClass1.this.c[0] = property.substring(1, property.length() - 1);
                                    }
                                    synchronized (AnonymousClass1.this.b) {
                                        AnonymousClass1.this.b.notifyAll();
                                    }
                                }
                            });
                        }
                    }
                });
            } catch (Throwable unused) {
            }
        }
    }
}

package com.tramini.plugin.a.g;

import android.text.TextUtils;
import com.tencent.connect.common.Constants;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7858a = a.class.getSimpleName();

    /* JADX INFO: renamed from: com.tramini.plugin.a.g.a$a, reason: collision with other inner class name */
    public interface InterfaceC0516a {
        void a(com.tramini.plugin.a.c.a aVar);
    }

    public static void a(final com.tramini.plugin.b.a aVar, final String str, final String str2, final String str3, final InterfaceC0516a interfaceC0516a) {
        if (aVar == null) {
            interfaceC0516a.a(null);
        } else {
            com.tramini.plugin.a.g.b.a.a().a(new Runnable() { // from class: com.tramini.plugin.a.g.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    ConcurrentHashMap<String, com.tramini.plugin.a.c.c> concurrentHashMapE;
                    com.tramini.plugin.a.c.a aVarA = null;
                    try {
                        concurrentHashMapE = aVar.e();
                    } catch (Throwable unused) {
                    }
                    if (concurrentHashMapE == null) {
                        if (interfaceC0516a != null) {
                            interfaceC0516a.a(null);
                            return;
                        }
                        return;
                    }
                    com.tramini.plugin.a.c.c cVar = concurrentHashMapE.get(TextUtils.equals(str, "33") ? "2" : str);
                    String str4 = cVar != null ? cVar.d : "";
                    if (TextUtils.isEmpty(str4)) {
                        if (interfaceC0516a != null) {
                            interfaceC0516a.a(null);
                            return;
                        }
                        return;
                    }
                    JSONObject jSONObject = new JSONObject(str4);
                    String str5 = str;
                    byte b = -1;
                    int iHashCode = str5.hashCode();
                    if (iHashCode != 50) {
                        if (iHashCode != 56) {
                            if (iHashCode != 1572) {
                                if (iHashCode != 1632) {
                                    if (iHashCode != 1691) {
                                        if (iHashCode != 53) {
                                            if (iHashCode != 54) {
                                                if (iHashCode != 1606) {
                                                    if (iHashCode == 1607 && str5.equals("29")) {
                                                        b = 7;
                                                    }
                                                } else if (str5.equals(Constants.VIA_ACT_TYPE_TWENTY_EIGHT)) {
                                                    b = 6;
                                                }
                                            } else if (str5.equals("6")) {
                                                b = 3;
                                            }
                                        } else if (str5.equals("5")) {
                                            b = 2;
                                        }
                                    } else if (str5.equals("50")) {
                                        b = 8;
                                    }
                                } else if (str5.equals("33")) {
                                    b = 1;
                                }
                            } else if (str5.equals(Constants.VIA_REPORT_TYPE_WPA_STATE)) {
                                b = 5;
                            }
                        } else if (str5.equals("8")) {
                            b = 4;
                        }
                    } else if (str5.equals("2")) {
                        b = 0;
                    }
                    switch (b) {
                        case 0:
                        case 1:
                            aVarA = com.tramini.plugin.a.e.a.a(jSONObject, cVar, str2, str3);
                            break;
                        case 2:
                            aVarA = com.tramini.plugin.a.e.b.a(jSONObject, cVar, str2, str3);
                            break;
                        case 3:
                            aVarA = com.tramini.plugin.a.e.e.a(jSONObject, cVar, str2, str3);
                            break;
                        case 4:
                            aVarA = com.tramini.plugin.a.e.c.a(jSONObject, cVar, str2);
                            break;
                        case 5:
                            aVarA = com.tramini.plugin.a.e.i.a(jSONObject, cVar, str2);
                            break;
                        case 6:
                            aVarA = com.tramini.plugin.a.e.d.a(jSONObject, cVar, str2);
                            break;
                        case 7:
                            aVarA = com.tramini.plugin.a.e.h.a(jSONObject, cVar, str2);
                            break;
                        case 8:
                            aVarA = com.tramini.plugin.a.e.g.a(jSONObject, cVar, str2);
                            break;
                    }
                    InterfaceC0516a interfaceC0516a2 = interfaceC0516a;
                    if (interfaceC0516a2 != null) {
                        interfaceC0516a2.a(aVarA);
                    }
                }
            });
        }
    }
}

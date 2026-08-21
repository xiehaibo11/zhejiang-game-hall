package com.mbridge.msdk.videocommon;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class a {
    private static ConcurrentHashMap<String, a> a = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> b = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> c = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> d = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> e = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> f = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> g = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> h = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> i = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> j = new ConcurrentHashMap<>();

    public static class a {
        private WindVaneWebView a;
        private boolean b;

        public final WindVaneWebView a() {
            return this.a;
        }

        public final void a(WindVaneWebView windVaneWebView) {
            this.a = windVaneWebView;
        }

        public final void a(String str) {
            WindVaneWebView windVaneWebView = this.a;
            if (windVaneWebView != null) {
                windVaneWebView.setTag(str);
            }
        }

        public final String b() {
            WindVaneWebView windVaneWebView = this.a;
            return windVaneWebView != null ? (String) windVaneWebView.getTag() : "";
        }

        public final boolean c() {
            return this.b;
        }

        public final void a(boolean z) {
            this.b = z;
        }
    }

    public static a a(String str) {
        if (g.containsKey(str)) {
            return g.get(str);
        }
        if (h.containsKey(str)) {
            return h.get(str);
        }
        if (i.containsKey(str)) {
            return i.get(str);
        }
        if (j.containsKey(str)) {
            return j.get(str);
        }
        return null;
    }

    public static void a(String str, a aVar, boolean z, boolean z2) {
        if (z) {
            if (z2) {
                h.put(str, aVar);
                return;
            } else {
                g.put(str, aVar);
                return;
            }
        }
        if (z2) {
            j.put(str, aVar);
        } else {
            i.put(str, aVar);
        }
    }

    public static void b(String str) {
        if (g.containsKey(str)) {
            g.remove(str);
        }
        if (i.containsKey(str)) {
            i.remove(str);
        }
        if (h.containsKey(str)) {
            h.remove(str);
        }
        if (j.containsKey(str)) {
            j.remove(str);
        }
    }

    public static void c(String str) {
        if (!TextUtils.isEmpty(str)) {
            for (String str2 : g.keySet()) {
                if (!TextUtils.isEmpty(str2) && str2.startsWith(str)) {
                    g.remove(str2);
                }
            }
        } else {
            g.clear();
        }
        h.clear();
    }

    public static void a() {
        i.clear();
        j.clear();
    }

    public static void d(String str) {
        for (Map.Entry<String, a> entry : g.entrySet()) {
            if (entry.getKey().contains(str)) {
                g.remove(entry.getKey());
            }
        }
    }

    public static void e(String str) {
        for (Map.Entry<String, a> entry : h.entrySet()) {
            if (entry.getKey().contains(str)) {
                h.remove(entry.getKey());
            }
        }
    }

    public static a a(int i2, CampaignEx campaignEx) {
        if (campaignEx == null) {
            return null;
        }
        try {
            String requestIdNotice = campaignEx.getRequestIdNotice();
            if (i2 == 288) {
                requestIdNotice = campaignEx.getKeyIaUrl();
            }
            if (i2 != 94) {
                if (i2 != 287) {
                    if (i2 == 288) {
                        if (d != null && d.size() > 0) {
                            return d.get(requestIdNotice);
                        }
                    } else if (a != null && a.size() > 0) {
                        return a.get(requestIdNotice);
                    }
                } else if (campaignEx.isBidCampaign()) {
                    if (c != null && c.size() > 0) {
                        return c.get(requestIdNotice);
                    }
                } else if (f != null && f.size() > 0) {
                    return f.get(requestIdNotice);
                }
            } else if (campaignEx.isBidCampaign()) {
                if (b != null && b.size() > 0) {
                    return b.get(requestIdNotice);
                }
            } else if (e != null && e.size() > 0) {
                return e.get(requestIdNotice);
            }
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
        return null;
    }

    public static void b(int i2, CampaignEx campaignEx) {
        if (campaignEx == null) {
            return;
        }
        try {
            String requestIdNotice = campaignEx.getRequestIdNotice();
            if (i2 == 288) {
                requestIdNotice = campaignEx.getKeyIaUrl();
            }
            if (i2 == 94) {
                if (campaignEx.isBidCampaign()) {
                    if (b != null) {
                        b.remove(requestIdNotice);
                        return;
                    }
                    return;
                } else {
                    if (e != null) {
                        e.remove(requestIdNotice);
                        return;
                    }
                    return;
                }
            }
            if (i2 != 287) {
                if (i2 == 288) {
                    if (d != null) {
                        d.remove(requestIdNotice);
                        return;
                    }
                    return;
                } else {
                    if (a != null) {
                        a.remove(requestIdNotice);
                        return;
                    }
                    return;
                }
            }
            if (campaignEx.isBidCampaign()) {
                if (c != null) {
                    c.remove(requestIdNotice);
                }
            } else if (f != null) {
                f.remove(requestIdNotice);
            }
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }

    public static void a(int i2, String str, a aVar) {
        try {
            if (i2 == 94) {
                if (b == null) {
                    b = new ConcurrentHashMap<>();
                }
                b.put(str, aVar);
            } else {
                if (i2 != 287) {
                    return;
                }
                if (c == null) {
                    c = new ConcurrentHashMap<>();
                }
                c.put(str, aVar);
            }
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }

    public static void b(int i2, String str, a aVar) {
        try {
            if (i2 == 94) {
                if (e == null) {
                    e = new ConcurrentHashMap<>();
                }
                e.put(str, aVar);
            } else if (i2 == 287) {
                if (f == null) {
                    f = new ConcurrentHashMap<>();
                }
                f.put(str, aVar);
            } else if (i2 == 288) {
                if (d == null) {
                    d = new ConcurrentHashMap<>();
                }
                d.put(str, aVar);
            } else {
                if (a == null) {
                    a = new ConcurrentHashMap<>();
                }
                a.put(str, aVar);
            }
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }
}

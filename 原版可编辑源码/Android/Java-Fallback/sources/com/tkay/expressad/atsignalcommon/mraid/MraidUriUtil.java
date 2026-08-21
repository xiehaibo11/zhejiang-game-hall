package com.tkay.expressad.atsignalcommon.mraid;

public class MraidUriUtil {
    private static volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> a;
    private static java.util.ArrayList<java.lang.String> b;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.b = r0
            return
    }

    public MraidUriUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.Set<java.lang.String> a(android.net.Uri r5) {
            java.lang.String r5 = r5.getEncodedQuery()
            if (r5 != 0) goto Lb
            java.util.Set r5 = java.util.Collections.emptySet()
            return r5
        Lb:
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            r1 = 0
        L11:
            r2 = 38
            int r2 = r5.indexOf(r2, r1)
            r3 = -1
            if (r2 != r3) goto L1e
            int r2 = r5.length()
        L1e:
            r4 = 61
            int r4 = r5.indexOf(r4, r1)
            if (r4 > r2) goto L28
            if (r4 != r3) goto L29
        L28:
            r4 = r2
        L29:
            java.lang.String r1 = r5.substring(r1, r4)
            java.lang.String r1 = android.net.Uri.decode(r1)
            r0.add(r1)
            int r1 = r2 + 1
            int r2 = r5.length()
            if (r1 < r2) goto L11
            java.util.Set r5 = java.util.Collections.unmodifiableSet(r0)
            return r5
    }

    private static void a() {
            java.lang.Class<com.tkay.expressad.atsignalcommon.mraid.IMraidSignalCommunication> r0 = com.tkay.expressad.atsignalcommon.mraid.IMraidSignalCommunication.class
            java.lang.reflect.Method[] r0 = r0.getDeclaredMethods()
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L18
            r3 = r0[r2]
            java.util.ArrayList<java.lang.String> r4 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.b
            java.lang.String r3 = r3.getName()
            r4.add(r3)
            int r2 = r2 + 1
            goto L8
        L18:
            return
    }

    private static void a(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L3a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto L1e
            return
        L1e:
            boolean r1 = r0.contains(r3)
            if (r1 != 0) goto L39
            int r1 = r0.length()
            if (r1 <= 0) goto L30
            java.lang.String r1 = ","
            java.lang.String r0 = r0.concat(r1)
        L30:
            java.lang.String r3 = r0.concat(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            r0.put(r2, r3)
        L39:
            return
        L3a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            r0.put(r2, r3)
            return
    }

    public static void clearUnSupportMraidMethodMap() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            int r0 = r0.size()
            if (r0 <= 0) goto Ld
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            r0.clear()
        Ld:
            return
    }

    public static void clearUnSupportMraidMethodMap(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            r0.remove(r1)
            return
    }

    public static com.tkay.expressad.atsignalcommon.windvane.a getMraidMethodContext(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r8, java.lang.String r9) {
            android.net.Uri r9 = android.net.Uri.parse(r9)
            java.lang.String r0 = r9.getScheme()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L117
            java.lang.String r1 = "mraid"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L117
            com.tkay.expressad.atsignalcommon.windvane.a r0 = new com.tkay.expressad.atsignalcommon.windvane.a
            r0.<init>()
            java.lang.String r1 = "n+ztLkxpVTzBLkxgHN=="
            java.lang.String r1 = com.tkay.expressad.foundation.h.j.b(r1)
            r0.d = r1
            java.lang.String r1 = r9.getHost()
            r0.e = r1
            java.util.ArrayList<java.lang.String> r1 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.b
            int r1 = r1.size()
            r3 = 0
            if (r1 != 0) goto L4b
            java.lang.Class<com.tkay.expressad.atsignalcommon.mraid.IMraidSignalCommunication> r1 = com.tkay.expressad.atsignalcommon.mraid.IMraidSignalCommunication.class
            java.lang.reflect.Method[] r1 = r1.getDeclaredMethods()
            int r4 = r1.length
            r5 = r3
        L3b:
            if (r5 >= r4) goto L4b
            r6 = r1[r5]
            java.util.ArrayList<java.lang.String> r7 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.b
            java.lang.String r6 = r6.getName()
            r7.add(r6)
            int r5 = r5 + 1
            goto L3b
        L4b:
            java.util.ArrayList<java.lang.String> r1 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.b
            java.lang.String r4 = r0.e
            boolean r1 = r1.contains(r4)
            if (r1 != 0) goto Laf
            if (r8 == 0) goto Laf
            java.lang.String r9 = r8.getCampaignId()
            java.lang.String r1 = r0.e
            boolean r3 = android.text.TextUtils.isEmpty(r9)
            if (r3 != 0) goto L9a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            boolean r3 = r3.containsKey(r9)
            if (r3 == 0) goto L95
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            java.lang.Object r3 = r3.get(r9)
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L9a
            boolean r4 = r3.contains(r1)
            if (r4 != 0) goto L9a
            int r4 = r3.length()
            if (r4 <= 0) goto L8b
            java.lang.String r4 = ","
            java.lang.String r3 = r3.concat(r4)
        L8b:
            java.lang.String r1 = r3.concat(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            r3.put(r9, r1)
            goto L9a
        L95:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            r3.put(r9, r1)
        L9a:
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r9 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            java.lang.String r1 = r0.e
            r9.fireNativeMethodCompleteEvent(r8, r1)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r9 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            java.lang.String r0 = r0.e
            java.lang.String r1 = "Specified command is not implemented"
            r9.fireErrorEvent(r8, r0, r1)
            return r2
        Laf:
            java.lang.String r8 = r9.getEncodedQuery()
            if (r8 != 0) goto Lba
            java.util.Set r8 = java.util.Collections.emptySet()
            goto Lee
        Lba:
            java.util.LinkedHashSet r1 = new java.util.LinkedHashSet
            r1.<init>()
        Lbf:
            r2 = 38
            int r2 = r8.indexOf(r2, r3)
            r4 = -1
            if (r2 != r4) goto Lcc
            int r2 = r8.length()
        Lcc:
            r5 = 61
            int r5 = r8.indexOf(r5, r3)
            if (r5 > r2) goto Ld6
            if (r5 != r4) goto Ld7
        Ld6:
            r5 = r2
        Ld7:
            java.lang.String r3 = r8.substring(r3, r5)
            java.lang.String r3 = android.net.Uri.decode(r3)
            r1.add(r3)
            int r3 = r2 + 1
            int r2 = r8.length()
            if (r3 < r2) goto Lbf
            java.util.Set r8 = java.util.Collections.unmodifiableSet(r1)
        Lee:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L112
            r1.<init>()     // Catch: java.lang.Exception -> L112
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Exception -> L112
        Lf7:
            boolean r2 = r8.hasNext()     // Catch: java.lang.Exception -> L112
            if (r2 == 0) goto L10b
            java.lang.Object r2 = r8.next()     // Catch: java.lang.Exception -> L112
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L112
            java.lang.String r3 = r9.getQueryParameter(r2)     // Catch: java.lang.Exception -> L112
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L112
            goto Lf7
        L10b:
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Exception -> L112
            r0.f = r8     // Catch: java.lang.Exception -> L112
            goto L116
        L112:
            r8 = move-exception
            r8.printStackTrace()
        L116:
            return r0
        L117:
            return r2
    }

    public static java.lang.String getUnSupportMraidMethodString(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil.a
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
        L11:
            r1 = 0
            return r1
    }
}

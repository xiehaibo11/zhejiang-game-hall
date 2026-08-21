package com.mbridge.msdk.out;

public class MBNativeHandler extends com.mbridge.msdk.out.MBCommonHandler {
    public static final int OPERATE_LOAD = 1;
    public static final int OPERATE_LOAD_FRAME = 2;
    private static final java.lang.String TAG = null;
    public static final java.lang.String TEMPLATE_ID = "id";
    public static final java.lang.String TEMPLATE_NUM = "ad_num";
    private static java.lang.String mUnitID;
    private com.mbridge.msdk.mbnative.c.a adListener;
    private com.mbridge.msdk.click.b clickControler;
    private android.content.Context context;
    private java.util.Map<java.lang.String, java.lang.Object> map;
    private com.mbridge.msdk.mbnative.e.a nativeProvider;
    private java.util.List<com.mbridge.msdk.out.NativeListener.Template> templateList;
    private com.mbridge.msdk.out.NativeListener.NativeTrackingListener trackingListener;

    public static class KeyWordInfo {
        java.lang.String keyWordPN;
        java.lang.String keyWorkVN;

        public KeyWordInfo(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.keyWordPN = r1
                r0.keyWorkVN = r2
                return
        }

        public java.lang.String getKeyWordPN() {
                r1 = this;
                java.lang.String r0 = r1.keyWordPN
                return r0
        }

        public java.lang.String getKeyWorkVN() {
                r1 = this;
                java.lang.String r0 = r1.keyWorkVN
                return r0
        }

        public void setKeyWordPN(java.lang.String r1) {
                r0 = this;
                r0.keyWordPN = r1
                return
        }

        public void setKeyWorkVN(java.lang.String r1) {
                r0 = this;
                r0.keyWorkVN = r1
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.out.MBNativeHandler> r0 = com.mbridge.msdk.out.MBNativeHandler.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.out.MBNativeHandler.TAG = r0
            return
    }

    public MBNativeHandler(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.mbnative.c.a r0 = new com.mbridge.msdk.mbnative.c.a
            r0.<init>()
            r2.adListener = r0
            r2.context = r3
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 != 0) goto L1f
            if (r3 == 0) goto L1f
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            r0.b(r3)
        L1f:
            java.util.Map<java.lang.String, java.lang.Object> r3 = r2.map
            if (r3 == 0) goto L4d
            java.lang.String r0 = "unit_id"
            boolean r3 = r3.containsKey(r0)
            if (r3 == 0) goto L4d
            java.util.Map<java.lang.String, java.lang.Object> r3 = r2.map
            java.lang.Object r3 = r3.get(r0)
            java.lang.String r3 = (java.lang.String) r3
            com.mbridge.msdk.mbnative.c.a r0 = r2.adListener
            if (r0 == 0) goto L3a
            r0.a(r3)
        L3a:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L4d
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.f(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4d
            com.mbridge.msdk.foundation.tools.ae.a(r3, r0)
        L4d:
            return
    }

    public MBNativeHandler(java.util.Map<java.lang.String, java.lang.Object> r4, android.content.Context r5) {
            r3 = this;
            java.lang.String r0 = "native_video_height"
            java.lang.String r1 = "native_video_width"
            r3.<init>(r4, r5)
            com.mbridge.msdk.mbnative.c.a r2 = new com.mbridge.msdk.mbnative.c.a
            r2.<init>()
            r3.adListener = r2
            r3.context = r5
            r3.map = r4
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            if (r2 != 0) goto L25
            if (r5 == 0) goto L25
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            r2.b(r5)
        L25:
            java.lang.String r5 = "unit_id"
            if (r4 == 0) goto L68
            boolean r2 = r4.containsKey(r5)     // Catch: java.lang.Throwable -> L64
            if (r2 == 0) goto L68
            java.lang.Object r2 = r4.get(r5)     // Catch: java.lang.Throwable -> L64
            if (r2 == 0) goto L68
            java.lang.Object r2 = r4.get(r5)     // Catch: java.lang.Throwable -> L64
            boolean r2 = r2 instanceof java.lang.String     // Catch: java.lang.Throwable -> L64
            if (r2 == 0) goto L68
            boolean r2 = r4.containsKey(r1)     // Catch: java.lang.Throwable -> L64
            if (r2 == 0) goto L68
            java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Throwable -> L64
            if (r2 == 0) goto L68
            java.lang.Object r1 = r4.get(r1)     // Catch: java.lang.Throwable -> L64
            boolean r1 = r1 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L64
            if (r1 == 0) goto L68
            boolean r1 = r4.containsKey(r0)     // Catch: java.lang.Throwable -> L64
            if (r1 == 0) goto L68
            java.lang.Object r1 = r4.get(r0)     // Catch: java.lang.Throwable -> L64
            if (r1 == 0) goto L68
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Throwable -> L64
            boolean r0 = r0 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L64
            goto L68
        L64:
            r0 = move-exception
            r0.printStackTrace()
        L68:
            if (r4 == 0) goto L90
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L90
            java.lang.Object r4 = r4.get(r5)
            java.lang.String r4 = (java.lang.String) r4
            com.mbridge.msdk.mbnative.c.a r5 = r3.adListener
            if (r5 == 0) goto L7d
            r5.a(r4)
        L7d:
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L90
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ae.f(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L90
            com.mbridge.msdk.foundation.tools.ae.a(r4, r5)
        L90:
            return
    }

    public static java.util.Map<java.lang.String, java.lang.Object> getNativeProperties(java.lang.String r2, java.lang.String r3) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.out.MBNativeHandler.mUnitID = r3
            java.lang.String r1 = "unit_id"
            r0.put(r1, r3)
            java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto L16
            java.lang.String r2 = ""
        L16:
            r0.put(r3, r2)
            java.lang.String r2 = "MVNativePlugin"
            java.lang.String[] r2 = new java.lang.String[]{r2}
            java.lang.String r3 = "plugin_name"
            r0.put(r3, r2)
            r2 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "layout_type"
            r0.put(r3, r2)
            return r0
    }

    public static java.lang.String getTemplateString(java.util.List<com.mbridge.msdk.out.NativeListener.Template> r6) {
            if (r6 == 0) goto L6a
            int r0 = r6.size()     // Catch: java.lang.Exception -> L6a
            if (r0 <= 0) goto L6a
            java.lang.String r0 = "[{$native_info}]"
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L6a
            r1.<init>()     // Catch: java.lang.Exception -> L6a
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L6a
        L13:
            boolean r2 = r6.hasNext()     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = ","
            if (r2 == 0) goto L5a
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Exception -> L6a
            com.mbridge.msdk.out.NativeListener$Template r2 = (com.mbridge.msdk.out.NativeListener.Template) r2     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = "{\"id\":"
            r1.append(r4)     // Catch: java.lang.Exception -> L6a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6a
            r4.<init>()     // Catch: java.lang.Exception -> L6a
            int r5 = r2.getId()     // Catch: java.lang.Exception -> L6a
            r4.append(r5)     // Catch: java.lang.Exception -> L6a
            r4.append(r3)     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L6a
            r1.append(r3)     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = "\"ad_num\":"
            r1.append(r3)     // Catch: java.lang.Exception -> L6a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6a
            r3.<init>()     // Catch: java.lang.Exception -> L6a
            int r2 = r2.getAdNum()     // Catch: java.lang.Exception -> L6a
            r3.append(r2)     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = "},"
            r3.append(r2)     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L6a
            r1.append(r2)     // Catch: java.lang.Exception -> L6a
            goto L13
        L5a:
            java.lang.String r6 = "{$native_info}"
            r2 = 0
            int r3 = r1.lastIndexOf(r3)     // Catch: java.lang.Exception -> L6a
            java.lang.CharSequence r1 = r1.subSequence(r2, r3)     // Catch: java.lang.Exception -> L6a
            java.lang.String r6 = r0.replace(r6, r1)     // Catch: java.lang.Exception -> L6a
            return r6
        L6a:
            r6 = 0
            return r6
    }

    private boolean loadMB() {
            r4 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            if (r0 == 0) goto L54
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            java.lang.String r1 = "unit_id"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L54
            java.util.List<com.mbridge.msdk.out.NativeListener$Template> r0 = r4.templateList
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            if (r0 <= 0) goto L2b
            java.lang.String r0 = r4.buildTemplateString()     // Catch: java.lang.Exception -> L24
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.properties     // Catch: java.lang.Exception -> L24
            java.lang.String r2 = "native_info"
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L24
            goto L2b
        L24:
            java.lang.String r0 = "com.mbridge.msdk"
            java.lang.String r1 = "MBSDK set template error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1)
        L2b:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = "handler_controller"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider     // Catch: java.lang.Exception -> L4f
            if (r0 != 0) goto L49
            com.mbridge.msdk.mbnative.e.a r0 = new com.mbridge.msdk.mbnative.e.a     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.mbnative.c.a r1 = r4.adListener     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.trackingListener     // Catch: java.lang.Exception -> L4f
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L4f
            r4.nativeProvider = r0     // Catch: java.lang.Exception -> L4f
            android.content.Context r1 = r4.context     // Catch: java.lang.Exception -> L4f
            r2 = 0
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.properties     // Catch: java.lang.Exception -> L4f
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L4f
        L49:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider     // Catch: java.lang.Exception -> L4f
            r0.a()     // Catch: java.lang.Exception -> L4f
            goto L5b
        L4f:
            r0 = move-exception
            r0.printStackTrace()
            goto L5b
        L54:
            java.lang.String r0 = ""
            java.lang.String r1 = "no unit id."
            com.mbridge.msdk.foundation.tools.z.c(r0, r1)
        L5b:
            r0 = 1
            return r0
    }

    private boolean loadMBFrame() {
            r4 = this;
            java.util.List<com.mbridge.msdk.out.NativeListener$Template> r0 = r4.templateList
            if (r0 == 0) goto L1d
            int r0 = r0.size()
            if (r0 <= 0) goto L1d
            java.lang.String r0 = r4.buildTemplateString()     // Catch: java.lang.Exception -> L16
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.properties     // Catch: java.lang.Exception -> L16
            java.lang.String r2 = "native_info"
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L16
            goto L1d
        L16:
            java.lang.String r0 = "com.mbridge.msdk"
            java.lang.String r1 = "MBSDK set template error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1)
        L1d:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = "handler_controller"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L41
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider     // Catch: java.lang.Exception -> L41
            if (r0 != 0) goto L3b
            com.mbridge.msdk.mbnative.e.a r0 = new com.mbridge.msdk.mbnative.e.a     // Catch: java.lang.Exception -> L41
            com.mbridge.msdk.mbnative.c.a r1 = r4.adListener     // Catch: java.lang.Exception -> L41
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.trackingListener     // Catch: java.lang.Exception -> L41
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L41
            r4.nativeProvider = r0     // Catch: java.lang.Exception -> L41
            android.content.Context r1 = r4.context     // Catch: java.lang.Exception -> L41
            r2 = 0
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.properties     // Catch: java.lang.Exception -> L41
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L41
        L3b:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider     // Catch: java.lang.Exception -> L41
            r0.b()     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r0 = move-exception
            r0.printStackTrace()
        L45:
            r0 = 1
            return r0
    }

    public static java.lang.String parseKeyWordInfoListStr(java.util.List<com.mbridge.msdk.out.MBNativeHandler.KeyWordInfo> r7) {
            if (r7 == 0) goto L83
            int r0 = r7.size()
            if (r0 <= 0) goto L83
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L76
            r0.<init>()     // Catch: java.lang.Exception -> L76
            r1 = 0
            r2 = r1
        Lf:
            int r3 = r7.size()     // Catch: java.lang.Exception -> L76
            if (r2 >= r3) goto L71
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L76
            r3.<init>()     // Catch: java.lang.Exception -> L76
            java.lang.Object r4 = r7.get(r2)     // Catch: java.lang.Exception -> L76
            com.mbridge.msdk.out.MBNativeHandler$KeyWordInfo r4 = (com.mbridge.msdk.out.MBNativeHandler.KeyWordInfo) r4     // Catch: java.lang.Exception -> L76
            java.lang.String r5 = r4.getKeyWordPN()     // Catch: java.lang.Exception -> L76
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L76
            if (r5 != 0) goto L6e
            java.lang.String r5 = r4.getKeyWorkVN()     // Catch: java.lang.Exception -> L76
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L76
            if (r5 != 0) goto L6e
            java.lang.String r5 = "p"
            java.lang.String r6 = r4.getKeyWordPN()     // Catch: java.lang.Exception -> L76
            r3.put(r5, r6)     // Catch: java.lang.Exception -> L76
            java.lang.String r5 = "v"
            java.lang.String r6 = r4.getKeyWorkVN()     // Catch: java.lang.Exception -> L76
            r3.put(r5, r6)     // Catch: java.lang.Exception -> L76
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L76
            if (r5 == 0) goto L6b
            java.util.List r5 = r5.a(r1)     // Catch: java.lang.Exception -> L76
            java.lang.String r6 = "i"
            if (r5 == 0) goto L67
            java.lang.String r4 = r4.getKeyWordPN()     // Catch: java.lang.Exception -> L76
            boolean r4 = r5.contains(r4)     // Catch: java.lang.Exception -> L76
            if (r4 == 0) goto L63
            r4 = 1
            r3.put(r6, r4)     // Catch: java.lang.Exception -> L76
            goto L6b
        L63:
            r3.put(r6, r1)     // Catch: java.lang.Exception -> L76
            goto L6b
        L67:
            r4 = 2
            r3.put(r6, r4)     // Catch: java.lang.Exception -> L76
        L6b:
            r0.put(r3)     // Catch: java.lang.Exception -> L76
        L6e:
            int r2 = r2 + 1
            goto Lf
        L71:
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L76
            return r7
        L76:
            r7 = move-exception
            r7.printStackTrace()
            java.lang.String r0 = com.mbridge.msdk.out.MBNativeHandler.TAG
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
        L83:
            r7 = 0
            return r7
    }

    public void addTemplate(com.mbridge.msdk.out.NativeListener.Template r2) {
            r1 = this;
            if (r2 == 0) goto L12
            java.util.List<com.mbridge.msdk.out.NativeListener$Template> r0 = r1.templateList
            if (r0 != 0) goto Ld
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.templateList = r0
        Ld:
            java.util.List<com.mbridge.msdk.out.NativeListener$Template> r0 = r1.templateList
            r0.add(r2)
        L12:
            return
    }

    public java.lang.String buildTemplateString() {
            r7 = this;
            java.util.List<com.mbridge.msdk.out.NativeListener$Template> r0 = r7.templateList     // Catch: java.lang.Exception -> L70
            if (r0 == 0) goto L70
            java.util.List<com.mbridge.msdk.out.NativeListener$Template> r0 = r7.templateList     // Catch: java.lang.Exception -> L70
            int r0 = r0.size()     // Catch: java.lang.Exception -> L70
            if (r0 <= 0) goto L70
            java.lang.String r0 = "[{$native_info}]"
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L70
            r1.<init>()     // Catch: java.lang.Exception -> L70
            java.util.List<com.mbridge.msdk.out.NativeListener$Template> r2 = r7.templateList     // Catch: java.lang.Exception -> L70
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L70
        L19:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = ","
            if (r3 == 0) goto L60
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.out.NativeListener$Template r3 = (com.mbridge.msdk.out.NativeListener.Template) r3     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = "{\"id\":"
            r1.append(r5)     // Catch: java.lang.Exception -> L70
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L70
            r5.<init>()     // Catch: java.lang.Exception -> L70
            int r6 = r3.getId()     // Catch: java.lang.Exception -> L70
            r5.append(r6)     // Catch: java.lang.Exception -> L70
            r5.append(r4)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Exception -> L70
            r1.append(r4)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = "\"ad_num\":"
            r1.append(r4)     // Catch: java.lang.Exception -> L70
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L70
            r4.<init>()     // Catch: java.lang.Exception -> L70
            int r3 = r3.getAdNum()     // Catch: java.lang.Exception -> L70
            r4.append(r3)     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = "},"
            r4.append(r3)     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L70
            r1.append(r3)     // Catch: java.lang.Exception -> L70
            goto L19
        L60:
            java.lang.String r2 = "{$native_info}"
            r3 = 0
            int r4 = r1.lastIndexOf(r4)     // Catch: java.lang.Exception -> L70
            java.lang.CharSequence r1 = r1.subSequence(r3, r4)     // Catch: java.lang.Exception -> L70
            java.lang.String r0 = r0.replace(r2, r1)     // Catch: java.lang.Exception -> L70
            return r0
        L70:
            r0 = 0
            return r0
    }

    public void clearCacheByUnitid(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.a(r2)     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L7
            return
        L7:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L33
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)     // Catch: java.lang.Exception -> L33
            r0.c(r2)     // Catch: java.lang.Exception -> L33
            r0 = 3
            com.mbridge.msdk.mbnative.a.b r0 = com.mbridge.msdk.mbnative.a.f.a(r0)     // Catch: java.lang.Exception -> L33
            r0.a(r2)     // Catch: java.lang.Exception -> L33
            r0 = 6
            com.mbridge.msdk.mbnative.a.b r0 = com.mbridge.msdk.mbnative.a.f.a(r0)     // Catch: java.lang.Exception -> L33
            r0.a(r2)     // Catch: java.lang.Exception -> L33
            r0 = 7
            com.mbridge.msdk.mbnative.a.b r0 = com.mbridge.msdk.mbnative.a.f.a(r0)     // Catch: java.lang.Exception -> L33
            r0.a(r2)     // Catch: java.lang.Exception -> L33
            goto L37
        L33:
            r2 = move-exception
            r2.printStackTrace()
        L37:
            return
    }

    public void clearVideoCache() {
            r1 = this;
            com.mbridge.msdk.mbnative.e.a r0 = r1.nativeProvider     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto Le
            com.mbridge.msdk.mbnative.e.a r0 = r1.nativeProvider     // Catch: java.lang.Exception -> La
            r0.c()     // Catch: java.lang.Exception -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    public void dismissConfirmDialog() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
            r0.c()
            return
    }

    public com.mbridge.msdk.mbnative.c.a getAdListener() {
            r1 = this;
            com.mbridge.msdk.mbnative.c.a r0 = r1.adListener
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            com.mbridge.msdk.mbnative.e.a r0 = r1.nativeProvider
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.e()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public com.mbridge.msdk.out.NativeListener.NativeTrackingListener getTrackingListener() {
            r1 = this;
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r1.trackingListener
            return r0
    }

    public void handleResult(com.mbridge.msdk.out.Campaign r4, java.lang.String r5) {
            r3 = this;
            com.mbridge.msdk.click.b r0 = r3.clickControler
            if (r0 != 0) goto L1a
            r0 = 0
            java.util.Map<java.lang.String, java.lang.Object> r1 = r3.map
            if (r1 == 0) goto L11
            java.lang.String r0 = "unit_id"
            java.lang.Object r0 = r1.get(r0)
            java.lang.String r0 = (java.lang.String) r0
        L11:
            com.mbridge.msdk.click.b r1 = new com.mbridge.msdk.click.b
            android.content.Context r2 = r3.context
            r1.<init>(r2, r0)
            r3.clickControler = r1
        L1a:
            com.mbridge.msdk.click.b r0 = r3.clickControler
            r0.a(r4, r5)
            return
    }

    @Override
    public boolean load() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.properties
            if (r0 == 0) goto L12
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.properties
            java.lang.String r1 = "unit_id"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L12
            r2.loadMB()
            goto L19
        L12:
            java.lang.String r0 = ""
            java.lang.String r1 = "no unit id."
            com.mbridge.msdk.foundation.tools.z.c(r0, r1)
        L19:
            r0 = 1
            return r0
    }

    public boolean loadFrame() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.properties
            if (r0 == 0) goto L12
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.properties
            java.lang.String r1 = "unit_id"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L12
            r2.loadMBFrame()
            goto L19
        L12:
            java.lang.String r0 = ""
            java.lang.String r1 = "no unit id."
            com.mbridge.msdk.foundation.tools.z.c(r0, r1)
        L19:
            r0 = 1
            return r0
    }

    public void registerView(android.view.View r5, com.mbridge.msdk.out.Campaign r6) {
            r4 = this;
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            if (r0 != 0) goto L24
            com.mbridge.msdk.mbnative.e.a r0 = new com.mbridge.msdk.mbnative.e.a
            com.mbridge.msdk.mbnative.c.a r1 = r4.adListener
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.trackingListener
            r0.<init>(r1, r2)
            r4.nativeProvider = r0
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            java.lang.String r1 = "handler_controller"
            r0.put(r1, r4)
        L1a:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            android.content.Context r1 = r4.context
            r2 = 0
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.properties
            r0.a(r1, r2, r3)
        L24:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            r0.a(r5, r6)
            return
    }

    public void registerView(android.view.View r5, java.util.List<android.view.View> r6, com.mbridge.msdk.out.Campaign r7) {
            r4 = this;
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            if (r0 != 0) goto L24
            com.mbridge.msdk.mbnative.e.a r0 = new com.mbridge.msdk.mbnative.e.a
            com.mbridge.msdk.mbnative.c.a r1 = r4.adListener
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.trackingListener
            r0.<init>(r1, r2)
            r4.nativeProvider = r0
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            java.lang.String r1 = "handler_controller"
            r0.put(r1, r4)
        L1a:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            android.content.Context r1 = r4.context
            r2 = 0
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.properties
            r0.a(r1, r2, r3)
        L24:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            r0.a(r5, r6, r7)
            return
    }

    @Override
    public void release() {
            r1 = this;
            com.mbridge.msdk.mbnative.e.a r0 = r1.nativeProvider
            if (r0 == 0) goto L7
            r0.d()
        L7:
            r0 = 0
            r1.trackingListener = r0
            return
    }

    public void setAdListener(com.mbridge.msdk.out.NativeListener.NativeAdListener r2) {
            r1 = this;
            com.mbridge.msdk.mbnative.c.a r0 = new com.mbridge.msdk.mbnative.c.a
            r0.<init>(r2)
            r1.adListener = r0
            if (r0 == 0) goto Le
            java.lang.String r2 = com.mbridge.msdk.out.MBNativeHandler.mUnitID
            r0.a(r2)
        Le:
            com.mbridge.msdk.mbnative.e.a r2 = r1.nativeProvider
            if (r2 == 0) goto L17
            com.mbridge.msdk.mbnative.c.a r0 = r1.adListener
            r2.a(r0)
        L17:
            return
    }

    public void setMustBrowser(boolean r1) {
            r0 = this;
            com.mbridge.msdk.foundation.tools.ad.b = r1
            return
    }

    public void setTrackingListener(com.mbridge.msdk.out.NativeListener.NativeTrackingListener r2) {
            r1 = this;
            r1.trackingListener = r2
            com.mbridge.msdk.mbnative.e.a r0 = r1.nativeProvider
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public void unregisterView(android.view.View r5, com.mbridge.msdk.out.Campaign r6) {
            r4 = this;
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            if (r0 != 0) goto L24
            com.mbridge.msdk.mbnative.e.a r0 = new com.mbridge.msdk.mbnative.e.a
            com.mbridge.msdk.mbnative.c.a r1 = r4.adListener
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.trackingListener
            r0.<init>(r1, r2)
            r4.nativeProvider = r0
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            java.lang.String r1 = "handler_controller"
            r0.put(r1, r4)
        L1a:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            android.content.Context r1 = r4.context
            r2 = 0
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.properties
            r0.a(r1, r2, r3)
        L24:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            r0.b(r5, r6)
            return
    }

    public void unregisterView(android.view.View r5, java.util.List<android.view.View> r6, com.mbridge.msdk.out.Campaign r7) {
            r4 = this;
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            if (r0 != 0) goto L24
            com.mbridge.msdk.mbnative.e.a r0 = new com.mbridge.msdk.mbnative.e.a
            com.mbridge.msdk.mbnative.c.a r1 = r4.adListener
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.trackingListener
            r0.<init>(r1, r2)
            r4.nativeProvider = r0
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.properties
            java.lang.String r1 = "handler_controller"
            r0.put(r1, r4)
        L1a:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            android.content.Context r1 = r4.context
            r2 = 0
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.properties
            r0.a(r1, r2, r3)
        L24:
            com.mbridge.msdk.mbnative.e.a r0 = r4.nativeProvider
            r0.b(r5, r6, r7)
            return
    }
}

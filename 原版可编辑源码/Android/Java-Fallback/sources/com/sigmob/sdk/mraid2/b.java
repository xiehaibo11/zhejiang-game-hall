package com.sigmob.sdk.mraid2;

public class b {
    private static java.lang.String a = "Mraid2Bridge";
    private static com.sigmob.sdk.mraid2.j e;
    private java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> b;
    private com.sigmob.sdk.mraid2.b.b c;
    private com.sigmob.sdk.mraid2.e d;
    private java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> f;





    static class a {
        private final java.lang.ref.WeakReference<com.sigmob.sdk.mraid2.b> a;




        public a(com.sigmob.sdk.mraid2.b r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        public com.sigmob.sdk.mraid2.b a() {
                r1 = this;
                java.lang.ref.WeakReference<com.sigmob.sdk.mraid2.b> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.sigmob.sdk.mraid2.b r0 = (com.sigmob.sdk.mraid2.b) r0
                return r0
        }

        @android.webkit.JavascriptInterface
        public java.lang.String addDclog(org.json.JSONObject r6) {
                r5 = this;
                java.lang.String r0 = "_ac_type"
                r1 = 0
                if (r6 != 0) goto Le
                r6 = 400(0x190, float:5.6E-43)
                java.lang.String r0 = "not params"
                java.lang.String r6 = com.sigmob.sdk.mraid2.b.a(r6, r0, r1)     // Catch: java.lang.Throwable -> L74
                return r6
            Le:
                java.lang.String r2 = com.sigmob.sdk.mraid2.b.g()     // Catch: java.lang.Throwable -> L74
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
                r3.<init>()     // Catch: java.lang.Throwable -> L74
                java.lang.String r4 = "----------addDclog----------"
                r3.append(r4)     // Catch: java.lang.Throwable -> L74
                r3.append(r6)     // Catch: java.lang.Throwable -> L74
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L74
                android.util.Log.d(r2, r3)     // Catch: java.lang.Throwable -> L74
                java.lang.String r2 = "data"
                org.json.JSONObject r2 = r6.optJSONObject(r2)     // Catch: java.lang.Throwable -> L74
                if (r2 == 0) goto L6b
                boolean r3 = r2.has(r0)     // Catch: java.lang.Throwable -> L74
                if (r3 == 0) goto L6b
                java.lang.String r0 = r2.optString(r0)     // Catch: java.lang.Throwable -> L74
                java.lang.String r3 = "vid"
                java.lang.String r6 = r6.optString(r3)     // Catch: java.lang.Throwable -> L74
                com.sigmob.sdk.mraid2.b r3 = r5.a()     // Catch: java.lang.Throwable -> L74
                if (r3 == 0) goto L4d
                com.sigmob.sdk.mraid2.b r3 = r5.a()     // Catch: java.lang.Throwable -> L74
                com.sigmob.sdk.base.models.BaseAdUnit r6 = r3.b(r6)     // Catch: java.lang.Throwable -> L74
                goto L4e
            L4d:
                r6 = r1
            L4e:
                if (r6 != 0) goto L59
                com.sigmob.sdk.mraid2.b r3 = r5.a()     // Catch: java.lang.Throwable -> L74
                com.sigmob.sdk.base.models.LoadAdRequest r3 = com.sigmob.sdk.mraid2.b.c(r3)     // Catch: java.lang.Throwable -> L74
                goto L5a
            L59:
                r3 = r1
            L5a:
                com.sigmob.sdk.mraid2.b$a$1 r4 = new com.sigmob.sdk.mraid2.b$a$1     // Catch: java.lang.Throwable -> L74
                r4.<init>(r5, r2)     // Catch: java.lang.Throwable -> L74
                com.sigmob.sdk.base.common.z.a(r0, r6, r3, r4)     // Catch: java.lang.Throwable -> L74
                r6 = 200(0xc8, float:2.8E-43)
                java.lang.String r0 = "add dc log success"
                java.lang.String r6 = com.sigmob.sdk.mraid2.b.a(r6, r0, r1)
                return r6
            L6b:
                r6 = 300(0x12c, float:4.2E-43)
                java.lang.String r0 = "_ac_type is empty"
                java.lang.String r6 = com.sigmob.sdk.mraid2.b.a(r6, r0, r1)     // Catch: java.lang.Throwable -> L74
                return r6
            L74:
                r6 = move-exception
                r0 = 500(0x1f4, float:7.0E-43)
                java.lang.String r6 = r6.toString()
                java.lang.String r6 = com.sigmob.sdk.mraid2.b.a(r0, r6, r1)
                return r6
        }

        @android.webkit.JavascriptInterface
        public java.lang.String func(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "func"
                r1 = 0
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3c
                r2.<init>(r5)     // Catch: java.lang.Throwable -> L3c
                boolean r5 = r2.has(r0)     // Catch: java.lang.Throwable -> L3c
                if (r5 == 0) goto L13
                java.lang.String r5 = r2.getString(r0)     // Catch: java.lang.Throwable -> L3c
                goto L14
            L13:
                r5 = r1
            L14:
                boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3c
                if (r0 != 0) goto L33
                java.lang.String r0 = ":"
                java.lang.String r3 = ""
                java.lang.String r5 = r5.replace(r0, r3)     // Catch: java.lang.Throwable -> L3c
                com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r0 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Throwable -> L3c
                r0.<init>(r4, r5)     // Catch: java.lang.Throwable -> L3c
                java.lang.Class<org.json.JSONObject> r5 = org.json.JSONObject.class
                r0.addParam(r5, r2)     // Catch: java.lang.Throwable -> L3c
                java.lang.Object r5 = r0.execute()     // Catch: java.lang.Throwable -> L3c
                java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L3c
                return r5
            L33:
                r5 = 400(0x190, float:5.6E-43)
                java.lang.String r0 = "func is empty"
                java.lang.String r5 = com.sigmob.sdk.mraid2.b.a(r5, r0, r1)     // Catch: java.lang.Throwable -> L3c
                return r5
            L3c:
                r5 = move-exception
                r0 = 500(0x1f4, float:7.0E-43)
                java.lang.String r5 = r5.getMessage()
                java.lang.String r5 = com.sigmob.sdk.mraid2.b.a(r0, r5, r1)
                return r5
        }

        @android.webkit.JavascriptInterface
        public java.lang.String getDeviceInfo() {
                r4 = this;
                java.lang.String r0 = com.sigmob.sdk.mraid2.b.g()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "---------getDeviceInfo----------"
                android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> Ld4
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld4
                r0.<init>()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "clientType"
                java.lang.String r2 = com.czhj.sdk.common.ClientMetadata.getDeviceModel()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "osVersion"
                java.lang.String r2 = com.czhj.sdk.common.ClientMetadata.getDeviceOsVersion()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "appVersion"
                com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = r2.getAppVersion()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "deviceWidth"
                com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> Ld4
                int r2 = r2.widthPixels     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "deviceHeight"
                com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> Ld4
                int r2 = r2.heightPixels     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "screenDensity"
                com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                int r2 = r2.getDensityDpi()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "networkType"
                com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                int r2 = r2.getActiveNetworkType()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "pkgName"
                com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = r2.getAppPackageName()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "userAgent"
                java.lang.String r2 = com.czhj.sdk.common.network.Networking.getUserAgent()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "uid"
                java.lang.String r2 = com.czhj.sdk.common.ClientMetadata.getUid()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r1 = "udid"
                com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = r2.getAndroidId()     // Catch: java.lang.Throwable -> Ld4
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> Ld4
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld4
                r1.<init>()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = "imei"
                com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r3 = r3.getDeviceId()     // Catch: java.lang.Throwable -> Ld4
                r1.put(r2, r3)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = "androidId"
                com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r3 = r3.getAndroidId()     // Catch: java.lang.Throwable -> Ld4
                r1.put(r2, r3)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = "googleId"
                com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r3 = r3.getAdvertisingId()     // Catch: java.lang.Throwable -> Ld4
                r1.put(r2, r3)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = "oaid"
                com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r3 = r3.getOAID()     // Catch: java.lang.Throwable -> Ld4
                r1.put(r2, r3)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r2 = "android"
                r0.put(r2, r1)     // Catch: java.lang.Throwable -> Ld4
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Ld4
                return r0
            Ld4:
                r0 = move-exception
                r0.printStackTrace()
                r0 = 0
                return r0
        }

        @android.webkit.JavascriptInterface
        public java.lang.String handleMacro(org.json.JSONObject r10) {
                r9 = this;
                r0 = 0
                if (r10 != 0) goto L4
                return r0
            L4:
                java.lang.String r1 = com.sigmob.sdk.mraid2.b.g()     // Catch: java.lang.Exception -> Lf4
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
                r2.<init>()     // Catch: java.lang.Exception -> Lf4
                java.lang.String r3 = "-----------handleMacro---------"
                r2.append(r3)     // Catch: java.lang.Exception -> Lf4
                r2.append(r10)     // Catch: java.lang.Exception -> Lf4
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lf4
                android.util.Log.d(r1, r2)     // Catch: java.lang.Exception -> Lf4
                java.lang.String r1 = "event"
                java.lang.String r1 = r10.optString(r1)     // Catch: java.lang.Exception -> Lf4
                java.lang.String r2 = "args"
                org.json.JSONObject r10 = r10.optJSONObject(r2)     // Catch: java.lang.Exception -> Lf4
                java.lang.String r2 = "key"
                java.lang.String r2 = r10.optString(r2)     // Catch: java.lang.Exception -> Lf4
                java.lang.String r3 = "value"
                java.lang.String r3 = r10.optString(r3)     // Catch: java.lang.Exception -> Lf4
                java.lang.String r4 = "vid"
                java.lang.String r10 = r10.optString(r4)     // Catch: java.lang.Exception -> Lf4
                com.sigmob.sdk.mraid2.b r4 = r9.a()     // Catch: java.lang.Exception -> Lf4
                if (r4 == 0) goto L49
                com.sigmob.sdk.mraid2.b r4 = r9.a()     // Catch: java.lang.Exception -> Lf4
                com.sigmob.sdk.base.models.BaseAdUnit r10 = r4.b(r10)     // Catch: java.lang.Exception -> Lf4
                goto L4a
            L49:
                r10 = r0
            L4a:
                r4 = -1
                int r5 = r1.hashCode()     // Catch: java.lang.Exception -> Lf4
                r6 = 3
                r7 = 2
                r8 = 1
                switch(r5) {
                    case -1253019733: goto L74;
                    case -750002817: goto L6a;
                    case -310745688: goto L60;
                    case 1959477782: goto L56;
                    default: goto L55;
                }     // Catch: java.lang.Exception -> Lf4
            L55:
                goto L7d
            L56:
                java.lang.String r5 = "getMacro"
                boolean r1 = r1.equals(r5)     // Catch: java.lang.Exception -> Lf4
                if (r1 == 0) goto L7d
                r4 = r8
                goto L7d
            L60:
                java.lang.String r5 = "removeMacro"
                boolean r1 = r1.equals(r5)     // Catch: java.lang.Exception -> Lf4
                if (r1 == 0) goto L7d
                r4 = r7
                goto L7d
            L6a:
                java.lang.String r5 = "clearMacro"
                boolean r1 = r1.equals(r5)     // Catch: java.lang.Exception -> Lf4
                if (r1 == 0) goto L7d
                r4 = r6
                goto L7d
            L74:
                java.lang.String r5 = "addMacro"
                boolean r1 = r1.equals(r5)     // Catch: java.lang.Exception -> Lf4
                if (r1 == 0) goto L7d
                r4 = 0
            L7d:
                if (r4 == 0) goto Ld3
                if (r4 == r8) goto Lb4
                if (r4 == r7) goto L9a
                if (r4 == r6) goto L87
                goto Lf8
            L87:
                if (r10 == 0) goto L91
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
            L8d:
                r10.clearMacro()     // Catch: java.lang.Exception -> Lf4
                goto Lf8
            L91:
                com.sigmob.sdk.Sigmob r10 = com.sigmob.sdk.Sigmob.getInstance()     // Catch: java.lang.Exception -> Lf4
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
                goto L8d
            L9a:
                boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf4
                if (r1 == 0) goto La1
                return r0
            La1:
                if (r10 == 0) goto Lab
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
            La7:
                r10.removeMarcoKey(r2)     // Catch: java.lang.Exception -> Lf4
                goto Lf8
            Lab:
                com.sigmob.sdk.Sigmob r10 = com.sigmob.sdk.Sigmob.getInstance()     // Catch: java.lang.Exception -> Lf4
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
                goto La7
            Lb4:
                boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf4
                if (r1 == 0) goto Lbb
                return r0
            Lbb:
                if (r10 == 0) goto Lc6
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
                java.lang.String r10 = r10.getMarcoKey(r2)     // Catch: java.lang.Exception -> Lf4
                return r10
            Lc6:
                com.sigmob.sdk.Sigmob r10 = com.sigmob.sdk.Sigmob.getInstance()     // Catch: java.lang.Exception -> Lf4
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
                java.lang.String r10 = r10.getMarcoKey(r2)     // Catch: java.lang.Exception -> Lf4
                return r10
            Ld3:
                boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf4
                if (r1 != 0) goto Lf3
                boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lf4
                if (r1 == 0) goto Le0
                goto Lf3
            Le0:
                if (r10 == 0) goto Lea
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
            Le6:
                r10.addMarcoKey(r2, r3)     // Catch: java.lang.Exception -> Lf4
                goto Lf8
            Lea:
                com.sigmob.sdk.Sigmob r10 = com.sigmob.sdk.Sigmob.getInstance()     // Catch: java.lang.Exception -> Lf4
                com.sigmob.sdk.base.models.SigMacroCommon r10 = r10.getMacroCommon()     // Catch: java.lang.Exception -> Lf4
                goto Le6
            Lf3:
                return r0
            Lf4:
                r10 = move-exception
                r10.printStackTrace()
            Lf8:
                return r0
        }

        @android.webkit.JavascriptInterface
        public void postMessage(java.lang.String r4) {
                r3 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r4)
                if (r0 == 0) goto L7
                return
            L7:
                java.lang.String r0 = com.sigmob.sdk.mraid2.b.g()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "-----------postMessage---------"
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                android.util.Log.d(r0, r1)
                com.sigmob.sdk.mraid2.b r0 = r3.a()
                if (r0 == 0) goto L37
                com.sigmob.sdk.mraid2.e r1 = com.sigmob.sdk.mraid2.b.a(r0)
                if (r1 == 0) goto L37
                com.sigmob.sdk.mraid2.e r1 = com.sigmob.sdk.mraid2.b.a(r0)
                com.sigmob.sdk.mraid2.b$a$3 r2 = new com.sigmob.sdk.mraid2.b$a$3
                r2.<init>(r3, r0, r4)
                r1.post(r2)
            L37:
                return
        }

        @android.webkit.JavascriptInterface
        public java.lang.String storage(java.lang.String r12) {
                r11 = this;
                r0 = 0
                boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> Lf2
                if (r1 == 0) goto L8
                return r0
            L8:
                java.lang.String r1 = com.sigmob.sdk.mraid2.b.g()     // Catch: java.lang.Exception -> Lf2
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf2
                r2.<init>()     // Catch: java.lang.Exception -> Lf2
                java.lang.String r3 = "-----------storage---------"
                r2.append(r3)     // Catch: java.lang.Exception -> Lf2
                r2.append(r12)     // Catch: java.lang.Exception -> Lf2
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lf2
                android.util.Log.d(r1, r2)     // Catch: java.lang.Exception -> Lf2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lf2
                r1.<init>(r12)     // Catch: java.lang.Exception -> Lf2
                java.lang.String r12 = "event"
                java.lang.String r12 = r1.optString(r12)     // Catch: java.lang.Exception -> Lf2
                java.lang.String r2 = "args"
                org.json.JSONObject r1 = r1.optJSONObject(r2)     // Catch: java.lang.Exception -> Lf2
                java.lang.String r2 = "type"
                int r2 = r1.optInt(r2)     // Catch: java.lang.Exception -> Lf2
                java.lang.String r3 = "key"
                java.lang.String r3 = r1.optString(r3)     // Catch: java.lang.Exception -> Lf2
                java.lang.String r4 = "value"
                java.lang.String r1 = r1.optString(r4)     // Catch: java.lang.Exception -> Lf2
                r4 = 2
                r5 = 1
                if (r2 == r5) goto L49
                if (r2 != r4) goto Lf6
            L49:
                com.sigmob.sdk.mraid2.j r6 = com.sigmob.sdk.mraid2.b.h()     // Catch: java.lang.Exception -> Lf2
                if (r6 != 0) goto L63
                com.sigmob.sdk.mraid2.j r6 = new com.sigmob.sdk.mraid2.j     // Catch: java.lang.Exception -> Lf2
                com.sigmob.sdk.mraid2.b r7 = r11.a()     // Catch: java.lang.Exception -> Lf2
                com.sigmob.sdk.mraid2.e r7 = com.sigmob.sdk.mraid2.b.a(r7)     // Catch: java.lang.Exception -> Lf2
                android.content.Context r7 = r7.getContext()     // Catch: java.lang.Exception -> Lf2
                r6.<init>(r7)     // Catch: java.lang.Exception -> Lf2
                com.sigmob.sdk.mraid2.b.a(r6)     // Catch: java.lang.Exception -> Lf2
            L63:
                r6 = -1
                int r7 = r12.hashCode()     // Catch: java.lang.Exception -> Lf2
                r8 = 5
                r9 = 4
                r10 = 3
                switch(r7) {
                    case -1106363674: goto La1;
                    case -625809843: goto L97;
                    case -75439223: goto L8d;
                    case 94746189: goto L83;
                    case 1098253751: goto L79;
                    case 1984670357: goto L6f;
                    default: goto L6e;
                }     // Catch: java.lang.Exception -> Lf2
            L6e:
                goto Laa
            L6f:
                java.lang.String r7 = "setItem"
                boolean r12 = r12.equals(r7)     // Catch: java.lang.Exception -> Lf2
                if (r12 == 0) goto Laa
                r6 = 0
                goto Laa
            L79:
                java.lang.String r7 = "removeItem"
                boolean r12 = r12.equals(r7)     // Catch: java.lang.Exception -> Lf2
                if (r12 == 0) goto Laa
                r6 = r4
                goto Laa
            L83:
                java.lang.String r7 = "clear"
                boolean r12 = r12.equals(r7)     // Catch: java.lang.Exception -> Lf2
                if (r12 == 0) goto Laa
                r6 = r10
                goto Laa
            L8d:
                java.lang.String r7 = "getItem"
                boolean r12 = r12.equals(r7)     // Catch: java.lang.Exception -> Lf2
                if (r12 == 0) goto Laa
                r6 = r5
                goto Laa
            L97:
                java.lang.String r7 = "addEventListener"
                boolean r12 = r12.equals(r7)     // Catch: java.lang.Exception -> Lf2
                if (r12 == 0) goto Laa
                r6 = r8
                goto Laa
            La1:
                java.lang.String r7 = "length"
                boolean r12 = r12.equals(r7)     // Catch: java.lang.Exception -> Lf2
                if (r12 == 0) goto Laa
                r6 = r9
            Laa:
                if (r6 == 0) goto Lea
                if (r6 == r5) goto Le1
                if (r6 == r4) goto Ld9
                if (r6 == r10) goto Ld1
                if (r6 == r9) goto Lc4
                if (r6 == r8) goto Lb7
                goto Lf6
            Lb7:
                com.sigmob.sdk.mraid2.j r12 = com.sigmob.sdk.mraid2.b.h()     // Catch: java.lang.Exception -> Lf2
                com.sigmob.sdk.mraid2.b$a$2 r1 = new com.sigmob.sdk.mraid2.b$a$2     // Catch: java.lang.Exception -> Lf2
                r1.<init>(r11)     // Catch: java.lang.Exception -> Lf2
                r12.a(r2, r3, r1)     // Catch: java.lang.Exception -> Lf2
                goto Lf6
            Lc4:
                com.sigmob.sdk.mraid2.j r12 = com.sigmob.sdk.mraid2.b.h()     // Catch: java.lang.Exception -> Lf2
                int r12 = r12.b(r2)     // Catch: java.lang.Exception -> Lf2
                java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Exception -> Lf2
                return r12
            Ld1:
                com.sigmob.sdk.mraid2.j r12 = com.sigmob.sdk.mraid2.b.h()     // Catch: java.lang.Exception -> Lf2
                r12.a(r2)     // Catch: java.lang.Exception -> Lf2
                goto Lf6
            Ld9:
                com.sigmob.sdk.mraid2.j r12 = com.sigmob.sdk.mraid2.b.h()     // Catch: java.lang.Exception -> Lf2
                r12.b(r2, r3)     // Catch: java.lang.Exception -> Lf2
                goto Lf6
            Le1:
                com.sigmob.sdk.mraid2.j r12 = com.sigmob.sdk.mraid2.b.h()     // Catch: java.lang.Exception -> Lf2
                java.lang.String r12 = r12.a(r2, r3)     // Catch: java.lang.Exception -> Lf2
                return r12
            Lea:
                com.sigmob.sdk.mraid2.j r12 = com.sigmob.sdk.mraid2.b.h()     // Catch: java.lang.Exception -> Lf2
                r12.a(r2, r3, r1)     // Catch: java.lang.Exception -> Lf2
                goto Lf6
            Lf2:
                r12 = move-exception
                r12.printStackTrace()
            Lf6:
                return r0
        }

        @android.webkit.JavascriptInterface
        public java.lang.String tracking(org.json.JSONObject r13) {
                r12 = this;
                r0 = 0
                if (r13 != 0) goto Lc
                r13 = 400(0x190, float:5.6E-43)
                java.lang.String r1 = "not params"
                java.lang.String r13 = com.sigmob.sdk.mraid2.b.a(r13, r1, r0)     // Catch: java.lang.Throwable -> Lac
                return r13
            Lc:
                java.lang.String r1 = com.sigmob.sdk.mraid2.b.g()     // Catch: java.lang.Throwable -> Lac
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
                r2.<init>()     // Catch: java.lang.Throwable -> Lac
                java.lang.String r3 = "---------tracking----------"
                r2.append(r3)     // Catch: java.lang.Throwable -> Lac
                r2.append(r13)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lac
                android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r1 = "event"
                java.lang.String r1 = r13.optString(r1)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r2 = "urls"
                org.json.JSONArray r2 = r13.optJSONArray(r2)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r3 = "data"
                org.json.JSONObject r13 = r13.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r3 = ""
                r4 = 0
                if (r13 == 0) goto L54
                java.lang.String r5 = "inQueue"
                boolean r5 = r13.optBoolean(r5)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r6 = "statistic"
                boolean r6 = r13.optBoolean(r6)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r7 = "retry"
                int r7 = r13.optInt(r7)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r8 = "vid"
                java.lang.String r13 = r13.optString(r8)     // Catch: java.lang.Throwable -> Lac
                goto L58
            L54:
                r13 = r3
                r5 = r4
                r6 = r5
                r7 = r6
            L58:
                com.sigmob.sdk.mraid2.b r8 = r12.a()     // Catch: java.lang.Throwable -> Lac
                if (r8 == 0) goto L67
                com.sigmob.sdk.mraid2.b r8 = r12.a()     // Catch: java.lang.Throwable -> Lac
                com.sigmob.sdk.base.models.BaseAdUnit r13 = r8.b(r13)     // Catch: java.lang.Throwable -> Lac
                goto L68
            L67:
                r13 = r0
            L68:
                if (r2 == 0) goto La3
                int r8 = r2.length()     // Catch: java.lang.Throwable -> Lac
                if (r8 <= 0) goto La3
                r8 = r4
            L71:
                int r9 = r2.length()     // Catch: java.lang.Throwable -> Lac
                if (r8 >= r9) goto L9a
                com.sigmob.sdk.base.common.g r9 = new com.sigmob.sdk.base.common.g     // Catch: java.lang.Throwable -> Lac
                java.lang.String r10 = r2.optString(r8)     // Catch: java.lang.Throwable -> Lac
                if (r13 == 0) goto L84
                java.lang.String r11 = r13.getRequestId()     // Catch: java.lang.Throwable -> Lac
                goto L85
            L84:
                r11 = r3
            L85:
                r9.<init>(r10, r1, r11)     // Catch: java.lang.Throwable -> Lac
                java.lang.Integer r10 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> Lac
                r9.a(r10)     // Catch: java.lang.Throwable -> Lac
                java.lang.String r10 = "js"
                r9.a(r10)     // Catch: java.lang.Throwable -> Lac
                com.sigmob.sdk.base.network.f.a(r9, r13, r4, r5, r6)     // Catch: java.lang.Throwable -> Lac
                int r8 = r8 + 1
                goto L71
            L9a:
                r13 = 200(0xc8, float:2.8E-43)
                java.lang.String r1 = "tracking success"
                java.lang.String r13 = com.sigmob.sdk.mraid2.b.a(r13, r1, r0)     // Catch: java.lang.Throwable -> Lac
                return r13
            La3:
                r13 = 300(0x12c, float:4.2E-43)
                java.lang.String r1 = "urls is empty"
                java.lang.String r13 = com.sigmob.sdk.mraid2.b.a(r13, r1, r0)     // Catch: java.lang.Throwable -> Lac
                return r13
            Lac:
                r13 = move-exception
                r1 = 500(0x1f4, float:7.0E-43)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "unknown error: "
                r2.append(r3)
                java.lang.String r13 = r13.getMessage()
                r2.append(r13)
                java.lang.String r13 = r2.toString()
                java.lang.String r13 = com.sigmob.sdk.mraid2.b.a(r1, r13, r0)
                return r13
        }
    }

    public interface b {
        void a();

        void a(com.sigmob.sdk.base.models.BaseAdUnit r1, org.json.JSONObject r2);

        void a(java.lang.String r1);

        void a(java.lang.String r1, org.json.JSONObject r2);

        void a(org.json.JSONObject r1);

        void b();

        void b(java.lang.String r1, org.json.JSONObject r2);

        void b(org.json.JSONObject r1);

        void c();

        void c(java.lang.String r1, org.json.JSONObject r2);

        void c(org.json.JSONObject r1);

        void d(org.json.JSONObject r1);

        void e(org.json.JSONObject r1);
    }

    public interface c {
        void a(com.sigmob.sdk.mraid2.e r1, int r2, int r3);
    }

    static {
            return
    }

    b(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2) {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.f = r0
            r1.b = r2
            r0.addAll(r2)
            return
    }

    static com.sigmob.sdk.base.models.rtb.BidResponse a(com.sigmob.sdk.mraid2.b r0, java.util.List r1) {
            com.sigmob.sdk.base.models.rtb.BidResponse r0 = r0.a(r1)
            return r0
    }

    private com.sigmob.sdk.base.models.rtb.BidResponse a(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r11) {
            r10 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            r2 = r1
        L7:
            int r3 = r11.size()
            r4 = 2
            r5 = 0
            if (r2 >= r3) goto La0
            java.lang.Object r3 = r11.get(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.Ad r3 = r3.getAd()
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            if (r3 == 0) goto L8d
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r7 = r3.materials
            if (r7 == 0) goto L8d
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r7 = r3.materials
            int r7 = r7.size()
            if (r7 <= 0) goto L8d
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r7 = r3.materials
            java.lang.Object r7 = r7.get(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r7 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r7
            com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder r7 = r7.newBuilder()
            com.sigmob.sdk.base.models.rtb.Template r8 = r7.main_template
            if (r8 == 0) goto L5d
            com.sigmob.sdk.base.models.rtb.Template r8 = r7.main_template
            java.lang.Integer r8 = r8.type
            int r8 = r8.intValue()
            if (r8 != r4) goto L5d
            com.sigmob.sdk.base.models.rtb.Template r8 = r7.main_template
            com.sigmob.sdk.base.models.rtb.Template$Builder r8 = r8.newBuilder()
            com.sigmob.sdk.base.models.rtb.Template$Builder r8 = r8.context(r5)
            com.sigmob.sdk.base.models.rtb.Template r8 = r8.build()
            com.sigmob.sdk.base.models.rtb.Template r9 = r7.main_template
            java.lang.String r9 = r9.templateId
            r8.templateId = r9
            r7.main_template(r8)
        L5d:
            com.sigmob.sdk.base.models.rtb.Template r8 = r7.sub_template
            if (r8 == 0) goto L82
            com.sigmob.sdk.base.models.rtb.Template r8 = r7.sub_template
            java.lang.Integer r8 = r8.type
            int r8 = r8.intValue()
            if (r8 != r4) goto L82
            com.sigmob.sdk.base.models.rtb.Template r4 = r7.sub_template
            com.sigmob.sdk.base.models.rtb.Template$Builder r4 = r4.newBuilder()
            com.sigmob.sdk.base.models.rtb.Template$Builder r4 = r4.context(r5)
            com.sigmob.sdk.base.models.rtb.Template r4 = r4.build()
            com.sigmob.sdk.base.models.rtb.Template r8 = r7.sub_template
            java.lang.String r8 = r8.templateId
            r4.templateId = r8
            r7.sub_template(r4)
        L82:
            com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder r4 = r7.html_snippet(r5)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r4 = r4.build()
            r6.add(r4)
        L8d:
            com.sigmob.sdk.base.models.rtb.Ad$Builder r3 = r3.newBuilder()
            com.sigmob.sdk.base.models.rtb.Ad$Builder r3 = r3.materials(r6)
            com.sigmob.sdk.base.models.rtb.Ad r3 = r3.build()
            r0.add(r3)
            int r2 = r2 + 1
            goto L7
        La0:
            com.sigmob.sdk.base.models.rtb.BidResponse$Builder r2 = new com.sigmob.sdk.base.models.rtb.BidResponse$Builder
            r2.<init>()
            java.lang.Object r3 = r11.get(r1)
            if (r3 == 0) goto L15a
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.scene
            if (r3 == 0) goto Lf9
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.scene
            java.lang.Integer r3 = r3.type
            int r3 = r3.intValue()
            if (r3 != r4) goto Le6
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.scene
            com.sigmob.sdk.base.models.rtb.Template$Builder r3 = r3.newBuilder()
            com.sigmob.sdk.base.models.rtb.Template$Builder r3 = r3.context(r5)
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.build()
            java.lang.Object r4 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r4 = (com.sigmob.sdk.base.models.BaseAdUnit) r4
            com.sigmob.sdk.base.models.rtb.Template r4 = r4.scene
            java.lang.String r4 = r4.templateId
            r3.templateId = r4
            goto Lf6
        Le6:
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.scene
            com.sigmob.sdk.base.models.rtb.Template$Builder r3 = r3.newBuilder()
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.build()
        Lf6:
            r2.scene(r3)
        Lf9:
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r3 = r3.slotAdSetting
            if (r3 == 0) goto L116
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r3 = r3.slotAdSetting
            com.sigmob.sdk.base.models.rtb.SlotAdSetting$Builder r3 = r3.newBuilder()
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r3 = r3.build()
            r2.slot_ad_setting(r3)
        L116:
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.BiddingResponse r3 = r3.bidding_response
            if (r3 == 0) goto L133
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.sdk.base.models.rtb.BiddingResponse r3 = r3.bidding_response
            com.sigmob.sdk.base.models.rtb.BiddingResponse$Builder r3 = r3.newBuilder()
            com.sigmob.sdk.base.models.rtb.BiddingResponse r3 = r3.build()
            r2.bidding_response(r3)
        L133:
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            java.lang.String r3 = r3.getRequestId()
            r2.request_id(r3)
            java.lang.Object r3 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            java.lang.String r3 = r3.uid
            r2.uid(r3)
            java.lang.Object r11 = r11.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r11 = (com.sigmob.sdk.base.models.BaseAdUnit) r11
            int r11 = r11.expiration_time
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r2.expiration_time(r11)
        L15a:
            com.sigmob.sdk.base.models.rtb.BidResponse$Builder r11 = r2.ads(r0)
            com.sigmob.sdk.base.models.rtb.BidResponse r11 = r11.build()
            return r11
    }

    static com.sigmob.sdk.mraid2.e a(com.sigmob.sdk.mraid2.b r0) {
            com.sigmob.sdk.mraid2.e r0 = r0.d
            return r0
    }

    static com.sigmob.sdk.mraid2.j a(com.sigmob.sdk.mraid2.j r0) {
            com.sigmob.sdk.mraid2.b.e = r0
            return r0
    }

    public static java.lang.String a(int r2, java.lang.String r3, java.lang.Object r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r0.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = "code"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L21
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L21
            if (r2 != 0) goto L15
            java.lang.String r2 = "message"
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L21
        L15:
            if (r4 == 0) goto L1c
            java.lang.String r2 = "data"
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L21
        L1c:
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> L21
            return r2
        L21:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            return r2
    }

    static void a(com.sigmob.sdk.mraid2.b r0, com.sigmob.sdk.mraid2.b r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.sigmob.sdk.mraid2.b r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "event"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L260
            r1.<init>(r9)     // Catch: java.lang.Exception -> L260
            java.lang.String r2 = r1.optString(r0)     // Catch: java.lang.Exception -> L260
            java.lang.String r3 = "subEvent"
            java.lang.String r3 = r1.optString(r3)     // Catch: java.lang.Exception -> L260
            java.lang.String r4 = "args"
            org.json.JSONObject r1 = r1.optJSONObject(r4)     // Catch: java.lang.Exception -> L260
            r4 = -1
            int r5 = r2.hashCode()     // Catch: java.lang.Exception -> L260
            r6 = 0
            switch(r5) {
                case -1608145821: goto Le9;
                case -1347417095: goto Lde;
                case -1219368489: goto Ld4;
                case -934326481: goto Lca;
                case -840442113: goto Lc0;
                case -819563236: goto Lb5;
                case -723150523: goto Lab;
                case -309701417: goto La1;
                case 3417674: goto L97;
                case 40710404: goto L8c;
                case 94756344: goto L81;
                case 110364485: goto L75;
                case 112408642: goto L69;
                case 363583408: goto L5d;
                case 692531200: goto L52;
                case 1118509956: goto L46;
                case 1182268276: goto L3a;
                case 1223471129: goto L2e;
                case 1614272768: goto L22;
                default: goto L20;
            }     // Catch: java.lang.Exception -> L260
        L20:
            goto Lf3
        L22:
            java.lang.String r5 = "useCustomClose"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 11
            goto Lf3
        L2e:
            java.lang.String r5 = "webView"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 14
            goto Lf3
        L3a:
            java.lang.String r5 = "belowSubview"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 9
            goto Lf3
        L46:
            java.lang.String r5 = "animation"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 15
            goto Lf3
        L52:
            java.lang.String r5 = "mraidLoadAd"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 2
            goto Lf3
        L5d:
            java.lang.String r5 = "touchMove"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 17
            goto Lf3
        L69:
            java.lang.String r5 = "vpaid"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 13
            goto Lf3
        L75:
            java.lang.String r5 = "timer"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 12
            goto Lf3
        L81:
            java.lang.String r5 = "close"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 4
            goto Lf3
        L8c:
            java.lang.String r5 = "addSubview"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 8
            goto Lf3
        L97:
            java.lang.String r5 = "open"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 3
            goto Lf3
        La1:
            java.lang.String r5 = "curPlayAd"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 7
            goto Lf3
        Lab:
            java.lang.String r5 = "mraidJsLoaded"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = r6
            goto Lf3
        Lb5:
            java.lang.String r5 = "touchEnd"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 18
            goto Lf3
        Lc0:
            java.lang.String r5 = "unload"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 5
            goto Lf3
        Lca:
            java.lang.String r5 = "reward"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 6
            goto Lf3
        Ld4:
            java.lang.String r5 = "dispatch_after"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 1
            goto Lf3
        Lde:
            java.lang.String r5 = "useScrollView"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 10
            goto Lf3
        Le9:
            java.lang.String r5 = "touchStart"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L260
            if (r2 == 0) goto Lf3
            r4 = 16
        Lf3:
            java.lang.String r2 = "vid"
            java.lang.String r5 = "data"
            switch(r4) {
                case 0: goto L25c;
                case 1: goto L23c;
                case 2: goto L1df;
                case 3: goto L1bd;
                case 4: goto L1b2;
                case 5: goto L1a7;
                case 6: goto L19c;
                case 7: goto L18d;
                case 8: goto L183;
                case 9: goto L179;
                case 10: goto L16f;
                case 11: goto L164;
                case 12: goto L15a;
                case 13: goto L150;
                case 14: goto L142;
                case 15: goto L137;
                case 16: goto L124;
                case 17: goto L111;
                case 18: goto Lfc;
                default: goto Lfa;
            }
        Lfa:
            goto L264
        Lfc:
            com.sigmob.sdk.mraid2.e r8 = r7.d     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.e$c r8 = r8.getScrollTouchListener()     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.e r8 = r7.d     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.e$c r8 = r8.getScrollTouchListener()     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.e r9 = r7.d     // Catch: java.lang.Exception -> L260
            r8.a(r9, r1)     // Catch: java.lang.Exception -> L260
            goto L264
        L111:
            com.sigmob.sdk.mraid2.e r8 = r7.d     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.e$c r8 = r8.getScrollTouchListener()     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.e r8 = r7.d     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.e$c r8 = r8.getScrollTouchListener()     // Catch: java.lang.Exception -> L260
            r8.b(r1)     // Catch: java.lang.Exception -> L260
            goto L264
        L124:
            com.sigmob.sdk.mraid2.e r8 = r7.d     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.e$c r8 = r8.getScrollTouchListener()     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.e r8 = r7.d     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.e$c r8 = r8.getScrollTouchListener()     // Catch: java.lang.Exception -> L260
            r8.a(r1)     // Catch: java.lang.Exception -> L260
            goto L264
        L137:
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            r8.a(r1)     // Catch: java.lang.Exception -> L260
            goto L264
        L142:
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L14b
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            r0.c(r3, r1)     // Catch: java.lang.Exception -> L260
        L14b:
            r8.d(r9)     // Catch: java.lang.Exception -> L260
            goto L264
        L150:
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L14b
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L260
            goto L14b
        L15a:
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L14b
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            r0.b(r3, r1)     // Catch: java.lang.Exception -> L260
            goto L14b
        L164:
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            r8.e(r1)     // Catch: java.lang.Exception -> L260
            goto L264
        L16f:
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L14b
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            r0.d(r1)     // Catch: java.lang.Exception -> L260
            goto L14b
        L179:
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L14b
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            r0.c(r1)     // Catch: java.lang.Exception -> L260
            goto L14b
        L183:
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L14b
            com.sigmob.sdk.mraid2.b$b r0 = r7.c     // Catch: java.lang.Exception -> L260
            r0.b(r1)     // Catch: java.lang.Exception -> L260
            goto L14b
        L18d:
            java.lang.String r8 = r1.optString(r2)     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.b$b r9 = r7.c     // Catch: java.lang.Exception -> L260
            if (r9 == 0) goto L264
            com.sigmob.sdk.mraid2.b$b r9 = r7.c     // Catch: java.lang.Exception -> L260
            r9.a(r8)     // Catch: java.lang.Exception -> L260
            goto L264
        L19c:
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            r8.c()     // Catch: java.lang.Exception -> L260
            goto L264
        L1a7:
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            r8.b()     // Catch: java.lang.Exception -> L260
            goto L264
        L1b2:
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            r8.a()     // Catch: java.lang.Exception -> L260
            goto L264
        L1bd:
            org.json.JSONObject r9 = r1.optJSONObject(r5)     // Catch: java.lang.Exception -> L260
            r0 = 0
            if (r9 == 0) goto L1c9
            java.lang.String r9 = r9.optString(r2)     // Catch: java.lang.Exception -> L260
            goto L1ca
        L1c9:
            r9 = r0
        L1ca:
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L260
            if (r2 != 0) goto L1d4
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r8.b(r9)     // Catch: java.lang.Exception -> L260
        L1d4:
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            if (r8 == 0) goto L264
            com.sigmob.sdk.mraid2.b$b r8 = r7.c     // Catch: java.lang.Exception -> L260
            r8.a(r0, r1)     // Catch: java.lang.Exception -> L260
            goto L264
        L1df:
            java.lang.String r9 = r1.optString(r0)     // Catch: java.lang.Exception -> L260
            org.json.JSONObject r0 = r1.optJSONObject(r5)     // Catch: java.lang.Exception -> L260
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> L260
            r1.<init>()     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L206
            java.util.Iterator r2 = r0.keys()     // Catch: java.lang.Exception -> L260
        L1f2:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L260
            if (r3 == 0) goto L206
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L260
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L260
            java.lang.String r4 = r0.optString(r3)     // Catch: java.lang.Exception -> L260
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L260
            goto L1f2
        L206:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r7.b     // Catch: java.lang.Exception -> L260
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L260
            if (r0 == 0) goto L264
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r7.b     // Catch: java.lang.Exception -> L260
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r0.getAdRequest()     // Catch: java.lang.Exception -> L260
            r0.setOptions(r1)     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.base.common.f r1 = com.sigmob.sdk.base.common.f.e()     // Catch: java.lang.Exception -> L260
            java.lang.String r1 = r1.l()     // Catch: java.lang.Exception -> L260
            r0.setLastCampid(r1)     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.base.common.f r1 = com.sigmob.sdk.base.common.f.e()     // Catch: java.lang.Exception -> L260
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L260
            r0.setLastCrid(r1)     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.b$4 r1 = new com.sigmob.sdk.mraid2.b$4     // Catch: java.lang.Exception -> L260
            r1.<init>(r7, r8, r9)     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.base.network.d.a(r0, r1)     // Catch: java.lang.Exception -> L260
            goto L264
        L23c:
            java.lang.String r9 = r1.optString(r0)     // Catch: java.lang.Exception -> L260
            java.lang.String r0 = "delay"
            int r0 = r1.optInt(r0)     // Catch: java.lang.Exception -> L260
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L260
            if (r1 != 0) goto L264
            if (r0 < 0) goto L264
            com.sigmob.sdk.mraid2.e r1 = r8.a()     // Catch: java.lang.Exception -> L260
            com.sigmob.sdk.mraid2.b$3 r2 = new com.sigmob.sdk.mraid2.b$3     // Catch: java.lang.Exception -> L260
            r2.<init>(r7, r8, r9)     // Catch: java.lang.Exception -> L260
            long r8 = (long) r0     // Catch: java.lang.Exception -> L260
            r1.postDelayed(r2, r8)     // Catch: java.lang.Exception -> L260
            goto L264
        L25c:
            r7.i()     // Catch: java.lang.Exception -> L260
            goto L264
        L260:
            r8 = move-exception
            r8.printStackTrace()
        L264:
            return
    }

    static java.util.List b(com.sigmob.sdk.mraid2.b r0) {
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r0.b
            return r0
    }

    static com.sigmob.sdk.base.models.LoadAdRequest c(com.sigmob.sdk.mraid2.b r0) {
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r0.j()
            return r0
    }

    static java.util.List d(com.sigmob.sdk.mraid2.b r0) {
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r0.f
            return r0
    }

    static java.lang.String g() {
            java.lang.String r0 = com.sigmob.sdk.mraid2.b.a
            return r0
    }

    static com.sigmob.sdk.mraid2.j h() {
            com.sigmob.sdk.mraid2.j r0 = com.sigmob.sdk.mraid2.b.e
            return r0
    }

    private void i() {
            r2 = this;
            com.sigmob.sdk.mraid2.e r0 = r2.d
            com.sigmob.sdk.mraid2.b$2 r1 = new com.sigmob.sdk.mraid2.b$2
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    private com.sigmob.sdk.base.models.LoadAdRequest j() {
            r2 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.b
            if (r0 == 0) goto L18
            int r0 = r0.size()
            if (r0 <= 0) goto L18
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.b
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r0.getAdRequest()
            return r0
        L18:
            r0 = 0
            return r0
    }

    public com.sigmob.sdk.mraid2.e a() {
            r1 = this;
            com.sigmob.sdk.mraid2.e r0 = r1.d
            return r0
    }

    void a(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent({\"exposure\":"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "});"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.a(r3)
            return
    }

    void a(int r3, int r4) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "type"
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L10
            java.lang.String r3 = "index"
            r0.put(r3, r4)     // Catch: org.json.JSONException -> L10
            goto L14
        L10:
            r3 = move-exception
            r3.printStackTrace()
        L14:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "mraidbridge.notifyPageChangeEvent("
            r3.append(r4)
            r3.append(r0)
            java.lang.String r4 = ");"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.a(r3)
            return
    }

    public void a(com.sigmob.sdk.base.common.e r6) {
            r5 = this;
            com.sigmob.sdk.mraid2.e r0 = r5.d
            android.content.Context r0 = r0.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L66
            r2.<init>()     // Catch: org.json.JSONException -> L66
            if (r6 == 0) goto L39
            int r0 = r6.a()     // Catch: org.json.JSONException -> L66
            float r0 = (float) r0     // Catch: org.json.JSONException -> L66
            com.sigmob.sdk.mraid2.e r3 = r5.d     // Catch: org.json.JSONException -> L66
            android.content.Context r3 = r3.getContext()     // Catch: org.json.JSONException -> L66
            int r0 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r0, r3)     // Catch: org.json.JSONException -> L66
            int r6 = r6.b()     // Catch: org.json.JSONException -> L66
            float r6 = (float) r6     // Catch: org.json.JSONException -> L66
            com.sigmob.sdk.mraid2.e r3 = r5.d     // Catch: org.json.JSONException -> L66
            android.content.Context r3 = r3.getContext()     // Catch: org.json.JSONException -> L66
            int r6 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r6, r3)     // Catch: org.json.JSONException -> L66
            goto L56
        L39:
            int r6 = r0.widthPixels     // Catch: org.json.JSONException -> L66
            float r6 = (float) r6     // Catch: org.json.JSONException -> L66
            com.sigmob.sdk.mraid2.e r3 = r5.d     // Catch: org.json.JSONException -> L66
            android.content.Context r3 = r3.getContext()     // Catch: org.json.JSONException -> L66
            int r6 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r6, r3)     // Catch: org.json.JSONException -> L66
            int r0 = r0.heightPixels     // Catch: org.json.JSONException -> L66
            float r0 = (float) r0     // Catch: org.json.JSONException -> L66
            com.sigmob.sdk.mraid2.e r3 = r5.d     // Catch: org.json.JSONException -> L66
            android.content.Context r3 = r3.getContext()     // Catch: org.json.JSONException -> L66
            int r0 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r0, r3)     // Catch: org.json.JSONException -> L66
            r4 = r0
            r0 = r6
            r6 = r4
        L56:
            java.lang.String r3 = "width"
            r2.put(r3, r0)     // Catch: org.json.JSONException -> L66
            java.lang.String r0 = "height"
            r2.put(r0, r6)     // Catch: org.json.JSONException -> L66
            java.lang.String r6 = "screenSize"
            r1.put(r6, r2)     // Catch: org.json.JSONException -> L66
            goto L6a
        L66:
            r6 = move-exception
            r6.printStackTrace()
        L6a:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "mraidbridge.fireChangeEvent("
            r6.append(r0)
            r6.append(r1)
            java.lang.String r0 = ");"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r5.a(r6)
            return
    }

    void a(com.sigmob.sdk.base.models.rtb.BidResponse r3) {
            r2 = this;
            r0 = 1
            java.lang.String r1 = "bidResponse"
            java.lang.String r3 = com.czhj.sdk.common.json.JSONSerializer.Serialize(r3, r1, r0, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent("
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ");"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.a(r3)
            return
    }

    void a(com.sigmob.sdk.mraid2.b.b r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(com.sigmob.sdk.mraid2.e r2) {
            r1 = this;
            r1.d = r2
            r0 = 0
            r2.setScrollContainer(r0)
            com.sigmob.sdk.mraid2.e r2 = r1.d
            r2.setVerticalScrollBarEnabled(r0)
            com.sigmob.sdk.mraid2.e r2 = r1.d
            r2.setHorizontalScrollBarEnabled(r0)
            com.sigmob.sdk.mraid2.e r2 = r1.d
            r2.setBackgroundColor(r0)
            com.sigmob.sdk.mraid2.e r2 = r1.d
            com.sigmob.sdk.mraid2.b$1 r0 = new com.sigmob.sdk.mraid2.b$1
            r0.<init>(r1)
            r2.setWebChromeClient(r0)
            return
    }

    void a(java.lang.String r4) {
            r3 = this;
            com.sigmob.sdk.mraid2.e r0 = r3.d
            if (r0 != 0) goto L19
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Attempted to inject Javascript into MRAID WebView while was not attached:\n\t"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r4)
            return
        L19:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Injecting Javascript into MRAID WebView:\n\t"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L3a
            com.sigmob.sdk.mraid2.e r0 = r3.d
            r1 = 0
            r0.evaluateJavascript(r4, r1)
            goto L50
        L3a:
            com.sigmob.sdk.mraid2.e r0 = r3.d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "javascript:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.loadUrl(r4)
        L50:
            return
    }

    public void a(java.lang.String r4, int r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r1.<init>()     // Catch: org.json.JSONException -> L1a
            java.lang.String r2 = "uniqueId"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L1a
            java.lang.String r4 = "state"
            r1.put(r4, r5)     // Catch: org.json.JSONException -> L1a
            java.lang.String r4 = "vdPlayStateChanged"
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L1a
            goto L1e
        L1a:
            r4 = move-exception
            r4.printStackTrace()
        L1e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mraidbridge.fireChangeEvent("
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = ");"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }

    public void a(java.lang.String r6, int r7, int r8) {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L27
            r1.<init>()     // Catch: org.json.JSONException -> L27
            java.lang.String r2 = "uniqueId"
            r1.put(r2, r6)     // Catch: org.json.JSONException -> L27
            java.lang.String r6 = "currentTime"
            float r7 = (float) r7     // Catch: org.json.JSONException -> L27
            r2 = 1148846080(0x447a0000, float:1000.0)
            float r7 = r7 / r2
            double r3 = (double) r7     // Catch: org.json.JSONException -> L27
            r1.put(r6, r3)     // Catch: org.json.JSONException -> L27
            java.lang.String r6 = "duration"
            float r7 = (float) r8     // Catch: org.json.JSONException -> L27
            float r7 = r7 / r2
            double r7 = (double) r7     // Catch: org.json.JSONException -> L27
            r1.put(r6, r7)     // Catch: org.json.JSONException -> L27
            java.lang.String r6 = "vdPlayCurrentTime"
            r0.put(r6, r1)     // Catch: org.json.JSONException -> L27
            goto L2b
        L27:
            r6 = move-exception
            r6.printStackTrace()
        L2b:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "mraidbridge.fireChangeEvent("
            r6.append(r7)
            r6.append(r0)
            java.lang.String r7 = ");"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.a(r6)
            return
    }

    void a(java.lang.String r5, int r6, int r7, int r8) {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L29
            r1.<init>()     // Catch: org.json.JSONException -> L29
            java.lang.String r2 = "uniqueId"
            r1.put(r2, r5)     // Catch: org.json.JSONException -> L29
            java.lang.String r5 = "duration"
            float r6 = (float) r6     // Catch: org.json.JSONException -> L29
            r2 = 1148846080(0x447a0000, float:1000.0)
            float r6 = r6 / r2
            double r2 = (double) r6     // Catch: org.json.JSONException -> L29
            r1.put(r5, r2)     // Catch: org.json.JSONException -> L29
            java.lang.String r5 = "width"
            r1.put(r5, r7)     // Catch: org.json.JSONException -> L29
            java.lang.String r5 = "height"
            r1.put(r5, r8)     // Catch: org.json.JSONException -> L29
            java.lang.String r5 = "vdReadyToPlay"
            r0.put(r5, r1)     // Catch: org.json.JSONException -> L29
            goto L2d
        L29:
            r5 = move-exception
            r5.printStackTrace()
        L2d:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "mraidbridge.fireChangeEvent("
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = ");"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.a(r5)
            return
    }

    public void a(java.lang.String r4, int r5, java.lang.String r6) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L29
            r1.<init>()     // Catch: org.json.JSONException -> L29
            java.lang.String r2 = "code"
            r1.put(r2, r5)     // Catch: org.json.JSONException -> L29
            java.lang.String r5 = "message"
            r1.put(r5, r6)     // Catch: org.json.JSONException -> L29
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L29
            r5.<init>()     // Catch: org.json.JSONException -> L29
            java.lang.String r6 = "uniqueId"
            r5.put(r6, r4)     // Catch: org.json.JSONException -> L29
            java.lang.String r4 = "error"
            r5.put(r4, r1)     // Catch: org.json.JSONException -> L29
            java.lang.String r4 = "wvError"
            r0.put(r4, r5)     // Catch: org.json.JSONException -> L29
            goto L2d
        L29:
            r4 = move-exception
            r4.printStackTrace()
        L2d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mraidbridge.fireChangeEvent("
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = ");"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }

    void a(java.lang.String r3, android.webkit.ValueCallback r4) {
            r2 = this;
            com.sigmob.sdk.mraid2.e r0 = r2.d
            if (r0 != 0) goto L19
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Attempted to inject Javascript into MRAID WebView while was not attached:\n\t"
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            return
        L19:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Injecting Javascript into MRAID WebView:\n\t"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L39
            com.sigmob.sdk.mraid2.e r0 = r2.d
            r0.evaluateJavascript(r3, r4)
            goto L4d
        L39:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Injecting Javascript into MRAID WebView:\n\t can't support less KITKAT"
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L4d:
            return
    }

    void a(java.lang.String r5, com.sigmob.sdk.base.models.rtb.BidResponse r6, int r7, java.lang.String r8) {
            r4 = this;
            java.lang.String r0 = "message"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "data"
            if (r6 != 0) goto L17
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r6.<init>()     // Catch: org.json.JSONException -> L15
            r3 = 0
            r6.put(r2, r3)     // Catch: org.json.JSONException -> L15
            goto L22
        L15:
            r5 = move-exception
            goto L3d
        L17:
            r3 = 1
            java.lang.String r6 = com.czhj.sdk.common.json.JSONSerializer.Serialize(r6, r2, r3, r3)     // Catch: org.json.JSONException -> L15
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r2.<init>(r6)     // Catch: org.json.JSONException -> L15
            r6 = r2
        L22:
            java.lang.String r2 = "code"
            r6.put(r2, r7)     // Catch: org.json.JSONException -> L15
            r6.put(r0, r8)     // Catch: org.json.JSONException -> L15
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r7.<init>()     // Catch: org.json.JSONException -> L15
            java.lang.String r8 = "event"
            r7.put(r8, r5)     // Catch: org.json.JSONException -> L15
            r7.put(r0, r6)     // Catch: org.json.JSONException -> L15
            java.lang.String r5 = "notify"
            r1.put(r5, r7)     // Catch: org.json.JSONException -> L15
            goto L40
        L3d:
            r5.printStackTrace()
        L40:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "mraidbridge.fireChangeEvent("
            r5.append(r6)
            r5.append(r1)
            java.lang.String r6 = ");"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.a(r5)
            return
    }

    public void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r1.<init>()     // Catch: org.json.JSONException -> L1a
            java.lang.String r2 = "uniqueId"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L1a
            java.lang.String r4 = "error"
            r1.put(r4, r5)     // Catch: org.json.JSONException -> L1a
            java.lang.String r4 = "vdPlayError"
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L1a
            goto L1e
        L1a:
            r4 = move-exception
            r4.printStackTrace()
        L1e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mraidbridge.fireChangeEvent("
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = ");"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }

    void a(org.json.JSONObject r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "bindData"
            r0.put(r1, r3)     // Catch: org.json.JSONException -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent("
            r3.append(r1)
            r3.append(r0)
            java.lang.String r0 = ");"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.a(r3)
            return
    }

    void a(boolean r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "viewable"
            r0.put(r1, r3)     // Catch: org.json.JSONException -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent("
            r3.append(r1)
            r3.append(r0)
            java.lang.String r0 = ")"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.a(r3)
            return
    }

    public com.sigmob.sdk.base.models.BaseAdUnit b(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r4.f
            if (r0 == 0) goto L33
            int r0 = r0.size()
            if (r0 <= 0) goto L33
            r0 = 0
        L13:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2 = r4.f
            int r2 = r2.size()
            if (r0 >= r2) goto L33
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2 = r4.b
            java.lang.Object r2 = r2.get(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            com.sigmob.sdk.base.models.rtb.Ad r3 = r2.getAd()
            java.lang.String r3 = r3.vid
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L30
            return r2
        L30:
            int r0 = r0 + 1
            goto L13
        L33:
            return r1
    }

    public java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> b() {
            r1 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r1.f
            return r0
    }

    public void b(java.lang.String r4, int r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r1.<init>()     // Catch: org.json.JSONException -> L1a
            java.lang.String r2 = "uniqueId"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L1a
            java.lang.String r4 = "state"
            r1.put(r4, r5)     // Catch: org.json.JSONException -> L1a
            java.lang.String r4 = "vdLoadStateChanged"
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L1a
            goto L1e
        L1a:
            r4 = move-exception
            r4.printStackTrace()
        L1e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mraidbridge.fireChangeEvent("
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = ");"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }

    void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L20
            r1.<init>()     // Catch: org.json.JSONException -> L20
            java.lang.String r2 = "event"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L20
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: org.json.JSONException -> L20
            if (r4 != 0) goto L1a
            java.lang.String r4 = "message"
            r1.put(r4, r5)     // Catch: org.json.JSONException -> L20
        L1a:
            java.lang.String r4 = "notify"
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L20
            goto L24
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mraidbridge.fireChangeEvent("
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = ");"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }

    void b(org.json.JSONObject r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mraidbridge.onStorageChanged("
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = ");"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.a(r3)
            return
    }

    void c() {
            r1 = this;
            java.lang.String r0 = "mraidbridge.fireReadyEvent();"
            r1.a(r0)
            return
    }

    public void c(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r1.<init>()     // Catch: org.json.JSONException -> L15
            java.lang.String r2 = "uniqueId"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L15
            java.lang.String r4 = "wvFinished"
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r4 = move-exception
            r4.printStackTrace()
        L19:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent("
            r4.append(r1)
            r4.append(r0)
            java.lang.String r0 = ");"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }

    public void c(java.lang.String r5, int r6) {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f
            r1.<init>()     // Catch: org.json.JSONException -> L1f
            java.lang.String r2 = "uniqueId"
            r1.put(r2, r5)     // Catch: org.json.JSONException -> L1f
            java.lang.String r5 = "currentTime"
            float r6 = (float) r6     // Catch: org.json.JSONException -> L1f
            r2 = 1148846080(0x447a0000, float:1000.0)
            float r6 = r6 / r2
            double r2 = (double) r6     // Catch: org.json.JSONException -> L1f
            r1.put(r5, r2)     // Catch: org.json.JSONException -> L1f
            java.lang.String r5 = "vdPlayToEnd"
            r0.put(r5, r1)     // Catch: org.json.JSONException -> L1f
            goto L23
        L1f:
            r5 = move-exception
            r5.printStackTrace()
        L23:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "mraidbridge.fireChangeEvent("
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = ");"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.a(r5)
            return
    }

    void d() {
            r5 = this;
            java.lang.String r0 = "orientation"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L21
            r2.<init>()     // Catch: org.json.JSONException -> L21
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: org.json.JSONException -> L21
            java.lang.Integer r3 = r3.getOrientationInt()     // Catch: org.json.JSONException -> L21
            r2.put(r0, r3)     // Catch: org.json.JSONException -> L21
            java.lang.String r3 = "locked"
            r4 = 1
            r2.put(r3, r4)     // Catch: org.json.JSONException -> L21
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L21
            goto L25
        L21:
            r0 = move-exception
            r0.printStackTrace()
        L25:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "mraidbridge.fireChangeEvent("
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ");"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.a(r0)
            return
    }

    void d(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mraidbridge.nativeCallComplete("
            r0.append(r1)
            java.lang.String r3 = org.json.JSONObject.quote(r3)
            r0.append(r3)
            java.lang.String r3 = ")"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.a(r3)
            return
    }

    void e() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "sdkVersion"
            java.lang.String r2 = "4.9.0"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "mraidbridge.fireChangeEvent("
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = ")"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.a(r0)
            return
    }

    void e(java.lang.String r6) {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L26
            r1.<init>()     // Catch: org.json.JSONException -> L26
            java.lang.String r2 = "event"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L26
            r3.<init>()     // Catch: org.json.JSONException -> L26
            java.lang.String r4 = "fire_"
            r3.append(r4)     // Catch: org.json.JSONException -> L26
            r3.append(r6)     // Catch: org.json.JSONException -> L26
            java.lang.String r6 = r3.toString()     // Catch: org.json.JSONException -> L26
            r1.put(r2, r6)     // Catch: org.json.JSONException -> L26
            java.lang.String r6 = "notify"
            r0.put(r6, r1)     // Catch: org.json.JSONException -> L26
            goto L2a
        L26:
            r6 = move-exception
            r6.printStackTrace()
        L2a:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent("
            r6.append(r1)
            r6.append(r0)
            java.lang.String r0 = ");"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r5.a(r6)
            return
    }

    public void f() {
            r1 = this;
            com.sigmob.sdk.mraid2.j r0 = com.sigmob.sdk.mraid2.b.e
            if (r0 == 0) goto L7
            r0 = 0
            com.sigmob.sdk.mraid2.b.e = r0
        L7:
            return
    }

    void f(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r1.<init>()     // Catch: org.json.JSONException -> L15
            java.lang.String r2 = "event"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L15
            java.lang.String r4 = "notify"
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r4 = move-exception
            r4.printStackTrace()
        L19:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent("
            r4.append(r1)
            r4.append(r0)
            java.lang.String r0 = ");"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }

    void g(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r1.<init>()     // Catch: org.json.JSONException -> L15
            java.lang.String r2 = "event"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L15
            java.lang.String r4 = "notify"
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L15
            goto L19
        L15:
            r4 = move-exception
            r4.printStackTrace()
        L19:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "mraidbridge.fireChangeEvent("
            r4.append(r1)
            r4.append(r0)
            java.lang.String r0 = ");"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.a(r4)
            return
    }
}

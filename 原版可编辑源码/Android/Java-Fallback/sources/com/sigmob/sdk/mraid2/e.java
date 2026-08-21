package com.sigmob.sdk.mraid2;

public class e extends com.sigmob.sdk.mraid2.a {
    private static java.lang.String o = "Mraid2Bridge";
    private final com.sigmob.sdk.mraid2.e b;
    private com.sigmob.sdk.mraid2.b c;
    private com.sigmob.sdk.mraid2.e d;
    private java.lang.String e;
    private com.sigmob.sdk.mraid2.e.c f;
    private com.sigmob.sdk.mraid2.e.b g;
    private com.sigmob.sdk.mraid2.e.a h;
    private boolean i;
    private android.widget.FrameLayout j;
    private android.widget.LinearLayout k;
    private boolean l;
    private org.json.JSONObject m;
    private com.sigmob.sdk.base.models.BaseAdUnit n;
    private final android.webkit.WebViewClient p;
    private com.sigmob.sdk.base.common.e q;
    private java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid2.e> r;
    private java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid2.k> s;
    private final com.sigmob.sdk.mraid2.b.b t;




    public interface a {
        void a(com.sigmob.sdk.mraid2.e r1);

        void a(com.sigmob.windad.WindAdError r1);
    }

    public interface b {
        android.widget.LinearLayout a(com.sigmob.sdk.mraid2.e r1, int r2);

        com.sigmob.sdk.mraid2.e a(com.sigmob.sdk.mraid2.e r1, org.json.JSONObject r2);

        void a(com.sigmob.sdk.mraid2.e r1);

        void a(com.sigmob.sdk.mraid2.e r1, com.sigmob.sdk.base.models.BaseAdUnit r2, org.json.JSONObject r3);

        void b(com.sigmob.sdk.mraid2.e r1);

        void b(com.sigmob.sdk.mraid2.e r1, org.json.JSONObject r2);
    }

    public interface c {
        void a(com.sigmob.sdk.mraid2.e r1, org.json.JSONObject r2);

        void a(org.json.JSONObject r1);

        void b(org.json.JSONObject r1);
    }

    private static class d {
        private android.view.View a;

        public d(android.view.View r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public int a() {
                r1 = this;
                android.view.View r0 = r1.a
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                int r0 = r0.height
                return r0
        }

        public void a(int r2) {
                r1 = this;
                android.view.View r0 = r1.a
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                r0.height = r2
                android.view.View r2 = r1.a
                r2.requestLayout()
                return
        }

        public int b() {
                r1 = this;
                android.view.View r0 = r1.a
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                int r0 = r0.width
                return r0
        }

        public void b(int r2) {
                r1 = this;
                android.view.View r0 = r1.a
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                r0.width = r2
                android.view.View r2 = r1.a
                r2.requestLayout()
                return
        }
    }

    static {
            return
    }

    public e(android.content.Context r7, java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r8, android.widget.FrameLayout r9) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            r7 = 0
            java.lang.Object r7 = r8.get(r7)
            com.sigmob.sdk.base.models.BaseAdUnit r7 = (com.sigmob.sdk.base.models.BaseAdUnit) r7
            com.sigmob.sdk.base.models.rtb.Template r8 = r7.scene
            if (r8 == 0) goto L17
            com.sigmob.sdk.base.models.rtb.Template r7 = r7.scene
            goto L42
        L17:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r8 = r7.getMaterial()
            if (r8 == 0) goto L2c
            com.sigmob.sdk.base.models.rtb.MaterialMeta r8 = r7.getMaterial()
            com.sigmob.sdk.base.models.rtb.Template r8 = r8.main_template
            if (r8 == 0) goto L2c
            com.sigmob.sdk.base.models.rtb.MaterialMeta r7 = r7.getMaterial()
            com.sigmob.sdk.base.models.rtb.Template r7 = r7.main_template
            goto L42
        L2c:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r8 = r7.getMaterial()
            if (r8 == 0) goto L41
            com.sigmob.sdk.base.models.rtb.MaterialMeta r8 = r7.getMaterial()
            com.sigmob.sdk.base.models.rtb.Template r8 = r8.sub_template
            if (r8 == 0) goto L41
            com.sigmob.sdk.base.models.rtb.MaterialMeta r7 = r7.getMaterial()
            com.sigmob.sdk.base.models.rtb.Template r7 = r7.sub_template
            goto L42
        L41:
            r7 = 0
        L42:
            if (r7 == 0) goto L71
            java.lang.Integer r8 = r7.type
            int r8 = r8.intValue()
            r9 = 1
            if (r8 == r9) goto L68
            r9 = 2
            if (r8 == r9) goto L5e
            r9 = 3
            if (r8 == r9) goto L54
            goto L71
        L54:
            com.czhj.wire.okio.ByteString r7 = r7.context
            java.lang.String r7 = r7.utf8()
            r6.d(r7)
            goto L71
        L5e:
            com.czhj.wire.okio.ByteString r7 = r7.context
            java.lang.String r7 = r7.utf8()
            r6.b(r7)
            goto L71
        L68:
            com.czhj.wire.okio.ByteString r7 = r7.context
            java.lang.String r7 = r7.utf8()
            r6.c(r7)
        L71:
            return
    }

    public e(android.content.Context r3, java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r4, android.widget.FrameLayout r5, com.sigmob.sdk.mraid2.e r6, org.json.JSONObject r7) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.l = r3
            r0 = 0
            r2.n = r0
            com.sigmob.sdk.mraid2.e$1 r0 = new com.sigmob.sdk.mraid2.e$1
            r0.<init>(r2)
            r2.p = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.r = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.s = r0
            com.sigmob.sdk.mraid2.e$3 r0 = new com.sigmob.sdk.mraid2.e$3
            r0.<init>(r2)
            r2.t = r0
            r2.d = r2
            r2.j = r5
            r2.b = r6
            r2.i = r3
            if (r7 == 0) goto L48
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3d
            java.lang.String r6 = "args"
            java.lang.String r6 = r7.optString(r6)     // Catch: org.json.JSONException -> L3d
            r5.<init>(r6)     // Catch: org.json.JSONException -> L3d
            r2.m = r5     // Catch: org.json.JSONException -> L3d
            goto L41
        L3d:
            r5 = move-exception
            r5.printStackTrace()
        L41:
            java.lang.String r5 = "uniqueId"
            java.lang.String r5 = r7.optString(r5)
            goto L50
        L48:
            java.util.UUID r5 = java.util.UUID.randomUUID()
            java.lang.String r5 = r5.toString()
        L50:
            r2.e = r5
            r5 = 1
            r2.a(r5)
            r2.setBackgroundColor(r3)
            r3 = 2
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r6 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> L7b
            android.webkit.WebSettings r7 = r2.getSettings()     // Catch: java.lang.Exception -> L7b
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L7b
            java.lang.String r1 = "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="
            byte[] r1 = android.util.Base64.decode(r1, r3)     // Catch: java.lang.Exception -> L7b
            r0.<init>(r1)     // Catch: java.lang.Exception -> L7b
            r6.<init>(r7, r0)     // Catch: java.lang.Exception -> L7b
            java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L7b
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Exception -> L7b
            r6.addParam(r7, r0)     // Catch: java.lang.Exception -> L7b
            r6.execute()     // Catch: java.lang.Exception -> L7b
            goto L7f
        L7b:
            r6 = move-exception
            r6.printStackTrace()
        L7f:
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r6 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> La0
            android.webkit.WebSettings r7 = r2.getSettings()     // Catch: java.lang.Exception -> La0
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> La0
            java.lang.String r1 = "c2V0QWxsb3dGaWxlQWNjZXNz"
            byte[] r3 = android.util.Base64.decode(r1, r3)     // Catch: java.lang.Exception -> La0
            r0.<init>(r3)     // Catch: java.lang.Exception -> La0
            r6.<init>(r7, r0)     // Catch: java.lang.Exception -> La0
            java.lang.Class r3 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> La0
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Exception -> La0
            r6.addParam(r3, r5)     // Catch: java.lang.Exception -> La0
            r6.execute()     // Catch: java.lang.Exception -> La0
            goto La4
        La0:
            r3 = move-exception
            r3.printStackTrace()
        La4:
            android.webkit.WebViewClient r3 = r2.p
            r2.setWebViewClient(r3)
            com.sigmob.sdk.mraid2.b r3 = new com.sigmob.sdk.mraid2.b
            r3.<init>(r4)
            r2.c = r3
            com.sigmob.sdk.mraid2.b$b r4 = r2.t
            r3.a(r4)
            com.sigmob.sdk.mraid2.b r3 = r2.c
            r3.a(r2)
            return
    }

    static android.widget.LinearLayout a(com.sigmob.sdk.mraid2.e r0, android.widget.LinearLayout r1) {
            r0.k = r1
            return r1
    }

    static com.sigmob.sdk.base.models.BaseAdUnit a(com.sigmob.sdk.mraid2.e r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.n
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit a(com.sigmob.sdk.mraid2.e r0, com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0.n = r1
            return r1
    }

    static com.sigmob.sdk.mraid2.e a(com.sigmob.sdk.mraid2.e r0, com.sigmob.sdk.mraid2.e r1) {
            r0.d = r1
            return r1
    }

    static void a(com.sigmob.sdk.mraid2.e r0, java.lang.String r1) {
            r0.e(r1)
            return
    }

    static boolean a(com.sigmob.sdk.mraid2.e r0, boolean r1) {
            r0.i = r1
            return r1
    }

    static org.json.JSONObject b(com.sigmob.sdk.mraid2.e r0) {
            org.json.JSONObject r0 = r0.m
            return r0
    }

    static void b(com.sigmob.sdk.mraid2.e r0, java.lang.String r1) {
            r0.d(r1)
            return
    }

    static boolean b(com.sigmob.sdk.mraid2.e r0, boolean r1) {
            r0.l = r1
            return r1
    }

    static com.sigmob.sdk.mraid2.b c(com.sigmob.sdk.mraid2.e r0) {
            com.sigmob.sdk.mraid2.b r0 = r0.c
            return r0
    }

    static com.sigmob.sdk.mraid2.e d(com.sigmob.sdk.mraid2.e r0) {
            com.sigmob.sdk.mraid2.e r0 = r0.b
            return r0
    }

    private void d(java.lang.String r7) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L7
            return
        L7:
            com.sigmob.sdk.mraid2.b$a r0 = new com.sigmob.sdk.mraid2.b$a
            com.sigmob.sdk.mraid2.b r1 = r6.c
            r0.<init>(r1)
            java.lang.String r1 = "sigandroid"
            r6.addJavascriptInterface(r0, r1)
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r7)
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.c
            java.io.File r1 = com.sigmob.sdk.base.utils.b.c(r1)
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r1.getAbsolutePath()
            r3.append(r4)
            java.lang.String r4 = java.io.File.separator
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "endcard.html"
            r2.<init>(r3, r4)
            java.lang.String r3 = com.sigmob.sdk.mraid2.e.o
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            boolean r5 = r2.exists()
            r4.append(r5)
            java.lang.String r5 = "---------loadURLByPackage----------"
            r4.append(r5)
            java.lang.String r5 = r2.getAbsolutePath()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.util.Log.d(r3, r4)
            boolean r3 = r2.exists()
            if (r3 == 0) goto L7c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "file://"
            r7.append(r0)
            java.lang.String r0 = r2.getAbsolutePath()
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.loadUrl(r7)
            goto Laf
        L7c:
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = ".tgz"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r3.<init>(r1, r0)
            com.czhj.volley.toolbox.DownloadItem r0 = new com.czhj.volley.toolbox.DownloadItem
            r0.<init>()
            r0.url = r7
            java.lang.String r7 = r3.getAbsolutePath()
            r0.filePath = r7
            com.czhj.volley.toolbox.DownloadItem$FileType r7 = com.czhj.volley.toolbox.DownloadItem.FileType.FILE
            r0.type = r7
            com.czhj.volley.toolbox.FileDownloader r7 = com.sigmob.sdk.base.common.p.a()
            com.sigmob.sdk.mraid2.e$2 r1 = new com.sigmob.sdk.mraid2.e$2
            r1.<init>(r6, r2)
            r7.add(r0, r1)
        Laf:
            return
    }

    static java.lang.String e(com.sigmob.sdk.mraid2.e r0) {
            java.lang.String r0 = r0.e
            return r0
    }

    private void e(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = com.sigmob.sdk.mraid2.e.o
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "---------loadContentId----------"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            r0 = 0
            r1 = r0
        L18:
            java.util.List r2 = r4.getAdUnitList()
            int r2 = r2.size()
            if (r1 >= r2) goto Lad
            java.util.List r2 = r4.getAdUnitList()
            java.lang.Object r2 = r2.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            if (r2 == 0) goto L45
            com.sigmob.sdk.base.models.rtb.Template r3 = r2.scene
            if (r3 == 0) goto L45
            com.sigmob.sdk.base.models.rtb.Template r3 = r2.scene
            java.lang.String r3 = r3.templateId
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L45
            com.sigmob.sdk.base.models.rtb.Template r5 = r2.scene
        L3e:
            com.czhj.wire.okio.ByteString r5 = r5.context
            java.lang.String r5 = r5.utf8()
            goto Lae
        L45:
            com.sigmob.sdk.base.models.rtb.Ad r2 = r2.getAd()
            if (r2 == 0) goto La9
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r2.materials
            if (r3 == 0) goto La9
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r2.materials
            java.lang.Object r3 = r3.get(r0)
            if (r3 == 0) goto La9
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r2.materials
            java.lang.Object r3 = r3.get(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r3 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.main_template
            if (r3 == 0) goto L80
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r2.materials
            java.lang.Object r3 = r3.get(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r3 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.main_template
            java.lang.String r3 = r3.templateId
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L80
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r5 = r2.materials
            java.lang.Object r5 = r5.get(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r5 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r5
            com.sigmob.sdk.base.models.rtb.Template r5 = r5.main_template
            goto L3e
        L80:
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r2.materials
            java.lang.Object r3 = r3.get(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r3 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.sub_template
            if (r3 == 0) goto La9
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r2.materials
            java.lang.Object r3 = r3.get(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r3 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r3
            com.sigmob.sdk.base.models.rtb.Template r3 = r3.sub_template
            java.lang.String r3 = r3.templateId
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto La9
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r5 = r2.materials
            java.lang.Object r5 = r5.get(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r5 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r5
            com.sigmob.sdk.base.models.rtb.Template r5 = r5.sub_template
            goto L3e
        La9:
            int r1 = r1 + 1
            goto L18
        Lad:
            r5 = 0
        Lae:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto Lb7
            r4.b(r5)
        Lb7:
            return
    }

    static boolean f(com.sigmob.sdk.mraid2.e r0) {
            boolean r0 = r0.i
            return r0
    }

    static com.sigmob.sdk.mraid2.e.a g(com.sigmob.sdk.mraid2.e r0) {
            com.sigmob.sdk.mraid2.e$a r0 = r0.h
            return r0
    }

    static java.lang.String g() {
            java.lang.String r0 = com.sigmob.sdk.mraid2.e.o
            return r0
    }

    static com.sigmob.sdk.mraid2.e h(com.sigmob.sdk.mraid2.e r0) {
            com.sigmob.sdk.mraid2.e r0 = r0.d
            return r0
    }

    static java.util.HashMap i(com.sigmob.sdk.mraid2.e r0) {
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid2.k> r0 = r0.s
            return r0
    }

    static java.util.HashMap j(com.sigmob.sdk.mraid2.e r0) {
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid2.e> r0 = r0.r
            return r0
    }

    static com.sigmob.sdk.mraid2.e.b k(com.sigmob.sdk.mraid2.e r0) {
            com.sigmob.sdk.mraid2.e$b r0 = r0.g
            return r0
    }

    static boolean l(com.sigmob.sdk.mraid2.e r0) {
            boolean r0 = r0.l
            return r0
    }

    static android.widget.LinearLayout m(com.sigmob.sdk.mraid2.e r0) {
            android.widget.LinearLayout r0 = r0.k
            return r0
    }

    static android.widget.FrameLayout n(com.sigmob.sdk.mraid2.e r0) {
            android.widget.FrameLayout r0 = r0.j
            return r0
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            super.a(r1)
            return
    }

    @Override
    public void a(boolean r1) {
            r0 = this;
            super.a(r1)
            return
    }

    public void b(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = com.sigmob.sdk.mraid2.e.o
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "---------loadContentHtml----------"
            r1.append(r2)
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            com.sigmob.sdk.mraid2.b$a r0 = new com.sigmob.sdk.mraid2.b$a
            com.sigmob.sdk.mraid2.b r1 = r8.c
            r0.<init>(r1)
            java.lang.String r1 = "sigandroid"
            r8.addJavascriptInterface(r0, r1)
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r9)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ".html"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.io.File r0 = com.sigmob.sdk.base.utils.b.a(r9, r0)
            if (r0 == 0) goto L60
            java.lang.String r1 = r0.getAbsolutePath()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L60
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "file://"
            r9.append(r1)
            java.lang.String r0 = r0.getAbsolutePath()
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            r8.loadUrl(r9)
            goto L7f
        L60:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.czhj.sdk.common.network.Networking.getBaseUrlScheme()
            r0.append(r1)
            java.lang.String r1 = "://localhost/"
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            r7 = 0
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "UTF-8"
            r2 = r8
            r4 = r9
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
        L7f:
            return
    }

    @Override
    public void b(boolean r1) {
            r0 = this;
            super.b(r1)
            return
    }

    public void c(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = com.sigmob.sdk.mraid2.e.o
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "---------loadContentUrl----------"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            com.sigmob.sdk.mraid2.b$a r0 = new com.sigmob.sdk.mraid2.b$a
            com.sigmob.sdk.mraid2.b r1 = r3.c
            r0.<init>(r1)
            java.lang.String r1 = "sigandroid"
            r3.addJavascriptInterface(r0, r1)
            r3.loadUrl(r4)
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            super.destroy()
            java.util.List r0 = r2.getAdUnitList()
            if (r0 == 0) goto L34
            java.util.List r0 = r2.getAdUnitList()
            int r0 = r0.size()
            if (r0 <= 0) goto L34
            r0 = 0
        L14:
            java.util.List r1 = r2.getAdUnitList()
            int r1 = r1.size()
            if (r0 >= r1) goto L34
            java.util.List r1 = r2.getAdUnitList()
            java.lang.Object r1 = r1.get(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
            com.sigmob.sdk.base.common.ab r1 = r1.getSessionManager()
            if (r1 == 0) goto L31
            r1.a()
        L31:
            int r0 = r0 + 1
            goto L14
        L34:
            return
    }

    public com.sigmob.sdk.base.common.e getAdSize() {
            r1 = this;
            com.sigmob.sdk.base.common.e r0 = r1.q
            return r0
    }

    @Override
    java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> getAdUnitList() {
            r1 = this;
            com.sigmob.sdk.mraid2.b r0 = r1.c
            java.util.List r0 = r0.b()
            return r0
    }

    public com.sigmob.sdk.mraid2.b getMraidBridge() {
            r1 = this;
            com.sigmob.sdk.mraid2.b r0 = r1.c
            return r0
    }

    public com.sigmob.sdk.mraid2.e.c getScrollTouchListener() {
            r1 = this;
            com.sigmob.sdk.mraid2.e$c r0 = r1.f
            return r0
    }

    @Override
    public void loadUrl(java.lang.String r1) {
            r0 = this;
            super.loadUrl(r1)
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            com.sigmob.sdk.mraid2.b r1 = r0.c
            if (r2 != 0) goto L9
            r2 = 1
            goto La
        L9:
            r2 = 0
        La:
            r1.a(r2)
            return
    }

    public void setAdSize(com.sigmob.sdk.base.common.e r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setLoadListener(com.sigmob.sdk.mraid2.e.a r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setNextWebViewListener(com.sigmob.sdk.mraid2.e.b r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setScrollTouchListener(com.sigmob.sdk.mraid2.e.c r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public void setWebViewClient(android.webkit.WebViewClient r1) {
            r0 = this;
            super.setWebViewClient(r1)
            return
    }
}

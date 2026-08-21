package com.ss.android.downloadlib.addownload.compliance;

public class df {
    private java.lang.ref.SoftReference<android.app.Activity> rg;



    private static class rg {
        private static com.ss.android.downloadlib.addownload.compliance.df rg;

        static {
                com.ss.android.downloadlib.addownload.compliance.df r0 = new com.ss.android.downloadlib.addownload.compliance.df
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.addownload.compliance.df.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.addownload.compliance.df rg() {
                com.ss.android.downloadlib.addownload.compliance.df r0 = com.ss.android.downloadlib.addownload.compliance.df.rg.rg
                return r0
        }
    }

    private df() {
            r0 = this;
            r0.<init>()
            return
    }

    df(com.ss.android.downloadlib.addownload.compliance.df.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.downloadlib.addownload.compliance.df rg() {
            com.ss.android.downloadlib.addownload.compliance.df r0 = com.ss.android.downloadlib.addownload.compliance.df.rg.rg()
            return r0
    }

    private boolean rg(long r10, long r12, java.lang.String r14) {
            r9 = this;
            r0 = 7
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L99
            r2.<init>(r14)     // Catch: java.lang.Exception -> L99
            java.lang.String r14 = "package"
            org.json.JSONObject r14 = r2.optJSONObject(r14)     // Catch: java.lang.Exception -> L99
            if (r14 == 0) goto L95
            int r2 = r14.length()     // Catch: java.lang.Exception -> L99
            if (r2 != 0) goto L17
            goto L95
        L17:
            com.ss.android.downloadlib.addownload.model.df r2 = new com.ss.android.downloadlib.addownload.model.df     // Catch: java.lang.Exception -> L99
            r2.<init>()     // Catch: java.lang.Exception -> L99
            r2.rg = r10     // Catch: java.lang.Exception -> L99
            r2.df = r12     // Catch: java.lang.Exception -> L99
            java.lang.String r10 = "icon_url"
            java.lang.String r10 = r14.optString(r10)     // Catch: java.lang.Exception -> L99
            r2.pt = r10     // Catch: java.lang.Exception -> L99
            java.lang.String r10 = "app_name"
            java.lang.String r10 = r14.optString(r10)     // Catch: java.lang.Exception -> L99
            r2.pp = r10     // Catch: java.lang.Exception -> L99
            java.lang.String r10 = "package_name"
            java.lang.String r10 = r14.optString(r10)     // Catch: java.lang.Exception -> L99
            r2.q = r10     // Catch: java.lang.Exception -> L99
            java.lang.String r10 = "version_name"
            java.lang.String r10 = r14.optString(r10)     // Catch: java.lang.Exception -> L99
            r2.c = r10     // Catch: java.lang.Exception -> L99
            java.lang.String r10 = "developer_name"
            java.lang.String r10 = r14.optString(r10)     // Catch: java.lang.Exception -> L99
            r2.fw = r10     // Catch: java.lang.Exception -> L99
            java.lang.String r10 = "policy_url"
            java.lang.String r10 = r14.optString(r10)     // Catch: java.lang.Exception -> L99
            r2.rz = r10     // Catch: java.lang.Exception -> L99
            java.lang.String r10 = "permissions"
            org.json.JSONArray r10 = r14.optJSONArray(r10)     // Catch: java.lang.Exception -> L99
            if (r10 == 0) goto L7e
            r11 = r1
        L59:
            int r14 = r10.length()     // Catch: java.lang.Exception -> L99
            if (r11 >= r14) goto L7e
            java.lang.Object r14 = r10.get(r11)     // Catch: java.lang.Exception -> L99
            org.json.JSONObject r14 = (org.json.JSONObject) r14     // Catch: java.lang.Exception -> L99
            java.util.List<android.util.Pair<java.lang.String, java.lang.String>> r3 = r2.ux     // Catch: java.lang.Exception -> L99
            android.util.Pair r4 = new android.util.Pair     // Catch: java.lang.Exception -> L99
            java.lang.String r5 = "permission_name"
            java.lang.String r5 = r14.optString(r5)     // Catch: java.lang.Exception -> L99
            java.lang.String r6 = "permission_desc"
            java.lang.String r14 = r14.optString(r6)     // Catch: java.lang.Exception -> L99
            r4.<init>(r5, r14)     // Catch: java.lang.Exception -> L99
            r3.add(r4)     // Catch: java.lang.Exception -> L99
            int r11 = r11 + 1
            goto L59
        L7e:
            com.ss.android.downloadlib.addownload.compliance.q r10 = com.ss.android.downloadlib.addownload.compliance.q.rg()     // Catch: java.lang.Exception -> L99
            r10.rg(r2)     // Catch: java.lang.Exception -> L99
            com.ss.android.downloadlib.addownload.compliance.pt r3 = com.ss.android.downloadlib.addownload.compliance.pt.rg()     // Catch: java.lang.Exception -> L99
            long r4 = r2.rg()     // Catch: java.lang.Exception -> L99
            java.lang.String r8 = r2.pt     // Catch: java.lang.Exception -> L99
            r6 = r12
            r3.rg(r4, r6, r8)     // Catch: java.lang.Exception -> L99
            r10 = 1
            return r10
        L95:
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r0, r12)     // Catch: java.lang.Exception -> L99
            return r1
        L99:
            r10 = move-exception
            com.ss.android.downloadlib.exception.q r11 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r14 = "AdLpComplianceManager parseResponse"
            r11.rg(r10, r14)
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r0, r12)
            return r1
    }

    static boolean rg(com.ss.android.downloadlib.addownload.compliance.df r0, long r1, long r3, java.lang.String r5) {
            boolean r0 = r0.rg(r1, r3, r5)
            return r0
    }

    public android.app.Activity df() {
            r2 = this;
            java.lang.ref.SoftReference<android.app.Activity> r0 = r2.rg
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            r1 = 0
            r2.rg = r1
            return r0
    }

    public void df(long r3) {
            r2 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r0 = r0.pp(r3)
            com.ss.android.downloadlib.fw r1 = com.ss.android.downloadlib.fw.rg()
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r0 = r0.getDownloadUrl()
            com.ss.android.downloadlib.addownload.pp r0 = r1.rg(r0)
            if (r0 == 0) goto L1d
            r3 = 1
            r0.rg(r3, r3)
            goto L2b
        L1d:
            r0 = 11
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r0, r3)
            com.ss.android.downloadlib.exception.q r3 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r4 = "startDownload handler null"
            r3.df(r4)
        L2b:
            return
    }

    public void rg(long r1) {
            r0 = this;
            com.ss.android.downloadlib.activity.TTDelegateActivity.rg(r1)
            return
    }

    public void rg(android.app.Activity r2) {
            r1 = this;
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            r0.<init>(r2)
            r1.rg = r0
            return
    }

    public boolean rg(com.ss.android.download.api.download.DownloadModel r5) {
            r4 = this;
            boolean r0 = r5.isAd()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r2 = "ad_lp_show_app_dialog"
            int r0 = r0.optInt(r2)
            if (r0 != 0) goto L15
            return r1
        L15:
            com.ss.android.download.api.model.DeepLink r0 = r5.getDeepLink()
            if (r0 != 0) goto L1d
            r5 = 0
            goto L25
        L1d:
            com.ss.android.download.api.model.DeepLink r5 = r5.getDeepLink()
            java.lang.String r5 = r5.getWebUrl()
        L25:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L2c
            return r1
        L2c:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r2 = "ad_allow_web_url_regex"
            java.lang.String r3 = ".+(www.chengzijianzhan.com|www.toutiaopage.com/tetris/page|ad.toutiao.com/tetris/page).+"
            java.lang.String r0 = r0.optString(r2, r3)
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            java.util.regex.Matcher r5 = r0.matcher(r5)
            boolean r5 = r5.matches()
            if (r5 == 0) goto L47
            return r1
        L47:
            r5 = 1
            return r5
    }

    public boolean rg(com.ss.android.downloadlib.addownload.model.pp r17) {
            r16 = this;
            r1 = r17
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            java.lang.String r0 = r0.getLogExtra()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r0 != 0) goto L31
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L22
            com.ss.android.download.api.download.DownloadModel r4 = r1.df     // Catch: java.lang.Exception -> L22
            java.lang.String r4 = r4.getLogExtra()     // Catch: java.lang.Exception -> L22
            r0.<init>(r4)     // Catch: java.lang.Exception -> L22
            java.lang.String r4 = "convert_id"
            long r4 = com.ss.android.downloadlib.utils.b.rg(r0, r4)     // Catch: java.lang.Exception -> L22
            goto L27
        L22:
            r0 = move-exception
            r0.printStackTrace()
            r4 = r2
        L27:
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 > 0) goto L2f
            r0 = 3
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r0, r1)
        L2f:
            r11 = r4
            goto L40
        L31:
            r0 = 9
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r0, r1)
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r4 = "requestAppInfo getLogExtra null"
            r0.rg(r4)
            r11 = r2
        L40:
            long r13 = r1.rg
            com.ss.android.downloadlib.addownload.compliance.q r0 = com.ss.android.downloadlib.addownload.compliance.q.rg()
            com.ss.android.downloadlib.addownload.model.df r0 = r0.rg(r11, r13)
            r15 = 1
            if (r0 == 0) goto L6a
            com.ss.android.downloadlib.addownload.compliance.pt r4 = com.ss.android.downloadlib.addownload.compliance.pt.rg()
            long r5 = r0.rg()
            java.lang.String r9 = r0.pt
            r7 = r13
            r4.rg(r5, r7, r9)
            long r2 = r0.rg()
            r4 = r16
            r4.rg(r2)
            java.lang.String r0 = "lp_app_dialog_try_show"
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r0, r1)
            return r15
        L6a:
            r4 = r16
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r2 <= 0) goto L7d
            java.lang.String r2 = "convert_id="
            r0.append(r2)
            r0.append(r11)
        L7d:
            com.ss.android.download.api.download.DownloadModel r2 = r1.df
            java.lang.String r2 = r2.getPackageName()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto La2
            int r2 = r0.length()
            if (r2 <= 0) goto L94
            java.lang.String r2 = "&"
            r0.append(r2)
        L94:
            java.lang.String r2 = "package_name="
            r0.append(r2)
            com.ss.android.download.api.download.DownloadModel r2 = r1.df
            java.lang.String r2 = r2.getPackageName()
            r0.append(r2)
        La2:
            int r2 = r0.length()
            if (r2 > 0) goto Lae
            r0 = 6
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r0, r1)
            r0 = 0
            return r0
        Lae:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "https://apps.oceanengine.com/customer/api/app/pkg_info?"
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.ss.android.downloadlib.addownload.compliance.df$2 r1 = new com.ss.android.downloadlib.addownload.compliance.df$2
            r5 = r1
            r6 = r16
            r7 = r11
            r9 = r13
            r5.<init>(r6, r7, r9)
            com.ss.android.downloadlib.utils.Chain r0 = com.ss.android.downloadlib.utils.Chain.rg(r1, r0)
            com.ss.android.downloadlib.addownload.compliance.df$1 r1 = new com.ss.android.downloadlib.addownload.compliance.df$1
            r5 = r1
            r5.<init>(r6, r7, r9)
            com.ss.android.downloadlib.utils.Chain r0 = r0.rg(r1)
            r0.rg()
            return r15
    }
}

package com.mbridge.msdk.mbbanner.common.c;

public class b {
    private static final java.lang.String a = null;
    private android.content.Context b;
    private int c;
    private com.mbridge.msdk.mbbanner.common.a.c d;
    private com.mbridge.msdk.mbbanner.common.util.a e;
    private com.mbridge.msdk.mbbanner.common.b.b f;
    private com.mbridge.msdk.mbbanner.common.b.d g;
    private volatile boolean h;
    private java.util.Timer i;
    private volatile java.util.List<java.lang.String> j;
    private volatile boolean k;
    private volatile boolean l;
    private volatile boolean m;




    private static class a implements com.mbridge.msdk.foundation.same.c.c {
        private com.mbridge.msdk.mbbanner.common.c.b a;
        private java.lang.String b;

        public a(com.mbridge.msdk.mbbanner.common.c.b r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void onFailedLoad(java.lang.String r4, java.lang.String r5) {
                r3 = this;
                boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r4 == 0) goto Ld
                java.lang.String r4 = com.mbridge.msdk.mbbanner.common.c.b.a()
                java.lang.String r0 = "DownloadImageListener campaign image fail"
                com.mbridge.msdk.foundation.tools.z.b(r4, r0)
            Ld:
                com.mbridge.msdk.mbbanner.common.c.b r4 = r3.a
                if (r4 == 0) goto L18
                java.lang.String r0 = r3.b
                r1 = 1
                r2 = 0
                r4.a(r0, r1, r5, r2)
            L18:
                return
        }

        @Override
        public final void onSuccessLoad(android.graphics.Bitmap r3, java.lang.String r4) {
                r2 = this;
                boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r3 == 0) goto Ld
                java.lang.String r3 = com.mbridge.msdk.mbbanner.common.c.b.a()
                java.lang.String r0 = "DownloadImageListener campaign image success"
                com.mbridge.msdk.foundation.tools.z.b(r3, r0)
            Ld:
                com.mbridge.msdk.mbbanner.common.c.b r3 = r2.a
                if (r3 == 0) goto L17
                java.lang.String r0 = r2.b
                r1 = 1
                r3.a(r0, r1, r4, r1)
            L17:
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.c.b> r0 = com.mbridge.msdk.mbbanner.common.c.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.c.b.a = r0
            return
    }

    public b(android.content.Context r3, com.mbridge.msdk.mbbanner.common.a.c r4, com.mbridge.msdk.mbbanner.common.b.b r5, com.mbridge.msdk.mbbanner.common.util.a r6) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r2.h = r0
            java.util.Timer r1 = new java.util.Timer
            r1.<init>()
            r2.i = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.j = r1
            r2.k = r0
            r2.l = r0
            r2.m = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.b = r3
            r2.d = r4
            r2.f = r5
            r2.e = r6
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.c.b.a
            return r0
    }

    private java.lang.String a(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            java.lang.String r1 = ""
            if (r0 != 0) goto L9a
            r0 = 0
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.g     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ak.a(r8)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            if (r4 == 0) goto L25
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
        L25:
            java.lang.String r4 = ".html"
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r4.<init>(r2, r3)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            android.net.Uri r2 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r2.getPath()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            byte[] r0 = r8.getBytes()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            r2.write(r0)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            r2.flush()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            java.lang.String r0 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L57
            r2.close()     // Catch: java.lang.Exception -> L4e
            goto L52
        L4e:
            r1 = move-exception
            r1.printStackTrace()
        L52:
            r1 = r0
            goto L6c
        L54:
            r7 = move-exception
            r0 = r2
            goto L8f
        L57:
            r0 = move-exception
            r5 = r2
            r2 = r0
            r0 = r5
            goto L5f
        L5c:
            r7 = move-exception
            goto L8f
        L5e:
            r2 = move-exception
        L5f:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L6c
            r0.close()     // Catch: java.lang.Exception -> L68
            goto L6c
        L68:
            r0 = move-exception
            r0.printStackTrace()
        L6c:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r2 = r0.exists()
            r3 = 2
            if (r2 == 0) goto L8a
            boolean r2 = r0.isFile()
            if (r2 == 0) goto L8a
            boolean r0 = r0.canRead()
            if (r0 != 0) goto L85
            goto L8a
        L85:
            r0 = 1
            r6.a(r7, r3, r8, r0)
            goto L9a
        L8a:
            r0 = 0
            r6.a(r7, r3, r8, r0)
            goto L9a
        L8f:
            if (r0 == 0) goto L99
            r0.close()     // Catch: java.lang.Exception -> L95
            goto L99
        L95:
            r8 = move-exception
            r8.printStackTrace()
        L99:
            throw r7
        L9a:
            return r1
    }

    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r7, com.mbridge.msdk.foundation.entity.CampaignUnit r8) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r8 == 0) goto Lce
            java.util.ArrayList r1 = r8.getAds()     // Catch: java.lang.Exception -> Lca
            if (r1 == 0) goto Lce
            java.util.ArrayList r1 = r8.getAds()     // Catch: java.lang.Exception -> Lca
            int r1 = r1.size()     // Catch: java.lang.Exception -> Lca
            if (r1 <= 0) goto Lce
            java.util.ArrayList r8 = r8.getAds()     // Catch: java.lang.Exception -> Lca
            java.lang.String r1 = com.mbridge.msdk.mbbanner.common.c.b.a     // Catch: java.lang.Exception -> Lca
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lca
            r2.<init>()     // Catch: java.lang.Exception -> Lca
            java.lang.String r3 = "getNeedShowList 总共返回的campaign有："
            r2.append(r3)     // Catch: java.lang.Exception -> Lca
            int r3 = r8.size()     // Catch: java.lang.Exception -> Lca
            r2.append(r3)     // Catch: java.lang.Exception -> Lca
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.foundation.tools.ae.a(r8)     // Catch: java.lang.Exception -> Lca
            r1 = 0
        L39:
            int r2 = r8.size()     // Catch: java.lang.Exception -> Lca
            if (r1 >= r2) goto Laf
            java.lang.Object r2 = r8.get(r1)     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> Lca
            if (r2 == 0) goto Lac
            int r3 = r2.getOfferType()     // Catch: java.lang.Exception -> Lca
            r4 = 99
            if (r3 == r4) goto Lac
            java.lang.String r3 = r2.getBannerUrl()     // Catch: java.lang.Exception -> Lca
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lca
            if (r3 == 0) goto L6d
            java.lang.String r3 = r2.getBannerHtml()     // Catch: java.lang.Exception -> Lca
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lca
            if (r3 == 0) goto L6d
            java.lang.String r3 = r2.getImageUrl()     // Catch: java.lang.Exception -> Lca
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lca
            if (r3 != 0) goto Lac
        L6d:
            boolean r3 = com.mbridge.msdk.foundation.tools.ae.b(r2)     // Catch: java.lang.Exception -> Lca
            r4 = 1
            if (r3 == 0) goto L86
            android.content.Context r3 = r6.b     // Catch: java.lang.Exception -> Lca
            java.lang.String r5 = r2.getPackageName()     // Catch: java.lang.Exception -> Lca
            boolean r3 = com.mbridge.msdk.foundation.tools.ae.c(r3, r5)     // Catch: java.lang.Exception -> Lca
            if (r3 == 0) goto L82
            r3 = r4
            goto L83
        L82:
            r3 = 2
        L83:
            r2.setRtinsType(r3)     // Catch: java.lang.Exception -> Lca
        L86:
            int r3 = r2.getWtick()     // Catch: java.lang.Exception -> Lca
            if (r3 == r4) goto La9
            android.content.Context r3 = r6.b     // Catch: java.lang.Exception -> Lca
            java.lang.String r4 = r2.getPackageName()     // Catch: java.lang.Exception -> Lca
            boolean r3 = com.mbridge.msdk.foundation.tools.ae.c(r3, r4)     // Catch: java.lang.Exception -> Lca
            if (r3 != 0) goto L99
            goto La9
        L99:
            boolean r3 = com.mbridge.msdk.foundation.tools.ae.b(r2)     // Catch: java.lang.Exception -> Lca
            if (r3 == 0) goto La3
            r0.add(r2)     // Catch: java.lang.Exception -> Lca
            goto Lac
        La3:
            int r3 = com.mbridge.msdk.foundation.same.a.E     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.foundation.tools.ae.a(r7, r2, r3)     // Catch: java.lang.Exception -> Lca
            goto Lac
        La9:
            r0.add(r2)     // Catch: java.lang.Exception -> Lca
        Lac:
            int r1 = r1 + 1
            goto L39
        Laf:
            java.lang.String r7 = com.mbridge.msdk.mbbanner.common.c.b.a     // Catch: java.lang.Exception -> Lca
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lca
            r8.<init>()     // Catch: java.lang.Exception -> Lca
            java.lang.String r1 = "getNeedShowList 返回有以下带有视频素材的campaign："
            r8.append(r1)     // Catch: java.lang.Exception -> Lca
            int r1 = r0.size()     // Catch: java.lang.Exception -> Lca
            r8.append(r1)     // Catch: java.lang.Exception -> Lca
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.foundation.tools.z.b(r7, r8)     // Catch: java.lang.Exception -> Lca
            goto Lce
        Lca:
            r7 = move-exception
            r7.printStackTrace()
        Lce:
            return r0
    }

    static void a(com.mbridge.msdk.mbbanner.common.c.b r6, java.lang.String r7, com.mbridge.msdk.foundation.entity.CampaignUnit r8) {
            if (r8 != 0) goto L12
            com.mbridge.msdk.mbbanner.common.util.a r8 = r6.e
            com.mbridge.msdk.mbbanner.common.b.b r0 = r6.f
            java.lang.String r1 = "campaignUnit is NULL!"
            r8.a(r0, r1, r7)
            com.mbridge.msdk.mbbanner.common.b.d r6 = r6.g
            r6.a(r7)
            goto L137
        L12:
            java.util.List r0 = r6.a(r7, r8)
            java.lang.Thread r1 = new java.lang.Thread
            com.mbridge.msdk.mbbanner.common.c.b$3 r2 = new com.mbridge.msdk.mbbanner.common.c.b$3
            r2.<init>(r6, r8)
            r1.<init>(r2)
            r1.start()
            if (r0 == 0) goto L122
            int r1 = r0.size()
            if (r1 != 0) goto L2d
            goto L122
        L2d:
            java.lang.String r1 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r2 = "在子线程处理业务逻辑 开始"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            r1 = 60000(0xea60, float:8.4078E-41)
            com.mbridge.msdk.mbbanner.common.c.b$1 r2 = new com.mbridge.msdk.mbbanner.common.c.b$1
            r2.<init>(r6, r7)
            java.util.Timer r3 = r6.i
            long r4 = (long) r1
            r3.schedule(r2, r4)
            java.lang.String r8 = r8.getSessionId()
            com.mbridge.msdk.mbbanner.common.a.c r1 = r6.d
            r1.a(r8)
            int r8 = r6.c
            r1 = 0
            if (r0 == 0) goto L5b
            int r2 = r0.size()     // Catch: java.lang.Exception -> L8d
            if (r2 <= 0) goto L5b
            int r2 = r0.size()     // Catch: java.lang.Exception -> L8d
            int r8 = r8 + r2
        L5b:
            com.mbridge.msdk.mbbanner.common.a.c r2 = r6.d     // Catch: java.lang.Exception -> L8d
            int r2 = r2.c()     // Catch: java.lang.Exception -> L8d
            if (r8 <= r2) goto L6b
            java.lang.String r8 = com.mbridge.msdk.mbbanner.common.c.b.a     // Catch: java.lang.Exception -> L8d
            java.lang.String r2 = "saveNextOffset 重置offset为0"
            com.mbridge.msdk.foundation.tools.z.b(r8, r2)     // Catch: java.lang.Exception -> L8d
            r8 = r1
        L6b:
            java.lang.String r2 = com.mbridge.msdk.mbbanner.common.c.b.a     // Catch: java.lang.Exception -> L8d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8d
            r3.<init>()     // Catch: java.lang.Exception -> L8d
            java.lang.String r4 = "saveNextOffset 算出 下次的offset是:"
            r3.append(r4)     // Catch: java.lang.Exception -> L8d
            r3.append(r8)     // Catch: java.lang.Exception -> L8d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Exception -> L8d
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r7)     // Catch: java.lang.Exception -> L8d
            if (r2 == 0) goto L91
            com.mbridge.msdk.mbbanner.common.a.c r2 = r6.d     // Catch: java.lang.Exception -> L8d
            r2.a(r8)     // Catch: java.lang.Exception -> L8d
            goto L91
        L8d:
            r8 = move-exception
            r8.printStackTrace()
        L91:
            java.lang.Object r8 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = (com.mbridge.msdk.foundation.entity.CampaignEx) r8
            java.lang.String r2 = r8.getBannerUrl()
            java.lang.String r2 = r2.trim()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 1
            if (r3 != 0) goto Ldf
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Lb8
            com.mbridge.msdk.mbbanner.common.b.f r3 = new com.mbridge.msdk.mbbanner.common.b.f
            r3.<init>(r6, r7)
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r5 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            r5.download(r2, r3)
        Lb8:
            if (r0 == 0) goto L11e
            int r2 = r0.size()
            if (r2 <= 0) goto L11e
        Lc0:
            int r2 = r0.size()
            if (r1 >= r2) goto L11e
            java.lang.Object r2 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            java.lang.String r3 = r8.getBannerUrl()
            r2.setBannerUrl(r3)
            java.lang.Object r2 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            r2.setHasMBTplMark(r4)
            int r1 = r1 + 1
            goto Lc0
        Ldf:
            java.lang.String r8 = r8.getBannerHtml()
            java.lang.String r8 = r8.trim()
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 != 0) goto L11a
            java.lang.String r2 = r6.a(r7, r8)
            if (r0 == 0) goto L11e
            int r3 = r0.size()
            if (r3 <= 0) goto L11e
        Lf9:
            int r3 = r0.size()
            if (r1 >= r3) goto L11e
            java.lang.Object r3 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            r3.setBannerHtml(r2)
            java.lang.Object r3 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            java.lang.String r4 = "<MBTPLMARK>"
            boolean r4 = r8.contains(r4)
            r3.setHasMBTplMark(r4)
            int r1 = r1 + 1
            goto Lf9
        L11a:
            r6.l = r4
            r6.k = r4
        L11e:
            r6.a(r7, r0)
            goto L137
        L122:
            java.lang.String r8 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r0 = "tryDownloadOnLoadSuccess 返回的campaign 没有符合下载规则的"
            com.mbridge.msdk.foundation.tools.z.b(r8, r0)
            com.mbridge.msdk.mbbanner.common.util.a r8 = r6.e
            com.mbridge.msdk.mbbanner.common.b.b r0 = r6.f
            java.lang.String r1 = "APP ALREADY INSTALLED"
            r8.a(r0, r1, r7)
            com.mbridge.msdk.mbbanner.common.b.d r6 = r6.g
            r6.a(r7)
        L137:
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.m
            if (r0 != 0) goto L31
            boolean r0 = r2.k
            if (r0 != 0) goto Lc
            boolean r0 = r2.l
            if (r0 == 0) goto L31
        Lc:
            java.util.List<java.lang.String> r0 = r2.j
            int r0 = r0.size()
            if (r0 != 0) goto L31
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r1 = "在子线程处理业务逻辑 完成"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            r0 = 1
            r2.h = r0
            r2.m = r0
            java.util.Timer r0 = r2.i
            r0.cancel()
            com.mbridge.msdk.mbbanner.common.util.a r0 = r2.e
            com.mbridge.msdk.mbbanner.common.b.b r1 = r2.f
            r0.a(r1, r3)
            com.mbridge.msdk.mbbanner.common.b.d r0 = r2.g
            r0.a(r3)
        L31:
            return
    }

    private void a(java.lang.String r4, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5) {
            r3 = this;
            if (r5 == 0) goto L3e
            int r0 = r5.size()
            if (r0 <= 0) goto L3e
            java.util.Iterator r5 = r5.iterator()
        Lc:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L3e
            java.lang.Object r0 = r5.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r1 = r0.getImageUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc
            java.util.List<java.lang.String> r1 = r3.j
            java.lang.String r2 = r0.getImageUrl()
            r1.add(r2)
            com.mbridge.msdk.mbbanner.common.c.b$a r1 = new com.mbridge.msdk.mbbanner.common.c.b$a
            r1.<init>(r3, r4)
            android.content.Context r2 = r3.b
            com.mbridge.msdk.foundation.same.c.b r2 = com.mbridge.msdk.foundation.same.c.b.a(r2)
            java.lang.String r0 = r0.getImageUrl()
            r2.a(r0, r1)
            goto Lc
        L3e:
            return
    }

    static boolean a(com.mbridge.msdk.mbbanner.common.c.b r0) {
            boolean r0 = r0.h
            return r0
    }

    static boolean a(com.mbridge.msdk.mbbanner.common.c.b r0, boolean r1) {
            r0.h = r1
            return r1
    }

    private int b(java.lang.String r3) {
            r2 = this;
            r3 = 0
            com.mbridge.msdk.mbbanner.common.a.c r0 = r2.d     // Catch: java.lang.Exception -> L12
            int r0 = r0.b()     // Catch: java.lang.Exception -> L12
            com.mbridge.msdk.mbbanner.common.a.c r1 = r2.d     // Catch: java.lang.Exception -> L12
            int r1 = r1.c()     // Catch: java.lang.Exception -> L12
            if (r0 <= r1) goto L10
            goto L16
        L10:
            r3 = r0
            goto L16
        L12:
            r0 = move-exception
            r0.printStackTrace()
        L16:
            return r3
    }

    static com.mbridge.msdk.mbbanner.common.b.b b(com.mbridge.msdk.mbbanner.common.c.b r0) {
            com.mbridge.msdk.mbbanner.common.b.b r0 = r0.f
            return r0
    }

    static com.mbridge.msdk.mbbanner.common.util.a c(com.mbridge.msdk.mbbanner.common.c.b r0) {
            com.mbridge.msdk.mbbanner.common.util.a r0 = r0.e
            return r0
    }

    static com.mbridge.msdk.mbbanner.common.b.d d(com.mbridge.msdk.mbbanner.common.c.b r0) {
            com.mbridge.msdk.mbbanner.common.b.d r0 = r0.g
            return r0
    }

    static android.content.Context e(com.mbridge.msdk.mbbanner.common.c.b r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    public final void a(java.lang.String r2, int r3, java.lang.String r4, boolean r5) {
            r1 = this;
            r0 = 1
            if (r5 != 0) goto L43
            r4 = -1
            if (r3 != r4) goto L21
            java.lang.String r3 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = " unitId ="
            r4.append(r5)
            r4.append(r2)
            java.lang.String r5 = " --> time out!"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.d(r3, r4)
        L21:
            java.util.Timer r3 = r1.i
            r3.cancel()
            java.lang.String r3 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r4 = "在子线程处理业务逻辑 完成"
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)
            java.lang.String r3 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r4 = "downloadResource--> Fail"
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)
            r1.h = r0
            com.mbridge.msdk.mbbanner.common.util.a r3 = r1.e
            com.mbridge.msdk.mbbanner.common.b.b r4 = r1.f
            r3.b(r4, r2)
            com.mbridge.msdk.mbbanner.common.b.d r3 = r1.g
            r3.a(r2)
            return
        L43:
            if (r3 != r0) goto L62
            java.lang.String r3 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r5 = "downloadResource--> Success Image"
            com.mbridge.msdk.foundation.tools.z.b(r3, r5)
            monitor-enter(r1)
            java.util.List<java.lang.String> r3 = r1.j     // Catch: java.lang.Throwable -> L5f
            r3.remove(r4)     // Catch: java.lang.Throwable -> L5f
            java.util.List<java.lang.String> r3 = r1.j     // Catch: java.lang.Throwable -> L5f
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L5f
            if (r3 != 0) goto L5d
            r1.a(r2)     // Catch: java.lang.Throwable -> L5f
        L5d:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5f
            goto L81
        L5f:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5f
            throw r2
        L62:
            r4 = 2
            if (r3 != r4) goto L72
            java.lang.String r3 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r4 = "downloadResource--> Success banner_html"
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)
            r1.l = r0
            r1.a(r2)
            goto L81
        L72:
            r4 = 3
            if (r3 != r4) goto L81
            java.lang.String r3 = com.mbridge.msdk.mbbanner.common.c.b.a
            java.lang.String r4 = "downloadResource--> Success banner_url"
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)
            r1.k = r0
            r1.a(r2)
        L81:
            return
    }

    public final void a(java.lang.String r8, java.lang.String r9, com.mbridge.msdk.mbbanner.common.a.b r10, com.mbridge.msdk.mbbanner.common.b.d r11) {
            r7 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.c.b.a     // Catch: java.lang.Exception -> L60
            java.lang.String r1 = "requestCampaign--> started"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L60
            r7.g = r11     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.mbbanner.common.c.b$2 r11 = new com.mbridge.msdk.mbbanner.common.c.b$2     // Catch: java.lang.Exception -> L60
            r11.<init>(r7)     // Catch: java.lang.Exception -> L60
            r11.setUnitId(r9)     // Catch: java.lang.Exception -> L60
            r11.setPlacementId(r8)     // Catch: java.lang.Exception -> L60
            r8 = 296(0x128, float:4.15E-43)
            r11.setAdType(r8)     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.mbbanner.common.e.a r8 = new com.mbridge.msdk.mbbanner.common.e.a     // Catch: java.lang.Exception -> L60
            android.content.Context r0 = r7.b     // Catch: java.lang.Exception -> L60
            r8.<init>(r0)     // Catch: java.lang.Exception -> L60
            int r0 = r7.b(r9)     // Catch: java.lang.Exception -> L60
            r7.c = r0     // Catch: java.lang.Exception -> L60
            r1 = 0
            android.content.Context r2 = r7.b     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.mbbanner.common.a.c r0 = r7.d     // Catch: java.lang.Exception -> L60
            java.lang.String r4 = r0.a()     // Catch: java.lang.Exception -> L60
            int r5 = r7.c     // Catch: java.lang.Exception -> L60
            r3 = r9
            r6 = r10
            com.mbridge.msdk.foundation.same.net.g.d r0 = com.mbridge.msdk.mbbanner.common.a.d.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L60
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ae.g(r9)     // Catch: java.lang.Exception -> L60
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L60
            if (r2 != 0) goto L46
            java.lang.String r2 = "j"
            r0.a(r2, r1)     // Catch: java.lang.Exception -> L60
        L46:
            java.lang.String r10 = r10.c()     // Catch: java.lang.Exception -> L60
            boolean r1 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L60
            r2 = 1
            if (r1 != 0) goto L56
            r11.a(r10)     // Catch: java.lang.Exception -> L60
            r1 = r2
            goto L57
        L56:
            r1 = 0
        L57:
            com.mbridge.msdk.mbbanner.common.util.a r3 = r7.e     // Catch: java.lang.Exception -> L60
            r3.a(r1)     // Catch: java.lang.Exception -> L60
            r8.choiceV3OrV5BySetting(r2, r0, r11, r10)     // Catch: java.lang.Exception -> L60
            goto L74
        L60:
            r8 = move-exception
            r8.printStackTrace()
            com.mbridge.msdk.mbbanner.common.util.a r10 = r7.e
            com.mbridge.msdk.mbbanner.common.b.b r11 = r7.f
            java.lang.String r8 = r8.getMessage()
            r10.a(r11, r8, r9)
            com.mbridge.msdk.mbbanner.common.b.d r8 = r7.g
            r8.a(r9)
        L74:
            return
    }
}

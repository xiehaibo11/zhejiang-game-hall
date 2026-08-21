package com.sigmob.sdk.base;

public abstract class g {
    private static java.util.HashMap<java.lang.String, com.sigmob.sdk.base.b> c;
    protected com.sigmob.windad.WindAdRequest a;
    private com.sigmob.sdk.base.b b;
    private int d;
    private boolean e;
    private java.lang.String f;
    private int g;
    private java.lang.String h;
    public int init_filters;
    public int loadCount;
    public com.czhj.sdk.common.models.AdStatus mADStatus;
    public int pIdEmpty_filters;



    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.sigmob.sdk.base.g.c = r0
            return
    }

    protected g(com.sigmob.windad.WindAdRequest r2, boolean r3) {
            r1 = this;
            r1.<init>()
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r1.mADStatus = r0
            r0 = 0
            r1.pIdEmpty_filters = r0
            r1.init_filters = r0
            r1.loadCount = r0
            r1.d = r0
            java.lang.String r0 = "CNY"
            r1.h = r0
            r1.a = r2
            r2.setHalfInterstitial(r3)
            return
    }

    static com.sigmob.sdk.base.b a(com.sigmob.sdk.base.g r0) {
            com.sigmob.sdk.base.b r0 = r0.b
            return r0
    }

    private com.sigmob.sdk.base.b a(java.lang.String r6) {
            r5 = this;
            com.sigmob.sdk.base.b r0 = new com.sigmob.sdk.base.b
            r0.<init>()
            r1 = 0
            com.sigmob.sdk.base.db.a r2 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L34
            android.database.sqlite.SQLiteDatabase r2 = r2.getReadableDatabase()     // Catch: java.lang.Throwable -> L34
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L34
            r3.<init>()     // Catch: java.lang.Throwable -> L34
            java.lang.String r4 = "select error_code, count(*) as num from adload_event where adslot_id = '"
            r3.append(r4)     // Catch: java.lang.Throwable -> L34
            r3.append(r6)     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = "' group by adslot_id"
            r3.append(r6)     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L34
            android.database.Cursor r1 = r2.rawQuery(r6, r1)     // Catch: java.lang.Throwable -> L34
            r5.a(r0, r1)     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L47
            boolean r6 = r1.isClosed()
            if (r6 != 0) goto L47
            goto L44
        L34:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L48
            com.czhj.sdk.logger.SigmobLog.e(r6)     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L47
            boolean r6 = r1.isClosed()
            if (r6 != 0) goto L47
        L44:
            r1.close()
        L47:
            return r0
        L48:
            r6 = move-exception
            if (r1 == 0) goto L54
            boolean r0 = r1.isClosed()
            if (r0 != 0) goto L54
            r1.close()
        L54:
            throw r6
    }

    private void a(com.sigmob.sdk.base.b r4, android.database.Cursor r5) {
            r3 = this;
            if (r5 == 0) goto L3d
            boolean r0 = r5.moveToFirst()
            if (r0 == 0) goto L3d
            java.lang.String r0 = "error_code"
            int r0 = r5.getColumnIndexOrThrow(r0)
            int r0 = r5.getInt(r0)
            java.lang.String r1 = "num"
            int r1 = r5.getColumnIndexOrThrow(r1)
            int r1 = r5.getInt(r1)
        L1c:
            if (r0 == 0) goto L20
            r4.a = r1
        L20:
            int r2 = r4.b
            int r2 = r2 + r1
            r4.b = r2
            switch(r0) {
                case 600200: goto L35;
                case 600201: goto L35;
                case 600203: goto L35;
                case 600204: goto L35;
                case 600900: goto L32;
                case 600905: goto L2f;
                case 610012: goto L2c;
                case 610013: goto L29;
                default: goto L28;
            }
        L28:
            goto L37
        L29:
            r4.d = r1
            goto L37
        L2c:
            r4.g = r1
            goto L37
        L2f:
            r4.c = r1
            goto L37
        L32:
            r4.e = r1
            goto L37
        L35:
            r4.f = r1
        L37:
            boolean r2 = r5.moveToNext()
            if (r2 != 0) goto L1c
        L3d:
            return
    }

    private void a(java.lang.String r7, int r8) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L7
            return
        L7:
            com.sigmob.sdk.base.db.a r0 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L4d
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L4d
            com.czhj.sdk.common.Database.SQLiteBuider$Insert$Builder r1 = new com.czhj.sdk.common.Database.SQLiteBuider$Insert$Builder     // Catch: java.lang.Throwable -> L4d
            r1.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "adload_event"
            r1.setTableName(r2)     // Catch: java.lang.Throwable -> L4d
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L4d
            r2.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "adslot_id"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "error_code"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L4d
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "timestamp"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4d
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L4d
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L4d
            r1.setColumnValues(r2)     // Catch: java.lang.Throwable -> L4d
            com.sigmob.sdk.base.db.a r2 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L4d
            com.czhj.sdk.common.Database.SQLiteBuider$Insert r1 = r1.build()     // Catch: java.lang.Throwable -> L4d
            com.sigmob.sdk.base.g$1 r3 = new com.sigmob.sdk.base.g$1     // Catch: java.lang.Throwable -> L4d
            r3.<init>(r6, r7, r8)     // Catch: java.lang.Throwable -> L4d
            r2.a(r0, r1, r3)     // Catch: java.lang.Throwable -> L4d
            goto L55
        L4d:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r7)
        L55:
            return
    }

    private void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.List r0 = r2.c()
            if (r0 == 0) goto L2f
            java.util.List r0 = r2.c()
            int r0 = r0.size()
            if (r0 <= 0) goto L2f
            r0 = 0
        L11:
            java.util.List r1 = r2.c()
            int r1 = r1.size()
            if (r0 >= r1) goto L2f
            java.util.List r1 = r2.c()
            java.lang.Object r1 = r1.get(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
            com.sigmob.sdk.base.models.SigMacroCommon r1 = r1.getMacroCommon()
            r1.addMarcoKey(r3, r4)
            int r0 = r0 + 1
            goto L11
        L2f:
            return
    }

    static void b(com.sigmob.sdk.base.g r0) {
            r0.d()
            return
    }

    private void b(java.lang.String r6) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L7
            return
        L7:
            com.sigmob.sdk.base.db.a r0 = com.sigmob.sdk.base.db.a.a()     // Catch: java.lang.Throwable -> L1d
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "adload_event"
            java.lang.String r2 = "adslot_id=?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L1d
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Throwable -> L1d
            r0.delete(r1, r2, r3)     // Catch: java.lang.Throwable -> L1d
            goto L25
        L1d:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
        L25:
            return
    }

    private void d() {
            r1 = this;
            r0 = 0
            r1.pIdEmpty_filters = r0
            java.lang.String r0 = r1.a()
            r1.b(r0)
            com.sigmob.sdk.base.b r0 = r1.b
            r0.a()
            return
    }

    protected java.lang.String a() {
            r1 = this;
            com.sigmob.windad.WindAdRequest r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getPlacementId()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    protected abstract void a(com.sigmob.windad.WindAdError r1);

    protected void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    protected void b() {
            r4 = this;
            com.sigmob.windad.WindAdRequest r0 = r4.a
            com.sigmob.sdk.base.g$2 r1 = new com.sigmob.sdk.base.g$2
            r1.<init>(r4)
            java.lang.String r2 = "request"
            java.lang.String r3 = "init"
            com.sigmob.sdk.base.common.z.a(r2, r3, r0, r1)
            return
    }

    protected abstract java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> c();

    public int getBidFloor() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public java.lang.String getBid_token() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public java.lang.String getCurrency() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public abstract java.lang.String getEcpm();

    public boolean loadAd() {
            r2 = this;
            r0 = 0
            r2.e = r0
            r1 = 0
            r2.f = r1
            return r0
    }

    public boolean loadAd(java.lang.String r2) {
            r1 = this;
            r0 = 1
            r1.e = r0
            r1.f = r2
            r2 = 0
            return r2
    }

    public boolean loadAdFilter() {
            r6 = this;
            com.sigmob.windad.WindAdRequest r0 = r6.a
            r1 = 1
            if (r0 == 0) goto Le4
            java.lang.String r0 = r0.getPlacementId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L11
            goto Le4
        L11:
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            boolean r0 = r0.isInit()
            if (r0 != 0) goto L26
            int r0 = r6.init_filters
            int r0 = r0 + r1
            r6.init_filters = r0
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_NOT_INIT
            java.lang.String r2 = "WindAds not initialize"
            goto Led
        L26:
            java.util.HashMap<java.lang.String, com.sigmob.sdk.base.b> r0 = com.sigmob.sdk.base.g.c
            java.lang.String r2 = r6.a()
            java.lang.Object r0 = r0.get(r2)
            com.sigmob.sdk.base.b r0 = (com.sigmob.sdk.base.b) r0
            r6.b = r0
            if (r0 != 0) goto L4f
            java.lang.String r0 = r6.a()
            com.sigmob.sdk.base.b r0 = r6.a(r0)
            r6.b = r0
            int r2 = r6.init_filters
            r0.e = r2
            java.util.HashMap<java.lang.String, com.sigmob.sdk.base.b> r0 = com.sigmob.sdk.base.g.c
            java.lang.String r2 = r6.a()
            com.sigmob.sdk.base.b r3 = r6.b
            r0.put(r2, r3)
        L4f:
            boolean r0 = r6.e
            if (r0 == 0) goto L66
            java.lang.String r0 = r6.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L66
            com.sigmob.sdk.base.b r0 = r6.b
            int r2 = r0.h
            int r2 = r2 + r1
            r0.h = r2
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_BID_TOKEN_IS_EMPTY
            goto Lf0
        L66:
            com.czhj.sdk.common.models.AdStatus r0 = r6.mADStatus
            com.czhj.sdk.common.models.AdStatus r2 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            if (r0 == r2) goto Le2
            com.czhj.sdk.common.models.AdStatus r0 = r6.mADStatus
            com.czhj.sdk.common.models.AdStatus r2 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            if (r0 != r2) goto L7d
            com.sigmob.sdk.base.b r0 = r6.b
            int r2 = r0.g
            int r2 = r2 + r1
            r0.g = r2
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_AD_LOAD_FAIL_LOADING
            goto Lf0
        L7d:
            com.sigmob.sdk.Sigmob r0 = com.sigmob.sdk.Sigmob.getInstance()
            com.sigmob.windad.WindAdError r0 = r0.getSigMobError()
            if (r0 == 0) goto L97
            com.sigmob.sdk.Sigmob r0 = com.sigmob.sdk.Sigmob.getInstance()
            com.sigmob.windad.WindAdError r0 = r0.getSigMobError()
            com.sigmob.sdk.base.b r2 = r6.b
            int r3 = r2.f
            int r3 = r3 + r1
            r2.f = r3
            goto Lf0
        L97:
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            boolean r0 = r0.i()
            if (r0 != 0) goto Lb0
            java.lang.String r0 = "User GDPR Consent Status is denied"
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_GDPR_DENIED
            com.sigmob.sdk.base.b r2 = r6.b
            int r3 = r2.c
            int r3 = r3 + r1
            r2.c = r3
            goto Lf0
        Lb0:
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            long r2 = r0.F()
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto Le2
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            long r2 = r0.F()
            com.sigmob.sdk.base.b r0 = r6.b
            long r4 = r0.i
            long r2 = r2 + r4
            long r4 = java.lang.System.currentTimeMillis()
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto Le2
            java.lang.String r0 = "load interval Time error"
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.sigmob.sdk.base.b r0 = r6.b
            int r2 = r0.d
            int r2 = r2 + r1
            r0.d = r2
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_AD_LOAD_FAIL_INTERVAL
            goto Lf0
        Le2:
            r0 = 0
            goto Lf0
        Le4:
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY
            int r2 = r6.pIdEmpty_filters
            int r2 = r2 + r1
            r6.pIdEmpty_filters = r2
            java.lang.String r2 = "PlacementId with WindAdRequest can't is null"
        Led:
            com.czhj.sdk.logger.SigmobLog.e(r2)
        Lf0:
            com.sigmob.sdk.base.b r2 = r6.b
            r3 = 0
            if (r2 != 0) goto Lfb
            int r2 = r6.loadCount
            int r2 = r2 + r1
            r6.loadCount = r2
            goto L105
        Lfb:
            int r4 = r2.b
            int r5 = r6.loadCount
            int r5 = r5 + r1
            int r4 = r4 + r5
            r2.b = r4
            r6.loadCount = r3
        L105:
            if (r0 == 0) goto L133
            com.sigmob.sdk.base.b r2 = r6.b
            if (r2 != 0) goto L111
            int r2 = r6.d
            int r2 = r2 + r1
            r6.d = r2
            goto L128
        L111:
            java.lang.String r2 = r6.a()
            int r4 = r0.getErrorCode()
            r6.a(r2, r4)
            com.sigmob.sdk.base.b r2 = r6.b
            int r4 = r2.a
            int r5 = r6.d
            int r5 = r5 + r1
            int r4 = r4 + r5
            r2.a = r4
            r6.d = r3
        L128:
            com.sigmob.windad.WindAdRequest r1 = r6.a
            java.lang.String r2 = "request"
            com.sigmob.sdk.base.common.z.a(r2, r0, r1)
            r6.a(r0)
            return r3
        L133:
            com.sigmob.windad.WindAdRequest r0 = r6.a
            java.lang.String r0 = r0.getUserId()
            com.czhj.sdk.common.ClientMetadata.setUserId(r0)
            return r1
    }

    public void sendLossNotificationWithInfo(java.util.Map<java.lang.String, java.lang.Object> r9) {
            r8 = this;
            java.lang.String r0 = "ADN_ID"
            java.lang.String r1 = "LOSS_REASON"
            java.lang.String r2 = "CURRENCY"
            java.lang.String r3 = "AUCTION_PRICE"
            java.util.List r4 = r8.c()     // Catch: java.lang.Exception -> Lb7
            if (r4 == 0) goto Lbb
            java.util.List r4 = r8.c()     // Catch: java.lang.Exception -> Lb7
            int r4 = r4.size()     // Catch: java.lang.Exception -> Lb7
            if (r4 <= 0) goto Lbb
            java.util.List r4 = r8.c()     // Catch: java.lang.Exception -> Lb7
            r5 = 0
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Exception -> Lb7
            com.sigmob.sdk.base.models.BaseAdUnit r4 = (com.sigmob.sdk.base.models.BaseAdUnit) r4     // Catch: java.lang.Exception -> Lb7
            com.sigmob.sdk.base.models.rtb.BiddingResponse r5 = r4.bidding_response     // Catch: java.lang.Exception -> Lb7
            if (r5 == 0) goto Lbb
            com.sigmob.sdk.base.models.rtb.BiddingResponse r5 = r4.bidding_response     // Catch: java.lang.Exception -> Lb7
            java.lang.String r5 = r5.lose_url     // Catch: java.lang.Exception -> Lb7
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lb7
            if (r6 != 0) goto Lbb
            if (r9 == 0) goto Laf
            int r6 = r9.size()     // Catch: java.lang.Exception -> Lb7
            if (r6 <= 0) goto Laf
            java.lang.Object r6 = r9.get(r3)     // Catch: java.lang.Exception -> Lb7
            if (r6 == 0) goto L5a
            java.lang.String r6 = "_PUBLISHERPRICE_"
            java.lang.Object r7 = r9.get(r3)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> Lb7
            r8.a(r6, r7)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r6 = "__AUCTION_PRICE__"
            java.lang.Object r3 = r9.get(r3)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r5 = r5.replace(r6, r3)     // Catch: java.lang.Exception -> Lb7
        L5a:
            java.lang.Object r3 = r9.get(r2)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r6 = "__CURRENCY__"
            java.lang.String r7 = "_CURRENCY_"
            if (r3 == 0) goto L7c
            java.lang.Object r3 = r9.get(r2)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> Lb7
            r8.a(r7, r3)     // Catch: java.lang.Exception -> Lb7
            java.lang.Object r2 = r9.get(r2)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> Lb7
        L77:
            java.lang.String r2 = r5.replace(r6, r2)     // Catch: java.lang.Exception -> Lb7
            goto L84
        L7c:
            java.lang.String r2 = r8.h     // Catch: java.lang.Exception -> Lb7
            r8.a(r7, r2)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r2 = r8.h     // Catch: java.lang.Exception -> Lb7
            goto L77
        L84:
            java.lang.Object r3 = r9.get(r1)     // Catch: java.lang.Exception -> Lb7
            if (r3 == 0) goto L9a
            java.lang.String r3 = "_BIDLOSSCODE_"
            java.lang.Object r1 = r9.get(r1)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r1 = r2.replace(r3, r1)     // Catch: java.lang.Exception -> Lb7
            r5 = r1
            goto L9b
        L9a:
            r5 = r2
        L9b:
            java.lang.Object r1 = r9.get(r0)     // Catch: java.lang.Exception -> Lb7
            if (r1 == 0) goto Laf
            java.lang.String r1 = "_WINADNID_"
            java.lang.Object r9 = r9.get(r0)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r5 = r5.replace(r1, r9)     // Catch: java.lang.Exception -> Lb7
        Laf:
            java.lang.String r9 = "lose"
            com.sigmob.windad.WindAdRequest r0 = r8.a     // Catch: java.lang.Exception -> Lb7
            com.sigmob.sdk.base.network.b.a(r5, r9, r0, r4)     // Catch: java.lang.Exception -> Lb7
            goto Lbb
        Lb7:
            r9 = move-exception
            r9.printStackTrace()
        Lbb:
            return
    }

    public void sendWinNotificationWithInfo(java.util.Map<java.lang.String, java.lang.Object> r8) {
            r7 = this;
            java.lang.String r0 = "CURRENCY"
            java.lang.String r1 = "HIGHEST_LOSS_PRICE"
            java.lang.String r2 = "AUCTION_PRICE"
            java.util.List r3 = r7.c()     // Catch: java.lang.Exception -> Lab
            if (r3 == 0) goto Laf
            java.util.List r3 = r7.c()     // Catch: java.lang.Exception -> Lab
            int r3 = r3.size()     // Catch: java.lang.Exception -> Lab
            if (r3 <= 0) goto Laf
            java.util.List r3 = r7.c()     // Catch: java.lang.Exception -> Lab
            r4 = 0
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Exception -> Lab
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3     // Catch: java.lang.Exception -> Lab
            com.sigmob.sdk.base.models.rtb.BiddingResponse r4 = r3.bidding_response     // Catch: java.lang.Exception -> Lab
            if (r4 == 0) goto Laf
            com.sigmob.sdk.base.models.rtb.BiddingResponse r4 = r3.bidding_response     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r4.win_url     // Catch: java.lang.Exception -> Lab
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lab
            if (r5 != 0) goto Laf
            if (r8 == 0) goto La3
            int r5 = r8.size()     // Catch: java.lang.Exception -> Lab
            if (r5 <= 0) goto La3
            java.lang.Object r5 = r8.get(r2)     // Catch: java.lang.Exception -> Lab
            if (r5 == 0) goto L58
            java.lang.String r5 = "_PUBLISHERPRICE_"
            java.lang.Object r6 = r8.get(r2)     // Catch: java.lang.Exception -> Lab
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Exception -> Lab
            r7.a(r5, r6)     // Catch: java.lang.Exception -> Lab
            java.lang.String r5 = "__AUCTION_PRICE__"
            java.lang.Object r2 = r8.get(r2)     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r4.replace(r5, r2)     // Catch: java.lang.Exception -> Lab
        L58:
            java.lang.Object r2 = r8.get(r1)     // Catch: java.lang.Exception -> Lab
            if (r2 == 0) goto L79
            java.lang.String r2 = "_HIGHESTLOSSPRICE_"
            java.lang.Object r5 = r8.get(r1)     // Catch: java.lang.Exception -> Lab
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> Lab
            r7.a(r2, r5)     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = "__HIGHEST_LOSS_PRICE__"
            java.lang.Object r1 = r8.get(r1)     // Catch: java.lang.Exception -> Lab
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = r4.replace(r2, r1)     // Catch: java.lang.Exception -> Lab
        L79:
            java.lang.Object r1 = r8.get(r0)     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = "__CURRENCY__"
            java.lang.String r5 = "_CURRENCY_"
            if (r1 == 0) goto L9b
            java.lang.Object r1 = r8.get(r0)     // Catch: java.lang.Exception -> Lab
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> Lab
            r7.a(r5, r1)     // Catch: java.lang.Exception -> Lab
            java.lang.Object r8 = r8.get(r0)     // Catch: java.lang.Exception -> Lab
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> Lab
        L96:
            java.lang.String r4 = r4.replace(r2, r8)     // Catch: java.lang.Exception -> Lab
            goto La3
        L9b:
            java.lang.String r8 = r7.h     // Catch: java.lang.Exception -> Lab
            r7.a(r5, r8)     // Catch: java.lang.Exception -> Lab
            java.lang.String r8 = r7.h     // Catch: java.lang.Exception -> Lab
            goto L96
        La3:
            java.lang.String r8 = "win"
            com.sigmob.windad.WindAdRequest r0 = r7.a     // Catch: java.lang.Exception -> Lab
            com.sigmob.sdk.base.network.b.a(r4, r8, r0, r3)     // Catch: java.lang.Exception -> Lab
            goto Laf
        Lab:
            r8 = move-exception
            r8.printStackTrace()
        Laf:
            return
    }

    public void setBidEcpm(int r6) {
            r5 = this;
            java.util.List r0 = r5.c()
            if (r0 == 0) goto L29
            int r1 = r0.size()
            if (r1 <= 0) goto L29
            r1 = 0
        Ld:
            int r2 = r0.size()
            if (r1 >= r2) goto L29
            java.lang.Object r2 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            com.sigmob.sdk.base.models.SigMacroCommon r2 = r2.getMacroCommon()
            java.lang.String r3 = java.lang.String.valueOf(r6)
            java.lang.String r4 = "_PUBLISHERPRICE_"
            r2.addMarcoKey(r4, r3)
            int r1 = r1 + 1
            goto Ld
        L29:
            return
    }

    public void setBidFloor(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setCurrency(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }
}

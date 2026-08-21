package com.tkay.core.api;

public class ErrorCode {
    public static final java.lang.String adShowError = "4006";
    public static final java.lang.String adSourceBidError = "4007";
    public static final java.lang.String adSourceNotFilledError = "4008";
    public static final java.lang.String adapterInnerError = "2006";
    public static final java.lang.String adapterNotExistError = "2002";
    public static final java.lang.String appIdError = "10003";
    public static final java.lang.String appIdOrPlaceIdEmpty = "3002";
    public static final java.lang.String appKeyError = "10001";
    public static final java.lang.String c2sBiddingCacheError = "2012";
    public static final java.lang.String contextDestoryError = "4002";
    public static final java.lang.String dataLevelLowError = "9992";
    public static final java.lang.String exception = "9999";
    public static final java.lang.String filterSourceError = "2010";
    public static final java.lang.String formatError = "3003";
    public static final java.lang.String httpStatuException = "9990";
    public static final java.lang.String inNetworkErrorCodeRequestFailPacing = "2014";
    public static final java.lang.String inPacingError = "2004";
    public static final java.lang.String inRequestFailPacing = "2007";
    public static final java.lang.String loadCappingError = "2009";
    public static final java.lang.String loadFailInPacingError = "2008";
    public static final java.lang.String loadInShowingFilter = "2011";
    public static final java.lang.String loadingError = "2005";
    public static final java.lang.String networkError = "1001";
    public static final java.lang.String networkFirmIdfilterSourceError = "2013";
    public static final java.lang.String noADError = "4001";
    public static final java.lang.String noAdsourceConfig = "4004";
    public static final java.lang.String noAdsourceConfigInDebugerMode = "4009";
    public static final java.lang.String noAvailableAdsource = "4005";
    public static final java.lang.String outOfCapError = "2003";
    public static final java.lang.String placeStrategyError = "3001";
    public static final java.lang.String placementAdClose = "4003";
    public static final java.lang.String placementIdError = "10004";
    public static final java.lang.String serverError = "1002";
    public static final java.lang.String statuError = "9991";
    public static final java.lang.String timeOutError = "2001";
    public static final java.lang.String unknown = "-9999";

    public ErrorCode() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.core.api.AdError getErrorCode(java.lang.String r26, java.lang.String r27, java.lang.String r28) {
            r0 = r26
            r1 = r27
            r2 = r28
            int r3 = r26.hashCode()
            java.lang.String r5 = "4005"
            java.lang.String r6 = "4004"
            java.lang.String r7 = "4003"
            java.lang.String r8 = "4002"
            java.lang.String r9 = "4001"
            java.lang.String r10 = "3003"
            java.lang.String r11 = "3002"
            java.lang.String r12 = "3001"
            java.lang.String r13 = "2012"
            java.lang.String r14 = "2011"
            java.lang.String r15 = "2009"
            java.lang.String r4 = "2008"
            java.lang.String r1 = "2007"
            java.lang.String r2 = "2006"
            r17 = r2
            java.lang.String r2 = "2005"
            r18 = r2
            java.lang.String r2 = "2004"
            r19 = r2
            java.lang.String r2 = "2003"
            r20 = r2
            java.lang.String r2 = "2002"
            r21 = r2
            java.lang.String r2 = "2001"
            r22 = r2
            java.lang.String r2 = "1002"
            r23 = r2
            java.lang.String r2 = "1001"
            r24 = r2
            java.lang.String r2 = "4009"
            r25 = r1
            r1 = 1754688(0x1ac640, float:2.458842E-39)
            if (r3 == r1) goto L22c
            r1 = 46730162(0x2c90bb2, float:2.9541008E-37)
            if (r3 == r1) goto L21b
            switch(r3) {
                case 1507424: goto L206;
                case 1507425: goto L1f1;
                default: goto L55;
            }
        L55:
            switch(r3) {
                case 1537215: goto L1dc;
                case 1537216: goto L1c5;
                case 1537217: goto L1ad;
                case 1537218: goto L199;
                case 1537219: goto L17f;
                case 1537220: goto L164;
                case 1537221: goto L153;
                case 1537222: goto L14a;
                case 1537223: goto L141;
                default: goto L58;
            }
        L58:
            switch(r3) {
                case 1537246: goto L138;
                case 1537247: goto L12f;
                case 1537248: goto L124;
                default: goto L5b;
            }
        L5b:
            switch(r3) {
                case 1567006: goto L11b;
                case 1567007: goto L112;
                case 1567008: goto L108;
                default: goto L5e;
            }
        L5e:
            switch(r3) {
                case 1596797: goto Lfe;
                case 1596798: goto Lf4;
                case 1596799: goto Lea;
                case 1596800: goto Le0;
                case 1596801: goto Ld6;
                case 1596802: goto Lca;
                case 1596803: goto Lbe;
                case 1596804: goto Lb2;
                case 1596805: goto La8;
                default: goto L61;
            }
        L61:
            switch(r3) {
                case 1754679: goto L9d;
                case 1754680: goto L92;
                case 1754681: goto L87;
                default: goto L64;
            }
        L64:
            switch(r3) {
                case 46730164: goto L7b;
                case 46730165: goto L6f;
                default: goto L67;
            }
        L67:
            r16 = r9
            r1 = r18
        L6b:
            r3 = r19
            goto L23c
        L6f:
            java.lang.String r1 = "10004"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 21
            goto L174
        L7b:
            java.lang.String r1 = "10003"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 20
            goto L174
        L87:
            java.lang.String r1 = "9992"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 3
            goto L174
        L92:
            java.lang.String r1 = "9991"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 2
            goto L174
        L9d:
            java.lang.String r1 = "9990"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 1
            goto L174
        La8:
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L67
            r0 = 31
            goto L174
        Lb2:
            java.lang.String r1 = "4008"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 29
            goto L174
        Lbe:
            java.lang.String r1 = "4007"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 28
            goto L174
        Lca:
            java.lang.String r1 = "4006"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 23
            goto L174
        Ld6:
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L67
            r0 = 22
            goto L174
        Le0:
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L67
            r0 = 17
            goto L174
        Lea:
            boolean r0 = r0.equals(r7)
            if (r0 == 0) goto L67
            r0 = 16
            goto L174
        Lf4:
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L67
            r0 = 13
            goto L174
        Lfe:
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L67
            r0 = 9
            goto L174
        L108:
            boolean r0 = r0.equals(r10)
            if (r0 == 0) goto L67
            r0 = 15
            goto L174
        L112:
            boolean r0 = r0.equals(r11)
            if (r0 == 0) goto L67
            r0 = 14
            goto L174
        L11b:
            boolean r0 = r0.equals(r12)
            if (r0 == 0) goto L67
            r0 = 10
            goto L174
        L124:
            java.lang.String r1 = "2013"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L67
            r0 = 32
            goto L174
        L12f:
            boolean r0 = r0.equals(r13)
            if (r0 == 0) goto L67
            r0 = 30
            goto L174
        L138:
            boolean r0 = r0.equals(r14)
            if (r0 == 0) goto L67
            r0 = 27
            goto L174
        L141:
            boolean r0 = r0.equals(r15)
            if (r0 == 0) goto L67
            r0 = 26
            goto L174
        L14a:
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L67
            r0 = 25
            goto L174
        L153:
            r1 = r25
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L160
            r0 = 24
            r25 = r1
            goto L174
        L160:
            r25 = r1
            goto L67
        L164:
            r3 = r17
            r1 = r25
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L179
            r0 = 18
            r25 = r1
            r17 = r3
        L174:
            r16 = r9
            r1 = r18
            goto L18f
        L179:
            r25 = r1
            r17 = r3
            goto L67
        L17f:
            r3 = r17
            r1 = r18
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L193
            r0 = 11
            r17 = r3
            r16 = r9
        L18f:
            r3 = r19
            goto L23d
        L193:
            r17 = r3
            r16 = r9
            goto L6b
        L199:
            r1 = r18
            r3 = r19
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L1a9
            r0 = 12
            r16 = r9
            goto L23d
        L1a9:
            r16 = r9
            goto L23c
        L1ad:
            r16 = r9
            r1 = r18
            r3 = r19
            r9 = r20
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L1c1
            r0 = 8
            r20 = r9
            goto L23d
        L1c1:
            r20 = r9
            goto L23c
        L1c5:
            r16 = r9
            r1 = r18
            r3 = r19
            r9 = r21
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L1d8
            r0 = 7
            r21 = r9
            goto L23d
        L1d8:
            r21 = r9
            goto L23c
        L1dc:
            r16 = r9
            r1 = r18
            r3 = r19
            r9 = r22
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L1ee
            r0 = 6
            r22 = r9
            goto L23d
        L1ee:
            r22 = r9
            goto L23c
        L1f1:
            r16 = r9
            r1 = r18
            r3 = r19
            r9 = r23
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L203
            r0 = 5
            r23 = r9
            goto L23d
        L203:
            r23 = r9
            goto L23c
        L206:
            r16 = r9
            r1 = r18
            r3 = r19
            r9 = r24
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L218
            r0 = 4
            r24 = r9
            goto L23d
        L218:
            r24 = r9
            goto L23c
        L21b:
            r16 = r9
            r1 = r18
            r3 = r19
            java.lang.String r9 = "10001"
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L23c
            r0 = 19
            goto L23d
        L22c:
            r16 = r9
            r1 = r18
            r3 = r19
            java.lang.String r9 = "9999"
            boolean r0 = r0.equals(r9)
            if (r0 == 0) goto L23c
            r0 = 0
            goto L23d
        L23c:
            r0 = -1
        L23d:
            switch(r0) {
                case 0: goto L3f0;
                case 1: goto L3e2;
                case 2: goto L3d4;
                case 3: goto L3c6;
                case 4: goto L3b8;
                case 5: goto L3aa;
                case 6: goto L39c;
                case 7: goto L38e;
                case 8: goto L380;
                case 9: goto L372;
                case 10: goto L366;
                case 11: goto L35a;
                case 12: goto L34e;
                case 13: goto L342;
                case 14: goto L336;
                case 15: goto L32a;
                case 16: goto L31e;
                case 17: goto L312;
                case 18: goto L304;
                case 19: goto L2f6;
                case 20: goto L2e8;
                case 21: goto L2da;
                case 22: goto L2ce;
                case 23: goto L2c0;
                case 24: goto L2b2;
                case 25: goto L2a6;
                case 26: goto L29a;
                case 27: goto L28e;
                case 28: goto L280;
                case 29: goto L272;
                case 30: goto L266;
                case 31: goto L25a;
                case 32: goto L24e;
                default: goto L240;
            }
        L240:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "-9999"
            java.lang.String r3 = "unknown"
            r1.<init>(r2, r3, r9, r0)
            return r1
        L24e:
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "AdSource filter by network firm id."
            r9 = r27
            r12 = r28
            r0.<init>(r2, r1, r9, r12)
            return r0
        L25a:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "The placement strategy does not contain any ad sources, please check the debugger configuration in TYSDK.setDebuggerConfig"
            r0.<init>(r2, r1, r9, r12)
            return r0
        L266:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "C2S Bidding Cache error."
            r0.<init>(r13, r1, r9, r12)
            return r0
        L272:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "4008"
            java.lang.String r2 = "Ad source not filled, cause by customize fillter."
            r0.<init>(r1, r2, r9, r12)
            return r0
        L280:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "4007"
            java.lang.String r2 = "Bid error"
            r0.<init>(r1, r2, r9, r12)
            return r0
        L28e:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "This unitgroup can't load on showing."
            r0.<init>(r14, r1, r9, r12)
            return r0
        L29a:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "The placement load too many times within the specified time period."
            r0.<init>(r15, r1, r9, r12)
            return r0
        L2a6:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "The placement load too frequent within the specified time period after the previous load failure."
            r0.<init>(r4, r1, r9, r12)
            return r0
        L2b2:
            r9 = r27
            r12 = r28
            r0 = r25
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Not satisfy the Fail-request's Placing configuration."
            r1.<init>(r0, r2, r9, r12)
            return r1
        L2c0:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "4006"
            java.lang.String r2 = "Ad show failed"
            r0.<init>(r1, r2, r9, r12)
            return r0
        L2ce:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "Ad sources are filtered, no ad source is currently available"
            r0.<init>(r5, r1, r9, r12)
            return r0
        L2da:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "10004"
            java.lang.String r2 = "Please check your placementid."
            r0.<init>(r1, r2, r9, r12)
            return r0
        L2e8:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "10003"
            java.lang.String r2 = "Please check your appid."
            r0.<init>(r1, r2, r9, r12)
            return r0
        L2f6:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "10001"
            java.lang.String r2 = "Please check your appkey."
            r0.<init>(r1, r2, r9, r12)
            return r0
        L304:
            r9 = r27
            r12 = r28
            r0 = r17
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Please check if your network sdk version is correct and all the network plugin has been put in your package."
            r1.<init>(r0, r2, r9, r12)
            return r1
        L312:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "The placement strategy does not contain any ad sources, please check the mediation configuration in TY"
            r0.<init>(r6, r1, r9, r12)
            return r0
        L31e:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "Placement Ads switch is close."
            r0.<init>(r7, r1, r9, r12)
            return r0
        L32a:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "Mismatched ad placement and ad format"
            r0.<init>(r10, r1, r9, r12)
            return r0
        L336:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "AppId or PlacementId is empty."
            r0.<init>(r11, r1, r9, r12)
            return r0
        L342:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "Context or activity has been destory."
            r0.<init>(r8, r1, r9, r12)
            return r0
        L34e:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r1 = "Not satisfy the Placement's Placing configuration."
            r0.<init>(r3, r1, r9, r12)
            return r0
        L35a:
            r9 = r27
            r12 = r28
            com.tkay.core.api.AdError r0 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Placement's Ad is loading."
            r0.<init>(r1, r2, r9, r12)
            return r0
        L366:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Get placement strategy error, please check your network or your appid、appkey and placementid is availiable."
            r1.<init>(r12, r2, r9, r0)
            return r1
        L372:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Return Ad is empty."
            r3 = r16
            r1.<init>(r3, r2, r9, r0)
            return r1
        L380:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Not satisfy the Placement's Cap configuration."
            r3 = r20
            r1.<init>(r3, r2, r9, r0)
            return r1
        L38e:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Adapter does not exist."
            r3 = r21
            r1.<init>(r3, r2, r9, r0)
            return r1
        L39c:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Ad load time out."
            r3 = r22
            r1.<init>(r3, r2, r9, r0)
            return r1
        L3aa:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Server is unavailable."
            r3 = r23
            r1.<init>(r3, r2, r9, r0)
            return r1
        L3b8:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "Network is unavailable."
            r3 = r24
            r1.<init>(r3, r2, r9, r0)
            return r1
        L3c6:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "9992"
            java.lang.String r3 = "Upload data level is FORBIDDEN, must called 'TYSDK.setGDPRUploadDataLevel' to set the level."
            r1.<init>(r2, r3, r9, r0)
            return r1
        L3d4:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "9991"
            java.lang.String r3 = "Service status error."
            r1.<init>(r2, r3, r9, r0)
            return r1
        L3e2:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "9990"
            java.lang.String r3 = "Https status exception."
            r1.<init>(r2, r3, r9, r0)
            return r1
        L3f0:
            r9 = r27
            r0 = r28
            com.tkay.core.api.AdError r1 = new com.tkay.core.api.AdError
            java.lang.String r2 = "9999"
            java.lang.String r3 = "Exception in sdk."
            r1.<init>(r2, r3, r9, r0)
            return r1
    }
}

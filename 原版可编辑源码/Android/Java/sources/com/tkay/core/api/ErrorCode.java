package com.tkay.core.api;

import android.support.v4.os.EnvironmentCompat;
import org.bouncycastle.math.ec.Tnaf;

public class ErrorCode {
    public static final String adShowError = "4006";
    public static final String adSourceBidError = "4007";
    public static final String adSourceNotFilledError = "4008";
    public static final String adapterInnerError = "2006";
    public static final String adapterNotExistError = "2002";
    public static final String appIdError = "10003";
    public static final String appIdOrPlaceIdEmpty = "3002";
    public static final String appKeyError = "10001";
    public static final String c2sBiddingCacheError = "2012";
    public static final String contextDestoryError = "4002";
    public static final String dataLevelLowError = "9992";
    public static final String exception = "9999";
    public static final String filterSourceError = "2010";
    public static final String formatError = "3003";
    public static final String httpStatuException = "9990";
    public static final String inNetworkErrorCodeRequestFailPacing = "2014";
    public static final String inPacingError = "2004";
    public static final String inRequestFailPacing = "2007";
    public static final String loadCappingError = "2009";
    public static final String loadFailInPacingError = "2008";
    public static final String loadInShowingFilter = "2011";
    public static final String loadingError = "2005";
    public static final String networkError = "1001";
    public static final String networkFirmIdfilterSourceError = "2013";
    public static final String noADError = "4001";
    public static final String noAdsourceConfig = "4004";
    public static final String noAdsourceConfigInDebugerMode = "4009";
    public static final String noAvailableAdsource = "4005";
    public static final String outOfCapError = "2003";
    public static final String placeStrategyError = "3001";
    public static final String placementAdClose = "4003";
    public static final String placementIdError = "10004";
    public static final String serverError = "1002";
    public static final String statuError = "9991";
    public static final String timeOutError = "2001";
    public static final String unknown = "-9999";

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to find 'out' block for switch in B:10:0x005e. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:11:0x0061. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:12:0x0064. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:8:0x0058. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:9:0x005b. Please report as an issue. */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:125:0x023c A[PHI: r1 r3 r16 r17 r20 r21 r22 r23 r24 r25
      0x023c: PHI (r1v38 java.lang.String) = 
      (r1v3 java.lang.String)
      (r1v40 java.lang.String)
      (r1v41 java.lang.String)
      (r1v42 java.lang.String)
      (r1v43 java.lang.String)
      (r1v44 java.lang.String)
      (r1v45 java.lang.String)
      (r1v46 java.lang.String)
      (r1v52 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r3v14 java.lang.String) = 
      (r3v1 java.lang.String)
      (r3v15 java.lang.String)
      (r3v16 java.lang.String)
      (r3v17 java.lang.String)
      (r3v18 java.lang.String)
      (r3v19 java.lang.String)
      (r3v20 java.lang.String)
      (r3v21 java.lang.String)
      (r3v25 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r16v2 java.lang.String) = 
      (r16v0 java.lang.String)
      (r16v3 java.lang.String)
      (r16v4 java.lang.String)
      (r16v5 java.lang.String)
      (r16v6 java.lang.String)
      (r16v7 java.lang.String)
      (r16v8 java.lang.String)
      (r16v9 java.lang.String)
      (r16v15 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r17v2 java.lang.String) = 
      (r17v0 java.lang.String)
      (r17v0 java.lang.String)
      (r17v0 java.lang.String)
      (r17v0 java.lang.String)
      (r17v0 java.lang.String)
      (r17v0 java.lang.String)
      (r17v0 java.lang.String)
      (r17v0 java.lang.String)
      (r17v9 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r20v2 java.lang.String) = 
      (r20v0 java.lang.String)
      (r20v0 java.lang.String)
      (r20v0 java.lang.String)
      (r20v0 java.lang.String)
      (r20v0 java.lang.String)
      (r20v0 java.lang.String)
      (r20v3 java.lang.String)
      (r20v0 java.lang.String)
      (r20v0 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r21v2 java.lang.String) = 
      (r21v0 java.lang.String)
      (r21v0 java.lang.String)
      (r21v0 java.lang.String)
      (r21v0 java.lang.String)
      (r21v0 java.lang.String)
      (r21v3 java.lang.String)
      (r21v0 java.lang.String)
      (r21v0 java.lang.String)
      (r21v0 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r22v2 java.lang.String) = 
      (r22v0 java.lang.String)
      (r22v0 java.lang.String)
      (r22v0 java.lang.String)
      (r22v0 java.lang.String)
      (r22v3 java.lang.String)
      (r22v0 java.lang.String)
      (r22v0 java.lang.String)
      (r22v0 java.lang.String)
      (r22v0 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r23v2 java.lang.String) = 
      (r23v0 java.lang.String)
      (r23v0 java.lang.String)
      (r23v0 java.lang.String)
      (r23v3 java.lang.String)
      (r23v0 java.lang.String)
      (r23v0 java.lang.String)
      (r23v0 java.lang.String)
      (r23v0 java.lang.String)
      (r23v0 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r24v2 java.lang.String) = 
      (r24v0 java.lang.String)
      (r24v0 java.lang.String)
      (r24v3 java.lang.String)
      (r24v0 java.lang.String)
      (r24v0 java.lang.String)
      (r24v0 java.lang.String)
      (r24v0 java.lang.String)
      (r24v0 java.lang.String)
      (r24v0 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]
      0x023c: PHI (r25v2 java.lang.String) = 
      (r25v0 java.lang.String)
      (r25v0 java.lang.String)
      (r25v0 java.lang.String)
      (r25v0 java.lang.String)
      (r25v0 java.lang.String)
      (r25v0 java.lang.String)
      (r25v0 java.lang.String)
      (r25v0 java.lang.String)
      (r25v9 java.lang.String)
     binds: [B:123:0x0238, B:120:0x0227, B:118:0x0218, B:114:0x0203, B:110:0x01ee, B:106:0x01d8, B:102:0x01c1, B:98:0x01a9, B:14:0x006b] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static AdError getErrorCode(String str, String str2, String str3) {
        String str4;
        String str5;
        String str6;
        byte b;
        int iHashCode = str.hashCode();
        String str7 = adapterInnerError;
        String str8 = outOfCapError;
        String str9 = "2002";
        String str10 = timeOutError;
        String str11 = serverError;
        String str12 = networkError;
        String str13 = inRequestFailPacing;
        if (iHashCode == 1754688) {
            str4 = noADError;
            str5 = loadingError;
            str6 = inPacingError;
            if (str.equals(exception)) {
                b = 0;
            }
        } else if (iHashCode != 46730162) {
            switch (iHashCode) {
                case 1507424:
                    str4 = noADError;
                    str5 = loadingError;
                    str6 = inPacingError;
                    if (!str.equals(str12)) {
                        str12 = str12;
                    } else {
                        b = 4;
                        str12 = str12;
                    }
                    break;
                case 1507425:
                    str4 = noADError;
                    str5 = loadingError;
                    str6 = inPacingError;
                    if (!str.equals(str11)) {
                        str11 = str11;
                    } else {
                        b = 5;
                        str11 = str11;
                    }
                    break;
                default:
                    switch (iHashCode) {
                        case 1537215:
                            str4 = noADError;
                            str5 = loadingError;
                            str6 = inPacingError;
                            if (!str.equals(str10)) {
                                str10 = str10;
                            } else {
                                b = 6;
                                str10 = str10;
                            }
                            break;
                        case 1537216:
                            str4 = noADError;
                            str5 = loadingError;
                            str6 = inPacingError;
                            if (!str.equals(str9)) {
                                str9 = str9;
                            } else {
                                b = 7;
                                str9 = str9;
                            }
                            break;
                        case 1537217:
                            str4 = noADError;
                            str5 = loadingError;
                            str6 = inPacingError;
                            if (!str.equals(str8)) {
                                str8 = str8;
                            } else {
                                b = 8;
                                str8 = str8;
                            }
                            break;
                        case 1537218:
                            str5 = loadingError;
                            str6 = inPacingError;
                            if (!str.equals(str6)) {
                                str4 = noADError;
                            } else {
                                b = 12;
                                str4 = noADError;
                            }
                            break;
                        case 1537219:
                            str5 = loadingError;
                            if (!str.equals(str5)) {
                                str7 = str7;
                                str4 = noADError;
                                str6 = inPacingError;
                            } else {
                                b = 11;
                                str7 = str7;
                                str4 = noADError;
                                str6 = inPacingError;
                            }
                            break;
                        case 1537220:
                            if (!str.equals(str7)) {
                                str13 = str13;
                                str7 = str7;
                                str4 = noADError;
                                str5 = loadingError;
                                str6 = inPacingError;
                            } else {
                                b = 18;
                                str13 = str13;
                                str7 = str7;
                                str4 = noADError;
                                str5 = loadingError;
                                str6 = inPacingError;
                            }
                            break;
                        case 1537221:
                            if (!str.equals(str13)) {
                                str13 = str13;
                                str4 = noADError;
                                str5 = loadingError;
                                str6 = inPacingError;
                            } else {
                                b = 24;
                                str13 = str13;
                                str4 = noADError;
                                str5 = loadingError;
                                str6 = inPacingError;
                            }
                            break;
                        case 1537222:
                            if (str.equals(loadFailInPacingError)) {
                                b = 25;
                                str4 = noADError;
                                str5 = loadingError;
                                str6 = inPacingError;
                            }
                            str4 = noADError;
                            str5 = loadingError;
                            str6 = inPacingError;
                            break;
                        case 1537223:
                            if (str.equals(loadCappingError)) {
                                b = 26;
                                str4 = noADError;
                                str5 = loadingError;
                                str6 = inPacingError;
                            }
                            str4 = noADError;
                            str5 = loadingError;
                            str6 = inPacingError;
                            break;
                        default:
                            switch (iHashCode) {
                                case 1537246:
                                    if (str.equals(loadInShowingFilter)) {
                                        b = 27;
                                        str4 = noADError;
                                        str5 = loadingError;
                                        str6 = inPacingError;
                                    }
                                    str4 = noADError;
                                    str5 = loadingError;
                                    str6 = inPacingError;
                                    break;
                                case 1537247:
                                    if (str.equals(c2sBiddingCacheError)) {
                                        b = 30;
                                        str4 = noADError;
                                        str5 = loadingError;
                                        str6 = inPacingError;
                                    }
                                    str4 = noADError;
                                    str5 = loadingError;
                                    str6 = inPacingError;
                                    break;
                                case 1537248:
                                    if (str.equals(networkFirmIdfilterSourceError)) {
                                        b = 32;
                                        str4 = noADError;
                                        str5 = loadingError;
                                        str6 = inPacingError;
                                    }
                                    str4 = noADError;
                                    str5 = loadingError;
                                    str6 = inPacingError;
                                    break;
                                default:
                                    switch (iHashCode) {
                                        case 1567006:
                                            if (str.equals(placeStrategyError)) {
                                                b = 10;
                                                str4 = noADError;
                                                str5 = loadingError;
                                                str6 = inPacingError;
                                            }
                                            str4 = noADError;
                                            str5 = loadingError;
                                            str6 = inPacingError;
                                            break;
                                        case 1567007:
                                            if (str.equals(appIdOrPlaceIdEmpty)) {
                                                b = 14;
                                                str4 = noADError;
                                                str5 = loadingError;
                                                str6 = inPacingError;
                                            }
                                            str4 = noADError;
                                            str5 = loadingError;
                                            str6 = inPacingError;
                                            break;
                                        case 1567008:
                                            if (str.equals(formatError)) {
                                                b = 15;
                                                str4 = noADError;
                                                str5 = loadingError;
                                                str6 = inPacingError;
                                            }
                                            str4 = noADError;
                                            str5 = loadingError;
                                            str6 = inPacingError;
                                            break;
                                        default:
                                            switch (iHashCode) {
                                                case 1596797:
                                                    if (str.equals(noADError)) {
                                                        b = 9;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596798:
                                                    if (str.equals(contextDestoryError)) {
                                                        b = 13;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596799:
                                                    if (str.equals(placementAdClose)) {
                                                        b = Tnaf.POW_2_WIDTH;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596800:
                                                    if (str.equals(noAdsourceConfig)) {
                                                        b = 17;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596801:
                                                    if (str.equals(noAvailableAdsource)) {
                                                        b = 22;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596802:
                                                    if (str.equals(adShowError)) {
                                                        b = 23;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596803:
                                                    if (str.equals(adSourceBidError)) {
                                                        b = 28;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596804:
                                                    if (str.equals(adSourceNotFilledError)) {
                                                        b = 29;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                case 1596805:
                                                    if (str.equals(noAdsourceConfigInDebugerMode)) {
                                                        b = 31;
                                                        str4 = noADError;
                                                        str5 = loadingError;
                                                        str6 = inPacingError;
                                                    }
                                                    str4 = noADError;
                                                    str5 = loadingError;
                                                    str6 = inPacingError;
                                                    break;
                                                default:
                                                    switch (iHashCode) {
                                                        case 1754679:
                                                            if (str.equals(httpStatuException)) {
                                                                b = 1;
                                                                str4 = noADError;
                                                                str5 = loadingError;
                                                                str6 = inPacingError;
                                                            }
                                                            str4 = noADError;
                                                            str5 = loadingError;
                                                            str6 = inPacingError;
                                                            break;
                                                        case 1754680:
                                                            if (str.equals(statuError)) {
                                                                b = 2;
                                                                str4 = noADError;
                                                                str5 = loadingError;
                                                                str6 = inPacingError;
                                                            }
                                                            str4 = noADError;
                                                            str5 = loadingError;
                                                            str6 = inPacingError;
                                                            break;
                                                        case 1754681:
                                                            if (str.equals(dataLevelLowError)) {
                                                                b = 3;
                                                                str4 = noADError;
                                                                str5 = loadingError;
                                                                str6 = inPacingError;
                                                            }
                                                            str4 = noADError;
                                                            str5 = loadingError;
                                                            str6 = inPacingError;
                                                            break;
                                                        default:
                                                            switch (iHashCode) {
                                                                case 46730164:
                                                                    if (str.equals(appIdError)) {
                                                                        b = 20;
                                                                        str4 = noADError;
                                                                        str5 = loadingError;
                                                                        str6 = inPacingError;
                                                                    }
                                                                    str4 = noADError;
                                                                    str5 = loadingError;
                                                                    str6 = inPacingError;
                                                                    break;
                                                                case 46730165:
                                                                    if (str.equals(placementIdError)) {
                                                                        b = 21;
                                                                        str4 = noADError;
                                                                        str5 = loadingError;
                                                                        str6 = inPacingError;
                                                                    }
                                                                    str4 = noADError;
                                                                    str5 = loadingError;
                                                                    str6 = inPacingError;
                                                                    break;
                                                                default:
                                                                    str4 = noADError;
                                                                    str5 = loadingError;
                                                                    str6 = inPacingError;
                                                                    break;
                                                            }
                                                            break;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
            }
        } else {
            str4 = noADError;
            str5 = loadingError;
            str6 = inPacingError;
            b = str.equals("10001") ? (byte) 19 : (byte) -1;
        }
        switch (b) {
            case 0:
                return new AdError(exception, "Exception in sdk.", str2, str3);
            case 1:
                return new AdError(httpStatuException, "Https status exception.", str2, str3);
            case 2:
                return new AdError(statuError, "Service status error.", str2, str3);
            case 3:
                return new AdError(dataLevelLowError, "Upload data level is FORBIDDEN, must called 'TYSDK.setGDPRUploadDataLevel' to set the level.", str2, str3);
            case 4:
                return new AdError(str12, "Network is unavailable.", str2, str3);
            case 5:
                return new AdError(str11, "Server is unavailable.", str2, str3);
            case 6:
                return new AdError(str10, "Ad load time out.", str2, str3);
            case 7:
                return new AdError(str9, "Adapter does not exist.", str2, str3);
            case 8:
                return new AdError(str8, "Not satisfy the Placement's Cap configuration.", str2, str3);
            case 9:
                return new AdError(str4, "Return Ad is empty.", str2, str3);
            case 10:
                return new AdError(placeStrategyError, "Get placement strategy error, please check your network or your appid、appkey and placementid is availiable.", str2, str3);
            case 11:
                return new AdError(str5, "Placement's Ad is loading.", str2, str3);
            case 12:
                return new AdError(str6, "Not satisfy the Placement's Placing configuration.", str2, str3);
            case 13:
                return new AdError(contextDestoryError, "Context or activity has been destory.", str2, str3);
            case 14:
                return new AdError(appIdOrPlaceIdEmpty, "AppId or PlacementId is empty.", str2, str3);
            case 15:
                return new AdError(formatError, "Mismatched ad placement and ad format", str2, str3);
            case 16:
                return new AdError(placementAdClose, "Placement Ads switch is close.", str2, str3);
            case 17:
                return new AdError(noAdsourceConfig, "The placement strategy does not contain any ad sources, please check the mediation configuration in TY", str2, str3);
            case 18:
                return new AdError(str7, "Please check if your network sdk version is correct and all the network plugin has been put in your package.", str2, str3);
            case 19:
                return new AdError("10001", "Please check your appkey.", str2, str3);
            case 20:
                return new AdError(appIdError, "Please check your appid.", str2, str3);
            case 21:
                return new AdError(placementIdError, "Please check your placementid.", str2, str3);
            case 22:
                return new AdError(noAvailableAdsource, "Ad sources are filtered, no ad source is currently available", str2, str3);
            case 23:
                return new AdError(adShowError, "Ad show failed", str2, str3);
            case 24:
                return new AdError(str13, "Not satisfy the Fail-request's Placing configuration.", str2, str3);
            case 25:
                return new AdError(loadFailInPacingError, "The placement load too frequent within the specified time period after the previous load failure.", str2, str3);
            case 26:
                return new AdError(loadCappingError, "The placement load too many times within the specified time period.", str2, str3);
            case 27:
                return new AdError(loadInShowingFilter, "This unitgroup can't load on showing.", str2, str3);
            case 28:
                return new AdError(adSourceBidError, "Bid error", str2, str3);
            case 29:
                return new AdError(adSourceNotFilledError, "Ad source not filled, cause by customize fillter.", str2, str3);
            case 30:
                return new AdError(c2sBiddingCacheError, "C2S Bidding Cache error.", str2, str3);
            case 31:
                return new AdError(noAdsourceConfigInDebugerMode, "The placement strategy does not contain any ad sources, please check the debugger configuration in TYSDK.setDebuggerConfig", str2, str3);
            case 32:
                return new AdError(noAdsourceConfigInDebugerMode, "AdSource filter by network firm id.", str2, str3);
            default:
                return new AdError("-9999", EnvironmentCompat.MEDIA_UNKNOWN, str2, str3);
        }
    }
}

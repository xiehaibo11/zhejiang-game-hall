package com.sigmob.sdk.base.models;

public class SigMacroCommon extends com.sigmob.sdk.base.models.BaseMacroCommon implements java.io.Serializable {
    public static final java.lang.String _ADSCENEID_ = "_ADSCENEID_";
    public static final java.lang.String _ADSCENE_ = "_ADSCENE_";
    public static final java.lang.String _AUTOCLICK_ = "_AUTOCLICK_";
    public static final java.lang.String _BEGINTIME_ = "_BEGINTIME_";
    public static final java.lang.String _BEHAVIOR_ = "_BEHAVIOR_";
    public static final java.lang.String _CLICKAREA_ = "_CLICKAREA_";
    public static final java.lang.String _CLICKID_ = "_CLICKID_";
    public static final java.lang.String _CLICKSCENE_ = "_CLICKSCENE_";
    public static final java.lang.String _COMPLETED_ = "_COMPLETED_";
    public static final java.lang.String _CURRENCY_ = "_CURRENCY_";
    public static final java.lang.String _DOWNX_ = "_DOWNX_";
    public static final java.lang.String _DOWNY_ = "_DOWNY_";
    public static final java.lang.String _ENDTIME_ = "_ENDTIME_";
    public static final java.lang.String _FINALCLICK_ = "_FINALCLICK_";
    public static final java.lang.String _HEIGHT_ = "_HEIGHT_";
    public static final java.lang.String _HIGHESTLOSSPRICE_ = "_HIGHESTLOSSPRICE_";
    public static final java.lang.String _IS_TRUNCATION_ = "_ISTRUNCATION_";
    public static final java.lang.String _PLAYFIRSTFRAME_ = "_PLAYFIRSTFRAME_";
    public static final java.lang.String _PLAYLASTFRAME_ = "_PLAYLASTFRAME_";
    public static final java.lang.String _PROGRESS_ = "_PROGRESS_";
    public static final java.lang.String _PUBLISHERPRICE_ = "_PUBLISHERPRICE_";
    public static final java.lang.String _SCENE_ = "_SCENE_";
    public static final java.lang.String _SETCLOSETIME_ = "_SETCLOSETIME_";
    public static final java.lang.String _SHOWSKIPTIME_ = "_SHOWSKIPTIME_";
    public static final java.lang.String _SLOTHEIGHT_ = "_SLOTHEIGHT_";
    public static final java.lang.String _SLOTWIDTH_ = "_SLOTWIDTH_";
    public static final java.lang.String _STATUS_ = "_STATUS_";
    public static final java.lang.String _TYPE_ = "_TYPE_";
    public static final java.lang.String _UPX_ = "_UPX_";
    public static final java.lang.String _UPY_ = "_UPY_";
    public static final java.lang.String _VIDEOTIME_ = "_VIDEOTIME_";
    public static final java.lang.String _VMD5_ = "_VMD5_";
    public static final java.lang.String _VURL_ = "_VURL_";
    public static final java.lang.String _WIDTH_ = "_WIDTH_";
    private static final long serialVersionUID = 1;
    private java.util.Map<java.lang.String, java.lang.String> mMacroMap;
    private java.util.Map<java.lang.String, java.lang.String> mServerMacroMap;

    public SigMacroCommon() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mMacroMap = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mServerMacroMap = r0
            return
    }

    private static java.lang.String getMacroValue(java.lang.String r3) {
            java.lang.String r0 = "unFind"
            r1 = -1
            int r2 = r3.hashCode()     // Catch: java.lang.Throwable -> L8f
            switch(r2) {
                case -1590308376: goto L5c;
                case -1494891674: goto L52;
                case -662306149: goto L48;
                case -415971623: goto L3d;
                case 853731986: goto L33;
                case 891331278: goto L29;
                case 973765784: goto L1f;
                case 1179083118: goto L15;
                case 2074198166: goto Lb;
                default: goto La;
            }     // Catch: java.lang.Throwable -> L8f
        La:
            goto L65
        Lb:
            java.lang.String r2 = "_SLOTWIDTH_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 5
            goto L65
        L15:
            java.lang.String r2 = "_STATUS_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 2
            goto L65
        L1f:
            java.lang.String r2 = "_WIDTH_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 6
            goto L65
        L29:
            java.lang.String r2 = "_BEHAVIOR_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 3
            goto L65
        L33:
            java.lang.String r2 = "_SCENE_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 1
            goto L65
        L3d:
            java.lang.String r2 = "_HEIGHT_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 8
            goto L65
        L48:
            java.lang.String r2 = "_SLOTHEIGHT_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 7
            goto L65
        L52:
            java.lang.String r2 = "_TYPE_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 0
            goto L65
        L5c:
            java.lang.String r2 = "_BEGINTIME_"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L8f
            if (r3 == 0) goto L65
            r1 = 4
        L65:
            java.lang.String r3 = "0"
            switch(r1) {
                case 0: goto L8c;
                case 1: goto L8b;
                case 2: goto L8b;
                case 3: goto L89;
                case 4: goto L88;
                case 5: goto L7a;
                case 6: goto L7a;
                case 7: goto L6b;
                case 8: goto L6b;
                default: goto L6a;
            }
        L6a:
            goto L8f
        L6b:
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L8f
            android.util.DisplayMetrics r3 = r3.getRealMetrics()     // Catch: java.lang.Throwable -> L8f
            int r3 = r3.heightPixels     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L8f
            return r3
        L7a:
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L8f
            android.util.DisplayMetrics r3 = r3.getRealMetrics()     // Catch: java.lang.Throwable -> L8f
            int r3 = r3.widthPixels     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L8f
        L88:
            return r3
        L89:
            java.lang.String r3 = "2"
        L8b:
            return r3
        L8c:
            java.lang.String r3 = "1"
            return r3
        L8f:
            return r0
    }

    private java.lang.String replaceMacroWithMap(java.lang.String r7) {
            r6 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r6.mServerMacroMap
            java.lang.Object r0 = r0.get(r7)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "macroProcess() called with:["
            r1.append(r2)
            r1.append(r7)
            java.lang.String r3 = "]["
            r1.append(r3)
            r1.append(r0)
            java.lang.String r4 = "]"
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r5 = "unFind"
            if (r1 != 0) goto L38
            boolean r1 = r0.equals(r5)
            if (r1 != 0) goto L38
            return r0
        L38:
            java.util.Map<java.lang.String, java.lang.String> r0 = r6.mMacroMap
            java.lang.Object r0 = r0.get(r7)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r7)
            r1.append(r3)
            r1.append(r0)
            r1.append(r4)
            java.lang.String r7 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r7)
            boolean r7 = android.text.TextUtils.isEmpty(r0)
            if (r7 != 0) goto L68
            boolean r7 = r0.equals(r5)
            if (r7 != 0) goto L68
            return r0
        L68:
            r7 = 0
            return r7
    }

    private java.lang.String replaceWithDefault(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = com.sigmob.sdk.base.models.BaseMacroCommon.SigmobMacro.getMacroValue(r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "macroProcess() called with:["
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = "]["
            r1.append(r2)
            r1.append(r0)
            java.lang.String r3 = "]"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r4 = "unFind"
            if (r1 != 0) goto L34
            boolean r1 = r0.equals(r4)
            if (r1 != 0) goto L34
            return r0
        L34:
            java.lang.String r0 = getMacroValue(r7)     // Catch: java.lang.Throwable -> L62
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L62
            r1.<init>()     // Catch: java.lang.Throwable -> L62
            java.lang.String r5 = "macroProcess() called with: ["
            r1.append(r5)     // Catch: java.lang.Throwable -> L62
            r1.append(r7)     // Catch: java.lang.Throwable -> L62
            r1.append(r2)     // Catch: java.lang.Throwable -> L62
            r1.append(r0)     // Catch: java.lang.Throwable -> L62
            r1.append(r3)     // Catch: java.lang.Throwable -> L62
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L62
            com.czhj.sdk.logger.SigmobLog.d(r7)     // Catch: java.lang.Throwable -> L62
            boolean r7 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L62
            if (r7 != 0) goto L6a
            boolean r7 = r0.equals(r4)     // Catch: java.lang.Throwable -> L62
            if (r7 != 0) goto L6a
            return r0
        L62:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r7)
        L6a:
            r7 = 0
            return r7
    }

    public void addMarcoKey(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mMacroMap
            r0.put(r2, r3)
            return
    }

    public void clearMacro() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mMacroMap
            r0.clear()
            return
    }

    public java.lang.String getMarcoKey(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mMacroMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    @Override
    public java.lang.String macroProcess(java.lang.String r6) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L7
            return r6
        L7:
            java.lang.String r0 = "_([A-Z,0-9])+_"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            java.util.regex.Matcher r0 = r0.matcher(r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            r1.<init>()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "macroProcess() called with: origin url "
            r1.append(r2)     // Catch: java.lang.Throwable -> L6c
            r1.append(r6)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L6c
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L6c
        L25:
            boolean r1 = r0.find()     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L57
            java.lang.String r1 = r0.group()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = r5.replaceMacroWithMap(r1)     // Catch: java.lang.Throwable -> L6c
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "unFind"
            if (r3 != 0) goto L46
            boolean r3 = r2.equals(r4)     // Catch: java.lang.Throwable -> L6c
            if (r3 != 0) goto L46
        L41:
            java.lang.String r6 = r6.replaceAll(r1, r2)     // Catch: java.lang.Throwable -> L6c
            goto L25
        L46:
            java.lang.String r2 = r5.replaceWithDefault(r1)     // Catch: java.lang.Throwable -> L6c
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L6c
            if (r3 != 0) goto L25
            boolean r3 = r2.equals(r4)     // Catch: java.lang.Throwable -> L6c
            if (r3 != 0) goto L25
            goto L41
        L57:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            r0.<init>()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = "macroProcess() called with: final url "
            r0.append(r1)     // Catch: java.lang.Throwable -> L6c
            r0.append(r6)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L6c
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L6c
            goto L74
        L6c:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L74:
            return r6
    }

    public void removeMarcoKey(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mMacroMap
            r0.remove(r2)
            return
    }

    public void setServerMacroMap(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.mServerMacroMap = r1
            return
    }
}

package com.sigmob.sdk.base.models;

import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseMacroCommon;
import java.io.Serializable;
import java.util.HashMap;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes3.dex */
public class SigMacroCommon extends BaseMacroCommon implements Serializable {
    public static final String _ADSCENEID_ = "_ADSCENEID_";
    public static final String _ADSCENE_ = "_ADSCENE_";
    public static final String _AUTOCLICK_ = "_AUTOCLICK_";
    public static final String _BEGINTIME_ = "_BEGINTIME_";
    public static final String _BEHAVIOR_ = "_BEHAVIOR_";
    public static final String _CLICKAREA_ = "_CLICKAREA_";
    public static final String _CLICKID_ = "_CLICKID_";
    public static final String _CLICKSCENE_ = "_CLICKSCENE_";
    public static final String _COMPLETED_ = "_COMPLETED_";
    public static final String _CURRENCY_ = "_CURRENCY_";
    public static final String _DOWNX_ = "_DOWNX_";
    public static final String _DOWNY_ = "_DOWNY_";
    public static final String _ENDTIME_ = "_ENDTIME_";
    public static final String _FINALCLICK_ = "_FINALCLICK_";
    public static final String _HEIGHT_ = "_HEIGHT_";
    public static final String _HIGHESTLOSSPRICE_ = "_HIGHESTLOSSPRICE_";
    public static final String _IS_TRUNCATION_ = "_ISTRUNCATION_";
    public static final String _PLAYFIRSTFRAME_ = "_PLAYFIRSTFRAME_";
    public static final String _PLAYLASTFRAME_ = "_PLAYLASTFRAME_";
    public static final String _PROGRESS_ = "_PROGRESS_";
    public static final String _PUBLISHERPRICE_ = "_PUBLISHERPRICE_";
    public static final String _SCENE_ = "_SCENE_";
    public static final String _SETCLOSETIME_ = "_SETCLOSETIME_";
    public static final String _SHOWSKIPTIME_ = "_SHOWSKIPTIME_";
    public static final String _SLOTHEIGHT_ = "_SLOTHEIGHT_";
    public static final String _SLOTWIDTH_ = "_SLOTWIDTH_";
    public static final String _STATUS_ = "_STATUS_";
    public static final String _TYPE_ = "_TYPE_";
    public static final String _UPX_ = "_UPX_";
    public static final String _UPY_ = "_UPY_";
    public static final String _VIDEOTIME_ = "_VIDEOTIME_";
    public static final String _VMD5_ = "_VMD5_";
    public static final String _VURL_ = "_VURL_";
    public static final String _WIDTH_ = "_WIDTH_";
    private static final long serialVersionUID = 1;
    private Map<String, String> mMacroMap = new HashMap();
    private Map<String, String> mServerMacroMap = new HashMap();

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static String getMacroValue(String str) {
        byte b = -1;
        try {
            switch (str.hashCode()) {
                case -1590308376:
                    if (str.equals(_BEGINTIME_)) {
                        b = 4;
                    }
                    break;
                case -1494891674:
                    if (str.equals(_TYPE_)) {
                        b = 0;
                    }
                    break;
                case -662306149:
                    if (str.equals(_SLOTHEIGHT_)) {
                        b = 7;
                    }
                    break;
                case -415971623:
                    if (str.equals(_HEIGHT_)) {
                        b = 8;
                    }
                    break;
                case 853731986:
                    if (str.equals(_SCENE_)) {
                        b = 1;
                    }
                    break;
                case 891331278:
                    if (str.equals(_BEHAVIOR_)) {
                        b = 3;
                    }
                    break;
                case 973765784:
                    if (str.equals(_WIDTH_)) {
                        b = 6;
                    }
                    break;
                case 1179083118:
                    if (str.equals(_STATUS_)) {
                        b = 2;
                    }
                    break;
                case 2074198166:
                    if (str.equals(_SLOTWIDTH_)) {
                        b = 5;
                    }
                    break;
            }
        } catch (Throwable unused) {
        }
        switch (b) {
            case 0:
                return "1";
            case 1:
            case 2:
                return "0";
            case 3:
                return "2";
            case 4:
                return "0";
            case 5:
            case 6:
                return String.valueOf(ClientMetadata.getInstance().getRealMetrics().widthPixels);
            case 7:
            case 8:
                return String.valueOf(ClientMetadata.getInstance().getRealMetrics().heightPixels);
            default:
                return "unFind";
        }
    }

    private String replaceMacroWithMap(String str) {
        String str2 = this.mServerMacroMap.get(str);
        SigmobLog.d("macroProcess() called with:[" + str + "][" + str2 + "]");
        if (!TextUtils.isEmpty(str2) && !str2.equals("unFind")) {
            return str2;
        }
        String str3 = this.mMacroMap.get(str);
        SigmobLog.d("macroProcess() called with:[" + str + "][" + str3 + "]");
        if (TextUtils.isEmpty(str3) || str3.equals("unFind")) {
            return null;
        }
        return str3;
    }

    private String replaceWithDefault(String str) {
        String macroValue = BaseMacroCommon.SigmobMacro.getMacroValue(str);
        SigmobLog.d("macroProcess() called with:[" + str + "][" + macroValue + "]");
        if (!TextUtils.isEmpty(macroValue) && !macroValue.equals("unFind")) {
            return macroValue;
        }
        try {
            String macroValue2 = getMacroValue(str);
            SigmobLog.d("macroProcess() called with: [" + str + "][" + macroValue2 + "]");
            if (TextUtils.isEmpty(macroValue2)) {
                return null;
            }
            if (macroValue2.equals("unFind")) {
                return null;
            }
            return macroValue2;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return null;
        }
    }

    public void addMarcoKey(String str, String str2) {
        this.mMacroMap.put(str, str2);
    }

    public void clearMacro() {
        this.mMacroMap.clear();
    }

    public String getMarcoKey(String str) {
        return this.mMacroMap.get(str);
    }

    @Override // com.sigmob.sdk.base.models.BaseMacroCommon
    public String macroProcess(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        Matcher matcher = Pattern.compile("_([A-Z,0-9])+_").matcher(str);
        try {
            SigmobLog.d("macroProcess() called with: origin url " + str);
            while (matcher.find()) {
                String strGroup = matcher.group();
                String strReplaceMacroWithMap = replaceMacroWithMap(strGroup);
                if (TextUtils.isEmpty(strReplaceMacroWithMap) || strReplaceMacroWithMap.equals("unFind")) {
                    strReplaceMacroWithMap = replaceWithDefault(strGroup);
                    if (TextUtils.isEmpty(strReplaceMacroWithMap) || strReplaceMacroWithMap.equals("unFind")) {
                    }
                }
                str = str.replaceAll(strGroup, strReplaceMacroWithMap);
            }
            SigmobLog.d("macroProcess() called with: final url " + str);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
        return str;
    }

    public void removeMarcoKey(String str) {
        this.mMacroMap.remove(str);
    }

    public void setServerMacroMap(Map<String, String> map) {
        this.mServerMacroMap = map;
    }
}

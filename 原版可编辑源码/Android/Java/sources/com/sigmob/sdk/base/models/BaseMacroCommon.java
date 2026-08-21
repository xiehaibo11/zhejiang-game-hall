package com.sigmob.sdk.base.models;

import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.logger.SigmobLog;
import java.io.Serializable;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class BaseMacroCommon implements Serializable {
    private static final long serialVersionUID = 1;

    static class 1 {
        static final int[] $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro;

        static {
            int[] iArr = new int[SigmobMacro.values().length];
            $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro = iArr;
            try {
                iArr[SigmobMacro._MC_.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro[SigmobMacro._COUNTRY_.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro[SigmobMacro._BUNDLEID_.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro[SigmobMacro._LANGUAGE_.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro[SigmobMacro._OSVERSION_.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro[SigmobMacro._TIMESTAMP_.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                $SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro[SigmobMacro._TIMEMILLIS_.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
        }
    }

    public enum SigmobMacro {
        _MC_,
        _COUNTRY_,
        _TIMESTAMP_,
        _OSVERSION_,
        _BUNDLEID_,
        _LANGUAGE_,
        _TIMEMILLIS_;

        static String getMacroValue(String str) {
            switch (1.$SwitchMap$com$sigmob$sdk$base$models$BaseMacroCommon$SigmobMacro[valueOf(str).ordinal()]) {
                case 1:
                    return ClientMetadata.getInstance().getNetworkOperatorForUrl();
                case 2:
                    return ClientMetadata.getInstance().getDeviceLocale().getCountry();
                case 3:
                    return ClientMetadata.getInstance().getAppPackageName();
                case 4:
                    return ClientMetadata.getInstance().getDeviceLocale().getDisplayLanguage();
                case 5:
                    return ClientMetadata.getDeviceOsVersion();
                case 6:
                    return String.valueOf(System.currentTimeMillis() / 1000);
                case 7:
                    return String.valueOf(System.currentTimeMillis());
                default:
                    return "unFind";
            }
        }
    }

    public String macroProcess(String str) {
        Matcher matcher = Pattern.compile("_([A-Z,0-9])+_").matcher(str);
        String strReplaceAll = str;
        while (matcher.find()) {
            try {
                String strGroup = matcher.group();
                String macroValue = SigmobMacro.getMacroValue(strGroup);
                SigmobLog.d("macroProcess() called with: url = [" + str + "][" + strGroup + "][" + macroValue + "]");
                if (!TextUtils.isEmpty(macroValue) && !macroValue.equals("unFind")) {
                    strReplaceAll = strReplaceAll.replaceAll(strGroup, macroValue);
                }
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }
        return strReplaceAll;
    }
}

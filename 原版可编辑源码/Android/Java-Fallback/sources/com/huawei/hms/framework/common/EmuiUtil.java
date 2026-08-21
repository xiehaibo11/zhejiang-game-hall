package com.huawei.hms.framework.common;

public class EmuiUtil {
    private static final java.lang.String BUILDEX_NAME = "com.huawei.android.os.BuildEx";
    public static final java.lang.String BUILDEX_VERSION = "com.huawei.android.os.BuildEx$VERSION";
    private static final int EMUI_3_0 = 7;
    private static final int EMUI_3_1 = 8;
    private static final int EMUI_4_0 = 9;
    private static final int EMUI_4_1 = 10;
    private static final int EMUI_5_0 = 11;
    private static final int EMUI_6_0 = 14;
    private static final int EMUI_8_0_1 = 15;
    private static final int EMUI_9_0 = 17;
    public static final java.lang.String EMUI_SDK_INT = "EMUI_SDK_INT";
    private static final int EMUI_TYPE_UNKOWN = -1;
    public static final java.lang.String GET_PRIMARY_COLOR = "getPrimaryColor";
    public static final java.lang.String GET_SUGGESTION_FOR_GROUND_COLOR_STYLE = "getSuggestionForgroundColorStyle";
    public static final java.lang.String IMMERSION_STYLE = "com.huawei.android.immersion.ImmersionStyle";
    private static final java.lang.String TAG = "KPMS_Util_Emui";
    private static final int TYPE_EMUI_30 = 30;
    private static final int TYPE_EMUI_31 = 31;
    private static final int TYPE_EMUI_40 = 40;
    private static final int TYPE_EMUI_41 = 41;
    private static final int TYPE_EMUI_50 = 50;
    private static final int TYPE_EMUI_60 = 60;
    private static final int TYPE_EMUI_801 = 81;
    private static final int TYPE_EMUI_90 = 90;
    private static int emuiType = -1;

    static {
            initEmuiType()
            return
    }

    public EmuiUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int getEMUIVersionCode() {
            java.lang.String r0 = "com.huawei.android.os.BuildEx$VERSION"
            java.lang.String r1 = "EMUI_SDK_INT"
            java.lang.Object r0 = com.huawei.hms.framework.common.ReflectionUtils.getStaticFieldObj(r0, r1)
            java.lang.String r1 = "KPMS_Util_Emui"
            if (r0 == 0) goto L19
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.ClassCastException -> L13
            int r0 = r0.intValue()     // Catch: java.lang.ClassCastException -> L13
            goto L1a
        L13:
            r0 = move-exception
            java.lang.String r2 = "getEMUIVersionCode ClassCastException:"
            com.huawei.hms.framework.common.Logger.e(r1, r2, r0)
        L19:
            r0 = 0
        L1a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "the emui version code is::"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.framework.common.Logger.d(r1, r2)
            return r0
    }

    private static void initEmuiType() {
            int r0 = getEMUIVersionCode()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getEmuiType emuiVersionCode="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "KPMS_Util_Emui"
            com.huawei.hms.framework.common.Logger.d(r2, r1)
            r1 = 17
            if (r0 < r1) goto L23
            r0 = 90
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
            goto L60
        L23:
            r1 = 15
            if (r0 < r1) goto L2c
            r0 = 81
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
            goto L60
        L2c:
            r1 = 14
            if (r0 < r1) goto L35
            r0 = 60
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
            goto L60
        L35:
            r1 = 11
            if (r0 < r1) goto L3e
            r0 = 50
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
            goto L60
        L3e:
            r1 = 10
            if (r0 < r1) goto L47
            r0 = 41
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
            goto L60
        L47:
            r1 = 9
            if (r0 < r1) goto L50
            r0 = 40
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
            goto L60
        L50:
            r1 = 8
            if (r0 < r1) goto L59
            r0 = 31
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
            goto L60
        L59:
            r1 = 7
            if (r0 < r1) goto L60
            r0 = 30
            com.huawei.hms.framework.common.EmuiUtil.emuiType = r0
        L60:
            int r0 = com.huawei.hms.framework.common.EmuiUtil.emuiType
            r1 = -1
            if (r0 != r1) goto L6a
            java.lang.String r0 = "emuiType is unkown"
            com.huawei.hms.framework.common.Logger.i(r2, r0)
        L6a:
            return
    }

    public static boolean isEMUI() {
            int r0 = com.huawei.hms.framework.common.EmuiUtil.emuiType
            r1 = -1
            if (r1 == r0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public static boolean isUpPVersion() {
            java.lang.String r0 = "com.huawei.android.os.BuildEx"
            boolean r0 = com.huawei.hms.framework.common.ReflectionUtils.checkCompatible(r0)
            if (r0 == 0) goto L10
            int r0 = com.huawei.android.os.BuildEx.VERSION.EMUI_SDK_INT
            r1 = 17
            if (r0 < r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }
}

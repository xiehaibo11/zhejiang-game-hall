package com.huawei.hms.framework.network.grs.local.model;

public class CountryCodeBean {
    private static final java.lang.String ANDRIOD_SYSTEMPROP = "android.os.SystemProperties";
    private static final int COUNTRYCODE_SIZE = 2;
    private static final java.lang.String LOCALE_COUNTRYSYSTEMPROP = "ro.product.locale";
    private static final java.lang.String LOCALE_REGION_COUNTRYSYSTEMPROP = "ro.product.locale.region";
    private static final java.lang.String SPECIAL_COUNTRYCODE_CN = "cn";
    private static final java.lang.String SPECIAL_COUNTRYCODE_EU = "eu";
    private static final java.lang.String SPECIAL_COUNTRYCODE_GB = "gb";
    private static final java.lang.String SPECIAL_COUNTRYCODE_LA = "la";
    private static final java.lang.String SPECIAL_COUNTRYCODE_UK = "uk";
    private static final java.lang.String TAG = "CountryCodeBean";
    private static final java.lang.String VENDORCOUNTRY_SYSTEMPROP = "ro.hw.country";
    private java.lang.String countryCode;
    private java.lang.String countrySource;

    static {
            return
    }

    public CountryCodeBean(android.content.Context r2, boolean r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "UNKNOWN"
            r1.countrySource = r0
            r1.countryCode = r0
            r1.init(r2, r3)
            java.lang.String r2 = r1.countryCode
            java.util.Locale r3 = java.util.Locale.ENGLISH
            java.lang.String r2 = r2.toUpperCase(r3)
            r1.countryCode = r2
            return
    }

    private void checkCodeLenth() {
            r2 = this;
            java.lang.String r0 = r2.countryCode
            if (r0 == 0) goto Lb
            int r0 = r0.length()
            r1 = 2
            if (r0 == r1) goto L11
        Lb:
            java.lang.String r0 = "UNKNOWN"
            r2.countryCode = r0
            r2.countrySource = r0
        L11:
            return
    }

    private void getLocaleCountryCode() {
            r1 = this;
            boolean r0 = com.huawei.hms.framework.common.EmuiUtil.isUpPVersion()
            if (r0 == 0) goto La
            r1.getRegionSettingCountryCode()
            goto Ld
        La:
            r1.getProductCountryCode()
        Ld:
            java.lang.String r0 = "LOCALE_INFO"
            r1.countrySource = r0
            return
    }

    private void getProductCountryCode() {
            r6 = this;
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.String r1 = "get"
            java.lang.String r2 = "UNKNOWN"
            java.lang.String r3 = "ro.product.locale.region"
            java.lang.String r3 = com.huawei.hms.framework.common.SystemPropUtils.getProperty(r1, r3, r0, r2)
            r6.countryCode = r3
            java.lang.String r3 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "countryCode by ro.product.locale.region is:"
            r4.append(r5)
            java.lang.String r5 = r6.countryCode
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.framework.common.Logger.i(r3, r4)
            java.lang.String r3 = r6.countryCode
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L36
            java.lang.String r3 = r6.countryCode
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L6b
        L36:
            java.lang.String r3 = "ro.product.locale"
            java.lang.String r0 = com.huawei.hms.framework.common.SystemPropUtils.getProperty(r1, r3, r0, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L6b
            java.lang.String r1 = "-"
            int r1 = r0.lastIndexOf(r1)
            r3 = -1
            if (r1 == r3) goto L6b
            int r1 = r1 + 1
            java.lang.String r0 = r0.substring(r1)
            r6.countryCode = r0
            java.lang.String r0 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "countryCode by ro.product.locale is:"
            r1.append(r3)
            java.lang.String r3 = r6.countryCode
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.framework.common.Logger.i(r0, r1)
        L6b:
            java.lang.String r0 = r6.countryCode
            java.lang.String r1 = "cn"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L77
            r6.countryCode = r2
        L77:
            return
    }

    private void getRegionSettingCountryCode() {
            r3 = this;
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getCountry()
            r3.countryCode = r0
            java.lang.String r0 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "countryCode by system's region setting is: "
            r1.append(r2)
            java.lang.String r2 = r3.countryCode
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.framework.common.Logger.i(r0, r1)
            java.lang.String r0 = r3.countryCode
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2e
            java.lang.String r0 = "UNKNOWN"
            r3.countryCode = r0
        L2e:
            return
    }

    private void getSimCountryCode(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.getSimCountryCode(r2, r0)
            return
    }

    private void getSimCountryCode(android.content.Context r2, boolean r3) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2
            if (r2 == 0) goto L4d
            if (r3 == 0) goto L2b
            int r3 = r2.getPhoneType()
            r0 = 2
            if (r3 == r0) goto L2b
            java.lang.String r2 = r2.getNetworkCountryIso()
            r1.countryCode = r2
            java.lang.String r2 = "NETWORK_COUNTRY"
            r1.countrySource = r2
            java.lang.String r2 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "countryCode by NetworkCountryIso is: "
            goto L3e
        L2b:
            java.lang.String r2 = r2.getSimCountryIso()
            r1.countryCode = r2
            java.lang.String r2 = "SIM_COUNTRY"
            r1.countrySource = r2
            java.lang.String r2 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "countryCode by SimCountryIso is: "
        L3e:
            r3.append(r0)
            java.lang.String r0 = r1.countryCode
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.huawei.hms.framework.common.Logger.i(r2, r3)
        L4d:
            r1.checkCodeLenth()
            return
    }

    private void getVendorCountryCode() {
            r5 = this;
            java.lang.String r0 = "VENDOR_COUNTRY"
            r5.countrySource = r0
            java.lang.String r1 = "UNKNOWN"
            java.lang.String r2 = "get"
            java.lang.String r3 = "ro.hw.country"
            java.lang.String r4 = "android.os.SystemProperties"
            java.lang.String r2 = com.huawei.hms.framework.common.SystemPropUtils.getProperty(r2, r3, r4, r1)
            r5.countryCode = r2
            java.lang.String r2 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "countryCode by ro.hw.country is: "
            r3.append(r4)
            java.lang.String r4 = r5.countryCode
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.huawei.hms.framework.common.Logger.i(r2, r3)
            java.lang.String r2 = r5.countryCode
            java.lang.String r3 = "eu"
            boolean r2 = r3.equalsIgnoreCase(r2)
            if (r2 != 0) goto L5b
            java.lang.String r2 = r5.countryCode
            java.lang.String r3 = "la"
            boolean r2 = r3.equalsIgnoreCase(r2)
            if (r2 == 0) goto L3f
            goto L5b
        L3f:
            java.lang.String r1 = r5.countryCode
            java.lang.String r2 = "uk"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L57
            java.lang.String r1 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.String r2 = "special country of UK to map GB."
            com.huawei.hms.framework.common.Logger.i(r1, r2)
            java.lang.String r1 = "gb"
            r5.countryCode = r1
            r5.countrySource = r0
            goto L5f
        L57:
            r5.checkCodeLenth()
            goto L5f
        L5b:
            r5.countryCode = r1
            r5.countrySource = r1
        L5f:
            return
    }

    private void init(android.content.Context r1, boolean r2) {
            r0 = this;
            if (r1 == 0) goto L3d
            r0.getVendorCountryCode()     // Catch: java.lang.Exception -> L35
            boolean r2 = r0.isCodeValidate()     // Catch: java.lang.Exception -> L35
            if (r2 == 0) goto L13
            java.lang.String r1 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = "get issue_country code from VENDOR_COUNTRY"
            com.huawei.hms.framework.common.Logger.i(r1, r2)     // Catch: java.lang.Exception -> L35
            return
        L13:
            r0.getSimCountryCode(r1)     // Catch: java.lang.Exception -> L35
            boolean r1 = r0.isCodeValidate()     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto L24
            java.lang.String r1 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = "get issue_country code from SIM_COUNTRY"
            com.huawei.hms.framework.common.Logger.i(r1, r2)     // Catch: java.lang.Exception -> L35
            return
        L24:
            r0.getLocaleCountryCode()     // Catch: java.lang.Exception -> L35
            boolean r1 = r0.isCodeValidate()     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto L3c
            java.lang.String r1 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = "get issue_country code from LOCALE_INFO"
            com.huawei.hms.framework.common.Logger.i(r1, r2)     // Catch: java.lang.Exception -> L35
            goto L3c
        L35:
            java.lang.String r1 = com.huawei.hms.framework.network.grs.local.model.CountryCodeBean.TAG
            java.lang.String r2 = "get CountryCode error"
            com.huawei.hms.framework.common.Logger.w(r1, r2)
        L3c:
            return
        L3d:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "context must be not null.Please provide app's Context"
            r1.<init>(r2)
            throw r1
    }

    private boolean isCodeValidate() {
            r2 = this;
            java.lang.String r0 = r2.countryCode
            java.lang.String r1 = "UNKNOWN"
            boolean r0 = r1.equals(r0)
            r0 = r0 ^ 1
            return r0
    }

    public java.lang.String getCountryCode() {
            r1 = this;
            java.lang.String r0 = r1.countryCode
            return r0
    }

    public java.lang.String getCountrySource() {
            r1 = this;
            java.lang.String r0 = r1.countrySource
            return r0
    }
}

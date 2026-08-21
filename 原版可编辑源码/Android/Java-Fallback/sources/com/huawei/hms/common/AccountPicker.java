package com.huawei.hms.common;

public final class AccountPicker {
    public static final java.lang.String CHOOSE_ACCOUNT = "com.huawei.hms.common.account.CHOOSE_ACCOUNT";
    public static final int CUSTOM_THEME_ACCOUNT_CHIPS = 2;
    public static final int CUSTOM_THEME_GAMES = 1;
    public static final int CUSTOM_THEME_NONE = 0;
    public static final java.lang.String EXTRA_ADD_ACCOUNT_AUTH_TOKEN_TYPE_STRING = "authTokenType";
    public static final java.lang.String EXTRA_ADD_ACCOUNT_OPTIONS_BUNDLE = "addAccountOptions";
    public static final java.lang.String EXTRA_ADD_ACCOUNT_REQUIRED_FEATURES_STRING_ARRAY = "addAccountRequiredFeatures";
    public static final java.lang.String EXTRA_ALLOWABLE_ACCOUNTS_ARRAYLIST = "allowableAccounts";
    public static final java.lang.String EXTRA_ALLOWABLE_ACCOUNT_TYPES_STRING_ARRAY = "allowableAccountTypes";
    public static final java.lang.String EXTRA_ALWAYS_PROMPT_FOR_ACCOUNT = "alwaysPromptForAccount";
    public static final java.lang.String EXTRA_DESCRIPTION_TEXT_OVERRIDE = "descriptionTextOverride";
    public static final java.lang.String EXTRA_HOSTED_DOMAIN_FILTER = "hostedDomainFilter";
    public static final java.lang.String EXTRA_IS_ACCOUNT_CHIPS_ACCOUNT_PICKER = "pickedFromAccountChips";
    public static final java.lang.String EXTRA_OVERRIDE_CUSTOM_THEME = "overrideCustomTheme";
    public static final java.lang.String EXTRA_OVERRIDE_THEME = "overrideTheme";
    public static final java.lang.String EXTRA_REAL_CLIENT_PACKAGE = "realClientPackage";
    public static final java.lang.String EXTRA_SELECTED_ACCOUNT = "selectedAccount";
    public static final java.lang.String EXTRA_SET_HMS_CORE_ACCOUNT = "setHmsCoreAccount";
    private static final java.lang.String HMS_PACKAGE = "com.huawei.hms";
    public static final int THEME_DEFAULT = 0;
    public static final int THEME_LIGHT = 1;

    private AccountPicker() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Intent newChooseAccountIntent(android.accounts.Account r2, java.util.ArrayList<android.accounts.Account> r3, java.lang.String[] r4, boolean r5, java.lang.String r6, java.lang.String r7, java.lang.String[] r8, android.os.Bundle r9) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.huawei.hms.common.account.CHOOSE_ACCOUNT"
            r0.setAction(r1)
            java.lang.String r1 = "com.huawei.hms"
            r0.setPackage(r1)
            java.lang.String r1 = "allowableAccounts"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "allowableAccountTypes"
            r0.putExtra(r3, r4)
            java.lang.String r3 = "addAccountOptions"
            r0.putExtra(r3, r9)
            java.lang.String r3 = "selectedAccount"
            r0.putExtra(r3, r2)
            java.lang.String r2 = "alwaysPromptForAccount"
            r0.putExtra(r2, r5)
            java.lang.String r2 = "descriptionTextOverride"
            r0.putExtra(r2, r6)
            java.lang.String r2 = "authTokenType"
            r0.putExtra(r2, r7)
            java.lang.String r2 = "addAccountRequiredFeatures"
            r0.putExtra(r2, r8)
            r2 = 0
            java.lang.String r3 = "setHmsCoreAccount"
            r0.putExtra(r3, r2)
            java.lang.String r3 = "overrideTheme"
            r0.putExtra(r3, r2)
            java.lang.String r3 = "overrideCustomTheme"
            r0.putExtra(r3, r2)
            return r0
    }
}

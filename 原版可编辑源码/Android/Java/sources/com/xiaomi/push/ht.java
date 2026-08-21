package com.xiaomi.push;

import com.igexin.sdk.PushConsts;

public enum ht {
    a("INVALID"),
    b("bar:click"),
    c("bar:cancel"),
    d("app:open"),
    e("package uninstalled"),
    f("app_uninstalled"),
    g("client_info_update"),
    h("client_info_update_ok"),
    i("client_miid_update"),
    j("pull"),
    k("ios_sleep"),
    l("ios_wakeup"),
    m("awake_app"),
    n("normal_client_config_update"),
    o("custom_client_config_update"),
    p("daily_check_client_config"),
    q("data_collection"),
    r("registration id expired"),
    s("!!!MILINK CONNECTION DISABLED!!!"),
    t("package_unregistered"),
    u("decrypt_msg_fail"),
    v("sync_info"),
    w("sync_info_result"),
    x("force_sync"),
    y("upload_client_log"),
    z("notification_bar_info"),
    A("sync_miid"),
    B("upload"),
    C("clear_push_message"),
    D("clear_push_message_ack"),
    E("disable_push"),
    F("enable_push"),
    G("client_ab_test"),
    H("awake_system_app"),
    I("awake_app_response"),
    J("hb_register"),
    K("hb_register_res"),
    L("hb_unregister"),
    M("hb_unregister_res"),
    N("3rd_party_reg_update"),
    O("vr_upload"),
    P("log_upload"),
    Q("app_wakeup"),
    R("app_sleep"),
    S("notification_switch"),
    T("activity_resumed"),
    U("headsup_reporter"),
    V("scene_push_rule_update"),
    W("scene_push_rule_delete"),
    X("scene_push_rule_trigger"),
    Y("notification_removed"),
    Z("notification_arrived"),
    aa(PushConsts.KEY_NOTIFICATION_CLICKED),
    ab("pull_down_pop"),
    ac("app_data_cleared"),
    ad("tts_data_reporter"),
    ae("sdk_start_activity"),
    af("detect_app_alive"),
    ag("detect_app_alive_result");

    public final String a;

    ht(String str) {
        this.a = str;
    }

    @Override
    public String toString() {
        return this.a;
    }
}

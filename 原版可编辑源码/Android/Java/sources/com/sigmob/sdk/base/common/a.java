package com.sigmob.sdk.base.common;

import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.downloadlib.constants.EventConstants;

public enum a {
    a("start", null),
    b(PointCategory.FINISH, null),
    c("click", null),
    d("closecard_show", null),
    e("closecard_close", null),
    f("fourElements_show", null),
    g("fourElements_close", null),
    h(PointCategory.SHOW, null),
    i("ad_playing", null),
    j("ad_play_load", null),
    k("pause", null),
    l(PointCategory.VIDEO_START, null),
    m(PointCategory.VIDEO_PAUSE, null),
    n(PointCategory.PLAY_QUARTER, null),
    o(PointCategory.PLAY_TWO_QUARTERS, null),
    p(PointCategory.PLAY_THREE_QUARTERS, null),
    q("play_complete", null),
    r("complete", null),
    s(PointCategory.SKIP, null),
    t("click_skip", null),
    u("companion_click", null),
    v(PointCategory.VIDEO_CLICK, null),
    w("ad_close", null),
    x("ad_vclose", null),
    y(PointCategory.LOAD, null),
    z("load_success", null),
    A("load_failure", null),
    B("mute", null),
    C("unmute", null),
    D("rotation", null),
    E(PointCategory.DOWNLOAD_START, null),
    F(EventConstants.Label.DOWNLOAD_FINISH, null),
    G("install_start", null),
    H(EventConstants.Label.INSTALL_FINISH, null),
    I(PointCategory.OPEN_DEEPLINK, null),
    J(PointCategory.OPEN_DEEPLINK_FAILED, null),
    K("error", null),
    L("show_skip", null),
    M("reward", null),
    N("ad_video_start", null),
    O(PointCategory.AD_SHOW, null),
    P(PointCategory.FEED_CLICK, null),
    Q(PointCategory.VIDEO_START, null),
    R(PointCategory.VIDEO_PAUSE, null),
    S(PointCategory.AD_HIDE, null),
    T(PointCategory.VIDEO_LINK, null),
    U(PointCategory.VIDEO_RESTART, null);

    private final String V;
    private final String W;

    a(String str, String str2) {
        this.V = str;
        this.W = str2;
    }

    public String a() {
        return this.V;
    }

    public String b() {
        return this.W;
    }
}

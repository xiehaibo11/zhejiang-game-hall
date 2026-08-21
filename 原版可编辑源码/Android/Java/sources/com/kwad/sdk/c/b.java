package com.kwad.sdk.c;

import com.kuaishou.weapon.p0.IWeaponInitParams;
import com.kwad.sdk.utils.at;
import com.kwad.sdk.utils.be;

public final class b implements IWeaponInitParams {
    @Override
    public final boolean getAPPLISTSwitch() {
        return !at.Ji();
    }

    @Override
    public final String getAppKey() {
        return "400000";
    }

    @Override
    public final String getChannel() {
        return "";
    }

    @Override
    public final String getDeviceId() {
        return be.getDeviceId();
    }

    @Override
    public final boolean getPrivacySwitch() {
        return true;
    }

    @Override
    public final String getProductName() {
        return "ksadsdk";
    }

    @Override
    public final String getSecKey() {
        return "f12536c198aee4d8198aad2300827430";
    }

    @Override
    public final String getUserId() {
        return "";
    }
}

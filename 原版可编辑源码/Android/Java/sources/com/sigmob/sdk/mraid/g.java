package com.sigmob.sdk.mraid;

import com.igexin.sdk.PushBuildConfig;
import com.sigmob.sdk.base.models.PlacementType;

public enum g {
    a("close"),
    b("expand") {
        @Override
        boolean a(PlacementType placementType) {
            return placementType == PlacementType.INLINE;
        }
    },
    c("usecustomclose"),
    d(PushBuildConfig.sdk_conf_channelid) {
        @Override
        boolean a(PlacementType placementType) {
            return true;
        }
    },
    e("unload"),
    f("openFourElements"),
    g("resize") {
        @Override
        boolean a(PlacementType placementType) {
            return true;
        }
    },
    h("setOrientationProperties"),
    i("playVideo") {
        @Override
        boolean a(PlacementType placementType) {
            return placementType == PlacementType.INLINE;
        }
    },
    j("storePicture") {
        @Override
        boolean a(PlacementType placementType) {
            return true;
        }
    },
    k("createCalendarEvent") {
        @Override
        boolean a(PlacementType placementType) {
            return true;
        }
    },
    l("vpaid") {
        @Override
        boolean a(PlacementType placementType) {
            return true;
        }
    },
    m("extension") {
        @Override
        boolean a(PlacementType placementType) {
            return true;
        }
    },
    n("");

    private final String o;

    g(String str) {
        this.o = str;
    }

    public static g a(String str) {
        for (g gVar : values()) {
            if (gVar.o.equals(str)) {
                return gVar;
            }
        }
        return n;
    }

    public String a() {
        return this.o;
    }

    boolean a(PlacementType placementType) {
        return false;
    }
}

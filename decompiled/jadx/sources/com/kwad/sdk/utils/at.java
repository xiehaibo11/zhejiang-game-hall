package com.kwad.sdk.utils;

import android.location.Location;
import com.kwad.sdk.api.KsCustomController;
import com.kwad.sdk.api.SdkConfig;
import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.service.ServiceProvider;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class at {
    private static boolean IV() {
        if (!com.kwad.framework.a.a.ml.booleanValue()) {
            return false;
        }
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        return false;
    }

    public static boolean IW() {
        KsCustomController ksCustomController;
        if (IV()) {
            return true;
        }
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                if (!ksCustomController.canReadLocation()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static Location IX() {
        KsCustomController ksCustomController;
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE == null || (ksCustomController = sdkConfigHE.ksCustomController) == null) {
                return null;
            }
            return ksCustomController.getLocation();
        } catch (Throwable unused) {
            return null;
        }
    }

    public static boolean IY() {
        KsCustomController ksCustomController;
        if (IV()) {
            return true;
        }
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                if (!ksCustomController.canUsePhoneState()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static String IZ() {
        KsCustomController ksCustomController;
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            return (sdkConfigHE == null || (ksCustomController = sdkConfigHE.ksCustomController) == null) ? "" : ksCustomController.getImei();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String[] Ja() {
        KsCustomController ksCustomController;
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                return ksCustomController.getImeis();
            }
        } catch (Throwable unused) {
        }
        return new String[]{"", ""};
    }

    public static String Jb() {
        KsCustomController ksCustomController;
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            return (sdkConfigHE == null || (ksCustomController = sdkConfigHE.ksCustomController) == null) ? "" : ksCustomController.getAndroidId();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static boolean Jc() {
        KsCustomController ksCustomController;
        if (IV()) {
            return true;
        }
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                if (!ksCustomController.canUseMacAddress()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static String Jd() {
        KsCustomController ksCustomController;
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            return (sdkConfigHE == null || (ksCustomController = sdkConfigHE.ksCustomController) == null) ? "" : ksCustomController.getMacAddress();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static boolean Je() {
        KsCustomController ksCustomController;
        if (IV()) {
            return true;
        }
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                if (!ksCustomController.canUseOaid()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static String Jf() {
        KsCustomController ksCustomController;
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            return (sdkConfigHE == null || (ksCustomController = sdkConfigHE.ksCustomController) == null) ? "" : ksCustomController.getOaid();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static boolean Jg() {
        KsCustomController ksCustomController;
        if (IV()) {
            return true;
        }
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                if (!ksCustomController.canUseNetworkState()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static boolean Jh() {
        KsCustomController ksCustomController;
        if (IV()) {
            return true;
        }
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                if (!ksCustomController.canUseStoragePermission()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static boolean Ji() {
        KsCustomController ksCustomController;
        if (IV()) {
            return true;
        }
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                if (!ksCustomController.canReadInstalledPackages()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static List<String> Jj() {
        KsCustomController ksCustomController;
        try {
            SdkConfig sdkConfigHE = ServiceProvider.HE();
            if (sdkConfigHE != null && (ksCustomController = sdkConfigHE.ksCustomController) != null) {
                return ksCustomController.getInstalledPackages();
            }
        } catch (Throwable unused) {
        }
        return new ArrayList();
    }
}

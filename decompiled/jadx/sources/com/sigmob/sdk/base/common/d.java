package com.sigmob.sdk.base.common;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.res.XmlResourceParser;
import android.os.Bundle;
import android.text.TextUtils;
import com.czhj.sdk.common.mta.PointEntitySuper;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.AppInfo;
import com.sigmob.sdk.base.models.rtb.Ad;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.windad.WindAdError;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes3.dex */
public class d {
    public static WindAdError a() {
        String str;
        int i;
        String attributeValue = "";
        Context contextB = com.sigmob.sdk.b.b();
        try {
            SigmobLog.e("checkActivity: " + AdActivity.class.getName());
            contextB.getPackageManager().getActivityInfo(new ComponentName(contextB, (Class<?>) AdActivity.class), 128);
        } catch (PackageManager.NameNotFoundException e) {
            SigmobLog.e("checkActivity: " + e.getMessage());
            return WindAdError.ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR;
        } catch (Throwable th) {
            th.printStackTrace();
        }
        try {
            if (contextB.getApplicationInfo().targetSdkVersion >= 26) {
                String[] strArr = contextB.getPackageManager().getPackageInfo(contextB.getPackageName(), 4096).requestedPermissions;
                String str2 = "";
                for (int i2 = 0; i2 < strArr.length; i2++) {
                    if (strArr[i2].equals("android.permission.REQUEST_INSTALL_PACKAGES")) {
                        str2 = strArr[i2];
                    }
                }
                if (TextUtils.isEmpty(str2)) {
                    return WindAdError.ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR;
                }
            }
        } catch (Throwable th2) {
            SigmobLog.e("checkPermission: " + th2.getMessage());
        }
        try {
        } catch (Throwable th3) {
            SigmobLog.e("checkProguard: " + th3.getMessage());
        }
        if (!Ad.class.getName().endsWith("sdk.base.models.rtb.Ad")) {
            SigmobLog.e("checkProguard Ad: " + Ad.class.getName());
            return WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR;
        }
        if (!MaterialMeta.class.getName().endsWith("sdk.base.models.rtb.MaterialMeta")) {
            SigmobLog.e("checkProguard Strategy: " + MaterialMeta.class.getName());
            return WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR;
        }
        if (!AppInfo.class.getName().endsWith("sdk.base.models.AppInfo")) {
            SigmobLog.e("checkProguard AppInfo: " + AppInfo.class.getName());
            return WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR;
        }
        if (!PointEntitySuper.class.getName().endsWith("sdk.common.mta.PointEntitySuper")) {
            SigmobLog.e("checkProguard PointCategory: " + PointEntitySuper.class.getName());
            return WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR;
        }
        try {
            String packageName = contextB.getPackageName();
            PackageInfo packageInfo = contextB.getPackageManager().getPackageInfo(packageName, 8);
            if (packageInfo.providers != null) {
                for (ProviderInfo providerInfo : packageInfo.providers) {
                    str = providerInfo.authority;
                    if (str != null) {
                        if (str.equals(packageName + ".sigprovider")) {
                            Bundle bundle = contextB.getPackageManager().getProviderInfo(new ComponentName(contextB, providerInfo.name), 128).metaData;
                            i = bundle != null ? bundle.getInt("android.support.FILE_PROVIDER_PATHS") : -1;
                        }
                    }
                }
                str = "";
            } else {
                str = "";
            }
            SigmobLog.e("check targetAuthority:" + str + " xml :" + i);
            if (TextUtils.isEmpty(str)) {
                return WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR;
            }
            if (i == -1) {
                return WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR;
            }
            XmlResourceParser xml = contextB.getResources().getXml(i);
            int eventType = xml.getEventType();
            String attributeValue2 = "";
            while (true) {
                if (eventType == 1) {
                    break;
                }
                if (eventType == 2) {
                    if (xml.getName().equals("external-cache-path") && xml.getAttributeCount() >= 2) {
                        attributeValue = xml.getAttributeValue(0);
                        attributeValue2 = xml.getAttributeValue(1);
                        if (attributeValue.equals("SigMob_root") && attributeValue2.equals("SigDownload")) {
                            SigmobLog.e("check name: " + attributeValue + " path :" + attributeValue2);
                            break;
                        }
                    }
                } else if (eventType == 0) {
                }
                eventType = xml.next();
            }
            if (!attributeValue.equals("SigMob_root") || !attributeValue2.equals("SigDownload")) {
                return WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR;
            }
            SigmobLog.e("check name: " + attributeValue + " path :" + attributeValue2);
            return null;
        } catch (PackageManager.NameNotFoundException e2) {
            e2.printStackTrace();
            return null;
        } catch (XmlPullParserException e3) {
            e3.printStackTrace();
            return null;
        } catch (Exception e4) {
            e4.printStackTrace();
            return null;
        }
    }
}

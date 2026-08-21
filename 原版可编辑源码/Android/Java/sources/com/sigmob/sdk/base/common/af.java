package com.sigmob.sdk.base.common;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import android.util.Log;
import com.czhj.sdk.common.utils.AppPackageUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.AndroidMarket;
import com.sigmob.sdk.base.models.rtb.WXProgramRes;
import com.sigmob.sdk.videoAd.BaseAdActivity;
import cz.msebera.android.httpclient.HttpVersion;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public enum af {
    a(0 == true ? 1 : 0) {
        @Override
        public String a(BaseAdUnit baseAdUnit) {
            return null;
        }

        @Override
        protected void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) {
            SigmobLog.d("Link to about page ignored.");
        }

        @Override
        public boolean a(Uri uri) {
            return "about".equalsIgnoreCase(uri.getScheme());
        }
    },
    b(0 == true ? 1 : 0) {
        @Override
        public String a(BaseAdUnit baseAdUnit) {
            if (baseAdUnit == null || baseAdUnit.getWXProgramRes() == null) {
                return null;
            }
            return baseAdUnit.getWXProgramRes().wx_app_path;
        }

        @Override
        protected void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) throws Exception {
            if (baseAdUnit.getInteractionType() != 7) {
                throw new Exception("performAction interaction_type is not right with " + baseAdUnit.getInteractionType());
            }
            WXProgramRes wXProgramRes = baseAdUnit.getWXProgramRes();
            if (wXProgramRes != null) {
                try {
                    Class<?> cls = Class.forName("com.tencent.mm.opensdk.openapi.WXAPIFactory");
                    Method method = cls.getMethod("createWXAPI", Context.class, String.class);
                    method.setAccessible(true);
                    Object objInvoke = method.invoke(cls, context, wXProgramRes.wx_app_id);
                    Class<?> cls2 = Class.forName("com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req");
                    Object objNewInstance = cls2.newInstance();
                    Field declaredField = cls2.getDeclaredField("userName");
                    declaredField.setAccessible(true);
                    declaredField.set(objNewInstance, wXProgramRes.wx_app_username);
                    Field declaredField2 = cls2.getDeclaredField("path");
                    declaredField2.setAccessible(true);
                    declaredField2.set(objNewInstance, wXProgramRes.wx_app_path);
                    Field declaredField3 = cls2.getDeclaredField("miniprogramType");
                    declaredField3.setAccessible(true);
                    declaredField3.set(objNewInstance, 0);
                    Method method2 = objInvoke.getClass().getMethod("sendReq", objNewInstance.getClass().getSuperclass());
                    method2.setAccessible(true);
                    boolean zBooleanValue = ((Boolean) method2.invoke(objInvoke, objNewInstance)).booleanValue();
                    Log.d("lance", "openB:isSendReq " + zBooleanValue);
                    if (zBooleanValue) {
                        return;
                    }
                    throw new Exception("get mini_program error: " + uri.toString());
                } catch (Throwable th) {
                    SigmobLog.e("get mini_program error " + th.getMessage());
                    throw new Exception("get mini_program error: " + uri.toString());
                }
            }
        }

        @Override
        public boolean a(Uri uri) {
            String scheme = uri.getScheme();
            return (HttpVersion.HTTP.equalsIgnoreCase(scheme) || "HTTPS".equalsIgnoreCase(scheme)) ? false : true;
        }
    },
    c(1 == true ? 1 : 0) {
        @Override
        public String a(BaseAdUnit baseAdUnit) {
            if (baseAdUnit == null) {
                return null;
            }
            return baseAdUnit.getDeeplinkUrl();
        }

        @Override
        protected void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) throws Exception {
            s.a(context, uri);
        }

        @Override
        public boolean a(Uri uri) {
            String scheme = uri.getScheme();
            return (HttpVersion.HTTP.equalsIgnoreCase(scheme) || "HTTPS".equalsIgnoreCase(scheme)) ? false : true;
        }
    },
    d(0 == true ? 1 : 0) {
        @Override
        public String a(BaseAdUnit baseAdUnit) {
            if (baseAdUnit == null || baseAdUnit.getAndroidMarket() == null) {
                return null;
            }
            return baseAdUnit.getAndroidMarket().market_url;
        }

        @Override
        protected void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) throws Exception {
            AndroidMarket androidMarket = baseAdUnit.getAndroidMarket();
            if (androidMarket != null) {
                Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(androidMarket.market_url));
                if (!TextUtils.isEmpty(androidMarket.appstore_package_name)) {
                    try {
                        if (AppPackageUtil.getPackageManager(context).getPackageInfo(androidMarket.appstore_package_name, 0) != null) {
                            intent.setPackage(androidMarket.appstore_package_name);
                        }
                    } catch (Throwable th) {
                        SigmobLog.e("get store package error " + th.getMessage());
                    }
                }
                s.b(context, intent);
            }
        }

        @Override
        public boolean a(Uri uri) {
            String scheme = uri.getScheme();
            return (HttpVersion.HTTP.equalsIgnoreCase(scheme) || "HTTPS".equalsIgnoreCase(scheme)) ? false : true;
        }
    },
    e(1 == true ? 1 : 0) {
        @Override
        public String a(BaseAdUnit baseAdUnit) {
            if (baseAdUnit == null) {
                return null;
            }
            return baseAdUnit.getLanding_page();
        }

        @Override
        protected void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) throws Exception {
            if (baseAdUnit.getInteractionType() == 2 || baseAdUnit.getInteractionType() == 3) {
                return;
            }
            throw new Exception("Could not handle download Scheme url: " + uri);
        }

        @Override
        public boolean a(Uri uri) {
            String scheme = uri.getScheme();
            return HttpVersion.HTTP.equalsIgnoreCase(scheme) || "HTTPS".equalsIgnoreCase(scheme);
        }
    },
    f(1 == true ? 1 : 0) {
        @Override
        public String a(BaseAdUnit baseAdUnit) {
            if (baseAdUnit == null) {
                return null;
            }
            return baseAdUnit.getLanding_page();
        }

        @Override
        protected void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) throws Exception {
            if (agVar.b()) {
                s.b(context, new Intent("android.intent.action.VIEW", uri));
            } else {
                f.b(baseAdUnit);
                AdActivity.a(context, (Class<? extends BaseAdActivity>) AdActivity.class, baseAdUnit.getUuid());
            }
        }

        @Override
        public boolean a(Uri uri) {
            String scheme = uri.getScheme();
            return HttpVersion.HTTP.equalsIgnoreCase(scheme) || "HTTPS".equalsIgnoreCase(scheme);
        }
    },
    g(0 == true ? 1 : 0) {
        @Override
        public String a(BaseAdUnit baseAdUnit) {
            return null;
        }

        @Override
        protected void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) {
        }

        @Override
        public boolean a(Uri uri) {
            return false;
        }
    };

    private final boolean h;

    af(boolean z) {
        this.h = z;
    }

    public abstract String a(BaseAdUnit baseAdUnit);

    protected abstract void a(Context context, Uri uri, ag agVar, BaseAdUnit baseAdUnit) throws Exception;

    public void a(ag agVar, Context context, Uri uri, boolean z, BaseAdUnit baseAdUnit) throws Exception {
        SigmobLog.d("Ad event URL: " + uri);
        if (this.h && !z) {
            throw new Exception("Attempted to handle action without user interaction.");
        }
        a(context, uri, agVar, baseAdUnit);
    }

    public abstract boolean a(Uri uri);
}

package com.mbridge.msdk.dycreator.wrapper;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.e.f;
import com.mbridge.msdk.dycreator.viewmodel.BaseViewModel;
import com.mbridge.msdk.dycreator.viewmodel.MBCommonViewVModel;
import com.mbridge.msdk.dycreator.viewmodel.MBRewardViewVModel;
import com.mbridge.msdk.dycreator.viewmodel.MBSplashViewVModel;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class DynamicViewCreator {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile DynamicViewCreator f3314a = null;
    private static int b = -201;

    private DynamicViewCreator() {
        b.a().a(a.f().j());
    }

    public static DynamicViewCreator getInstance() {
        if (f3314a == null) {
            synchronized (DynamicViewCreator.class) {
                if (f3314a == null) {
                    f3314a = new DynamicViewCreator();
                }
            }
        }
        return f3314a;
    }

    public void createDynamicView(DyOption dyOption, DynamicViewBackListener dynamicViewBackListener) {
        boolean z;
        BaseViewModel mBSplashViewVModel;
        boolean z2;
        if (dyOption == null) {
            dynamicViewBackListener.viewCreateFail(new com.mbridge.msdk.dycreator.b.a(com.mbridge.msdk.dycreator.b.b.NOT_FOUND_DYNAMIC_OPTION));
            return;
        }
        if (dynamicViewBackListener == null) {
            return;
        }
        Context contextJ = a.f().j();
        if (contextJ == null) {
            dynamicViewBackListener.viewCreateFail(new com.mbridge.msdk.dycreator.b.a(com.mbridge.msdk.dycreator.b.b.NOT_FOUND_CONTEXT));
            return;
        }
        if (dyOption != null) {
            z = false;
            if (dyOption.getCampaignEx() == null) {
                dynamicViewBackListener.viewCreateFail(new com.mbridge.msdk.dycreator.b.a(com.mbridge.msdk.dycreator.b.b.NOT_FOUND_CAMPAIGN));
                z2 = false;
            } else {
                z2 = true;
            }
            if (dyOption.getFile() != null || dyOption.getFileDirs() == null) {
                z = z2;
            } else {
                dynamicViewBackListener.viewCreateFail(new com.mbridge.msdk.dycreator.b.a(com.mbridge.msdk.dycreator.b.b.BIND_DATA_FILE_OR_DIR));
            }
        } else {
            z = true;
        }
        if (z) {
            try {
                a(dyOption, "create dynamic view", "start");
                View viewA = a(contextJ, dyOption);
                if (viewA == null) {
                    dynamicViewBackListener.viewCreateFail(new com.mbridge.msdk.dycreator.b.a(com.mbridge.msdk.dycreator.b.b.FILE_CREATE_VIEW_FILE));
                    a(dyOption, "create dynamic view", "fail");
                    return;
                }
                a(dyOption, "create dynamic view", "success");
                int i = AnonymousClass1.f3315a[dyOption.getDyAdType().ordinal()];
                if (i == 1) {
                    mBSplashViewVModel = new MBSplashViewVModel(dyOption);
                } else if (i == 2) {
                    mBSplashViewVModel = new MBRewardViewVModel(dyOption);
                } else {
                    mBSplashViewVModel = new MBCommonViewVModel();
                }
                mBSplashViewVModel.setDynamicViewBackListener(dynamicViewBackListener);
                com.mbridge.msdk.dycreator.binding.b.a().a(mBSplashViewVModel);
                mBSplashViewVModel.setModelDataAndBind();
                a(dyOption, "create dynamic view", "bind_data_done");
                dynamicViewBackListener.viewCreatedSuccess(viewA);
            } catch (Exception e) {
                z.d("DynamicViewCreator", e.getMessage());
                dynamicViewBackListener.viewCreateFail(new com.mbridge.msdk.dycreator.b.a(b, e.getMessage()));
            }
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3315a;

        static {
            int[] iArr = new int[DyAdType.values().length];
            f3315a = iArr;
            try {
                iArr[DyAdType.SPLASH.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3315a[DyAdType.REWARD.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    public View createDynamicView(DyOption dyOption) {
        Context contextJ;
        if (dyOption == null || (contextJ = a.f().j()) == null) {
            return null;
        }
        return a(contextJ, dyOption);
    }

    private View a(Context context, DyOption dyOption) {
        List<String> fileDirs;
        if (dyOption == null || (fileDirs = dyOption.getFileDirs()) == null) {
            return null;
        }
        int i = 0;
        ViewGroup viewGroup = null;
        int i2 = 0;
        while (i2 < fileDirs.size()) {
            try {
                if (!TextUtils.isEmpty(fileDirs.get(i2))) {
                    if (i2 == 0) {
                        viewGroup = (ViewGroup) f.a(context).a(fileDirs.get(i2));
                    } else {
                        String str = fileDirs.get(i2);
                        if (context != null && viewGroup != null && !TextUtils.isEmpty(str)) {
                            try {
                                JSONObject jSONObject = new JSONObject(str);
                                String string = jSONObject.getString("folder_dir");
                                if (!TextUtils.isEmpty(string)) {
                                    JSONArray jSONArray = new JSONArray(jSONObject.optString("ext_template"));
                                    if (jSONArray.length() != 0) {
                                        int i3 = i;
                                        while (i3 < jSONArray.length()) {
                                            JSONObject jSONObject2 = jSONArray.getJSONObject(i3);
                                            if (jSONObject2 != null) {
                                                View viewA = f.a(context).a(string + File.separator + jSONObject2.optString("name"));
                                                if (viewGroup != null && viewA != null) {
                                                    JSONObject jSONObject3 = jSONObject2.getJSONObject("layout");
                                                    if (jSONObject3 == null) {
                                                        viewGroup.addView(viewA, 3);
                                                    } else if (context != null && viewGroup != null && viewA != null && jSONObject3 != null) {
                                                        try {
                                                            String strOptString = jSONObject3.optString("parent_id");
                                                            ViewGroup viewGroup2 = !TextUtils.isEmpty(strOptString) ? (ViewGroup) f.a(context).a(viewGroup, strOptString) : viewGroup;
                                                            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) viewGroup2.getLayoutParams();
                                                            if (layoutParams != null) {
                                                                String strOptString2 = jSONObject3.optString("below", "");
                                                                if (!TextUtils.isEmpty(strOptString2)) {
                                                                    layoutParams.addRule(3, strOptString2.hashCode());
                                                                }
                                                                String strOptString3 = jSONObject3.optString("left_of", "");
                                                                if (!TextUtils.isEmpty(strOptString3)) {
                                                                    layoutParams.addRule(i, strOptString3.hashCode());
                                                                }
                                                                String strOptString4 = jSONObject3.optString("right_of", "");
                                                                if (!TextUtils.isEmpty(strOptString4)) {
                                                                    layoutParams.addRule(1, strOptString4.hashCode());
                                                                }
                                                                int iOptInt = jSONObject3.optInt("index", -2);
                                                                int iOptInt2 = jSONObject3.optInt(RemoteMessageConst.Notification.VISIBILITY, -1);
                                                                if (iOptInt2 != -1) {
                                                                    viewA.setVisibility(iOptInt2);
                                                                }
                                                                if (iOptInt != -2) {
                                                                    viewGroup2.addView(viewA, iOptInt, layoutParams);
                                                                } else {
                                                                    viewGroup2.addView(viewA, layoutParams);
                                                                }
                                                            }
                                                        } catch (Exception e) {
                                                            z.d("DynamicViewCreator", e.getMessage());
                                                        }
                                                    }
                                                }
                                            }
                                            i3++;
                                            i = 0;
                                        }
                                    }
                                }
                            } catch (Exception e2) {
                                z.d("DynamicViewCreator", e2.getMessage());
                            }
                        }
                    }
                }
                i2++;
                i = 0;
            } catch (Exception e3) {
                z.d("DynamicViewCreator", e3.getMessage());
            }
        }
        return viewGroup;
    }

    private void a(DyOption dyOption, String str, String str2) {
        if (dyOption != null) {
            try {
                if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
                    e.a(a.f().j(), dyOption.getDyAdType() + "", dyOption.getTemplateType(), str, str2, dyOption.getCampaignEx());
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}

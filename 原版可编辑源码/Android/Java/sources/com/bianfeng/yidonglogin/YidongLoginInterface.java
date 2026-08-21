package com.bianfeng.yidonglogin;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;
import com.bianfeng.yidonglogin.utils.LoadingDialogUtils;
import com.bianfeng.yidonglogin.utils.YidongLoginConstant;
import com.bianfeng.ymnsdk.feature.YmnDataBuilder;
import com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.ResourceManger;
import com.cmic.gen.sdk.auth.GenAuthnHelper;
import com.cmic.gen.sdk.auth.GenTokenListener;
import com.cmic.gen.sdk.view.GenAuthThemeConfig;
import com.cmic.gen.sdk.view.GenBackPressedListener;
import com.cmic.gen.sdk.view.GenCheckBoxListener;
import com.cmic.gen.sdk.view.GenLoginClickListener;
import com.cmic.gen.sdk.view.GenLoginPageInListener;
import java.util.LinkedHashMap;
import org.json.JSONObject;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class YidongLoginInterface extends YmnChannelInterface {
    public static final String YIDONGLOGIN_LOGIN = "yidonglogin_login";
    private static volatile boolean isSuc = false;
    private static volatile String loginText = "";
    private String app_id;
    private String app_key;
    private String clause1;
    private String clause2;
    private String clause3;
    private String clause4;
    private String clause_url1;
    private String clause_url2;
    private String clause_url3;
    private String clause_url4;
    private GenAuthnHelper mAuthnHelper;
    private GenTokenListener mListener;
    private String privacy;
    private GenAuthThemeConfig.Builder themeConfigBuilder;

    @Override
    public String getPluginId() {
        return "30037";
    }

    @Override
    public String getPluginName() {
        return "yidonglogin";
    }

    @Override
    public int getPluginVersion() {
        return 7;
    }

    @Override
    public String getSdkVersion() {
        return "5.9.6";
    }

    @Override
    public void login() {
        isSuc = false;
        this.themeConfigBuilder.setAuthPageWindowMode(300, 300).setNumFieldOffsetY(50).setLogBtnOffsetY(120).setThemeId(ResourceManger.getId(getContext(), "R.style.ymnsdk_yidonglogin_Dialog"));
        this.mAuthnHelper.setAuthThemeConfig(this.themeConfigBuilder.build());
        displayLogin();
    }

    private void displayLogin() {
        this.mAuthnHelper.loginAuth(this.app_id, this.app_key, this.mListener, YidongLoginConstant.CMCC_SDK_REQUEST_LOGIN_AUTH_CODE);
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        initConfig();
        initSdk();
    }

    private void initConfig() {
        this.app_id = getPropertie(YidongLoginConstant.APP_ID);
        this.app_key = getMetaData(YidongLoginConstant.APP_KEY);
        this.privacy = getMetaData(YidongLoginConstant.PRIVACY);
        this.clause1 = getMetaData(YidongLoginConstant.CLAUSE1);
        this.clause_url1 = getMetaData(YidongLoginConstant.CLAUSE_URL1);
        this.clause2 = getMetaData(YidongLoginConstant.CLAUSE2);
        this.clause_url2 = getMetaData(YidongLoginConstant.CLAUSE_URL2);
        this.clause3 = getMetaData(YidongLoginConstant.CLAUSE3);
        this.clause_url3 = getMetaData(YidongLoginConstant.CLAUSE_URL3);
        this.clause4 = getMetaData(YidongLoginConstant.CLAUSE4);
        this.clause_url4 = getMetaData(YidongLoginConstant.CLAUSE_URL4);
        Logger.i("app_id---->" + this.app_id);
        Logger.i("app_key---->" + this.app_key);
        Logger.i("privacy---->" + this.privacy);
        Logger.i("clause1---->" + this.clause1);
        Logger.i("clause_url1---->" + this.clause_url1);
        Logger.i("clause2---->" + this.clause2);
        Logger.i("clause_url2---->" + this.clause_url2);
        Logger.i("clause3---->" + this.clause3);
        Logger.i("clause_url3---->" + this.clause_url3);
        Logger.i("clause4---->" + this.clause4);
        Logger.i("clause_url4---->" + this.clause_url4);
    }

    private void initSdk() {
        Logger.i("initSdk-->" + this.app_id + "--" + this.app_key + "--");
        GenAuthnHelper.setDebugMode(false);
        GenAuthnHelper genAuthnHelper = GenAuthnHelper.getInstance(getContext().getApplicationContext());
        this.mAuthnHelper = genAuthnHelper;
        genAuthnHelper.setPageInListener(new GenLoginPageInListener() {
            @Override
            public void onLoginPageInComplete(String str, JSONObject jSONObject) {
                if (str.equals("200087")) {
                    Logger.i(" YidongLoginInterface initSDK page in---------------");
                }
            }
        });
        this.mListener = new GenTokenListener() {
            @Override
            public void onGetTokenComplete(int i, JSONObject jSONObject) {
                if (jSONObject != null) {
                    try {
                        Logger.i("YidongLoginInterface  onGetTokenComplete--->" + i + "----" + jSONObject.toString());
                        String strOptString = jSONObject.optString("resultCode");
                        if ("103000".equals(strOptString)) {
                            boolean unused = YidongLoginInterface.isSuc = true;
                            YidongLoginInterface.this.mAuthnHelper.quitAuthActivity();
                            YmnDataBuilder.createJson(YidongLoginInterface.this).append(IUserFeature.LOGIN_SUC_RS_SESSION, jSONObject.optString("token")).sendResult(102);
                        } else if ("200020".equals(strOptString)) {
                            if (!YidongLoginInterface.isSuc) {
                                YidongLoginInterface.this.sendResult(106, strOptString + "|" + jSONObject.toString());
                            }
                        } else {
                            YidongLoginInterface.this.sendResult(105, strOptString + "|" + jSONObject.toString());
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                        YidongLoginInterface.this.sendResult(105, "" + e.getMessage());
                    }
                }
            }
        };
        RelativeLayout relativeLayout = new RelativeLayout(getContext());
        relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        View viewInflate = getActivity().getLayoutInflater().inflate(ResourceManger.getId(getActivity(), "R.layout.yidonglogin_title_layout"), (ViewGroup) relativeLayout, false);
        TextView textView = (TextView) viewInflate.findViewById(ResourceManger.getId(getActivity(), "R.id.yidonglogin_back"));
        textView.setClickable(true);
        textView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                YidongLoginInterface.this.mAuthnHelper.quitAuthActivity();
            }
        });
        GenAuthThemeConfig.Builder privacyBookSymbol = new GenAuthThemeConfig.Builder().setStatusBar(-16742704, false).setAuthContentView(viewInflate).setNavTextSize(20).setNavTextColor(-16742960).setNavColor(-16776961).setNumberSize(20, true).setNumberColor(-13421773).setNumberOffsetX(80).setNumFieldOffsetY_B(100).setNumFieldOffsetY(100).setLogBtnTextColor(-1).setLogBtnImgPath("umcsdk_login_btn_bg").setLogBtnText("", -1, 15, false).setLogBtnOffsetY_B(200).setLogBtnOffsetY(200).setLogBtnMargin(30, 30).setCheckTipText("").setGenBackPressedListener(new GenBackPressedListener() {
            @Override
            public void onBackPressed() {
                Logger.i("YidongLoginInterface  onBackPressed----返回键回调>");
            }
        }).setLogBtnClickListener(new GenLoginClickListener() {
            @Override
            public void onLoginClickStart(Context context, JSONObject jSONObject) {
                LoadingDialogUtils.show(context);
                if (jSONObject != null) {
                    Logger.i("YidongLoginInterface  onLoginClickStart---->" + jSONObject.toString());
                }
            }

            @Override
            public void onLoginClickComplete(Context context, JSONObject jSONObject) {
                LoadingDialogUtils.dismiss();
                if (jSONObject != null) {
                    Logger.i("YidongLoginInterface  onLoginClickComplete---->" + jSONObject.toString());
                }
            }
        }).setGenCheckBoxListener(new GenCheckBoxListener() {
            @Override
            public void onLoginClick(final Context context, JSONObject jSONObject) {
                YidongLoginInterface.this.tryRunOnUiThreadOrJustRun(new Runnable() {
                    @Override
                    public void run() {
                        Toast.makeText(context, "未同意隐私", 1).show();
                    }
                });
            }
        }).setCheckedImgPath("umcsdk_check_image").setUncheckedImgPath("umcsdk_uncheck_image").setCheckBoxImgPath("umcsdk_check_image", "umcsdk_uncheck_image", 9, 9).setPrivacyState(false).setPrivacyAlignment("登录即同意$$运营商条款$$" + this.privacy, this.clause1, this.clause_url1, this.clause2, this.clause_url2, this.clause3, this.clause_url3, this.clause4, this.clause_url4).setPrivacyText(10, -10066330, -16742960, false, true).setClauseColor(-10066330, -16742960).setPrivacyMargin(20, 30).setPrivacyOffsetY(30).setPrivacyOffsetY_B(50).setCheckBoxLocation(1).setAppLanguageType(0).setPrivacyBookSymbol(true);
        this.themeConfigBuilder = privacyBookSymbol;
        this.mAuthnHelper.setAuthThemeConfig(privacyBookSymbol.build());
    }

    @YFunction(name = YIDONGLOGIN_LOGIN)
    public void yidonglogin(LinkedHashMap<String, String> linkedHashMap) {
        if (linkedHashMap.containsKey("loginText")) {
            loginText = linkedHashMap.get("loginText");
            try {
                this.themeConfigBuilder.setPrivacyState(linkedHashMap.get("agreePrivacy").equalsIgnoreCase("1"));
            } catch (Exception unused) {
            }
            if (!loginText.contains("登录") && !loginText.contains("注册")) {
                sendResult(105, "未按移动要求设置登录按钮文字");
                return;
            } else {
                this.themeConfigBuilder.setLogBtnText(loginText);
                login();
                return;
            }
        }
        this.themeConfigBuilder.setLogBtnText("");
        login();
    }

    @YFunction(name = YIDONGLOGIN_LOGIN)
    public void yidonglogin(String str) {
        if (!str.contains("登录") && !str.contains("注册")) {
            sendResult(105, "未按移动要求设置登录按钮文字");
        } else {
            this.themeConfigBuilder.setLogBtnText(str);
            login();
        }
    }

    @Override
    public void onDestroy() {
        GenAuthnHelper genAuthnHelper = this.mAuthnHelper;
        if (genAuthnHelper != null) {
            genAuthnHelper.setAuthThemeConfig(null);
            this.mAuthnHelper.setPageInListener(null);
        }
        this.mListener = null;
        super.onDestroy();
    }
}

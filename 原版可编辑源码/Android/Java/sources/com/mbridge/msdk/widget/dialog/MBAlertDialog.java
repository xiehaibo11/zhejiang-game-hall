package com.mbridge.msdk.widget.dialog;

import android.app.Dialog;
import android.content.Context;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.TextView;
import com.mbridge.msdk.c.b;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.custom.DownloadMessageDialog;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import cz.msebera.android.httpclient.protocol.HTTP;
import java.util.Locale;

public class MBAlertDialog extends Dialog {
    private a a;
    private TextView b;
    private TextView c;
    private Button d;
    private Button e;
    private int f;
    private int g;

    public MBAlertDialog(Context context, final a aVar) {
        super(context);
        getWindow().setBackgroundDrawable(new ColorDrawable(0));
        requestWindowFeature(1);
        View viewInflate = LayoutInflater.from(context).inflate(s.a(context, "mbridge_cm_alertview", "layout"), (ViewGroup) null);
        this.a = aVar;
        if (viewInflate != null) {
            setContentView(viewInflate);
            try {
                this.b = (TextView) viewInflate.findViewById(s.a(context, "mbridge_video_common_alertview_titleview", "id"));
            } catch (Exception e) {
                z.a("MBAlertDialog", e.getMessage());
            }
            try {
                this.c = (TextView) viewInflate.findViewById(s.a(context, "mbridge_video_common_alertview_contentview", "id"));
                this.d = (Button) viewInflate.findViewById(s.a(context, "mbridge_video_common_alertview_confirm_button", "id"));
                this.e = (Button) viewInflate.findViewById(s.a(context, "mbridge_video_common_alertview_cancel_button", "id"));
            } catch (Exception e2) {
                z.a("MBAlertDialog", e2.getMessage());
            }
        }
        Button button = this.e;
        if (button != null) {
            button.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a();
                    }
                    MBAlertDialog.this.cancel();
                    MBAlertDialog.this.clear();
                }
            });
        }
        Button button2 = this.d;
        if (button2 != null) {
            button2.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.b();
                    }
                    MBAlertDialog.this.cancel();
                    MBAlertDialog.this.clear();
                }
            });
        }
        setCanceledOnTouchOutside(false);
        setCancelable(false);
    }

    public void clear() {
        if (this.a != null) {
            this.a = null;
        }
    }

    public a getListener() {
        return this.a;
    }

    public void setTitle(String str) {
        TextView textView = this.b;
        if (textView != null) {
            textView.setText(str);
        }
    }

    public void setContent(String str) {
        TextView textView = this.c;
        if (textView != null) {
            textView.setText(str);
        }
    }

    public void setConfirmText(String str) {
        Button button = this.d;
        if (button != null) {
            button.setText(str);
        }
    }

    public void setCancelText(String str) {
        Button button = this.e;
        if (button != null) {
            button.setText(str);
        }
    }

    private void a(String str, String str2, String str3, String str4) {
        setTitle(str);
        setContent(str2);
        setConfirmText(str3);
        setCancelText(str4);
    }

    public void makeRVAlertView(String str) {
        try {
            String string = ag.b(getContext(), "MBridge_ConfirmTitle" + str, "").toString();
            String string2 = ag.b(getContext(), "MBridge_ConfirmContent" + str, "").toString();
            String string3 = ag.b(getContext(), "MBridge_CancelText" + str, "").toString();
            String string4 = ag.b(getContext(), "MBridge_ConfirmText" + str, "").toString();
            com.mbridge.msdk.c.a aVarB = b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (TextUtils.isEmpty(string) && TextUtils.isEmpty(string2) && TextUtils.isEmpty(string3) && TextUtils.isEmpty(string4)) {
                if (aVarB != null) {
                    a(aVarB.ar(), aVarB.as(), aVarB.at(), aVarB.au());
                    return;
                }
                String language = Locale.getDefault().getLanguage();
                if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                    setTitle("确认关闭？");
                    setContent("关闭后您将不会获得任何奖励噢~ ");
                    setConfirmText("确认关闭");
                    setCancelText("继续观看");
                    return;
                }
                setTitle("Confirm to close? ");
                setContent("You will not be rewarded after closing the window");
                setConfirmText("Close it");
                setCancelText("Continue");
                return;
            }
            String language2 = Locale.getDefault().getLanguage();
            if (TextUtils.isEmpty(string)) {
                if (aVarB != null) {
                    string = aVarB.ar();
                } else if (!TextUtils.isEmpty(language2) && language2.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                    setTitle("确认关闭？");
                } else {
                    setTitle("Confirm to close? ");
                }
            }
            if (TextUtils.isEmpty(string2)) {
                if (aVarB != null) {
                    string2 = aVarB.as();
                } else if (!TextUtils.isEmpty(language2) && language2.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                    setContent("关闭后您将不会获得任何奖励噢~ ");
                } else {
                    setContent("You will not be rewarded after closing the window");
                }
            }
            if (TextUtils.isEmpty(string4)) {
                if (aVarB != null) {
                    string4 = aVarB.at();
                } else if (!TextUtils.isEmpty(language2) && language2.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                    setConfirmText("确认关闭");
                } else {
                    setConfirmText("Close it");
                }
            }
            if (TextUtils.isEmpty(string3)) {
                if (aVarB != null) {
                    string3 = aVarB.au();
                } else if (!TextUtils.isEmpty(language2) && language2.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                    setCancelText("继续观看");
                } else {
                    setCancelText("Continue");
                }
            }
            a(string, string2, string4, string3);
        } catch (Exception e) {
            z.a("MBAlertDialog", e.getMessage());
        }
    }

    public void makeInstallAlert(String str) {
        setCancelable(false);
        String language = Locale.getDefault().getLanguage();
        if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
            setTitle("提示");
            if (TextUtils.isEmpty(str)) {
                setContent("应用已经安装完成，是否现在打开？");
            } else {
                setContent(str + " 已完成安装，是否现在打开？");
            }
            setConfirmText("取消");
            setCancelText("打开");
            return;
        }
        setTitle("Notification");
        if (TextUtils.isEmpty(str)) {
            setContent("app has been installed. Open it right now?");
        } else {
            setContent(str + " has been installed. Open it right now?");
        }
        setConfirmText("Cancel");
        setCancelText("Open");
    }

    public void makeDownloadAlert(String str) {
        setCancelable(true);
        String language = Locale.getDefault().getLanguage();
        if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
            setTitle("提示");
            if (TextUtils.isEmpty(str)) {
                setContent("确认下载吗？");
            } else {
                setContent("确认下载\"" + str + "\"吗？");
            }
            setConfirmText("取消");
            setCancelText("确认下载");
            return;
        }
        setTitle("Notification");
        if (TextUtils.isEmpty(str)) {
            setContent("Confirm to download?");
        } else {
            setContent("Confirm to download\"" + str + "\"?");
        }
        setConfirmText("Cancel");
        setCancelText("Confirm");
    }

    public void makePlayableAlertView() {
        com.mbridge.msdk.c.a aVarB = b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            a(aVarB.ar(), aVarB.as(), aVarB.at(), aVarB.av());
            return;
        }
        String language = Locale.getDefault().getLanguage();
        if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
            setTitle("确认关闭？");
            setContent("关闭后您将不会获得任何奖励噢~ ");
            setConfirmText("确认关闭");
            setCancelText("继续试玩");
            return;
        }
        setTitle("Confirm to close? ");
        setContent("You will not be rewarded after closing the window");
        setConfirmText("Close it");
        setCancelText("Continue");
    }

    public void makeIVAlertView(int i, String str) {
        try {
            String string = ag.b(getContext(), "MBridge_ConfirmTitle" + str, "").toString();
            String string2 = ag.b(getContext(), "MBridge_ConfirmContent" + str, "").toString();
            String string3 = ag.b(getContext(), "MBridge_CancelText" + str, "").toString();
            String string4 = ag.b(getContext(), "MBridge_ConfirmText" + str, "").toString();
            if (!TextUtils.isEmpty(string) || !TextUtils.isEmpty(string2) || !TextUtils.isEmpty(string3) || !TextUtils.isEmpty(string4)) {
                a(string, string2, string3, string4);
            } else {
                String language = Locale.getDefault().getLanguage();
                if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                    setTitle(i == com.mbridge.msdk.foundation.same.a.w ? "确认关闭？" : "提示");
                    setContent(i == com.mbridge.msdk.foundation.same.a.w ? "如果你选择继续，结束后将会获得奖励。确认关闭吗？" : "如果你选择继续，结束后将会获得奖励。是否继续？");
                    setConfirmText(i == com.mbridge.msdk.foundation.same.a.w ? "确认关闭" : "取消");
                    setCancelText("继续");
                } else {
                    setTitle(i == com.mbridge.msdk.foundation.same.a.w ? "Confirm" : "Tips");
                    setContent(i == com.mbridge.msdk.foundation.same.a.w ? "If you choose to continue, you will receive a reward after the end. Confirm closed?" : "If you choose to continue, you will receive a reward after the end. Whether to continue?");
                    setConfirmText(i == com.mbridge.msdk.foundation.same.a.w ? HTTP.CONN_CLOSE : "Cancel");
                    setCancelText("Continue");
                }
            }
        } catch (Exception e) {
            z.a("MBAlertDialog", e.getMessage());
        }
    }

    @Override
    public void show() {
        super.show();
        try {
            getWindow().setFlags(8, 8);
            super.show();
            hideNavigationBar(getWindow());
            getWindow().clearFlags(8);
        } catch (Exception e) {
            z.d("MBAlertDialog", e.getMessage());
            super.show();
        }
    }

    public void onlyShow() {
        super.show();
    }

    public void hideNavigationBar(Window window) {
        if (window != null) {
            window.setFlags(1024, 1024);
            if (Build.VERSION.SDK_INT >= 19) {
                window.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                window.getDecorView().setSystemUiVisibility(4098);
            } else {
                window.getDecorView().setSystemUiVisibility(2);
            }
            if (Build.VERSION.SDK_INT >= 28) {
                WindowManager.LayoutParams attributes = window.getAttributes();
                attributes.layoutInDisplayCutoutMode = 1;
                window.setAttributes(attributes);
            }
            window.setBackgroundDrawable(new ColorDrawable(0));
            window.setLayout(-1, -1);
            window.setGravity(17);
        }
    }

    public void setDialogWidthAndHeight(float f, float f2) {
        DisplayMetrics displayMetrics = getContext().getResources().getDisplayMetrics();
        if (DownloadMessageDialog.isScreenOrientationPortrait(getContext())) {
            this.g = displayMetrics.widthPixels;
            this.f = displayMetrics.heightPixels;
            WindowManager.LayoutParams attributes = getWindow().getAttributes();
            attributes.width = -1;
            attributes.height = (int) (this.f * f2);
            attributes.gravity = 80;
            getWindow().setAttributes(attributes);
            return;
        }
        this.g = displayMetrics.heightPixels;
        this.f = displayMetrics.widthPixels;
        WindowManager.LayoutParams attributes2 = getWindow().getAttributes();
        attributes2.width = (int) (this.f * f);
        attributes2.height = -1;
        attributes2.gravity = 17;
        getWindow().setAttributes(attributes2);
    }
}

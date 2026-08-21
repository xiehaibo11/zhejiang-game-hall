package com.mbridge.msdk.widget.custom;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.ApkDisplayInfo;
import com.mbridge.msdk.system.NoProGuard;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;

public class CustomViewMessageWrap implements NoProGuard {
    private ApkDisplayInfo apkDisplayInfo;
    private CampaignEx campaignEx;
    private String layoutFilePath;
    private Map<String, View> views;

    public boolean checkIsNull(Object obj) {
        return obj == null;
    }

    public CustomViewMessageWrap() {
    }

    public CustomViewMessageWrap(CampaignEx campaignEx, String str) {
        this.campaignEx = campaignEx;
        this.apkDisplayInfo = campaignEx == null ? null : campaignEx.getApkDisplayInfo();
        this.layoutFilePath = str;
    }

    public CampaignEx getCampaignEx() {
        return this.campaignEx;
    }

    public View getView(String str) {
        Map<String, View> map = this.views;
        if (map != null) {
            return map.get(str);
        }
        return null;
    }

    public void putView(String str, View view) {
        if (this.views == null) {
            this.views = new HashMap();
        }
        this.views.put(str, view);
    }

    public String getApplicationName() {
        return checkIsNull(this.apkDisplayInfo) ? "" : this.apkDisplayInfo.getAppName();
    }

    public String getApplicationNameFromCampaign() {
        return checkIsNull(this.campaignEx) ? "" : this.campaignEx.getAppName();
    }

    public String getApplicationContext() {
        return checkIsNull(this.campaignEx) ? "" : this.campaignEx.getAppDesc();
    }

    public String getApplicationPrivacy() {
        return checkIsNull(this.apkDisplayInfo) ? "" : this.apkDisplayInfo.getPriUrl();
    }

    public String getApplicationUpdateTime() {
        return checkIsNull(this.apkDisplayInfo) ? "" : this.apkDisplayInfo.getUpdateTime();
    }

    public String getApplicationPermissions() {
        if (checkIsNull(this.apkDisplayInfo)) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        ArrayList<String> permDescAllList = this.apkDisplayInfo.getPermDescAllList();
        if (permDescAllList != null && permDescAllList.size() > 0) {
            for (int i = 0; i < permDescAllList.size(); i++) {
                String str = permDescAllList.get(i);
                if (!TextUtils.isEmpty(str)) {
                    sb.append(str);
                    if (i < permDescAllList.size() - 1) {
                        sb.append("\n");
                    }
                }
            }
        }
        return sb.toString();
    }

    public String getApplicationDeveloper() {
        return checkIsNull(this.apkDisplayInfo) ? "" : this.apkDisplayInfo.getDevName();
    }

    public String getApplicationVersion() {
        return checkIsNull(this.apkDisplayInfo) ? "" : this.apkDisplayInfo.getAppVersion();
    }

    public String getApplicationScore() {
        return checkIsNull(this.campaignEx) ? String.format("已有 %s 人评分", String.valueOf(new Random().nextInt(10000) + 100000)) : String.format("已有 %s 人评分", String.valueOf(this.campaignEx.getNumberRating()));
    }

    public String getApplicationLogo() {
        return checkIsNull(this.campaignEx) ? "" : this.campaignEx.getIconUrl();
    }

    public String getApplicationImage() {
        return checkIsNull(this.campaignEx) ? "" : this.campaignEx.getImageUrl();
    }

    public int getStarCount() {
        if (checkIsNull(this.campaignEx)) {
            return 5;
        }
        return (int) Math.ceil(this.campaignEx.getRating());
    }

    public String getLayoutFilePath() {
        return this.layoutFilePath;
    }

    public static final String getMessage(CustomViewMessageWrap customViewMessageWrap, String str) {
        if (TextUtils.isEmpty(str) && customViewMessageWrap == null) {
            return null;
        }
        try {
            Method method = customViewMessageWrap.getClass().getMethod(str, new Class[0]);
            method.setAccessible(true);
            Object objInvoke = method.invoke(customViewMessageWrap, new Object[0]);
            return objInvoke != null ? String.valueOf(objInvoke) : "";
        } catch (IllegalAccessException e) {
            z.d("CustomViewMessageWrap", e.getMessage());
            return "";
        } catch (NoSuchMethodException e2) {
            z.d("CustomViewMessageWrap", e2.getMessage());
            return "";
        } catch (InvocationTargetException e3) {
            z.d("CustomViewMessageWrap", e3.getMessage());
            return "";
        }
    }

    public static final String getViewFilePath(String str) {
        if (!TextUtils.equals(str, "mbridge_download_dialog_view")) {
            return "";
        }
        return e.b(c.j) + "/" + str + ".xml";
    }

    public static final void copyViewFile(Context context, String str) throws Throwable {
        copyAssetsDir2Phone(context, str);
    }

    /* JADX WARN: Removed duplicated region for block: B:56:0x00f2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:67:0x00ea A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:78:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void copyAssetsDir2Phone(Context context, String str) throws Throwable {
        InputStream inputStream;
        InputStream inputStreamOpen;
        FileOutputStream fileOutputStream = null;
        try {
            try {
                String[] list = context.getAssets().list(str);
                if (list.length > 0) {
                    new File(e.b(c.j) + File.separator + str).mkdirs();
                    int length = list.length;
                    for (int i = 0; i < length; i++) {
                        String str2 = str + File.separator + list[i];
                        copyAssetsDir2Phone(context, str2);
                        str = str2.substring(0, str2.lastIndexOf(File.separator));
                    }
                    inputStreamOpen = null;
                } else {
                    inputStreamOpen = context.getAssets().open(str);
                    try {
                        File file = new File(e.b(c.j) + File.separator + str);
                        if (!file.exists() || file.length() == 0) {
                            FileOutputStream fileOutputStream2 = new FileOutputStream(file);
                            try {
                                byte[] bArr = new byte[1024];
                                while (true) {
                                    int i2 = inputStreamOpen.read(bArr);
                                    if (i2 == -1) {
                                        break;
                                    } else {
                                        fileOutputStream2.write(bArr, 0, i2);
                                    }
                                }
                                fileOutputStream = fileOutputStream2;
                            } catch (IOException e) {
                                inputStream = inputStreamOpen;
                                e = e;
                                fileOutputStream = fileOutputStream2;
                                try {
                                    z.d("wrap", e.getMessage());
                                    if (fileOutputStream != null) {
                                        try {
                                            fileOutputStream.flush();
                                            fileOutputStream.close();
                                        } catch (IOException unused) {
                                        }
                                    }
                                    if (inputStream == null) {
                                        return;
                                    } else {
                                        inputStream.close();
                                    }
                                } catch (Throwable th) {
                                    th = th;
                                    if (fileOutputStream != null) {
                                        try {
                                            fileOutputStream.flush();
                                            fileOutputStream.close();
                                        } catch (IOException unused2) {
                                        }
                                    }
                                    if (inputStream == null) {
                                        try {
                                            inputStream.close();
                                            throw th;
                                        } catch (IOException unused3) {
                                            throw th;
                                        }
                                    }
                                    throw th;
                                }
                            } catch (Throwable th2) {
                                inputStream = inputStreamOpen;
                                th = th2;
                                fileOutputStream = fileOutputStream2;
                                if (fileOutputStream != null) {
                                }
                                if (inputStream == null) {
                                }
                            }
                        }
                    } catch (IOException e2) {
                        inputStream = inputStreamOpen;
                        e = e2;
                    } catch (Throwable th3) {
                        inputStream = inputStreamOpen;
                        th = th3;
                    }
                }
                if (fileOutputStream != null) {
                    try {
                        fileOutputStream.flush();
                        fileOutputStream.close();
                    } catch (IOException unused4) {
                    }
                }
            } catch (IOException unused5) {
                return;
            }
        } catch (IOException e3) {
            e = e3;
            inputStream = null;
        } catch (Throwable th4) {
            th = th4;
            inputStream = null;
        }
        if (inputStreamOpen != null) {
            inputStreamOpen.close();
        }
    }
}

package com.ymnsdk;

import android.app.Activity;
import android.content.Intent;
import com.igexin.sdk.PushConsts;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import org.json.JSONObject;

public class RePluginTestSdk {
    public static void testHostApk(Activity activity) throws Throwable {
        simulateInstallExternalPlugin(activity);
    }

    private static void copyAssetsFileToAppFiles(Activity activity, String str, String str2) throws Throwable {
        FileOutputStream fileOutputStream;
        InputStream inputStreamOpen;
        byte[] bArr;
        InputStream inputStream = null;
        fileOutputStreamOpenFileOutput = null;
        FileOutputStream fileOutputStreamOpenFileOutput = null;
        inputStream = null;
        try {
            try {
                inputStreamOpen = activity.getAssets().open(str);
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        } catch (Exception e2) {
            e = e2;
            fileOutputStream = null;
        } catch (Throwable th) {
            th = th;
            fileOutputStream = null;
        }
        try {
            fileOutputStreamOpenFileOutput = activity.openFileOutput(str2, 0);
            bArr = new byte[1024];
        } catch (Exception e3) {
            e = e3;
            FileOutputStream fileOutputStream2 = fileOutputStreamOpenFileOutput;
            inputStream = inputStreamOpen;
            fileOutputStream = fileOutputStream2;
            try {
                e.printStackTrace();
                inputStream.close();
                fileOutputStream.close();
            } catch (Throwable th2) {
                th = th2;
                try {
                    inputStream.close();
                    fileOutputStream.close();
                } catch (Exception e4) {
                    e4.printStackTrace();
                }
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            FileOutputStream fileOutputStream3 = fileOutputStreamOpenFileOutput;
            inputStream = inputStreamOpen;
            fileOutputStream = fileOutputStream3;
            inputStream.close();
            fileOutputStream.close();
            throw th;
        }
        while (true) {
            int i = inputStreamOpen.read(bArr);
            if (i == -1) {
                break;
            } else {
                fileOutputStreamOpenFileOutput.write(bArr, 0, i);
            }
        }
        fileOutputStreamOpenFileOutput.flush();
        inputStreamOpen.close();
        fileOutputStreamOpenFileOutput.close();
    }

    public static void simulateInstallExternalPlugin(Activity activity) throws Throwable {
        String str = activity.getFilesDir().getAbsolutePath() + File.separator + "plugin.apk";
        File file = new File(str);
        if (file.exists()) {
            FileUtils.deleteQuietly(file);
        }
        copyAssetsFileToAppFiles(activity, "plugin.apk", "plugin.apk");
        PluginInfo pluginInfoInstall = file.exists() ? RePlugin.install(str, false) : null;
        if (pluginInfoInstall != null) {
            RePlugin.preload(pluginInfoInstall);
            Intent intentCreateIntent = RePlugin.createIntent("com.yxl.fish", "com.qihoo360.replugin.sample.demo1.MainActivity");
            intentCreateIntent.addFlags(131072);
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("uaalType", "shuangkou");
                jSONObject.put("deviceID", "7736DCD6-2609-45AD-80E0-E56F93F8899B");
                jSONObject.put("userID", "SAZr714208");
                jSONObject.put("numID", "112780554");
                jSONObject.put("areaID", 10);
                jSONObject.put("sessionID", "{779F8F94-5E54-734F-A1FA-376605CFFFE7}");
                jSONObject.put("paychannel", 10035);
                jSONObject.put("cpsID", PushConsts.GET_DEVICETOKEN);
                jSONObject.put("thirdPay", "payForProduct");
                jSONObject.put("hostPackageName", "com.bf.TTShuangKou.mi");
                jSONObject.put("hostActivity", "com.cocos.game.AppActivity");
            } catch (Exception e) {
                e.printStackTrace();
            }
            intentCreateIntent.putExtra("data", "" + System.currentTimeMillis());
            intentCreateIntent.putExtra("unity", jSONObject.toString());
            intentCreateIntent.putExtra("hostPackageName", "com.yxl.fish");
            intentCreateIntent.putExtra("hostActivity", "com.cocos.game.AppActivity");
            RePlugin.startActivity(activity, intentCreateIntent);
        }
    }
}

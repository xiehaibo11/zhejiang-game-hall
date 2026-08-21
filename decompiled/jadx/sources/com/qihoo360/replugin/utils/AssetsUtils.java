package com.qihoo360.replugin.utils;

import android.content.Context;
import android.util.Log;
import com.qihoo360.loader2.PluginNativeLibsHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class AssetsUtils {
    private static final String TAG = "ws001";

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public enum QuickExtractResult {
        SUCCESS,
        FAIL,
        EXISTED
    }

    public static final boolean extractTo(Context context, String str, String str2, String str3) {
        File file = new File(str2 + "/" + str3);
        InputStream inputStreamOpenInputStreamFromAssetsQuietly = FileUtils.openInputStreamFromAssetsQuietly(context, str);
        if (inputStreamOpenInputStreamFromAssetsQuietly == null) {
            if (LogDebug.LOG) {
                LogDebug.e("ws001", "extractTo: Fail to open " + str + "from Assets");
            }
            return false;
        }
        try {
            FileUtils.copyInputStreamToFile(inputStreamOpenInputStreamFromAssetsQuietly, file);
            return true;
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        } finally {
            CloseableUtils.closeQuietly(inputStreamOpenInputStreamFromAssetsQuietly);
        }
    }

    public static final boolean quickExtractTo(Context context, PluginInfo pluginInfo, String str, String str2, String str3) {
        int i = AnonymousClass1.$SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult[quickExtractTo(context, pluginInfo.getPath(), str, str2, str3).ordinal()];
        if (i == 1) {
            return false;
        }
        if (i != 2) {
            File file = new File(str + "/" + str2);
            boolean zInstall = PluginNativeLibsHelper.install(file.getAbsolutePath(), pluginInfo.getNativeLibsDir());
            if (!zInstall) {
                LogRelease.e("ws001", "a u e rc f so " + file.getPath());
                return zInstall;
            }
        }
        return true;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    /* JADX INFO: renamed from: com.qihoo360.replugin.utils.AssetsUtils$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult;

        static {
            int[] iArr = new int[QuickExtractResult.values().length];
            $SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult = iArr;
            try {
                iArr[QuickExtractResult.FAIL.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult[QuickExtractResult.EXISTED.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    public static final QuickExtractResult quickExtractTo(Context context, String str, String str2, String str3, String str4) {
        File file = new File(str2 + "/" + str3);
        File parentFile = file.getParentFile();
        if (!parentFile.exists() && !parentFile.mkdirs()) {
            Log.e("ws001", "can't create: " + parentFile.getPath());
            return QuickExtractResult.FAIL;
        }
        if (!parentFile.exists() || !parentFile.isDirectory()) {
            Log.e("ws001", "can't create dir: " + parentFile.getPath());
            return QuickExtractResult.FAIL;
        }
        if (file.exists()) {
            return QuickExtractResult.EXISTED;
        }
        boolean zExtractTo = extractTo(context, str, str2, str3);
        if (LogDebug.LOG) {
            StringBuilder sb = new StringBuilder();
            sb.append("create new: ");
            sb.append(file.getPath());
            sb.append(zExtractTo ? " ok" : " error");
            Log.d("ws001", sb.toString());
        }
        if (!zExtractTo) {
            Log.e("ws001", "a u e rc f " + file.getPath());
            return QuickExtractResult.FAIL;
        }
        return QuickExtractResult.SUCCESS;
    }
}

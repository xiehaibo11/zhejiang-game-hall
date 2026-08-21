package com.bianfeng.addpermission.common;

import android.content.Context;
import com.bianfeng.addpermission.ui.PermissionBean;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;

public class ReadAssetsFileUtils {
    private static volatile ReadAssetsFileUtils fileUtils;
    private String fileName = "ymn_private_data";
    private boolean hasRead = false;
    private StringBuilder sb;

    private ReadAssetsFileUtils() {
    }

    public static ReadAssetsFileUtils getInstance() {
        if (fileUtils == null) {
            synchronized (ReadAssetsFileUtils.class) {
                if (fileUtils == null) {
                    fileUtils = new ReadAssetsFileUtils();
                }
            }
        }
        return fileUtils;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(6:(4:77|13|72|14)|(4:15|(1:17)(1:79)|69|59)|18|60|19|(3:24|69|59)(1:85)) */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x005a, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x005b, code lost:
    
        r0.printStackTrace();
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v0, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r6v10, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r6v3 */
    /* JADX WARN: Type inference failed for: r6v5 */
    /* JADX WARN: Type inference failed for: r6v6, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r6v8, types: [java.io.InputStream] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void init(Context context) throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        BufferedReader bufferedReader2;
        Exception e;
        if (this.hasRead) {
            return;
        }
        try {
            try {
                try {
                    context = context.getAssets().open(this.fileName);
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (Exception e2) {
                bufferedReader2 = null;
                e = e2;
                context = 0;
            } catch (Throwable th3) {
                bufferedReader = null;
                th = th3;
                context = 0;
            }
            if (context == 0) {
                if (context != 0) {
                    try {
                        context.close();
                        return;
                    } catch (IOException e3) {
                        e3.printStackTrace();
                        return;
                    }
                }
                return;
            }
            try {
                bufferedReader2 = new BufferedReader(new InputStreamReader(context));
                try {
                    this.sb = new StringBuilder();
                } catch (Exception e4) {
                    e = e4;
                    Logger.i("测试：" + e.getMessage());
                    if (bufferedReader2 != null) {
                        try {
                            bufferedReader2.close();
                        } catch (IOException e5) {
                            e5.printStackTrace();
                        }
                    }
                    if (context == 0) {
                        return;
                    } else {
                        context.close();
                    }
                }
            } catch (Exception e6) {
                bufferedReader2 = null;
                e = e6;
            } catch (Throwable th4) {
                bufferedReader = null;
                th = th4;
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (IOException e7) {
                        e7.printStackTrace();
                    }
                }
                if (context == 0) {
                    throw th;
                }
                try {
                    context.close();
                    throw th;
                } catch (IOException e8) {
                    e8.printStackTrace();
                    throw th;
                }
            }
            while (true) {
                String line = bufferedReader2.readLine();
                if (line == null) {
                    break;
                } else {
                    this.sb.append(line);
                }
            }
            this.hasRead = true;
            Logger.i("测试---------" + this.sb.toString());
            bufferedReader2.close();
            if (context != 0) {
                context.close();
            }
        } catch (IOException e9) {
            e9.printStackTrace();
        }
    }

    public String put(List<PermissionBean> list) {
        if (this.sb != null) {
            try {
                list.addAll((List) new Gson().fromJson(this.sb.toString(), new TypeToken<List<PermissionBean>>() {
                }.getType()));
            } catch (Exception e) {
                Logger.i("测试-----put----" + e.getMessage());
            }
        }
        return YmnGsonUtil.toJson(list);
    }
}

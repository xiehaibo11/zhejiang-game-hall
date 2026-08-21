package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.util.Log;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes.dex */
public class CNAdidHelper {
    private String TAG;
    private String mPath;

    private CNAdidHelper() {
        this.TAG = "CNAdidHelper";
        this.mPath = "/sdcard/Android/ZHVzY2Lk";
    }

    public static CNAdidHelper getInstance() {
        return Inner.instance;
    }

    private static class Inner {
        private static final CNAdidHelper instance = new CNAdidHelper();

        private Inner() {
        }
    }

    public String readCNAdid() {
        File file = new File(this.mPath);
        String str = "";
        if (file.isDirectory() || !file.isFile()) {
            Log.e(this.TAG, "The File doesn't not exist.");
            this.mPath = "/sdcard/Android/Data/System/local/.ZHVzY2Lk";
            readCNAdid();
        } else {
            try {
                FileInputStream fileInputStream = new FileInputStream(file);
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(fileInputStream));
                while (true) {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        break;
                    }
                    str = str + line + "\n";
                }
                fileInputStream.close();
            } catch (FileNotFoundException unused) {
                Log.e(this.TAG, "The File doesn't not exist.");
            } catch (IOException e) {
                Log.e(this.TAG, e.getMessage());
            }
        }
        Log.e(this.TAG, "本地文件读取 公共 mCNADID==" + str.split("\n")[0]);
        return str.split("\n")[0];
    }
}

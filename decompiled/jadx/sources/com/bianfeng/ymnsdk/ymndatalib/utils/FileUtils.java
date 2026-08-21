package com.bianfeng.ymnsdk.ymndatalib.utils;

import android.content.Context;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;

/* JADX INFO: loaded from: classes.dex */
public class FileUtils {
    public static String getString(InputStream inputStream) {
        InputStreamReader inputStreamReader;
        try {
            inputStreamReader = new InputStreamReader(inputStream, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            inputStreamReader = null;
        }
        BufferedReader bufferedReader = new BufferedReader(inputStreamReader);
        StringBuffer stringBuffer = new StringBuffer("");
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                stringBuffer.append(line);
                stringBuffer.append("\n");
            } catch (IOException e2) {
                e2.printStackTrace();
            }
        }
        return stringBuffer.toString();
    }

    public static String getYmnPackageInfo(Context context) {
        try {
            return getString(context.getAssets().open("ymnPackageInfo.json"));
        } catch (IOException e) {
            e.printStackTrace();
            return "";
        }
    }
}

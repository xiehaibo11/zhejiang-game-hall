package com.bianfeng.ymnsdk.sysfunc;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.Logger;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes.dex */
public class CheckEmulatorUtils {
    private static volatile CheckEmulatorUtils utils;
    private String[] known_numbers = {"15555215554", "15555215556", "15555215558", "15555215560", "15555215562", "15555215564", "15555215566", "15555215568", "15555215570", "15555215572", "15555215574", "15555215576", "15555215578", "15555215580", "15555215582", "15555215584"};

    private CheckEmulatorUtils() {
    }

    public static CheckEmulatorUtils getInstance() {
        if (utils == null) {
            synchronized (CheckEmulatorUtils.class) {
                if (utils == null) {
                    utils = new CheckEmulatorUtils();
                }
            }
        }
        return utils;
    }

    public boolean checkEmulator(Context context) {
        if (checkImsiIDS(context)) {
            Logger.i("CheckImsiIDS");
            return true;
        }
        if (checkQEmuDriverFile()) {
            Logger.i("CheckQEmuDriverFile");
            return true;
        }
        if (checkPhoneNumber(context)) {
            Logger.i("CheckQEmuDriverFile");
            return true;
        }
        if (checkOperatorNameAndroid(context)) {
            Logger.i("CheckOperatorNameAndroid");
            return true;
        }
        if (!checkCpuInfo(context)) {
            return false;
        }
        Logger.i("CheckCpuInfo");
        return true;
    }

    private boolean notHasBlueTooth() {
        BluetoothAdapter defaultAdapter = BluetoothAdapter.getDefaultAdapter();
        return defaultAdapter == null || TextUtils.isEmpty(defaultAdapter.getName());
    }

    private boolean checkQEmuDriverFile() {
        File file = new File("/proc/tty/drivers");
        if (!file.exists() || !file.canRead()) {
            return false;
        }
        byte[] bArr = new byte[(int) file.length()];
        try {
            FileInputStream fileInputStream = new FileInputStream(file);
            fileInputStream.read(bArr);
            fileInputStream.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e2) {
            e2.printStackTrace();
        }
        return new String(bArr).indexOf("goldfish") != -1;
    }

    private boolean CheckDeviceIDS(Context context) {
        try {
            String deviceId = ((TelephonyManager) context.getSystemService("phone")).getDeviceId();
            Logger.e("imei = " + deviceId);
            if (deviceId != null) {
                return deviceId.equals("000000000000000");
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private boolean checkImsiIDS(Context context) {
        try {
            String subscriberId = ((TelephonyManager) context.getSystemService("phone")).getSubscriberId();
            Logger.i("imsi_ids = " + subscriberId);
            return "310260000000000".equalsIgnoreCase(subscriberId);
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private boolean CheckEmulatorBuild() {
        return Build.BOARD == EnvironmentCompat.MEDIA_UNKNOWN || Build.BOOTLOADER == EnvironmentCompat.MEDIA_UNKNOWN || Build.BRAND == "generic" || Build.DEVICE == "generic" || Build.MODEL == "sdk" || Build.PRODUCT == "sdk" || Build.HARDWARE == "goldfish";
    }

    private boolean checkOperatorNameAndroid(Context context) {
        try {
            return ((TelephonyManager) context.getSystemService("phone")).getNetworkOperatorName().toLowerCase().equals("android");
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private boolean checkCpuInfo(Context context) {
        StringBuffer stringBuffer;
        BufferedReader bufferedReader;
        String lowerCase = "";
        try {
            Process processStart = new ProcessBuilder("/system/bin/cat", "/proc/cpuinfo").start();
            stringBuffer = new StringBuffer();
            bufferedReader = new BufferedReader(new InputStreamReader(processStart.getInputStream(), "utf-8"));
        } catch (IOException e) {
            e.printStackTrace();
        }
        while (true) {
            String line = bufferedReader.readLine();
            if (line == null) {
                break;
            }
            stringBuffer.append(line + "\n");
            return !lowerCase.contains("intel") || lowerCase.contains("amd");
        }
        bufferedReader.close();
        lowerCase = stringBuffer.toString().toLowerCase();
        Logger.e("CpuInfo = " + lowerCase);
        if (lowerCase.contains("intel")) {
        }
    }

    private boolean checkPhoneNumber(Context context) {
        String line1Number = ((TelephonyManager) context.getSystemService("phone")).getLine1Number();
        Logger.e("phonenumber = " + line1Number);
        for (String str : this.known_numbers) {
            if (str.equalsIgnoreCase(line1Number)) {
                return true;
            }
        }
        return false;
    }
}

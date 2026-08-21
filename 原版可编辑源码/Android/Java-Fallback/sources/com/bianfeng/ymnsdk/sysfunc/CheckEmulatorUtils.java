package com.bianfeng.ymnsdk.sysfunc;

public class CheckEmulatorUtils {
    private static volatile com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils utils;
    private java.lang.String[] known_numbers;

    private CheckEmulatorUtils() {
            r16 = this;
            r16.<init>()
            java.lang.String r0 = "15555215554"
            java.lang.String r1 = "15555215556"
            java.lang.String r2 = "15555215558"
            java.lang.String r3 = "15555215560"
            java.lang.String r4 = "15555215562"
            java.lang.String r5 = "15555215564"
            java.lang.String r6 = "15555215566"
            java.lang.String r7 = "15555215568"
            java.lang.String r8 = "15555215570"
            java.lang.String r9 = "15555215572"
            java.lang.String r10 = "15555215574"
            java.lang.String r11 = "15555215576"
            java.lang.String r12 = "15555215578"
            java.lang.String r13 = "15555215580"
            java.lang.String r14 = "15555215582"
            java.lang.String r15 = "15555215584"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15}
            r1 = r16
            r1.known_numbers = r0
            return
    }

    private boolean CheckDeviceIDS(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "phone"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L2c
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r3.getDeviceId()     // Catch: java.lang.Exception -> L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c
            r0.<init>()     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = "imei = "
            r0.append(r1)     // Catch: java.lang.Exception -> L2c
            r0.append(r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.util.Logger.e(r0)     // Catch: java.lang.Exception -> L2c
            if (r3 == 0) goto L30
            java.lang.String r0 = "000000000000000"
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Exception -> L2c
            if (r3 == 0) goto L30
            r3 = 1
            return r3
        L2c:
            r3 = move-exception
            r3.printStackTrace()
        L30:
            r3 = 0
            return r3
    }

    private boolean CheckEmulatorBuild() {
            r8 = this;
            java.lang.String r0 = android.os.Build.BOARD
            java.lang.String r1 = android.os.Build.BOOTLOADER
            java.lang.String r2 = android.os.Build.BRAND
            java.lang.String r3 = android.os.Build.DEVICE
            java.lang.String r4 = android.os.Build.HARDWARE
            java.lang.String r5 = android.os.Build.MODEL
            java.lang.String r6 = android.os.Build.PRODUCT
            java.lang.String r7 = "unknown"
            if (r0 == r7) goto L27
            if (r1 == r7) goto L27
            java.lang.String r0 = "generic"
            if (r2 == r0) goto L27
            if (r3 == r0) goto L27
            java.lang.String r0 = "sdk"
            if (r5 == r0) goto L27
            if (r6 == r0) goto L27
            java.lang.String r0 = "goldfish"
            if (r4 != r0) goto L25
            goto L27
        L25:
            r0 = 0
            return r0
        L27:
            r0 = 1
            return r0
    }

    private boolean checkCpuInfo(android.content.Context r6) {
            r5 = this;
            java.lang.String r6 = ""
            java.lang.String r0 = "/system/bin/cat"
            java.lang.String r1 = "/proc/cpuinfo"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}     // Catch: java.io.IOException -> L63
            java.lang.ProcessBuilder r1 = new java.lang.ProcessBuilder     // Catch: java.io.IOException -> L63
            r1.<init>(r0)     // Catch: java.io.IOException -> L63
            java.lang.Process r0 = r1.start()     // Catch: java.io.IOException -> L63
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.io.IOException -> L63
            r1.<init>()     // Catch: java.io.IOException -> L63
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.io.IOException -> L63
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.io.IOException -> L63
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.io.IOException -> L63
            java.lang.String r4 = "utf-8"
            r3.<init>(r0, r4)     // Catch: java.io.IOException -> L63
            r2.<init>(r3)     // Catch: java.io.IOException -> L63
        L28:
            java.lang.String r0 = r2.readLine()     // Catch: java.io.IOException -> L63
            if (r0 == 0) goto L43
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L63
            r3.<init>()     // Catch: java.io.IOException -> L63
            r3.append(r0)     // Catch: java.io.IOException -> L63
            java.lang.String r0 = "\n"
            r3.append(r0)     // Catch: java.io.IOException -> L63
            java.lang.String r0 = r3.toString()     // Catch: java.io.IOException -> L63
            r1.append(r0)     // Catch: java.io.IOException -> L63
            goto L28
        L43:
            r2.close()     // Catch: java.io.IOException -> L63
            java.lang.String r0 = r1.toString()     // Catch: java.io.IOException -> L63
            java.lang.String r6 = r0.toLowerCase()     // Catch: java.io.IOException -> L63
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L63
            r0.<init>()     // Catch: java.io.IOException -> L63
            java.lang.String r1 = "CpuInfo = "
            r0.append(r1)     // Catch: java.io.IOException -> L63
            r0.append(r6)     // Catch: java.io.IOException -> L63
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L63
            com.bianfeng.ymnsdk.util.Logger.e(r0)     // Catch: java.io.IOException -> L63
            goto L67
        L63:
            r0 = move-exception
            r0.printStackTrace()
        L67:
            java.lang.String r0 = "intel"
            boolean r0 = r6.contains(r0)
            if (r0 != 0) goto L7a
            java.lang.String r0 = "amd"
            boolean r6 = r6.contains(r0)
            if (r6 == 0) goto L78
            goto L7a
        L78:
            r6 = 0
            goto L7b
        L7a:
            r6 = 1
        L7b:
            return r6
    }

    private boolean checkImsiIDS(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "phone"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L2a
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = r3.getSubscriberId()     // Catch: java.lang.Exception -> L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            r0.<init>()     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = "imsi_ids = "
            r0.append(r1)     // Catch: java.lang.Exception -> L2a
            r0.append(r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = "310260000000000"
            boolean r3 = r0.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L2a
            if (r3 == 0) goto L2e
            r3 = 1
            return r3
        L2a:
            r3 = move-exception
            r3.printStackTrace()
        L2e:
            r3 = 0
            return r3
    }

    private boolean checkOperatorNameAndroid(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Exception -> L1a
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = r2.getNetworkOperatorName()     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = r2.toLowerCase()     // Catch: java.lang.Exception -> L1a
            java.lang.String r0 = "android"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Exception -> L1a
            r0 = 1
            if (r2 != r0) goto L1e
            return r0
        L1a:
            r2 = move-exception
            r2.printStackTrace()
        L1e:
            r2 = 0
            return r2
    }

    private boolean checkPhoneNumber(android.content.Context r6) {
            r5 = this;
            java.lang.String r0 = "phone"
            java.lang.Object r6 = r6.getSystemService(r0)
            android.telephony.TelephonyManager r6 = (android.telephony.TelephonyManager) r6
            java.lang.String r6 = r6.getLine1Number()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "phonenumber = "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            java.lang.String[] r0 = r5.known_numbers
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L25:
            if (r3 >= r1) goto L34
            r4 = r0[r3]
            boolean r4 = r4.equalsIgnoreCase(r6)
            if (r4 == 0) goto L31
            r6 = 1
            return r6
        L31:
            int r3 = r3 + 1
            goto L25
        L34:
            return r2
    }

    private boolean checkQEmuDriverFile() {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/proc/tty/drivers"
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L3f
            boolean r1 = r0.canRead()
            if (r1 == 0) goto L3f
            long r1 = r0.length()
            int r2 = (int) r1
            byte[] r1 = new byte[r2]
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.io.IOException -> L26 java.io.FileNotFoundException -> L2b
            r2.<init>(r0)     // Catch: java.io.IOException -> L26 java.io.FileNotFoundException -> L2b
            r2.read(r1)     // Catch: java.io.IOException -> L26 java.io.FileNotFoundException -> L2b
            r2.close()     // Catch: java.io.IOException -> L26 java.io.FileNotFoundException -> L2b
            goto L2f
        L26:
            r0 = move-exception
            r0.printStackTrace()
            goto L2f
        L2b:
            r0 = move-exception
            r0.printStackTrace()
        L2f:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            java.lang.String r1 = "goldfish"
            int r0 = r0.indexOf(r1)
            r1 = -1
            if (r0 == r1) goto L3f
            r0 = 1
            return r0
        L3f:
            r0 = 0
            return r0
    }

    public static com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils getInstance() {
            com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils r0 = com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils> r0 = com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils r1 = com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils r1 = new com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils r0 = com.bianfeng.ymnsdk.sysfunc.CheckEmulatorUtils.utils
            return r0
    }

    private boolean notHasBlueTooth() {
            r2 = this;
            android.bluetooth.BluetoothAdapter r0 = android.bluetooth.BluetoothAdapter.getDefaultAdapter()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r0 = r0.getName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            return r1
        L13:
            r0 = 0
            return r0
    }

    public boolean checkEmulator(android.content.Context r4) {
            r3 = this;
            boolean r0 = r3.checkImsiIDS(r4)
            r1 = 1
            if (r0 == 0) goto Ld
            java.lang.String r4 = "CheckImsiIDS"
            com.bianfeng.ymnsdk.util.Logger.i(r4)
            return r1
        Ld:
            boolean r0 = r3.checkQEmuDriverFile()
            java.lang.String r2 = "CheckQEmuDriverFile"
            if (r0 == 0) goto L19
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            return r1
        L19:
            boolean r0 = r3.checkPhoneNumber(r4)
            if (r0 == 0) goto L23
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            return r1
        L23:
            boolean r0 = r3.checkOperatorNameAndroid(r4)
            if (r0 == 0) goto L2f
            java.lang.String r4 = "CheckOperatorNameAndroid"
            com.bianfeng.ymnsdk.util.Logger.i(r4)
            return r1
        L2f:
            boolean r4 = r3.checkCpuInfo(r4)
            if (r4 == 0) goto L3b
            java.lang.String r4 = "CheckCpuInfo"
            com.bianfeng.ymnsdk.util.Logger.i(r4)
            return r1
        L3b:
            r4 = 0
            return r4
    }
}

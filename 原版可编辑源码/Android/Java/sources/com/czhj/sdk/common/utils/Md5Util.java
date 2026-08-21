package com.czhj.sdk.common.utils;

import com.czhj.sdk.logger.SigmobLog;
import java.io.File;
import java.io.FileInputStream;
import java.security.DigestInputStream;
import java.security.MessageDigest;
import kotlin.UByte;

public final class Md5Util {
    private static final String a = Md5Util.class.getSimpleName();
    private static final int b = 1024;

    private static String a(byte[] bArr) {
        StringBuilder sb = new StringBuilder("");
        if (bArr == null || bArr.length <= 0) {
            return null;
        }
        for (byte b2 : bArr) {
            String hexString = Integer.toHexString(b2 & UByte.MAX_VALUE);
            if (hexString.length() < 2) {
                sb.append(0);
            }
            sb.append(hexString);
        }
        return sb.toString();
    }

    public static String fileMd5(File file) {
        MessageDigest messageDigest;
        FileInputStream fileInputStream;
        if (file == null || !file.isFile()) {
            return null;
        }
        byte[] bArr = new byte[2048];
        try {
            messageDigest = MessageDigest.getInstance("md5");
            try {
                fileInputStream = new FileInputStream(file);
                while (true) {
                    try {
                        int i = fileInputStream.read(bArr, 0, 1024);
                        if (i == -1) {
                            break;
                        }
                        messageDigest.update(bArr, 0, i);
                    } catch (Throwable th) {
                        th = th;
                        try {
                            SigmobLog.e(th.getMessage());
                            if (messageDigest != null) {
                                try {
                                    messageDigest.clone();
                                } catch (Throwable th2) {
                                    SigmobLog.e(th2.getMessage());
                                }
                            }
                            if (fileInputStream != null) {
                                try {
                                    fileInputStream.close();
                                } catch (Throwable th3) {
                                    SigmobLog.e(th3.getMessage());
                                }
                            }
                            return null;
                        } finally {
                        }
                    }
                }
                if (messageDigest != null) {
                    try {
                        messageDigest.clone();
                    } catch (Throwable th4) {
                        SigmobLog.e(th4.getMessage());
                    }
                }
                try {
                    fileInputStream.close();
                } catch (Throwable th5) {
                    SigmobLog.e(th5.getMessage());
                }
                return a(messageDigest.digest());
            } catch (Throwable th6) {
                th = th6;
                fileInputStream = null;
            }
        } catch (Throwable th7) {
            th = th7;
            messageDigest = null;
            fileInputStream = null;
        }
    }

    public static String fileMd5(String str) {
        FileInputStream fileInputStream;
        DigestInputStream digestInputStream;
        if (str == null || !new File(str).exists()) {
            return null;
        }
        try {
            fileInputStream = new FileInputStream(str);
            try {
                digestInputStream = new DigestInputStream(fileInputStream, MessageDigest.getInstance("md5"));
                try {
                    while (digestInputStream.read(new byte[1024]) > 0) {
                    }
                    String strA = a(digestInputStream.getMessageDigest().digest());
                    try {
                        fileInputStream.close();
                    } catch (Throwable th) {
                        SigmobLog.e(th.getMessage());
                    }
                    try {
                        digestInputStream.close();
                    } catch (Throwable th2) {
                        SigmobLog.e(th2.getMessage());
                    }
                    return strA;
                } catch (Throwable th3) {
                    th = th3;
                    try {
                        SigmobLog.e(th.getMessage());
                        if (fileInputStream != null) {
                            try {
                                fileInputStream.close();
                            } catch (Throwable th4) {
                                SigmobLog.e(th4.getMessage());
                            }
                        }
                        if (digestInputStream != null) {
                            try {
                                digestInputStream.close();
                            } catch (Throwable th5) {
                                SigmobLog.e(th5.getMessage());
                            }
                        }
                        return null;
                    } finally {
                    }
                }
            } catch (Throwable th6) {
                th = th6;
                digestInputStream = null;
            }
        } catch (Throwable th7) {
            th = th7;
            fileInputStream = null;
            digestInputStream = null;
        }
    }

    public static String md5(String str) {
        if (str == null) {
            return null;
        }
        char[] cArr = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        try {
            byte[] bytes = str.getBytes("UTF-8");
            MessageDigest messageDigest = MessageDigest.getInstance("md5");
            messageDigest.update(bytes);
            byte[] bArrDigest = messageDigest.digest();
            char[] cArr2 = new char[bArrDigest.length * 2];
            int i = 0;
            for (byte b2 : bArrDigest) {
                int i2 = i + 1;
                cArr2[i] = cArr[(b2 >>> 4) & 15];
                i = i2 + 1;
                cArr2[i2] = cArr[b2 & 15];
            }
            return new String(cArr2);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return null;
        }
    }
}

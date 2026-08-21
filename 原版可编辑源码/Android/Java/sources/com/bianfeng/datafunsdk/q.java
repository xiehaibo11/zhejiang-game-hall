package com.bianfeng.datafunsdk;

import android.text.TextUtils;
import com.bianfeng.datafunsdk.net.RequestHeaders;
import com.bianfeng.datafunsdk.net.ResponseData;
import com.bianfeng.datafunsdk.net.ResponseHeaders;
import com.loopj.android.http.RequestParams;
import java.io.DataOutputStream;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Map;

public final class q {
    public String a;
    public byte[] b;
    public RequestHeaders c;
    public p d;
    public ResponseHeaders e;
    public ResponseData f;

    public q(String str, byte[] bArr, p pVar) {
        this.a = str;
        this.b = bArr;
        this.d = pVar;
    }

    public void a(RequestHeaders requestHeaders) {
        this.c = requestHeaders;
    }

    public void a(ResponseData responseData) {
        this.f = responseData;
    }

    public void a(ResponseHeaders responseHeaders) {
        this.e = responseHeaders;
    }

    /* JADX WARN: Removed duplicated region for block: B:146:0x0338 A[Catch: Exception -> 0x0334, TryCatch #6 {Exception -> 0x0334, blocks: (B:142:0x0330, B:146:0x0338, B:148:0x033d), top: B:172:0x0330 }] */
    /* JADX WARN: Removed duplicated region for block: B:148:0x033d A[Catch: Exception -> 0x0334, TRY_LEAVE, TryCatch #6 {Exception -> 0x0334, blocks: (B:142:0x0330, B:146:0x0338, B:148:0x033d), top: B:172:0x0330 }] */
    /* JADX WARN: Removed duplicated region for block: B:160:0x0368 A[Catch: Exception -> 0x0364, TryCatch #13 {Exception -> 0x0364, blocks: (B:156:0x0360, B:160:0x0368, B:162:0x036d), top: B:180:0x0360 }] */
    /* JADX WARN: Removed duplicated region for block: B:162:0x036d A[Catch: Exception -> 0x0364, TRY_LEAVE, TryCatch #13 {Exception -> 0x0364, blocks: (B:156:0x0360, B:160:0x0368, B:162:0x036d), top: B:180:0x0360 }] */
    /* JADX WARN: Removed duplicated region for block: B:172:0x0330 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:180:0x0360 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int a() throws Throwable {
        HttpURLConnection httpURLConnection;
        DataOutputStream dataOutputStream;
        HttpURLConnection httpURLConnection2;
        InputStream inputStream;
        InputStream inputStream2 = null;
        inputStream2 = null;
        inputStream2 = null;
        DataOutputStream dataOutputStream2 = null;
        try {
            httpURLConnection = (HttpURLConnection) new URL(this.a).openConnection();
            try {
                httpURLConnection.setConnectTimeout(15000);
                httpURLConnection.setReadTimeout(15000);
                httpURLConnection.setRequestMethod("POST");
                httpURLConnection.setUseCaches(false);
                httpURLConnection.setRequestProperty("Content-Type", RequestParams.APPLICATION_JSON);
                if (this.c != null) {
                    for (Map.Entry<String, String> entry : this.c.getHeaderMap().entrySet()) {
                        x.a("请求头中的数据：" + entry.getKey() + "--->" + entry.getValue());
                        httpURLConnection.addRequestProperty(entry.getKey(), entry.getValue());
                    }
                }
                if (!this.d.a() || this.b == null) {
                    dataOutputStream = null;
                } else {
                    httpURLConnection.setDoInput(true);
                    httpURLConnection.setDoOutput(true);
                    dataOutputStream = new DataOutputStream(httpURLConnection.getOutputStream());
                    try {
                        dataOutputStream.write(this.b);
                        dataOutputStream.flush();
                        dataOutputStream.close();
                    } catch (Exception e) {
                        e = e;
                        inputStream = null;
                        dataOutputStream2 = dataOutputStream;
                        httpURLConnection2 = httpURLConnection;
                        try {
                            e.printStackTrace();
                            x.a("post中的异常数据：这里都不做处理" + e.getMessage());
                            x.a("上抛路径：" + this.a);
                            if (dataOutputStream2 != null) {
                                try {
                                    dataOutputStream2.close();
                                } catch (Exception e2) {
                                    e2.printStackTrace();
                                    return 4;
                                }
                            }
                            if (inputStream != null) {
                                inputStream.close();
                            }
                            if (httpURLConnection2 != null) {
                                httpURLConnection2.disconnect();
                            }
                            return 4;
                        } catch (Throwable th) {
                            th = th;
                            HttpURLConnection httpURLConnection3 = httpURLConnection2;
                            dataOutputStream = dataOutputStream2;
                            inputStream2 = inputStream;
                            httpURLConnection = httpURLConnection3;
                            x.a("上抛路径：" + this.a);
                            if (dataOutputStream != null) {
                                try {
                                    dataOutputStream.close();
                                } catch (Exception e3) {
                                    e3.printStackTrace();
                                    throw th;
                                }
                            }
                            if (inputStream2 != null) {
                                inputStream2.close();
                            }
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                            }
                            throw th;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        x.a("上抛路径：" + this.a);
                        if (dataOutputStream != null) {
                        }
                        if (inputStream2 != null) {
                        }
                        if (httpURLConnection != null) {
                        }
                        throw th;
                    }
                }
                int responseCode = httpURLConnection.getResponseCode();
                if (responseCode != 200) {
                    if (responseCode >= 500 && responseCode < 600) {
                        x.a("post中的异常数据：这里都不做处理" + responseCode);
                        x.a("上抛路径：" + this.a);
                        if (dataOutputStream != null) {
                            try {
                                dataOutputStream.close();
                            } catch (Exception e4) {
                                e4.printStackTrace();
                            }
                        }
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                        return 4;
                    }
                    x.a("响应码：" + responseCode);
                    x.a("上抛路径：" + this.a);
                    if (dataOutputStream != null) {
                        try {
                            dataOutputStream.close();
                        } catch (Exception e5) {
                            e5.printStackTrace();
                        }
                    }
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    return 1;
                }
                InputStream inputStream3 = httpURLConnection.getInputStream();
                byte[] bArr = new byte[1024];
                StringBuilder sb = new StringBuilder();
                while (true) {
                    int i = inputStream3.read(bArr);
                    if (i == -1) {
                        break;
                    }
                    sb.append(new String(bArr, 0, i));
                }
                inputStream3.close();
                String string = sb.toString();
                x.a("测试响应的数据：" + string);
                if (this.e != null) {
                    String codekey = this.e.getCodekey();
                    if (!TextUtils.isEmpty(codekey)) {
                        if (this.e.getSuccessCode() == Integer.parseInt(httpURLConnection.getHeaderField(codekey))) {
                            x.a("上抛路径：" + this.a);
                            if (dataOutputStream != null) {
                                try {
                                    dataOutputStream.close();
                                } catch (Exception e6) {
                                    e6.printStackTrace();
                                }
                            }
                            if (inputStream3 != null) {
                                inputStream3.close();
                            }
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                            }
                            return 0;
                        }
                        x.a("上抛路径：" + this.a);
                        if (dataOutputStream != null) {
                            try {
                                dataOutputStream.close();
                            } catch (Exception e7) {
                                e7.printStackTrace();
                            }
                        }
                        if (inputStream3 != null) {
                            inputStream3.close();
                        }
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                        return 1;
                    }
                }
                if (this.f != null) {
                    String codeKey = this.f.getCodeKey();
                    String messagekey = this.f.getMessagekey();
                    x.a("responseData codekey=" + codeKey + " == megKey == " + messagekey);
                    Map mapA = w.a(string);
                    if (!TextUtils.isEmpty(messagekey)) {
                        x.a("responseData megKey=" + mapA.get(messagekey).toString());
                    }
                    if (!TextUtils.isEmpty(codeKey)) {
                        int successCode = this.f.getSuccessCode();
                        int i2 = (int) Double.parseDouble(mapA.get(codeKey).toString());
                        x.a("successCode=" + successCode + ",result=" + i2);
                        if (i2 == successCode) {
                            x.a("上抛路径：" + this.a);
                            if (dataOutputStream != null) {
                                try {
                                    dataOutputStream.close();
                                } catch (Exception e8) {
                                    e8.printStackTrace();
                                }
                            }
                            if (inputStream3 != null) {
                                inputStream3.close();
                            }
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                            }
                            return 0;
                        }
                        x.a("上抛路径：" + this.a);
                        if (dataOutputStream != null) {
                            try {
                                dataOutputStream.close();
                            } catch (Exception e9) {
                                e9.printStackTrace();
                            }
                        }
                        if (inputStream3 != null) {
                            inputStream3.close();
                        }
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                        return 1;
                    }
                }
                x.a("在传递参数的时候没有传递怎么判断是否上抛数据成功与否的标识");
                x.a("上抛路径：" + this.a);
                if (dataOutputStream != null) {
                    try {
                        dataOutputStream.close();
                    } catch (Exception e10) {
                        e10.printStackTrace();
                    }
                }
                if (inputStream3 != null) {
                    inputStream3.close();
                }
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
                return 1;
            } catch (Exception e11) {
                e = e11;
                httpURLConnection2 = httpURLConnection;
                inputStream = null;
                e.printStackTrace();
                x.a("post中的异常数据：这里都不做处理" + e.getMessage());
                x.a("上抛路径：" + this.a);
                if (dataOutputStream2 != null) {
                }
                if (inputStream != null) {
                }
                if (httpURLConnection2 != null) {
                }
                return 4;
            } catch (Throwable th3) {
                th = th3;
                dataOutputStream = null;
            }
        } catch (Exception e12) {
            e = e12;
            httpURLConnection = null;
        } catch (Throwable th4) {
            th = th4;
            httpURLConnection = null;
            dataOutputStream = null;
        }
    }
}

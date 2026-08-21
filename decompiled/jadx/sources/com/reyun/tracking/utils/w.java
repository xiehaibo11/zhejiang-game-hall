package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class w implements n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private n f4760a;
    private byte b;
    private String c;

    public w(n nVar, String str) {
        this.f4760a = nVar;
        this.c = str;
        this.b = Tracking.mapApi2Byte(str);
    }

    @Override // com.reyun.tracking.utils.n
    public void a(int i, Object obj) {
        n nVar;
        DataInputStream dataInputStream = new DataInputStream(new ByteArrayInputStream((byte[]) obj));
        try {
            try {
                try {
                    int i2 = dataInputStream.readByte();
                    com.reyun.tracking.a.a.d("Tracking", "=======> " + this.c + ".response.statusCode:" + i2);
                    if (i2 == 0) {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("status", i2);
                        byte b = this.b;
                        if (b == 0) {
                            jSONObject.put("ts", dataInputStream.readLong());
                            nVar = this.f4760a;
                        } else if (b == 1) {
                            byte b2 = dataInputStream.readByte();
                            JSONArray jSONArray = new JSONArray();
                            for (int i3 = 0; i3 < b2; i3++) {
                                JSONObject jSONObject2 = new JSONObject();
                                jSONObject2.put("status", (int) dataInputStream.readByte());
                                jSONArray.put(jSONObject2);
                            }
                            jSONObject.put("array", jSONArray);
                            nVar = this.f4760a;
                        } else if (b != 13) {
                            nVar = this.f4760a;
                        } else {
                            byte[] bArr = new byte[dataInputStream.readShort()];
                            dataInputStream.readFully(bArr);
                            String str = new String(bArr, "UTF-8");
                            byte[] bArr2 = new byte[dataInputStream.readShort()];
                            dataInputStream.readFully(bArr2);
                            String str2 = new String(bArr2, "UTF-8");
                            JSONObject jSONObject3 = new JSONObject();
                            jSONObject3.put("dp_url", str);
                            jSONObject3.put("dp_path", str2);
                            jSONObject.put(DBDefinition.SEGMENT_INFO, jSONObject3);
                            nVar = this.f4760a;
                        }
                        nVar.a(i2, jSONObject);
                    } else {
                        this.f4760a.a(new Exception(""), "api" + this.c + "请求错误，错误码：" + i2);
                    }
                    dataInputStream.close();
                } catch (Throwable th) {
                    try {
                        dataInputStream.close();
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    throw th;
                }
            } catch (Exception e2) {
                this.f4760a.a(e2, "api" + this.c + "请求异常" + e2.getMessage());
                dataInputStream.close();
            }
        } catch (Exception e3) {
            e3.printStackTrace();
        }
    }

    @Override // com.reyun.tracking.utils.n
    public void a(Throwable th, String str) {
        this.f4760a.a(th, str);
    }
}

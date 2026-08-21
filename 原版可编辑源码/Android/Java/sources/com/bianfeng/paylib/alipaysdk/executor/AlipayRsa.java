package com.bianfeng.paylib.alipaysdk.executor;

import com.alipay.sdk.m.n.d;
import com.bianfeng.paylib.alipaysdk.util.Base64;
import com.bianfeng.ymnsdk.util.security.RSASignature;
import com.huawei.hms.framework.common.ContainerUtils;
import java.security.KeyFactory;
import java.security.PublicKey;
import java.security.Signature;
import java.security.spec.X509EncodedKeySpec;
import org.json.JSONObject;

public class AlipayRsa {
    public static final int RESULT_CHECK_SIGN_FAILED = 1;
    public static final int RESULT_CHECK_SIGN_SUCCEED = 2;
    public static final int RESULT_INVALID_PARAM = 0;

    public static int checkSign(String str) {
        return 2;
    }

    public static boolean doCheck(String str, String str2, String str3) {
        try {
            PublicKey publicKeyGeneratePublic = KeyFactory.getInstance(d.a).generatePublic(new X509EncodedKeySpec(Base64.decode(str3)));
            Signature signature = Signature.getInstance(RSASignature.SIGN_ALGORITHMS);
            signature.initVerify(publicKeyGeneratePublic);
            signature.update(str.getBytes("utf-8"));
            return signature.verify(Base64.decode(str2));
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static JSONObject string2JSON(String str, String str2) {
        JSONObject jSONObject = new JSONObject();
        try {
            String[] strArrSplit = str.split(str2);
            for (int i = 0; i < strArrSplit.length; i++) {
                String[] strArrSplit2 = strArrSplit[i].split(ContainerUtils.KEY_VALUE_DELIMITER);
                jSONObject.put(strArrSplit2[0], strArrSplit[i].substring(strArrSplit2[0].length() + 1));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}

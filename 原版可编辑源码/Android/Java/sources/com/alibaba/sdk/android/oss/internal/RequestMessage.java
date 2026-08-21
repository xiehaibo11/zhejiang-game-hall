package com.alibaba.sdk.android.oss.internal;

import android.net.Uri;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.common.HttpMethod;
import com.alibaba.sdk.android.oss.common.OSSLog;
import com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider;
import com.alibaba.sdk.android.oss.common.utils.HttpUtil;
import com.alibaba.sdk.android.oss.common.utils.HttpdnsMini;
import com.alibaba.sdk.android.oss.common.utils.OSSUtils;
import com.alibaba.sdk.android.oss.model.BucketLifecycleRule;
import com.xiaomi.mipush.sdk.Constants;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.net.URI;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class RequestMessage extends HttpMessage {
    private String bucketName;
    private boolean checkCRC64;
    private OSSCredentialProvider credentialProvider;
    private URI endpoint;
    private String ipWithHeader;
    private HttpMethod method;
    private String objectKey;
    private URI service;
    private byte[] uploadData;
    private String uploadFilePath;
    private Uri uploadUri;
    private boolean isAuthorizationRequired = true;
    private Map<String, String> parameters = new LinkedHashMap();
    private boolean httpDnsEnable = false;
    private boolean pathStyleAccessEnable = false;
    private boolean customPathPrefixEnable = false;
    private boolean isInCustomCnameExcludeList = false;

    @Override
    public void addHeader(String str, String str2) {
        super.addHeader(str, str2);
    }

    @Override
    public void close() throws IOException {
        super.close();
    }

    @Override
    public InputStream getContent() {
        return super.getContent();
    }

    @Override
    public long getContentLength() {
        return super.getContentLength();
    }

    @Override
    public Map getHeaders() {
        return super.getHeaders();
    }

    @Override
    public String getStringBody() {
        return super.getStringBody();
    }

    @Override
    public void setContent(InputStream inputStream) {
        super.setContent(inputStream);
    }

    @Override
    public void setContentLength(long j) {
        super.setContentLength(j);
    }

    @Override
    public void setHeaders(Map map) {
        super.setHeaders(map);
    }

    @Override
    public void setStringBody(String str) {
        super.setStringBody(str);
    }

    public HttpMethod getMethod() {
        return this.method;
    }

    public void setMethod(HttpMethod httpMethod) {
        this.method = httpMethod;
    }

    public OSSCredentialProvider getCredentialProvider() {
        return this.credentialProvider;
    }

    public void setCredentialProvider(OSSCredentialProvider oSSCredentialProvider) {
        this.credentialProvider = oSSCredentialProvider;
    }

    public URI getService() {
        return this.service;
    }

    public void setService(URI uri) {
        this.service = uri;
    }

    public URI getEndpoint() {
        return this.endpoint;
    }

    public void setEndpoint(URI uri) {
        this.endpoint = uri;
    }

    public boolean isHttpDnsEnable() {
        return this.httpDnsEnable;
    }

    public void setHttpDnsEnable(boolean z) {
        this.httpDnsEnable = z;
    }

    public String getBucketName() {
        return this.bucketName;
    }

    public void setBucketName(String str) {
        this.bucketName = str;
    }

    public String getObjectKey() {
        return this.objectKey;
    }

    public void setObjectKey(String str) {
        this.objectKey = str;
    }

    public Map<String, String> getParameters() {
        return this.parameters;
    }

    public void setParameters(Map<String, String> map) {
        this.parameters = map;
    }

    public String getUploadFilePath() {
        return this.uploadFilePath;
    }

    public void setUploadFilePath(String str) {
        this.uploadFilePath = str;
    }

    public byte[] getUploadData() {
        return this.uploadData;
    }

    public void setUploadData(byte[] bArr) {
        this.uploadData = bArr;
    }

    public Uri getUploadUri() {
        return this.uploadUri;
    }

    public void setUploadUri(Uri uri) {
        this.uploadUri = uri;
    }

    public boolean isAuthorizationRequired() {
        return this.isAuthorizationRequired;
    }

    public void setIsAuthorizationRequired(boolean z) {
        this.isAuthorizationRequired = z;
    }

    public boolean isInCustomCnameExcludeList() {
        return this.isInCustomCnameExcludeList;
    }

    public void setIsInCustomCnameExcludeList(boolean z) {
        this.isInCustomCnameExcludeList = z;
    }

    public boolean isCheckCRC64() {
        return this.checkCRC64;
    }

    public void setCheckCRC64(boolean z) {
        this.checkCRC64 = z;
    }

    public String getIpWithHeader() {
        return this.ipWithHeader;
    }

    public void setIpWithHeader(String str) {
        this.ipWithHeader = str;
    }

    public boolean isPathStyleAccessEnable() {
        return this.pathStyleAccessEnable;
    }

    public void setPathStyleAccessEnable(boolean z) {
        this.pathStyleAccessEnable = z;
    }

    public boolean isCustomPathPrefixEnable() {
        return this.customPathPrefixEnable;
    }

    public void setCustomPathPrefixEnable(boolean z) {
        this.customPathPrefixEnable = z;
    }

    public void createBucketRequestBodyMarshall(Map<String, String> map) throws UnsupportedEncodingException {
        StringBuffer stringBuffer = new StringBuffer();
        if (map != null) {
            stringBuffer.append("<CreateBucketConfiguration>");
            for (Map.Entry<String, String> entry : map.entrySet()) {
                stringBuffer.append("<" + entry.getKey() + ">" + entry.getValue() + "</" + entry.getKey() + ">");
            }
            stringBuffer.append("</CreateBucketConfiguration>");
            byte[] bytes = stringBuffer.toString().getBytes("utf-8");
            long length = bytes.length;
            setContent(new ByteArrayInputStream(bytes));
            setContentLength(length);
        }
    }

    public void putBucketRefererRequestBodyMarshall(ArrayList<String> arrayList, boolean z) throws UnsupportedEncodingException {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("<RefererConfiguration>");
        StringBuilder sb = new StringBuilder();
        sb.append("<AllowEmptyReferer>");
        sb.append(z ? "true" : "false");
        sb.append("</AllowEmptyReferer>");
        stringBuffer.append(sb.toString());
        if (arrayList != null && arrayList.size() > 0) {
            stringBuffer.append("<RefererList>");
            Iterator<String> it = arrayList.iterator();
            while (it.hasNext()) {
                stringBuffer.append("<Referer>" + it.next() + "</Referer>");
            }
            stringBuffer.append("</RefererList>");
        }
        stringBuffer.append("</RefererConfiguration>");
        byte[] bytes = stringBuffer.toString().getBytes("utf-8");
        long length = bytes.length;
        setContent(new ByteArrayInputStream(bytes));
        setContentLength(length);
    }

    public void putBucketLoggingRequestBodyMarshall(String str, String str2) throws UnsupportedEncodingException {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("<BucketLoggingStatus>");
        if (str != null) {
            stringBuffer.append("<LoggingEnabled><TargetBucket>" + str + "</TargetBucket>");
            if (str2 != null) {
                stringBuffer.append("<TargetPrefix>" + str2 + "</TargetPrefix>");
            }
            stringBuffer.append("</LoggingEnabled>");
        }
        stringBuffer.append("</BucketLoggingStatus>");
        byte[] bytes = stringBuffer.toString().getBytes("utf-8");
        long length = bytes.length;
        setContent(new ByteArrayInputStream(bytes));
        setContentLength(length);
    }

    public void putBucketLifecycleRequestBodyMarshall(ArrayList<BucketLifecycleRule> arrayList) throws UnsupportedEncodingException {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("<LifecycleConfiguration>");
        for (BucketLifecycleRule bucketLifecycleRule : arrayList) {
            stringBuffer.append("<Rule>");
            if (bucketLifecycleRule.getIdentifier() != null) {
                stringBuffer.append("<ID>" + bucketLifecycleRule.getIdentifier() + "</ID>");
            }
            if (bucketLifecycleRule.getPrefix() != null) {
                stringBuffer.append("<Prefix>" + bucketLifecycleRule.getPrefix() + "</Prefix>");
            }
            StringBuilder sb = new StringBuilder();
            sb.append("<Status>");
            sb.append(bucketLifecycleRule.getStatus() ? "Enabled" : "Disabled");
            sb.append("</Status>");
            stringBuffer.append(sb.toString());
            if (bucketLifecycleRule.getDays() != null) {
                stringBuffer.append("<Days>" + bucketLifecycleRule.getDays() + "</Days>");
            } else if (bucketLifecycleRule.getExpireDate() != null) {
                stringBuffer.append("<Date>" + bucketLifecycleRule.getExpireDate() + "</Date>");
            }
            if (bucketLifecycleRule.getMultipartDays() != null) {
                stringBuffer.append("<AbortMultipartUpload><Days>" + bucketLifecycleRule.getMultipartDays() + "</Days></AbortMultipartUpload>");
            } else if (bucketLifecycleRule.getMultipartExpireDate() != null) {
                stringBuffer.append("<AbortMultipartUpload><Date>" + bucketLifecycleRule.getMultipartDays() + "</Date></AbortMultipartUpload>");
            }
            if (bucketLifecycleRule.getIADays() != null) {
                stringBuffer.append("<Transition><Days>" + bucketLifecycleRule.getIADays() + "</Days><StorageClass>IA</StorageClass></Transition>");
            } else if (bucketLifecycleRule.getIAExpireDate() != null) {
                stringBuffer.append("<Transition><Date>" + bucketLifecycleRule.getIAExpireDate() + "</Date><StorageClass>IA</StorageClass></Transition>");
            } else if (bucketLifecycleRule.getArchiveDays() != null) {
                stringBuffer.append("<Transition><Days>" + bucketLifecycleRule.getArchiveDays() + "</Days><StorageClass>Archive</StorageClass></Transition>");
            } else if (bucketLifecycleRule.getArchiveExpireDate() != null) {
                stringBuffer.append("<Transition><Date>" + bucketLifecycleRule.getArchiveExpireDate() + "</Date><StorageClass>Archive</StorageClass></Transition>");
            }
            stringBuffer.append("</Rule>");
        }
        stringBuffer.append("</LifecycleConfiguration>");
        byte[] bytes = stringBuffer.toString().getBytes("utf-8");
        long length = bytes.length;
        setContent(new ByteArrayInputStream(bytes));
        setContentLength(length);
    }

    public byte[] deleteMultipleObjectRequestBodyMarshall(List<String> list, boolean z) throws UnsupportedEncodingException {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("<Delete>");
        if (z) {
            stringBuffer.append("<Quiet>true</Quiet>");
        } else {
            stringBuffer.append("<Quiet>false</Quiet>");
        }
        for (String str : list) {
            stringBuffer.append("<Object>");
            stringBuffer.append("<Key>");
            stringBuffer.append(str);
            stringBuffer.append("</Key>");
            stringBuffer.append("</Object>");
        }
        stringBuffer.append("</Delete>");
        byte[] bytes = stringBuffer.toString().getBytes("utf-8");
        long length = bytes.length;
        setContent(new ByteArrayInputStream(bytes));
        setContentLength(length);
        return bytes;
    }

    public String buildOSSServiceURL() {
        OSSUtils.assertTrue(this.service != null, "Service haven't been set!");
        String host = this.service.getHost();
        String scheme = this.service.getScheme();
        String ipByHostAsync = null;
        if (isHttpDnsEnable() && scheme.equalsIgnoreCase("http")) {
            ipByHostAsync = HttpdnsMini.getInstance().getIpByHostAsync(host);
        } else {
            OSSLog.logDebug("[buildOSSServiceURL], disable httpdns or http is not need httpdns");
        }
        if (ipByHostAsync == null) {
            ipByHostAsync = host;
        }
        getHeaders().put("Host", host);
        String str = scheme + "://" + ipByHostAsync;
        String strParamToQueryString = OSSUtils.paramToQueryString(this.parameters, "utf-8");
        if (OSSUtils.isEmptyString(strParamToQueryString)) {
            return str;
        }
        return str + "?" + strParamToQueryString;
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x012c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String buildCanonicalURL() throws Exception {
        boolean z = false;
        OSSUtils.assertTrue(this.endpoint != null, "Endpoint haven't been set!");
        String scheme = this.endpoint.getScheme();
        String host = this.endpoint.getHost();
        String path = this.endpoint.getPath();
        int port = this.endpoint.getPort();
        String ipByHostAsync = null;
        String strValueOf = port != -1 ? String.valueOf(port) : null;
        if (TextUtils.isEmpty(host)) {
            OSSLog.logDebug("endpoint url : " + this.endpoint.toString());
        }
        OSSLog.logDebug(" scheme : " + scheme);
        OSSLog.logDebug(" originHost : " + host);
        OSSLog.logDebug(" port : " + strValueOf);
        String str = scheme + "://" + host;
        if (!TextUtils.isEmpty(strValueOf)) {
            str = str + Constants.COLON_SEPARATOR + strValueOf;
        }
        if (!TextUtils.isEmpty(this.bucketName)) {
            if (OSSUtils.isOssOriginHost(host)) {
                String str2 = this.bucketName + "." + host;
                if (isHttpDnsEnable()) {
                    ipByHostAsync = HttpdnsMini.getInstance().getIpByHostAsync(str2);
                } else {
                    OSSLog.logDebug("[buildCannonicalURL], disable httpdns");
                }
                addHeader("Host", str2);
                str = !TextUtils.isEmpty(ipByHostAsync) ? scheme + "://" + ipByHostAsync : scheme + "://" + str2;
            } else if (this.isInCustomCnameExcludeList) {
                if (this.pathStyleAccessEnable) {
                    z = true;
                } else {
                    str = scheme + "://" + this.bucketName + "." + host;
                }
            } else if (OSSUtils.isValidateIP(host)) {
                if (!OSSUtils.isEmptyString(this.ipWithHeader)) {
                    addHeader("Host", getIpWithHeader());
                }
            }
        }
        if (this.customPathPrefixEnable && path != null) {
            str = str + path;
        }
        if (z) {
            str = str + "/" + this.bucketName;
        }
        if (!TextUtils.isEmpty(this.objectKey)) {
            str = str + "/" + HttpUtil.urlEncode(this.objectKey, "utf-8");
        }
        String strParamToQueryString = OSSUtils.paramToQueryString(this.parameters, "utf-8");
        StringBuilder sb = new StringBuilder();
        sb.append("request---------------------\n");
        sb.append("request url=" + str + "\n");
        sb.append("request params=" + strParamToQueryString + "\n");
        for (String str3 : getHeaders().keySet()) {
            sb.append("requestHeader [" + str3 + "]: ");
            StringBuilder sb2 = new StringBuilder();
            sb2.append((String) getHeaders().get(str3));
            sb2.append("\n");
            sb.append(sb2.toString());
        }
        OSSLog.logDebug(sb.toString());
        if (OSSUtils.isEmptyString(strParamToQueryString)) {
            return str;
        }
        return str + "?" + strParamToQueryString;
    }
}

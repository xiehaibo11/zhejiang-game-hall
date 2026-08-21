package com.alibaba.sdk.android.oss.common.utils;

public class OSSUtils {
    private static final java.lang.String NEW_LINE = "\n";
    private static final java.util.List<java.lang.String> SIGNED_PARAMTERS = null;

    private enum MetadataDirective extends java.lang.Enum<com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective> {
        private static final com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective[] $VALUES = null;
        public static final com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective COPY = null;
        public static final com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective REPLACE = null;
        private final java.lang.String directiveAsString;

        static {
                com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective r0 = new com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective
                r1 = 0
                java.lang.String r2 = "COPY"
                r0.<init>(r2, r1, r2)
                com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective.COPY = r0
                com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective r0 = new com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective
                r2 = 1
                java.lang.String r3 = "REPLACE"
                r0.<init>(r3, r2, r3)
                com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective.REPLACE = r0
                r3 = 2
                com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective[] r3 = new com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective[r3]
                com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective r4 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective.COPY
                r3[r1] = r4
                r3[r2] = r0
                com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective.$VALUES = r3
                return
        }

        MetadataDirective(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.directiveAsString = r3
                return
        }

        public static com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective valueOf(java.lang.String r1) {
                java.lang.Class<com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective> r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective r1 = (com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective) r1
                return r1
        }

        public static com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective[] values() {
                com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective[] r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective.$VALUES
                java.lang.Object r0 = r0.clone()
                com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective[] r0 = (com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective[]) r0
                return r0
        }

        @Override
        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = r1.directiveAsString
                return r0
        }
    }

    static {
            java.lang.String r0 = "bucketInfo"
            java.lang.String r1 = "acl"
            java.lang.String r2 = "uploads"
            java.lang.String r3 = "location"
            java.lang.String r4 = "cors"
            java.lang.String r5 = "logging"
            java.lang.String r6 = "website"
            java.lang.String r7 = "referer"
            java.lang.String r8 = "lifecycle"
            java.lang.String r9 = "delete"
            java.lang.String r10 = "append"
            java.lang.String r11 = "uploadId"
            java.lang.String r12 = "partNumber"
            java.lang.String r13 = "security-token"
            java.lang.String r14 = "position"
            java.lang.String r15 = "response-cache-control"
            java.lang.String r16 = "response-content-disposition"
            java.lang.String r17 = "response-content-encoding"
            java.lang.String r18 = "response-content-language"
            java.lang.String r19 = "response-content-type"
            java.lang.String r20 = "response-expires"
            java.lang.String r21 = "x-oss-process"
            java.lang.String r22 = "sequential"
            java.lang.String r23 = "symlink"
            java.lang.String r24 = "restore"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24}
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.SIGNED_PARAMTERS = r0
            return
    }

    public OSSUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addDateHeader(java.util.Map<java.lang.String, java.lang.String> r0, java.lang.String r1, java.util.Date r2) {
            if (r2 == 0) goto L9
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.DateUtil.formatRfc822Date(r2)
            r0.put(r1, r2)
        L9:
            return
    }

    public static void addHeader(java.util.Map<java.lang.String, java.lang.String> r0, java.lang.String r1, java.lang.String r2) {
            if (r2 == 0) goto L5
            r0.put(r1, r2)
        L5:
            return
    }

    public static void addStringListHeader(java.util.Map<java.lang.String, java.lang.String> r1, java.lang.String r2, java.util.List<java.lang.String> r3) {
            if (r3 == 0) goto Lf
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto Lf
            java.lang.String r3 = join(r3)
            r1.put(r2, r3)
        Lf:
            return
    }

    public static void assertTrue(boolean r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static java.lang.String buildBaseLogInfo(android.content.Context r3) {
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "=====[device info]=====\n"
            r3.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[INFO]: android_version："
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "[INFO]: mobile_model："
            r0.append(r2)
            java.lang.String r2 = android.os.Build.MODEL
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static java.lang.String buildCanonicalString(com.alibaba.sdk.android.oss.internal.RequestMessage r10) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = r10.getMethod()
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.lang.String r2 = "\n"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.util.Map r1 = r10.getHeaders()
            java.util.TreeMap r3 = new java.util.TreeMap
            r3.<init>()
            java.lang.String r4 = "x-oss-"
            java.lang.String r5 = "Content-MD5"
            java.lang.String r6 = "Content-Type"
            if (r1 == 0) goto L8b
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L3a:
            boolean r7 = r1.hasNext()
            if (r7 == 0) goto L8b
            java.lang.Object r7 = r1.next()
            java.util.Map$Entry r7 = (java.util.Map.Entry) r7
            java.lang.Object r8 = r7.getKey()
            if (r8 != 0) goto L4d
            goto L3a
        L4d:
            java.lang.Object r8 = r7.getKey()
            java.lang.String r8 = (java.lang.String) r8
            java.lang.String r8 = r8.toLowerCase()
            java.lang.String r9 = r6.toLowerCase()
            boolean r9 = r8.equals(r9)
            if (r9 != 0) goto L7d
            java.lang.String r9 = r5.toLowerCase()
            boolean r9 = r8.equals(r9)
            if (r9 != 0) goto L7d
            java.lang.String r9 = "Date"
            java.lang.String r9 = r9.toLowerCase()
            boolean r9 = r8.equals(r9)
            if (r9 != 0) goto L7d
            boolean r9 = r8.startsWith(r4)
            if (r9 == 0) goto L3a
        L7d:
            java.lang.Object r7 = r7.getValue()
            java.lang.String r7 = (java.lang.String) r7
            java.lang.String r7 = r7.trim()
            r3.put(r8, r7)
            goto L3a
        L8b:
            java.lang.String r1 = r6.toLowerCase()
            boolean r1 = r3.containsKey(r1)
            java.lang.String r7 = ""
            if (r1 != 0) goto L9e
            java.lang.String r1 = r6.toLowerCase()
            r3.put(r1, r7)
        L9e:
            java.lang.String r1 = r5.toLowerCase()
            boolean r1 = r3.containsKey(r1)
            if (r1 != 0) goto Laf
            java.lang.String r1 = r5.toLowerCase()
            r3.put(r1, r7)
        Laf:
            java.util.Set r1 = r3.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lb7:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto Le6
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r5 = r3.getKey()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.Object r3 = r3.getValue()
            boolean r6 = r5.startsWith(r4)
            if (r6 == 0) goto Ldf
            r0.append(r5)
            r5 = 58
            r0.append(r5)
            r0.append(r3)
            goto Le2
        Ldf:
            r0.append(r3)
        Le2:
            r0.append(r2)
            goto Lb7
        Le6:
            java.lang.String r1 = r10.getBucketName()
            java.lang.String r2 = r10.getObjectKey()
            java.util.Map r10 = r10.getParameters()
            java.lang.String r10 = buildCanonicalizedResource(r1, r2, r10)
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            return r10
    }

    public static java.lang.String buildCanonicalizedResource(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            java.lang.String r0 = "/"
            if (r2 != 0) goto L7
            if (r3 != 0) goto L7
            goto L31
        L7:
            if (r3 != 0) goto L1c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r2)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            goto L31
        L1c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r2)
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r1.toString()
        L31:
            java.lang.String r2 = buildCanonicalizedResource(r0, r4)
            return r2
    }

    public static java.lang.String buildCanonicalizedResource(java.lang.String r6, java.util.Map<java.lang.String, java.lang.String> r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            if (r7 == 0) goto L4d
            java.util.Set r6 = r7.keySet()
            int r1 = r7.size()
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.Object[] r6 = r6.toArray(r1)
            java.lang.String[] r6 = (java.lang.String[]) r6
            java.util.Arrays.sort(r6)
            r1 = 63
            int r2 = r6.length
            r3 = 0
        L21:
            if (r3 >= r2) goto L4d
            r4 = r6[r3]
            java.util.List<java.lang.String> r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.SIGNED_PARAMTERS
            boolean r5 = r5.contains(r4)
            if (r5 != 0) goto L2e
            goto L4a
        L2e:
            r0.append(r1)
            r0.append(r4)
            java.lang.Object r1 = r7.get(r4)
            java.lang.String r1 = (java.lang.String) r1
            boolean r4 = isEmptyString(r1)
            if (r4 != 0) goto L48
            java.lang.String r4 = "="
            r0.append(r4)
            r0.append(r1)
        L48:
            r1 = 38
        L4a:
            int r3 = r3 + 1
            goto L21
        L4d:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static java.lang.String buildImagePersistentBody(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "x-oss-process="
            r0.append(r1)
            java.lang.String r1 = "image/"
            boolean r2 = r5.startsWith(r1)
            if (r2 == 0) goto L16
            r0.append(r5)
            goto L1c
        L16:
            r0.append(r1)
            r0.append(r5)
        L1c:
            java.lang.String r5 = "|sys/"
            r0.append(r5)
            boolean r5 = android.text.TextUtils.isEmpty(r3)
            if (r5 != 0) goto L4e
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L4e
            byte[] r3 = r3.getBytes()
            r5 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r5)
            byte[] r4 = r4.getBytes()
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r5)
            java.lang.String r5 = "saveas,o_"
            r0.append(r5)
            r0.append(r4)
            java.lang.String r4 = ",b_"
            r0.append(r4)
            r0.append(r3)
        L4e:
            java.lang.String r3 = r0.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "ImagePersistent body : "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r4)
            return r3
    }

    public static java.lang.String buildTriggerCallbackBody(java.util.Map<java.lang.String, java.lang.String> r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "x-oss-process=trigger/callback,callback_"
            r0.append(r1)
            r1 = 2
            if (r3 == 0) goto L27
            int r2 = r3.size()
            if (r2 <= 0) goto L27
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>(r3)
            java.lang.String r3 = r2.toString()
            byte[] r3 = r3.getBytes()
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)
            r0.append(r3)
        L27:
            java.lang.String r3 = ",callback-var_"
            r0.append(r3)
            if (r4 == 0) goto L48
            int r3 = r4.size()
            if (r3 <= 0) goto L48
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>(r4)
            java.lang.String r3 = r3.toString()
            byte[] r3 = r3.getBytes()
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)
            r0.append(r3)
        L48:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String buildXMLFromPartEtagList(java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<CompleteMultipartUpload>\n"
            r0.append(r1)
            java.util.Iterator r4 = r4.iterator()
        Le:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L5f
            java.lang.Object r1 = r4.next()
            com.alibaba.sdk.android.oss.model.PartETag r1 = (com.alibaba.sdk.android.oss.model.PartETag) r1
            java.lang.String r2 = "<Part>\n"
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<PartNumber>"
            r2.append(r3)
            int r3 = r1.getPartNumber()
            r2.append(r3)
            java.lang.String r3 = "</PartNumber>\n"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<ETag>"
            r2.append(r3)
            java.lang.String r1 = r1.getETag()
            r2.append(r1)
            java.lang.String r1 = "</ETag>\n"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            java.lang.String r1 = "</Part>\n"
            r0.append(r1)
            goto Le
        L5f:
            java.lang.String r4 = "</CompleteMultipartUpload>\n"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static void checkChecksum(java.lang.Long r1, java.lang.Long r2, java.lang.String r3) throws com.alibaba.sdk.android.oss.exception.InconsistentException {
            if (r1 == 0) goto L11
            if (r2 == 0) goto L11
            boolean r0 = r1.equals(r2)
            if (r0 == 0) goto Lb
            goto L11
        Lb:
            com.alibaba.sdk.android.oss.exception.InconsistentException r0 = new com.alibaba.sdk.android.oss.exception.InconsistentException
            r0.<init>(r1, r2, r3)
            throw r0
        L11:
            return
    }

    public static boolean checkParamRange(long r2, long r4, boolean r6, long r7, boolean r9) {
            r0 = 1
            r1 = 0
            if (r6 == 0) goto L10
            if (r9 == 0) goto L10
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 > 0) goto Lf
            int r4 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r4 > 0) goto Lf
            return r0
        Lf:
            return r1
        L10:
            if (r6 == 0) goto L1e
            if (r9 != 0) goto L1e
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 > 0) goto L1d
            int r4 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r4 >= 0) goto L1d
            return r0
        L1d:
            return r1
        L1e:
            if (r6 != 0) goto L2c
            if (r9 != 0) goto L2c
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 >= 0) goto L2b
            int r4 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r4 >= 0) goto L2b
            return r0
        L2b:
            return r1
        L2c:
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 >= 0) goto L35
            int r4 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r4 > 0) goto L35
            return r0
        L35:
            return r1
    }

    public static java.lang.String determineContentType(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r2 == 0) goto L3
            return r2
        L3:
            android.webkit.MimeTypeMap r2 = android.webkit.MimeTypeMap.getSingleton()
            r0 = 46
            if (r3 == 0) goto L1c
            int r1 = r3.lastIndexOf(r0)
            int r1 = r1 + 1
            java.lang.String r3 = r3.substring(r1)
            java.lang.String r3 = r2.getMimeTypeFromExtension(r3)
            if (r3 == 0) goto L1c
            return r3
        L1c:
            if (r4 == 0) goto L2f
            int r3 = r4.lastIndexOf(r0)
            int r3 = r3 + 1
            java.lang.String r3 = r4.substring(r3)
            java.lang.String r2 = r2.getMimeTypeFromExtension(r3)
            if (r2 == 0) goto L2f
            return r2
        L2f:
            java.lang.String r2 = "application/octet-stream"
            return r2
    }

    public static boolean doesBucketNameValid(com.alibaba.sdk.android.oss.model.OSSRequest r0) {
            boolean r0 = r0 instanceof com.alibaba.sdk.android.oss.model.ListBucketsRequest
            if (r0 == 0) goto L6
            r0 = 0
            return r0
        L6:
            r0 = 1
            return r0
    }

    public static boolean doesRequestNeedObjectKey(com.alibaba.sdk.android.oss.model.OSSRequest r2) {
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.ListObjectsRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.ListBucketsRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.CreateBucketRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.DeleteBucketRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.GetBucketInfoRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.GetBucketACLRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.GetBucketRefererRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.PutBucketRefererRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest
            if (r0 != 0) goto L47
            boolean r1 = r2 instanceof com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest
            if (r1 != 0) goto L47
            if (r0 != 0) goto L47
            if (r1 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest
            if (r0 != 0) goto L47
            boolean r0 = r2 instanceof com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest
            if (r0 != 0) goto L47
            boolean r2 = r2 instanceof com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest
            if (r2 == 0) goto L45
            goto L47
        L45:
            r2 = 1
            return r2
        L47:
            r2 = 0
            return r2
    }

    public static void ensureBucketNameValid(java.lang.String r1) {
            boolean r1 = validateBucketName(r1)
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "The bucket name is invalid. \nA bucket name must: \n1) be comprised of lower-case characters, numbers or dash(-); \n2) start with lower case or numbers; \n3) be between 3-63 characters long. "
            r1.<init>(r0)
            throw r1
    }

    public static void ensureObjectKeyValid(java.lang.String r1) {
            boolean r1 = validateObjectKey(r1)
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "The object key is invalid. \nAn object name should be: \n1) between 1 - 1023 bytes long when encoded as UTF-8 \n2) cannot contain LF or CR or unsupported chars in XML1.0, \n3) cannot begin with \"/\" or \"\\\"."
            r1.<init>(r0)
            throw r1
    }

    public static void ensureRequestValid(com.alibaba.sdk.android.oss.model.OSSRequest r1, com.alibaba.sdk.android.oss.internal.RequestMessage r2) {
            boolean r0 = doesBucketNameValid(r1)
            if (r0 == 0) goto Ld
            java.lang.String r0 = r2.getBucketName()
            ensureBucketNameValid(r0)
        Ld:
            boolean r0 = doesRequestNeedObjectKey(r1)
            if (r0 == 0) goto L1a
            java.lang.String r2 = r2.getObjectKey()
            ensureObjectKeyValid(r2)
        L1a:
            boolean r2 = r1 instanceof com.alibaba.sdk.android.oss.model.CopyObjectRequest
            if (r2 == 0) goto L27
            com.alibaba.sdk.android.oss.model.CopyObjectRequest r1 = (com.alibaba.sdk.android.oss.model.CopyObjectRequest) r1
            java.lang.String r1 = r1.getDestinationKey()
            ensureObjectKeyValid(r1)
        L27:
            return
    }

    public static boolean isCname(java.lang.String r6) {
            java.lang.String[] r0 = com.alibaba.sdk.android.oss.common.OSSConstants.DEFAULT_CNAME_EXCLUDE_LIST
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L5:
            if (r3 >= r1) goto L17
            r4 = r0[r3]
            java.lang.String r5 = r6.toLowerCase()
            boolean r4 = r5.endsWith(r4)
            if (r4 == 0) goto L14
            return r2
        L14:
            int r3 = r3 + 1
            goto L5
        L17:
            r6 = 1
            return r6
    }

    public static boolean isEmptyString(java.lang.String r0) {
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            return r0
    }

    public static boolean isInCustomCnameExcludeList(java.lang.String r1, java.util.List<java.lang.String> r2) {
            java.util.Iterator r2 = r2.iterator()
        L4:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L1c
            java.lang.Object r0 = r2.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = r0.toLowerCase()
            boolean r0 = r1.endsWith(r0)
            if (r0 == 0) goto L4
            r1 = 1
            return r1
        L1c:
            r1 = 0
            return r1
    }

    public static boolean isOssOriginHost(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String[] r0 = com.alibaba.sdk.android.oss.common.OSSConstants.OSS_ORIGN_HOST
            int r2 = r0.length
            r3 = 0
        Lc:
            if (r3 >= r2) goto L1f
            r4 = r0[r3]
            java.lang.String r5 = r6.toLowerCase()
            boolean r4 = r5.endsWith(r4)
            if (r4 == 0) goto L1c
            r6 = 1
            return r6
        L1c:
            int r3 = r3 + 1
            goto Lc
        L1f:
            return r1
    }

    public static boolean isValidateIP(java.lang.String r6) throws java.lang.Exception {
            if (r6 == 0) goto L32
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 < r1) goto Ld
            boolean r6 = android.net.InetAddresses.isNumericAddress(r6)
            return r6
        Ld:
            r0 = 0
            java.lang.String r1 = "java.net.InetAddress"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "isNumeric"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L31
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L31
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L31
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L31
            r3[r0] = r6     // Catch: java.lang.Throwable -> L31
            java.lang.Object r6 = r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L31
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L31
            boolean r6 = r6.booleanValue()     // Catch: java.lang.Throwable -> L31
            return r6
        L31:
            return r0
        L32:
            java.lang.Exception r6 = new java.lang.Exception
            java.lang.String r0 = "host is null"
            r6.<init>(r0)
            throw r6
    }

    public static java.lang.String join(java.util.List<java.lang.String> r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
            r1 = 1
        La:
            boolean r2 = r3.hasNext()
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.next()
            java.lang.String r2 = (java.lang.String) r2
            if (r1 != 0) goto L1d
            java.lang.String r1 = ", "
            r0.append(r1)
        L1d:
            r0.append(r2)
            r1 = 0
            goto La
        L22:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String paramToQueryString(java.util.Map<java.lang.String, java.lang.String> r4, java.lang.String r5) {
            if (r4 == 0) goto L56
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            goto L56
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L17:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L51
            java.lang.Object r2 = r4.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            if (r1 != 0) goto L36
            java.lang.String r1 = "&"
            r0.append(r1)
        L36:
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r3, r5)
            r0.append(r1)
            boolean r1 = isEmptyString(r2)
            if (r1 != 0) goto L4f
            java.lang.String r1 = "="
            r0.append(r1)
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r2, r5)
            r0.append(r1)
        L4f:
            r1 = 0
            goto L17
        L51:
            java.lang.String r4 = r0.toString()
            return r4
        L56:
            r4 = 0
            return r4
    }

    public static void populateCopyObjectHeaders(com.alibaba.sdk.android.oss.model.CopyObjectRequest r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "/"
            r0.append(r1)
            java.lang.String r2 = r3.getSourceBucketName()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r3.getSourceKey()
            java.lang.String r2 = "utf-8"
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r1, r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "x-oss-copy-source"
            r4.put(r1, r0)
            java.util.Date r0 = r3.getModifiedSinceConstraint()
            java.lang.String r1 = "x-oss-copy-source-if-modified-since"
            addDateHeader(r4, r1, r0)
            java.util.Date r0 = r3.getUnmodifiedSinceConstraint()
            java.lang.String r1 = "x-oss-copy-source-if-unmodified-since"
            addDateHeader(r4, r1, r0)
            java.util.List r0 = r3.getMatchingETagConstraints()
            java.lang.String r1 = "x-oss-copy-source-if-match"
            addStringListHeader(r4, r1, r0)
            java.util.List r0 = r3.getNonmatchingEtagConstraints()
            java.lang.String r1 = "x-oss-copy-source-if-none-match"
            addStringListHeader(r4, r1, r0)
            java.lang.String r0 = r3.getServerSideEncryption()
            java.lang.String r1 = "x-oss-server-side-encryption"
            addHeader(r4, r1, r0)
            com.alibaba.sdk.android.oss.model.ObjectMetadata r3 = r3.getNewObjectMetadata()
            if (r3 == 0) goto L6b
            com.alibaba.sdk.android.oss.common.utils.OSSUtils$MetadataDirective r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.MetadataDirective.REPLACE
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "x-oss-metadata-directive"
            r4.put(r1, r0)
            populateRequestMetadata(r4, r3)
        L6b:
            java.lang.String r3 = "Content-Length"
            removeHeader(r4, r3)
            return
    }

    public static void populateListBucketRequestParameters(com.alibaba.sdk.android.oss.model.ListBucketsRequest r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = r2.getPrefix()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r2.getPrefix()
            java.lang.String r1 = "prefix"
            r3.put(r1, r0)
        Lf:
            java.lang.String r0 = r2.getMarker()
            if (r0 == 0) goto L1e
            java.lang.String r0 = r2.getMarker()
            java.lang.String r1 = "marker"
            r3.put(r1, r0)
        L1e:
            java.lang.Integer r0 = r2.getMaxKeys()
            if (r0 == 0) goto L35
            java.lang.Integer r2 = r2.getMaxKeys()
            int r2 = r2.intValue()
            java.lang.String r2 = java.lang.Integer.toString(r2)
            java.lang.String r0 = "max-keys"
            r3.put(r0, r2)
        L35:
            return
    }

    public static void populateListMultipartUploadsRequestParameters(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = r2.getDelimiter()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r2.getDelimiter()
            java.lang.String r1 = "delimiter"
            r3.put(r1, r0)
        Lf:
            java.lang.Integer r0 = r2.getMaxUploads()
            if (r0 == 0) goto L26
            java.lang.Integer r0 = r2.getMaxUploads()
            int r0 = r0.intValue()
            java.lang.String r0 = java.lang.Integer.toString(r0)
            java.lang.String r1 = "max-uploads"
            r3.put(r1, r0)
        L26:
            java.lang.String r0 = r2.getKeyMarker()
            if (r0 == 0) goto L35
            java.lang.String r0 = r2.getKeyMarker()
            java.lang.String r1 = "key-marker"
            r3.put(r1, r0)
        L35:
            java.lang.String r0 = r2.getPrefix()
            if (r0 == 0) goto L44
            java.lang.String r0 = r2.getPrefix()
            java.lang.String r1 = "prefix"
            r3.put(r1, r0)
        L44:
            java.lang.String r0 = r2.getUploadIdMarker()
            if (r0 == 0) goto L53
            java.lang.String r0 = r2.getUploadIdMarker()
            java.lang.String r1 = "upload-id-marker"
            r3.put(r1, r0)
        L53:
            java.lang.String r0 = r2.getEncodingType()
            if (r0 == 0) goto L62
            java.lang.String r2 = r2.getEncodingType()
            java.lang.String r0 = "encoding-type"
            r3.put(r0, r2)
        L62:
            return
    }

    public static void populateListObjectsRequestParameters(com.alibaba.sdk.android.oss.model.ListObjectsRequest r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = r2.getPrefix()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r2.getPrefix()
            java.lang.String r1 = "prefix"
            r3.put(r1, r0)
        Lf:
            java.lang.String r0 = r2.getMarker()
            if (r0 == 0) goto L1e
            java.lang.String r0 = r2.getMarker()
            java.lang.String r1 = "marker"
            r3.put(r1, r0)
        L1e:
            java.lang.String r0 = r2.getDelimiter()
            if (r0 == 0) goto L2d
            java.lang.String r0 = r2.getDelimiter()
            java.lang.String r1 = "delimiter"
            r3.put(r1, r0)
        L2d:
            java.lang.Integer r0 = r2.getMaxKeys()
            if (r0 == 0) goto L44
            java.lang.Integer r0 = r2.getMaxKeys()
            int r0 = r0.intValue()
            java.lang.String r0 = java.lang.Integer.toString(r0)
            java.lang.String r1 = "max-keys"
            r3.put(r1, r0)
        L44:
            java.lang.String r0 = r2.getEncodingType()
            if (r0 == 0) goto L53
            java.lang.String r2 = r2.getEncodingType()
            java.lang.String r0 = "encoding-type"
            r3.put(r0, r2)
        L53:
            return
    }

    public static java.lang.String populateMapToBase64JsonString(java.util.Map<java.lang.String, java.lang.String> r1) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r1)
            java.lang.String r1 = r0.toString()
            byte[] r1 = r1.getBytes()
            r0 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
    }

    public static void populateRequestMetadata(java.util.Map<java.lang.String, java.lang.String> r3, com.alibaba.sdk.android.oss.model.ObjectMetadata r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.util.Map r0 = r4.getRawMetadata()
            if (r0 == 0) goto L2d
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = r1.toString()
            r3.put(r2, r1)
            goto L11
        L2d:
            java.util.Map r4 = r4.getUserMetadata()
            if (r4 == 0) goto L63
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L3b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L63
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            if (r1 == 0) goto L59
            java.lang.String r1 = r1.trim()
        L59:
            if (r0 == 0) goto L5f
            java.lang.String r0 = r0.trim()
        L5f:
            r3.put(r1, r0)
            goto L3b
        L63:
            return
    }

    public static void removeHeader(java.util.Map<java.lang.String, java.lang.String> r1, java.lang.String r2) {
            if (r2 == 0) goto Lb
            boolean r0 = r1.containsKey(r2)
            if (r0 == 0) goto Lb
            r1.remove(r2)
        Lb:
            return
    }

    public static java.lang.String sign(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature r0 = new com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature     // Catch: java.lang.Exception -> L27
            r0.<init>()     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = r0.computeSignature(r2, r3)     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = r2.trim()     // Catch: java.lang.Exception -> L27
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "OSS "
            r3.append(r0)
            r3.append(r1)
            java.lang.String r1 = ":"
            r3.append(r1)
            r3.append(r2)
            java.lang.String r1 = r3.toString()
            return r1
        L27:
            r1 = move-exception
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Compute signature failed!"
            r2.<init>(r3, r1)
            throw r2
    }

    public static void signRequest(com.alibaba.sdk.android.oss.internal.RequestMessage r6) throws java.lang.Exception {
            java.lang.String r0 = "signRequest start"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)
            boolean r0 = r6.isAuthorizationRequired()
            if (r0 != 0) goto Lc
            return
        Lc:
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r0 = r6.getCredentialProvider()
            if (r0 == 0) goto Lb9
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r0 = r6.getCredentialProvider()
            r1 = 0
            boolean r2 = r0 instanceof com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider
            java.lang.String r3 = "x-oss-security-token"
            if (r2 == 0) goto L3d
            r1 = r0
            com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider r1 = (com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider) r1
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r1 = r1.getValidFederationToken()
            if (r1 == 0) goto L32
            java.util.Map r4 = r6.getHeaders()
            java.lang.String r5 = r1.getSecurityToken()
            r4.put(r3, r5)
            goto L50
        L32:
            java.lang.String r6 = "Can't get a federation token"
            com.alibaba.sdk.android.oss.common.OSSLog.logError(r6)
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r6)
            throw r0
        L3d:
            boolean r4 = r0 instanceof com.alibaba.sdk.android.oss.common.auth.OSSStsTokenCredentialProvider
            if (r4 == 0) goto L50
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r1 = r0.getFederationToken()
            java.util.Map r4 = r6.getHeaders()
            java.lang.String r5 = r1.getSecurityToken()
            r4.put(r3, r5)
        L50:
            java.lang.String r3 = buildCanonicalString(r6)
            java.lang.String r4 = "get contentToSign"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r4)
            if (r2 != 0) goto L81
            boolean r2 = r0 instanceof com.alibaba.sdk.android.oss.common.auth.OSSStsTokenCredentialProvider
            if (r2 == 0) goto L60
            goto L81
        L60:
            boolean r1 = r0 instanceof com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider
            if (r1 == 0) goto L73
            com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider r0 = (com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider) r0
            java.lang.String r1 = r0.getAccessKeyId()
            java.lang.String r0 = r0.getAccessKeySecret()
            java.lang.String r0 = sign(r1, r0, r3)
            goto L8d
        L73:
            boolean r1 = r0 instanceof com.alibaba.sdk.android.oss.common.auth.OSSCustomSignerCredentialProvider
            if (r1 == 0) goto L7e
            com.alibaba.sdk.android.oss.common.auth.OSSCustomSignerCredentialProvider r0 = (com.alibaba.sdk.android.oss.common.auth.OSSCustomSignerCredentialProvider) r0
            java.lang.String r0 = r0.signContent(r3)
            goto L8d
        L7e:
            java.lang.String r0 = "---initValue---"
            goto L8d
        L81:
            java.lang.String r0 = r1.getTempAK()
            java.lang.String r1 = r1.getTempSK()
            java.lang.String r0 = sign(r0, r1, r3)
        L8d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "signed content: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = "   \n ---------   signature: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r2 = 0
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1, r2)
            java.lang.String r1 = "get signature"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
            java.util.Map r6 = r6.getHeaders()
            java.lang.String r1 = "Authorization"
            r6.put(r1, r0)
            return
        Lb9:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "当前CredentialProvider为空！！！\n1. 请检查您是否在初始化OSSService时设置CredentialProvider;\n2. 如果您bucket为公共权限，请确认获取到Bucket后已经调用Bucket中接口声明ACL;"
            r6.<init>(r0)
            throw r6
    }

    public static boolean validateBucketName(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r0 = "^[a-z0-9][a-z0-9\\-]{1,61}[a-z0-9]$"
            boolean r1 = r1.matches(r0)
            return r1
    }

    public static boolean validateObjectKey(java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            int r1 = r5.length()
            if (r1 <= 0) goto L3b
            int r1 = r5.length()
            r2 = 1023(0x3ff, float:1.434E-42)
            if (r1 <= r2) goto L13
            goto L3b
        L13:
            java.lang.String r1 = "utf-8"
            r5.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> L3b
            char[] r5 = r5.toCharArray()
            char r1 = r5[r0]
            r2 = 47
            if (r1 == r2) goto L3b
            r2 = 92
            if (r1 != r2) goto L27
            goto L3b
        L27:
            int r1 = r5.length
            r2 = 0
        L29:
            if (r2 >= r1) goto L39
            char r3 = r5[r2]
            r4 = 9
            if (r3 == r4) goto L36
            r4 = 32
            if (r3 >= r4) goto L36
            return r0
        L36:
            int r2 = r2 + 1
            goto L29
        L39:
            r5 = 1
            return r5
        L3b:
            return r0
    }
}

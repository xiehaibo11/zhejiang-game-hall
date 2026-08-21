package com.alibaba.sdk.android.oss.internal;

import android.os.ParcelFileDescriptor;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.ClientException;
import com.alibaba.sdk.android.oss.ServiceException;
import com.alibaba.sdk.android.oss.TaskCancelException;
import com.alibaba.sdk.android.oss.callback.OSSCompletedCallback;
import com.alibaba.sdk.android.oss.common.OSSLog;
import com.alibaba.sdk.android.oss.common.utils.BinaryUtil;
import com.alibaba.sdk.android.oss.common.utils.CRC64;
import com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences;
import com.alibaba.sdk.android.oss.common.utils.OSSUtils;
import com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest;
import com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult;
import com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest;
import com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult;
import com.alibaba.sdk.android.oss.model.ListPartsRequest;
import com.alibaba.sdk.android.oss.model.ListPartsResult;
import com.alibaba.sdk.android.oss.model.PartETag;
import com.alibaba.sdk.android.oss.model.PartSummary;
import com.alibaba.sdk.android.oss.model.ResumableUploadRequest;
import com.alibaba.sdk.android.oss.model.ResumableUploadResult;
import com.alibaba.sdk.android.oss.model.UploadPartRequest;
import com.alibaba.sdk.android.oss.model.UploadPartResult;
import com.alibaba.sdk.android.oss.network.ExecutionContext;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.zip.CheckedInputStream;

public class SequenceUploadTask extends BaseMultipartUploadTask<ResumableUploadRequest, ResumableUploadResult> implements Callable<ResumableUploadResult> {
    private List<Integer> mAlreadyUploadIndex;
    private File mCRC64RecordFile;
    private long mFirstPartSize;
    private File mRecordFile;
    private OSSSharedPreferences mSp;

    public SequenceUploadTask(ResumableUploadRequest resumableUploadRequest, OSSCompletedCallback<ResumableUploadRequest, ResumableUploadResult> oSSCompletedCallback, ExecutionContext executionContext, InternalRequestOperation internalRequestOperation) {
        super(internalRequestOperation, resumableUploadRequest, oSSCompletedCallback, executionContext);
        this.mAlreadyUploadIndex = new ArrayList();
        this.mSp = OSSSharedPreferences.instance(this.mContext.getApplicationContext());
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x013e  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected void initMultipartUploadId() throws ServiceException, ClientException, IOException {
        String strCalculateMd5Str;
        Map map;
        boolean zIsTruncated;
        if (!OSSUtils.isEmptyString(((ResumableUploadRequest) this.mRequest).getRecordDirectory())) {
            if (this.mUploadUri != null) {
                ParcelFileDescriptor parcelFileDescriptorOpenFileDescriptor = this.mContext.getApplicationContext().getContentResolver().openFileDescriptor(this.mUploadUri, "r");
                try {
                    strCalculateMd5Str = BinaryUtil.calculateMd5Str(parcelFileDescriptorOpenFileDescriptor.getFileDescriptor());
                } finally {
                    if (parcelFileDescriptorOpenFileDescriptor != null) {
                        parcelFileDescriptorOpenFileDescriptor.close();
                    }
                }
            } else {
                strCalculateMd5Str = BinaryUtil.calculateMd5Str(this.mUploadFilePath);
            }
            StringBuilder sb = new StringBuilder();
            sb.append(strCalculateMd5Str);
            sb.append(((ResumableUploadRequest) this.mRequest).getBucketName());
            sb.append(((ResumableUploadRequest) this.mRequest).getObjectKey());
            sb.append(String.valueOf(((ResumableUploadRequest) this.mRequest).getPartSize()));
            sb.append(this.mCheckCRC64 ? "-crc64" : "");
            sb.append("-sequence");
            File file = new File(((ResumableUploadRequest) this.mRequest).getRecordDirectory() + File.separator + BinaryUtil.calculateMd5Str(sb.toString().getBytes()));
            this.mRecordFile = file;
            if (file.exists()) {
                BufferedReader bufferedReader = new BufferedReader(new FileReader(this.mRecordFile));
                this.mUploadId = bufferedReader.readLine();
                bufferedReader.close();
                OSSLog.logDebug("sequence [initUploadId] - Found record file, uploadid: " + this.mUploadId);
            }
            if (!OSSUtils.isEmptyString(this.mUploadId)) {
                if (this.mCheckCRC64) {
                    File file2 = new File(((ResumableUploadRequest) this.mRequest).getRecordDirectory() + File.separator + this.mUploadId);
                    if (file2.exists()) {
                        ObjectInputStream objectInputStream = new ObjectInputStream(new FileInputStream(file2));
                        try {
                            try {
                                map = (Map) objectInputStream.readObject();
                                try {
                                    file2.delete();
                                } catch (ClassNotFoundException e) {
                                    e = e;
                                    OSSLog.logThrowable2Local(e);
                                }
                            } finally {
                                objectInputStream.close();
                                file2.delete();
                            }
                        } catch (ClassNotFoundException e2) {
                            e = e2;
                            map = null;
                        }
                    } else {
                        map = null;
                    }
                    int nextPartNumberMarker = 0;
                    do {
                        ListPartsRequest listPartsRequest = new ListPartsRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), this.mUploadId);
                        if (nextPartNumberMarker > 0) {
                            listPartsRequest.setPartNumberMarker(Integer.valueOf(nextPartNumberMarker));
                        }
                        OSSAsyncTask<ListPartsResult> oSSAsyncTaskListParts = this.mApiOperation.listParts(listPartsRequest, null);
                        try {
                            ListPartsResult listPartsResult = (ListPartsResult) oSSAsyncTaskListParts.getResult();
                            zIsTruncated = listPartsResult.isTruncated();
                            nextPartNumberMarker = listPartsResult.getNextPartNumberMarker();
                            List<PartSummary> parts = listPartsResult.getParts();
                            for (int i = 0; i < parts.size(); i++) {
                                PartSummary partSummary = parts.get(i);
                                PartETag partETag = new PartETag(partSummary.getPartNumber(), partSummary.getETag());
                                partETag.setPartSize(partSummary.getSize());
                                if (map != null && map.size() > 0 && map.containsKey(Integer.valueOf(partETag.getPartNumber()))) {
                                    partETag.setCRC64(((Long) map.get(Integer.valueOf(partETag.getPartNumber()))).longValue());
                                }
                                this.mPartETags.add(partETag);
                                this.mUploadedLength += partSummary.getSize();
                                this.mAlreadyUploadIndex.add(Integer.valueOf(partSummary.getPartNumber()));
                                if (i == 0) {
                                    this.mFirstPartSize = partSummary.getSize();
                                }
                            }
                        } catch (ClientException e3) {
                            throw e3;
                        } catch (ServiceException e4) {
                            if (e4.getStatusCode() == 404) {
                                this.mUploadId = null;
                                zIsTruncated = false;
                            } else {
                                throw e4;
                            }
                        }
                        oSSAsyncTaskListParts.waitUntilFinished();
                    } while (zIsTruncated);
                }
            }
            if (!this.mRecordFile.exists() && !this.mRecordFile.createNewFile()) {
                throw new ClientException("Can't create file at path: " + this.mRecordFile.getAbsolutePath() + "\nPlease make sure the directory exist!");
            }
        }
        if (OSSUtils.isEmptyString(this.mUploadId)) {
            InitiateMultipartUploadRequest initiateMultipartUploadRequest = new InitiateMultipartUploadRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), ((ResumableUploadRequest) this.mRequest).getMetadata());
            initiateMultipartUploadRequest.isSequential = true;
            this.mUploadId = ((InitiateMultipartUploadResult) this.mApiOperation.initMultipartUpload(initiateMultipartUploadRequest, null).getResult()).getUploadId();
            if (this.mRecordFile != null) {
                BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(this.mRecordFile));
                bufferedWriter.write(this.mUploadId);
                bufferedWriter.close();
            }
        }
        ((ResumableUploadRequest) this.mRequest).setUploadId(this.mUploadId);
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    protected ResumableUploadResult doMultipartUpload() throws Throwable {
        long j = this.mUploadedLength;
        checkCancel();
        int i = this.mPartAttr[0];
        int i2 = this.mPartAttr[1];
        if (this.mPartETags.size() > 0 && this.mAlreadyUploadIndex.size() > 0) {
            if (this.mUploadedLength > this.mFileLength) {
                throw new ClientException("The uploading file is inconsistent with before");
            }
            if (this.mFirstPartSize != i) {
                throw new ClientException("The part size setting is inconsistent with before");
            }
            long jLongValue = this.mUploadedLength;
            if (!TextUtils.isEmpty(this.mSp.getStringValue(this.mUploadId))) {
                jLongValue = Long.valueOf(this.mSp.getStringValue(this.mUploadId)).longValue();
            }
            long j2 = jLongValue;
            if (this.mProgressCallback != null) {
                this.mProgressCallback.onProgress(this.mRequest, j2, this.mFileLength);
            }
            this.mSp.removeKey(this.mUploadId);
        }
        for (int i3 = 0; i3 < i2; i3++) {
            if (this.mAlreadyUploadIndex.size() == 0 || !this.mAlreadyUploadIndex.contains(Integer.valueOf(i3 + 1))) {
                if (i3 == i2 - 1) {
                    i = (int) (this.mFileLength - j);
                }
                OSSLog.logDebug("upload part readByte : " + i);
                j += (long) i;
                uploadPart(i3, i, i2);
                if (this.mUploadException != null) {
                    break;
                }
            }
        }
        checkException();
        CompleteMultipartUploadResult completeMultipartUploadResult = completeMultipartUploadResult();
        ResumableUploadResult resumableUploadResult = completeMultipartUploadResult != null ? new ResumableUploadResult(completeMultipartUploadResult) : null;
        File file = this.mRecordFile;
        if (file != null) {
            file.delete();
        }
        File file2 = this.mCRC64RecordFile;
        if (file2 != null) {
            file2.delete();
        }
        return resumableUploadResult;
    }

    /* JADX WARN: Removed duplicated region for block: B:119:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:121:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00c3 A[Catch: ServiceException -> 0x0117, Exception -> 0x011b, all -> 0x01ba, TryCatch #2 {ServiceException -> 0x0117, blocks: (B:31:0x0093, B:33:0x00c3, B:34:0x00ce, B:36:0x00e7, B:44:0x0102, B:45:0x0116), top: B:104:0x0093 }] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00e7 A[Catch: ServiceException -> 0x0117, Exception -> 0x011b, all -> 0x01ba, TRY_LEAVE, TryCatch #2 {ServiceException -> 0x0117, blocks: (B:31:0x0093, B:33:0x00c3, B:34:0x00ce, B:36:0x00e7, B:44:0x0102, B:45:0x0116), top: B:104:0x0093 }] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0102 A[Catch: ServiceException -> 0x0117, Exception -> 0x011b, all -> 0x01ba, TRY_ENTER, TryCatch #2 {ServiceException -> 0x0117, blocks: (B:31:0x0093, B:33:0x00c3, B:34:0x00ce, B:36:0x00e7, B:44:0x0102, B:45:0x0116), top: B:104:0x0093 }] */
    /* JADX WARN: Removed duplicated region for block: B:64:0x013f A[Catch: IOException -> 0x0143, TRY_ENTER, TryCatch #14 {IOException -> 0x0143, blocks: (B:38:0x00f3, B:40:0x00f8, B:42:0x00fd, B:64:0x013f, B:68:0x0147, B:70:0x014c, B:85:0x01ac, B:87:0x01b1, B:89:0x01b6), top: B:111:0x0006 }] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0147 A[Catch: IOException -> 0x0143, TryCatch #14 {IOException -> 0x0143, blocks: (B:38:0x00f3, B:40:0x00f8, B:42:0x00fd, B:64:0x013f, B:68:0x0147, B:70:0x014c, B:85:0x01ac, B:87:0x01b1, B:89:0x01b6), top: B:111:0x0006 }] */
    /* JADX WARN: Removed duplicated region for block: B:70:0x014c A[Catch: IOException -> 0x0143, TRY_LEAVE, TryCatch #14 {IOException -> 0x0143, blocks: (B:38:0x00f3, B:40:0x00f8, B:42:0x00fd, B:64:0x013f, B:68:0x0147, B:70:0x014c, B:85:0x01ac, B:87:0x01b1, B:89:0x01b6), top: B:111:0x0006 }] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0163 A[Catch: all -> 0x01ba, TryCatch #17 {all -> 0x01ba, blocks: (B:30:0x007b, B:31:0x0093, B:33:0x00c3, B:34:0x00ce, B:36:0x00e7, B:44:0x0102, B:45:0x0116, B:77:0x015b, B:79:0x0163, B:80:0x0167, B:82:0x0181, B:83:0x019f), top: B:105:0x007b }] */
    /* JADX WARN: Removed duplicated region for block: B:80:0x0167 A[Catch: all -> 0x01ba, TryCatch #17 {all -> 0x01ba, blocks: (B:30:0x007b, B:31:0x0093, B:33:0x00c3, B:34:0x00ce, B:36:0x00e7, B:44:0x0102, B:45:0x0116, B:77:0x015b, B:79:0x0163, B:80:0x0167, B:82:0x0181, B:83:0x019f), top: B:105:0x007b }] */
    /* JADX WARN: Removed duplicated region for block: B:85:0x01ac A[Catch: IOException -> 0x0143, TRY_ENTER, TryCatch #14 {IOException -> 0x0143, blocks: (B:38:0x00f3, B:40:0x00f8, B:42:0x00fd, B:64:0x013f, B:68:0x0147, B:70:0x014c, B:85:0x01ac, B:87:0x01b1, B:89:0x01b6), top: B:111:0x0006 }] */
    /* JADX WARN: Removed duplicated region for block: B:87:0x01b1 A[Catch: IOException -> 0x0143, TryCatch #14 {IOException -> 0x0143, blocks: (B:38:0x00f3, B:40:0x00f8, B:42:0x00fd, B:64:0x013f, B:68:0x0147, B:70:0x014c, B:85:0x01ac, B:87:0x01b1, B:89:0x01b6), top: B:111:0x0006 }] */
    /* JADX WARN: Removed duplicated region for block: B:89:0x01b6 A[Catch: IOException -> 0x0143, TRY_LEAVE, TryCatch #14 {IOException -> 0x0143, blocks: (B:38:0x00f3, B:40:0x00f8, B:42:0x00fd, B:64:0x013f, B:68:0x0147, B:70:0x014c, B:85:0x01ac, B:87:0x01b1, B:89:0x01b6), top: B:111:0x0006 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void uploadPart(int i, int i2, int i3) throws Throwable {
        Throwable th;
        InputStream inputStream;
        BufferedInputStream bufferedInputStream;
        RandomAccessFile randomAccessFile;
        UploadPartRequest uploadPartRequest;
        RandomAccessFile randomAccessFile2 = null;
        uploadPartRequest = null;
        randomAccessFile2 = null;
        randomAccessFile2 = null;
        uploadPartRequest = null;
        uploadPartRequest = null;
        UploadPartRequest uploadPartRequest2 = null;
        randomAccessFile2 = null;
        try {
            try {
            } catch (IOException e) {
                OSSLog.logThrowable2Local(e);
                return;
            }
        } catch (ServiceException e2) {
            e = e2;
            randomAccessFile = null;
            inputStream = null;
            bufferedInputStream = null;
        } catch (Exception e3) {
            e = e3;
            inputStream = null;
            bufferedInputStream = null;
        } catch (Throwable th2) {
            th = th2;
            inputStream = null;
            bufferedInputStream = null;
        }
        if (this.mContext.getCancellationHandler().isCancelled()) {
            return;
        }
        this.mRunPartTaskCount++;
        preUploadPart(i, i2, i3);
        long partSize = ((long) i) * ((ResumableUploadRequest) this.mRequest).getPartSize();
        byte[] bArr = new byte[i2];
        if (this.mUploadUri != null) {
            InputStream inputStreamOpenInputStream = this.mContext.getApplicationContext().getContentResolver().openInputStream(this.mUploadUri);
            try {
                BufferedInputStream bufferedInputStream2 = new BufferedInputStream(inputStreamOpenInputStream);
                try {
                    bufferedInputStream2.skip(partSize);
                    bufferedInputStream2.read(bArr, 0, i2);
                    randomAccessFile = null;
                    bufferedInputStream = bufferedInputStream2;
                    inputStream = inputStreamOpenInputStream;
                    try {
                        try {
                            try {
                                uploadPartRequest = new UploadPartRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), this.mUploadId, i + 1);
                                try {
                                    uploadPartRequest.setPartContent(bArr);
                                    uploadPartRequest.setMd5Digest(BinaryUtil.calculateBase64Md5(bArr));
                                    uploadPartRequest.setCRC64(((ResumableUploadRequest) this.mRequest).getCRC64());
                                    UploadPartResult uploadPartResultSyncUploadPart = this.mApiOperation.syncUploadPart(uploadPartRequest);
                                    PartETag partETag = new PartETag(uploadPartRequest.getPartNumber(), uploadPartResultSyncUploadPart.getETag());
                                    long j = i2;
                                    partETag.setPartSize(j);
                                    if (this.mCheckCRC64) {
                                        partETag.setCRC64(uploadPartResultSyncUploadPart.getClientCRC().longValue());
                                    }
                                    this.mPartETags.add(partETag);
                                    this.mUploadedLength += j;
                                    uploadPartFinish(partETag);
                                    if (!this.mContext.getCancellationHandler().isCancelled()) {
                                        TaskCancelException taskCancelException = new TaskCancelException("sequence upload task cancel");
                                        throw new ClientException(taskCancelException.getMessage(), taskCancelException, true);
                                    }
                                    onProgressCallback(this.mRequest, this.mUploadedLength, this.mFileLength);
                                    if (randomAccessFile != null) {
                                        randomAccessFile.close();
                                    }
                                    if (inputStream != null) {
                                        inputStream.close();
                                    }
                                    if (bufferedInputStream != null) {
                                        bufferedInputStream.close();
                                        return;
                                    }
                                    return;
                                } catch (ServiceException e4) {
                                    e = e4;
                                    uploadPartRequest2 = uploadPartRequest;
                                    if (e.getStatusCode() != 409) {
                                        processException(e);
                                    } else {
                                        PartETag partETag2 = new PartETag(uploadPartRequest2.getPartNumber(), e.getPartEtag());
                                        partETag2.setPartSize(uploadPartRequest2.getPartContent().length);
                                        if (this.mCheckCRC64) {
                                            partETag2.setCRC64(new CheckedInputStream(new ByteArrayInputStream(uploadPartRequest2.getPartContent()), new CRC64()).getChecksum().getValue());
                                        }
                                        this.mPartETags.add(partETag2);
                                        this.mUploadedLength += (long) i2;
                                    }
                                    if (randomAccessFile != null) {
                                        randomAccessFile.close();
                                    }
                                    if (inputStream != null) {
                                        inputStream.close();
                                    }
                                    if (bufferedInputStream != null) {
                                        bufferedInputStream.close();
                                        return;
                                    }
                                    return;
                                }
                            } catch (ServiceException e5) {
                                e = e5;
                            }
                        } catch (Exception e6) {
                            e = e6;
                            randomAccessFile2 = randomAccessFile;
                            try {
                                processException(e);
                                if (randomAccessFile2 != null) {
                                    randomAccessFile2.close();
                                }
                                if (inputStream != null) {
                                    inputStream.close();
                                }
                                if (bufferedInputStream != null) {
                                    bufferedInputStream.close();
                                    return;
                                }
                                return;
                            } catch (Throwable th3) {
                                th = th3;
                            }
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        randomAccessFile2 = randomAccessFile;
                    }
                } catch (ServiceException e7) {
                    e = e7;
                    randomAccessFile = null;
                    bufferedInputStream = bufferedInputStream2;
                    inputStream = inputStreamOpenInputStream;
                    if (e.getStatusCode() != 409) {
                    }
                    if (randomAccessFile != null) {
                    }
                    if (inputStream != null) {
                    }
                    if (bufferedInputStream != null) {
                    }
                } catch (Exception e8) {
                    e = e8;
                    bufferedInputStream = bufferedInputStream2;
                    inputStream = inputStreamOpenInputStream;
                    processException(e);
                    if (randomAccessFile2 != null) {
                    }
                    if (inputStream != null) {
                    }
                    if (bufferedInputStream != null) {
                    }
                } catch (Throwable th5) {
                    th = th5;
                    bufferedInputStream = bufferedInputStream2;
                    inputStream = inputStreamOpenInputStream;
                }
            } catch (ServiceException e9) {
                e = e9;
                randomAccessFile = null;
                bufferedInputStream = null;
            } catch (Exception e10) {
                e = e10;
                bufferedInputStream = null;
            } catch (Throwable th6) {
                th = th6;
                bufferedInputStream = null;
            }
        } else {
            RandomAccessFile randomAccessFile3 = new RandomAccessFile(this.mUploadFile, "r");
            try {
                randomAccessFile3.seek(partSize);
                randomAccessFile3.readFully(bArr, 0, i2);
                inputStream = null;
                bufferedInputStream = null;
                randomAccessFile = randomAccessFile3;
                uploadPartRequest = new UploadPartRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), this.mUploadId, i + 1);
                uploadPartRequest.setPartContent(bArr);
                uploadPartRequest.setMd5Digest(BinaryUtil.calculateBase64Md5(bArr));
                uploadPartRequest.setCRC64(((ResumableUploadRequest) this.mRequest).getCRC64());
                UploadPartResult uploadPartResultSyncUploadPart2 = this.mApiOperation.syncUploadPart(uploadPartRequest);
                PartETag partETag3 = new PartETag(uploadPartRequest.getPartNumber(), uploadPartResultSyncUploadPart2.getETag());
                long j2 = i2;
                partETag3.setPartSize(j2);
                if (this.mCheckCRC64) {
                }
                this.mPartETags.add(partETag3);
                this.mUploadedLength += j2;
                uploadPartFinish(partETag3);
                if (!this.mContext.getCancellationHandler().isCancelled()) {
                }
            } catch (ServiceException e11) {
                e = e11;
                inputStream = null;
                bufferedInputStream = null;
                randomAccessFile = randomAccessFile3;
                if (e.getStatusCode() != 409) {
                }
                if (randomAccessFile != null) {
                }
                if (inputStream != null) {
                }
                if (bufferedInputStream != null) {
                }
            } catch (Exception e12) {
                e = e12;
                inputStream = null;
                bufferedInputStream = null;
                randomAccessFile2 = randomAccessFile3;
                processException(e);
                if (randomAccessFile2 != null) {
                }
                if (inputStream != null) {
                }
                if (bufferedInputStream != null) {
                }
            } catch (Throwable th7) {
                th = th7;
                inputStream = null;
                bufferedInputStream = null;
                randomAccessFile2 = randomAccessFile3;
            }
        }
        if (randomAccessFile2 != null) {
            try {
                randomAccessFile2.close();
            } catch (IOException e13) {
                OSSLog.logThrowable2Local(e13);
                throw th;
            }
        }
        if (inputStream != null) {
            inputStream.close();
        }
        if (bufferedInputStream == null) {
            throw th;
        }
        bufferedInputStream.close();
        throw th;
    }

    @Override
    protected void checkException() throws Throwable {
        ObjectOutputStream objectOutputStream;
        if (this.mContext.getCancellationHandler().isCancelled()) {
            if (((ResumableUploadRequest) this.mRequest).deleteUploadOnCancelling().booleanValue()) {
                abortThisUpload();
                File file = this.mRecordFile;
                if (file != null) {
                    file.delete();
                }
            } else if (this.mPartETags != null && this.mPartETags.size() > 0 && this.mCheckCRC64 && ((ResumableUploadRequest) this.mRequest).getRecordDirectory() != null) {
                HashMap map = new HashMap();
                for (PartETag partETag : this.mPartETags) {
                    map.put(Integer.valueOf(partETag.getPartNumber()), Long.valueOf(partETag.getCRC64()));
                }
                ObjectOutputStream objectOutputStream2 = null;
                try {
                    try {
                        File file2 = new File(((ResumableUploadRequest) this.mRequest).getRecordDirectory() + File.separator + this.mUploadId);
                        this.mCRC64RecordFile = file2;
                        if (!file2.exists()) {
                            this.mCRC64RecordFile.createNewFile();
                        }
                        objectOutputStream = new ObjectOutputStream(new FileOutputStream(this.mCRC64RecordFile));
                    } catch (IOException e) {
                        e = e;
                    }
                } catch (Throwable th) {
                    th = th;
                }
                try {
                    objectOutputStream.writeObject(map);
                    objectOutputStream.close();
                } catch (IOException e2) {
                    e = e2;
                    objectOutputStream2 = objectOutputStream;
                    OSSLog.logThrowable2Local(e);
                    if (objectOutputStream2 != null) {
                        objectOutputStream2.close();
                    }
                } catch (Throwable th2) {
                    th = th2;
                    objectOutputStream2 = objectOutputStream;
                    if (objectOutputStream2 != null) {
                        objectOutputStream2.close();
                    }
                    throw th;
                }
            }
        }
        super.checkException();
    }

    @Override
    protected void abortThisUpload() {
        if (this.mUploadId != null) {
            this.mApiOperation.abortMultipartUpload(new AbortMultipartUploadRequest(((ResumableUploadRequest) this.mRequest).getBucketName(), ((ResumableUploadRequest) this.mRequest).getObjectKey(), this.mUploadId), null).waitUntilFinished();
        }
    }

    @Override
    protected void processException(Exception exc) {
        if (this.mUploadException == null || !exc.getMessage().equals(this.mUploadException.getMessage())) {
            this.mUploadException = exc;
        }
        OSSLog.logThrowable2Local(exc);
        if (!this.mContext.getCancellationHandler().isCancelled() || this.mIsCancel) {
            return;
        }
        this.mIsCancel = true;
    }

    @Override
    protected void uploadPartFinish(PartETag partETag) throws Exception {
        if (!this.mContext.getCancellationHandler().isCancelled() || this.mSp.contains(this.mUploadId)) {
            return;
        }
        this.mSp.setStringValue(this.mUploadId, String.valueOf(this.mUploadedLength));
        onProgressCallback(this.mRequest, this.mUploadedLength, this.mFileLength);
    }
}

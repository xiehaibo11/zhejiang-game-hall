.class final Lcom/bianfeng/fastvo/action/OSSHelper$2;
.super Ljava/lang/Object;
.source "OSSHelper.java"

# interfaces
.implements Lcom/alibaba/sdk/android/oss/callback/OSSCompletedCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/fastvo/action/OSSHelper;->upLoadFile(Ljava/lang/String;Lcom/bianfeng/fastvo/action/UploadListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/alibaba/sdk/android/oss/callback/OSSCompletedCallback<",
        "Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;",
        "Lcom/alibaba/sdk/android/oss/model/PutObjectResult;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic val$BUCKET_NAME:Ljava/lang/String;

.field final synthetic val$listener:Lcom/bianfeng/fastvo/action/UploadListener;

.field final synthetic val$objectKey:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/fastvo/action/UploadListener;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$BUCKET_NAME:Ljava/lang/String;

    iput-object p2, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$objectKey:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$listener:Lcom/bianfeng/fastvo/action/UploadListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic onFailure(Lcom/alibaba/sdk/android/oss/model/OSSRequest;Lcom/alibaba/sdk/android/oss/ClientException;Lcom/alibaba/sdk/android/oss/ServiceException;)V
    .locals 0

    .line 47
    check-cast p1, Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;

    invoke-virtual {p0, p1, p2, p3}, Lcom/bianfeng/fastvo/action/OSSHelper$2;->onFailure(Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;Lcom/alibaba/sdk/android/oss/ClientException;Lcom/alibaba/sdk/android/oss/ServiceException;)V

    return-void
.end method

.method public onFailure(Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;Lcom/alibaba/sdk/android/oss/ClientException;Lcom/alibaba/sdk/android/oss/ServiceException;)V
    .locals 2

    const-string p1, "ErrorCode  ---"

    if-eqz p2, :cond_0

    .line 61
    invoke-virtual {p2}, Lcom/alibaba/sdk/android/oss/ClientException;->printStackTrace()V

    .line 63
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/alibaba/sdk/android/oss/ClientException;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 64
    iget-object p2, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$listener:Lcom/bianfeng/fastvo/action/UploadListener;

    const/16 v0, 0x259

    const-string v1, "\u672c\u5730\u7f51\u7edc\u5f02\u5e38"

    invoke-interface {p2, v0, v1}, Lcom/bianfeng/fastvo/action/UploadListener;->onError(ILjava/lang/String;)V

    :cond_0
    if-eqz p3, :cond_1

    .line 68
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/alibaba/sdk/android/oss/ServiceException;->getErrorCode()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 69
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "RequestId  ---"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/alibaba/sdk/android/oss/ServiceException;->getRequestId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 70
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "HostId  ---"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/alibaba/sdk/android/oss/ServiceException;->getHostId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 71
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "RawMessage  ---"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/alibaba/sdk/android/oss/ServiceException;->getRawMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 73
    iget-object p1, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$listener:Lcom/bianfeng/fastvo/action/UploadListener;

    invoke-virtual {p3}, Lcom/alibaba/sdk/android/oss/ServiceException;->getErrorCode()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p3}, Lcom/alibaba/sdk/android/oss/ServiceException;->getRawMessage()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p2, p3}, Lcom/bianfeng/fastvo/action/UploadListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public bridge synthetic onSuccess(Lcom/alibaba/sdk/android/oss/model/OSSRequest;Lcom/alibaba/sdk/android/oss/model/OSSResult;)V
    .locals 0

    .line 47
    check-cast p1, Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;

    check-cast p2, Lcom/alibaba/sdk/android/oss/model/PutObjectResult;

    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/fastvo/action/OSSHelper$2;->onSuccess(Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;Lcom/alibaba/sdk/android/oss/model/PutObjectResult;)V

    return-void
.end method

.method public onSuccess(Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;Lcom/alibaba/sdk/android/oss/model/PutObjectResult;)V
    .locals 1

    const-string p1, "PutObjectUploadSuccess"

    .line 50
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 51
    invoke-static {}, Lcom/bianfeng/fastvo/action/OSSHelper;->access$000()Lcom/alibaba/sdk/android/oss/OSS;

    move-result-object p1

    iget-object p2, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$BUCKET_NAME:Ljava/lang/String;

    iget-object v0, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$objectKey:Ljava/lang/String;

    invoke-interface {p1, p2, v0}, Lcom/alibaba/sdk/android/oss/OSS;->presignPublicObjectURL(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 52
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PutObjecturl is "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 53
    iget-object p2, p0, Lcom/bianfeng/fastvo/action/OSSHelper$2;->val$listener:Lcom/bianfeng/fastvo/action/UploadListener;

    invoke-interface {p2, p1}, Lcom/bianfeng/fastvo/action/UploadListener;->onComplete(Ljava/lang/String;)V

    return-void
.end method

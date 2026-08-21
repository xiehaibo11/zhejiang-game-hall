.class final Lcom/kwad/sdk/crash/report/upload/d$2;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/crash/report/upload/d;->a(Ljava/io/File;ZLjava/util/concurrent/CountDownLatch;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/sdk/crash/report/upload/c;",
        "Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aBq:Ljava/util/concurrent/CountDownLatch;

.field final synthetic aBt:Lcom/kwad/sdk/crash/report/upload/f;

.field final synthetic aBu:Ljava/io/File;

.field final synthetic aBv:Z


# direct methods
.method constructor <init>(Lcom/kwad/sdk/crash/report/upload/f;Ljava/io/File;Ljava/util/concurrent/CountDownLatch;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBt:Lcom/kwad/sdk/crash/report/upload/f;

    iput-object p2, p0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBu:Ljava/io/File;

    iput-object p3, p0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBq:Ljava/util/concurrent/CountDownLatch;

    iput-boolean p4, p0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBv:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/crash/report/upload/c;ILjava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onError errorCode="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "errorMsg="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "url="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/report/upload/c;->getUrl()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ExceptionCollector"

    invoke-static {p1, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/kwad/sdk/crash/report/upload/c;Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onSuccess url="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/sdk/crash/report/upload/c;->getUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " ---{"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;->uploadToken:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ExceptionCollector"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;->isResultOk()Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBt:Lcom/kwad/sdk/crash/report/upload/f;

    iget-object p2, p2, Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;->uploadToken:Ljava/lang/String;

    iput-object p2, p1, Lcom/kwad/sdk/crash/report/upload/f;->aBP:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBu:Ljava/io/File;

    iget-object p2, p0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBt:Lcom/kwad/sdk/crash/report/upload/f;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/d$2$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/crash/report/upload/d$2$1;-><init>(Lcom/kwad/sdk/crash/report/upload/d$2;)V

    invoke-static {p1, p2, v0}, Lcom/kwad/sdk/crash/report/upload/b;->a(Ljava/io/File;Lcom/kwad/sdk/crash/report/upload/f;Lcom/kwad/sdk/crash/report/upload/a;)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/crash/report/upload/c;

    invoke-static {p1, p2, p3}, Lcom/kwad/sdk/crash/report/upload/d$2;->a(Lcom/kwad/sdk/crash/report/upload/c;ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/crash/report/upload/c;

    check-cast p2, Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/crash/report/upload/d$2;->a(Lcom/kwad/sdk/crash/report/upload/c;Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;)V

    return-void
.end method

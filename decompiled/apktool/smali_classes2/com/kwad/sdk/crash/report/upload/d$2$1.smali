.class final Lcom/kwad/sdk/crash/report/upload/d$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/crash/report/upload/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/crash/report/upload/d$2;->a(Lcom/kwad/sdk/crash/report/upload/c;Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aBw:Lcom/kwad/sdk/crash/report/upload/d$2;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/crash/report/upload/d$2;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final Fj()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    iget-object v0, v0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBq:Ljava/util/concurrent/CountDownLatch;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    iget-object v0, v0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBq:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    :cond_0
    return-void
.end method

.method public final Fk()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "uploadLogFile onSuccess "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " delete file:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    iget-object v1, v1, Lcom/kwad/sdk/crash/report/upload/d$2;->aBu:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ExceptionCollector"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    iget-object v0, v0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBq:Ljava/util/concurrent/CountDownLatch;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    iget-object v0, v0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBq:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    iget-boolean v0, v0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBv:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/upload/d$2$1;->aBw:Lcom/kwad/sdk/crash/report/upload/d$2;

    iget-object v0, v0, Lcom/kwad/sdk/crash/report/upload/d$2;->aBu:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->delete(Ljava/lang/String;)Z

    :cond_1
    return-void
.end method

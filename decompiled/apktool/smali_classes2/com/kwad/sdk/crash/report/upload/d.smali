.class public final Lcom/kwad/sdk/crash/report/upload/d;
.super Ljava/lang/Object;


# direct methods
.method public static a(Ljava/io/File;ZLjava/util/concurrent/CountDownLatch;)V
    .locals 3

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "upload()"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ExceptionCollector"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p1, Lcom/kwad/sdk/crash/report/upload/f;

    invoke-direct {p1}, Lcom/kwad/sdk/crash/report/upload/f;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/kwad/sdk/crash/report/upload/f;->aBL:Ljava/lang/String;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/g;->eR(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "mLogUUID"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/kwad/sdk/crash/report/upload/f;->aBN:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->getExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/kwad/sdk/crash/report/upload/f;->aBO:Ljava/lang/String;

    iput-object p0, p1, Lcom/kwad/sdk/crash/report/upload/f;->aBQ:Ljava/io/File;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/d$1;

    invoke-direct {v0, p1}, Lcom/kwad/sdk/crash/report/upload/d$1;-><init>(Lcom/kwad/sdk/crash/report/upload/f;)V

    new-instance v1, Lcom/kwad/sdk/crash/report/upload/d$2;

    const/4 v2, 0x1

    invoke-direct {v1, p1, p0, p2, v2}, Lcom/kwad/sdk/crash/report/upload/d$2;-><init>(Lcom/kwad/sdk/crash/report/upload/f;Ljava/io/File;Ljava/util/concurrent/CountDownLatch;Z)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

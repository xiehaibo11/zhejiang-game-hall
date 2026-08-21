.class final Lcom/kwad/sdk/crash/report/upload/d$1;
.super Lcom/kwad/sdk/core/network/m;


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
        "Lcom/kwad/sdk/core/network/m<",
        "Lcom/kwad/sdk/crash/report/upload/c;",
        "Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aBt:Lcom/kwad/sdk/crash/report/upload/f;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/crash/report/upload/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/report/upload/d$1;->aBt:Lcom/kwad/sdk/crash/report/upload/f;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/m;-><init>()V

    return-void
.end method

.method private Fl()Lcom/kwad/sdk/crash/report/upload/c;
    .locals 4

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/c;

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getDeviceId()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/sdk/crash/report/upload/d$1;->aBt:Lcom/kwad/sdk/crash/report/upload/f;

    iget-object v2, v2, Lcom/kwad/sdk/crash/report/upload/f;->aBJ:Ljava/lang/String;

    const-string v3, "zip"

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/sdk/crash/report/upload/c;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method private static eQ(Ljava/lang/String;)Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;
    .locals 1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;

    invoke-direct {p0}, Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;->parseJson(Lorg/json/JSONObject;)V

    return-object p0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/crash/report/upload/d$1;->Fl()Lcom/kwad/sdk/crash/report/upload/c;

    move-result-object v0

    return-object v0
.end method

.method public final isPostByJson()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/crash/report/upload/d$1;->eQ(Ljava/lang/String;)Lcom/kwad/sdk/crash/report/upload/GetUploadTokenResult;

    move-result-object p1

    return-object p1
.end method

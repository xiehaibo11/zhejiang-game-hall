.class public Lcom/bianfeng/ymnsdk/ymndatalib/g;
.super Lcom/bianfeng/netlibsdk/BaseRequest;
.source "WhiteListRequest.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/netlibsdk/BaseRequest;-><init>()V

    return-void
.end method


# virtual methods
.method public addHeaders()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0
.end method

.method public getMethod()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public getRequestBody()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->get_ymndata_white_list()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

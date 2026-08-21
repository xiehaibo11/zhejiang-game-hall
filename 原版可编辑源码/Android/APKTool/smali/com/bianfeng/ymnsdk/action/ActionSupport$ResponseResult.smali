.class public Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
.super Ljava/lang/Object;
.source "ActionSupport.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/action/ActionSupport;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "ResponseResult"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field public code:I

.field public data:Lorg/json/JSONObject;

.field public ext:Ljava/lang/Object;

.field public msg:Ljava/lang/String;

.field public processedResult:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field public srcObj:Lorg/json/JSONObject;

.field public srcRes:Ljava/lang/String;

.field final synthetic this$0:Lcom/bianfeng/ymnsdk/action/ActionSupport;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/action/ActionSupport;ILjava/lang/String;)V
    .locals 1
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/action/ActionSupport;
    .param p2, "code"    # I
    .param p3, "msg"    # Ljava/lang/String;

    .line 78
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->this$0:Lcom/bianfeng/ymnsdk/action/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 67
    const/16 v0, 0x3e7

    iput v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    .line 79
    iput p2, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    .line 80
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    .line 81
    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/action/ActionSupport;Ljava/lang/String;)V
    .locals 1
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/action/ActionSupport;
    .param p2, "response"    # Ljava/lang/String;

    .line 74
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->this$0:Lcom/bianfeng/ymnsdk/action/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 67
    const/16 v0, 0x3e7

    iput v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    .line 75
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    .line 76
    return-void
.end method


# virtual methods
.method public dataAsString()Ljava/lang/String;
    .locals 1

    .line 100
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getExtData(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 108
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->ext:Ljava/lang/Object;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lorg/json/JSONObject;

    if-eqz v1, :cond_0

    .line 109
    check-cast v0, Lorg/json/JSONObject;

    .line 110
    .local v0, "json":Lorg/json/JSONObject;
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 112
    .end local v0    # "json":Lorg/json/JSONObject;
    :cond_0
    const-string v0, "unknow"

    return-object v0
.end method

.method public isOk()Z
    .locals 1

    .line 88
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    iget v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isResponsed()Z
    .locals 1

    .line 84
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public messageFail()Ljava/lang/String;
    .locals 2

    .line 104
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public processedResultAsMap()Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 93
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>.ResponseResult<TT;>;"
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getMapFrom(Ljava/lang/Object;)Ljava/util/Map;

    move-result-object v0
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 94
    :catch_0
    move-exception v0

    .line 95
    .local v0, "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    return-object v1
.end method

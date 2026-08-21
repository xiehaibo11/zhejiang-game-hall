.class public Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;
.super Ljava/lang/Object;
.source "ActionSupportV2.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
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
.field private code:I

.field private data:Lorg/json/JSONObject;

.field private msg:Ljava/lang/String;

.field private processedResult:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field private srcRes:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 1

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x3e7

    .line 55
    iput v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->code:I

    .line 110
    iput p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->code:I

    .line 111
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->msg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x3e7

    .line 2
    iput v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->code:I

    .line 53
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->srcRes:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$102(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->processedResult:Ljava/lang/Object;

    return-object p1
.end method


# virtual methods
.method public dataAsString()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->data:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCode()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->code:I

    return v0
.end method

.method public getData()Lorg/json/JSONObject;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->data:Lorg/json/JSONObject;

    return-object v0
.end method

.method public getMsg()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->msg:Ljava/lang/String;

    return-object v0
.end method

.method public getProcessedResult()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->processedResult:Ljava/lang/Object;

    return-object v0
.end method

.method public getSrcRes()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->srcRes:Ljava/lang/String;

    return-object v0
.end method

.method public isOk()Z
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->code:I

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

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public messageFail()Ljava/lang/String;
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->code:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->msg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public processedResultAsMap()Ljava/util/Map;
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
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->processedResult:Ljava/lang/Object;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getMapFrom(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 4
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0
.end method

.method public setCode(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->code:I

    return-void
.end method

.method public setData(Lorg/json/JSONObject;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->data:Lorg/json/JSONObject;

    return-void
.end method

.method public setMsg(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->msg:Ljava/lang/String;

    return-void
.end method

.method public setProcessedResult(Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->processedResult:Ljava/lang/Object;

    return-void
.end method

.method public setSrcRes(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->srcRes:Ljava/lang/String;

    return-void
.end method

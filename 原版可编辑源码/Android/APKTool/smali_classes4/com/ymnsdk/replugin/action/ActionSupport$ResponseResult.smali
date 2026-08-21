.class public Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;
.super Ljava/lang/Object;
.source "ActionSupport.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/action/ActionSupport;
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

.field final synthetic this$0:Lcom/ymnsdk/replugin/action/ActionSupport;


# direct methods
.method public constructor <init>(Lcom/ymnsdk/replugin/action/ActionSupport;ILjava/lang/String;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->this$0:Lcom/ymnsdk/replugin/action/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 p1, 0x3e7

    .line 63
    iput p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    .line 75
    iput p2, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    .line 76
    iput-object p3, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/ymnsdk/replugin/action/ActionSupport;Ljava/lang/String;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->this$0:Lcom/ymnsdk/replugin/action/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 p1, 0x3e7

    .line 63
    iput p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    .line 71
    iput-object p2, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public dataAsString()Ljava/lang/String;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getExtData(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 115
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->ext:Ljava/lang/Object;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lorg/json/JSONObject;

    if-eqz v1, :cond_0

    .line 116
    check-cast v0, Lorg/json/JSONObject;

    .line 117
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const-string p1, "unknow"

    return-object p1
.end method

.method public isAllow()Z
    .locals 1

    .line 89
    iget v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isNotAllow()Z
    .locals 2

    .line 94
    iget v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public isOk()Z
    .locals 1

    .line 84
    iget v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

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

    .line 80
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public messageFail()Ljava/lang/String;
    .locals 2

    .line 111
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public processedResultAsMap()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 100
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 102
    :catch_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0
.end method

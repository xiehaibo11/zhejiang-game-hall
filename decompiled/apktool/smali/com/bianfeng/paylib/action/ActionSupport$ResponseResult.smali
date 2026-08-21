.class public Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;
.super Ljava/lang/Object;
.source "ActionSupport.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/paylib/action/ActionSupport;
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

.field final synthetic this$0:Lcom/bianfeng/paylib/action/ActionSupport;


# direct methods
.method public constructor <init>(Lcom/bianfeng/paylib/action/ActionSupport;ILjava/lang/String;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->this$0:Lcom/bianfeng/paylib/action/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 p1, 0x3e7

    .line 36
    iput p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->code:I

    .line 89
    iput p2, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->code:I

    .line 90
    iput-object p3, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/paylib/action/ActionSupport;Ljava/lang/String;)V
    .locals 0

    .line 84
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->this$0:Lcom/bianfeng/paylib/action/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 p1, 0x3e7

    .line 36
    iput p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->code:I

    .line 85
    iput-object p2, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$102(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    return-object p1
.end method


# virtual methods
.method public getCode()I
    .locals 1

    .line 40
    iget v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->code:I

    return v0
.end method

.method public getData()Lorg/json/JSONObject;
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    return-object v0
.end method

.method public getMsg()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-object v0
.end method

.method public getProcessedResult()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation

    .line 77
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    return-object v0
.end method

.method public getSrcRes()Ljava/lang/String;
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-object v0
.end method

.method public isOk()Z
    .locals 1

    .line 98
    iget v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->code:I

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

    .line 94
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public messageFail()Ljava/lang/String;
    .locals 2

    .line 106
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->code:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

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

    .line 102
    invoke-static {}, Lcom/bianfeng/thridlibrary/GsonUtils;->getInstance()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/thridlibrary/GsonUtils;->getInstance()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    invoke-virtual {v1, v2}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/thridlibrary/GsonUtils;->getFromMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public setCode(I)V
    .locals 0

    .line 48
    iput p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->code:I

    return-void
.end method

.method public setData(Lorg/json/JSONObject;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    return-void
.end method

.method public setMsg(Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-void
.end method

.method public setProcessedResult(Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    .line 60
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    return-void
.end method

.method public setSrcRes(Ljava/lang/String;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-void
.end method

.class public Lcom/bianfeng/netlib/ActionSupport$ResponseResult;
.super Ljava/lang/Object;
.source "ActionSupport.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/netlib/ActionSupport;
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

.field final synthetic this$0:Lcom/bianfeng/netlib/ActionSupport;


# direct methods
.method public constructor <init>(Lcom/bianfeng/netlib/ActionSupport;ILjava/lang/String;)V
    .locals 0

    .line 90
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->this$0:Lcom/bianfeng/netlib/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 p1, 0x3e7

    .line 38
    iput p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    .line 91
    iput p2, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    .line 92
    iput-object p3, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/netlib/ActionSupport;Ljava/lang/String;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->this$0:Lcom/bianfeng/netlib/ActionSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 p1, 0x3e7

    .line 38
    iput p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    .line 87
    iput-object p2, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/String;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)I
    .locals 0

    .line 34
    iget p0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    return p0
.end method

.method static synthetic access$202(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;I)I
    .locals 0

    .line 34
    iput p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    return p1
.end method

.method static synthetic access$300(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/String;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$302(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$402(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    return-object p1
.end method


# virtual methods
.method public getCode()I
    .locals 1

    .line 42
    iget v0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    return v0
.end method

.method public getData()Lorg/json/JSONObject;
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    return-object v0
.end method

.method public getMsg()Ljava/lang/String;
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-object v0
.end method

.method public getProcessedResult()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation

    .line 79
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    return-object v0
.end method

.method public getSrcRes()Ljava/lang/String;
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-object v0
.end method

.method public isOk()Z
    .locals 1

    .line 100
    iget v0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

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

    .line 96
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public messageFail()Ljava/lang/String;
    .locals 2

    .line 108
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

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

    .line 105
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    invoke-virtual {v1, v2}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public setCode(I)V
    .locals 0

    .line 50
    iput p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->code:I

    return-void
.end method

.method public setData(Lorg/json/JSONObject;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    return-void
.end method

.method public setMsg(Ljava/lang/String;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    return-void
.end method

.method public setProcessedResult(Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    .line 62
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    return-void
.end method

.method public setSrcRes(Ljava/lang/String;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    return-void
.end method

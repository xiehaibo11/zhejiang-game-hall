.class public abstract Lcom/bianfeng/netlib/ActionSupport;
.super Ljava/util/Observable;
.source "ActionSupport.java"

# interfaces
.implements Lcom/bianfeng/netlib/HttpListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/netlib/ActionSupport$ResponseResult;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/util/Observable;",
        "Lcom/bianfeng/netlib/HttpListener;"
    }
.end annotation


# instance fields
.field protected context:Landroid/app/Activity;

.field protected gContent:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field protected httpHelper:Lcom/bianfeng/netlib/HttpHelper;

.field private mUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 113
    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    .line 114
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport;->context:Landroid/app/Activity;

    .line 115
    new-instance v0, Lcom/bianfeng/netlib/HttpHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/netlib/HttpHelper;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/bianfeng/netlib/ActionSupport;->httpHelper:Lcom/bianfeng/netlib/HttpHelper;

    const/4 p1, 0x1

    .line 116
    invoke-virtual {v0, p1}, Lcom/bianfeng/netlib/HttpHelper;->setMethod(I)V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/netlib/ActionSupport;Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Lcom/bianfeng/netlib/ActionSupport;->notifyResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    return-void
.end method

.method private notifyResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V
    .locals 1

    .line 205
    invoke-virtual {p0}, Lcom/bianfeng/netlib/ActionSupport;->setChanged()V

    .line 206
    invoke-virtual {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->isResponsed()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 208
    :try_start_0
    invoke-virtual {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 209
    invoke-virtual {p0, p1}, Lcom/bianfeng/netlib/ActionSupport;->onSuccess(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$402(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 212
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 217
    :cond_0
    :goto_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/netlib/ActionSupport;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method

.method private parseResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V
    .locals 6

    .line 177
    :try_start_0
    invoke-direct {p0, p1}, Lcom/bianfeng/netlib/ActionSupport;->showDebugLog(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    .line 178
    invoke-static {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$100(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 179
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v2, "ymnsdk"

    const-string v3, "do action response error code = %d msg = %s"

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    invoke-static {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$200(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v4, v1

    const/4 v1, 0x1

    invoke-static {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$300(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v1

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 181
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-static {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$100(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 182
    invoke-virtual {p1, v1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->setCode(I)V

    .line 183
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->setData(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 186
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/16 v0, 0x25a

    .line 187
    invoke-static {p1, v0}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$202(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;I)I

    const-string v0, "parse response json error"

    .line 188
    invoke-static {p1, v0}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$302(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;Ljava/lang/String;)Ljava/lang/String;

    :goto_0
    return-void
.end method

.method private showDebugLog(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V
    .locals 4

    .line 193
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 194
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[CONTEXT] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/netlib/ActionSupport;->context:Landroid/app/Activity;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    .line 195
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 196
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[REQUEST] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/netlib/ActionSupport;->mUrl:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 197
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 199
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 200
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[RESPONSE] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->access$100(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 201
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    return-void
.end method


# virtual methods
.method public actionStart()V
    .locals 4

    .line 124
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/netlib/ActionSupport;->getURL()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/netlib/ActionSupport;->mUrl:Ljava/lang/String;

    .line 125
    invoke-virtual {p0}, Lcom/bianfeng/netlib/ActionSupport;->doRequest()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const/16 v1, 0x25b

    .line 127
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ActionSupport\u7c7b\u4e2dactionStart\u65b9\u6cd5\uff0c\u8bf7\u6c42\u9519\u8bef"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/netlib/ActionSupport;->onError(ILjava/lang/String;)V

    .line 128
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public doRequest()V
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/UnsupportedEncodingException;
        }
    .end annotation

    .line 139
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 140
    iget-object v1, p0, Lcom/bianfeng/netlib/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-virtual {v1}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 141
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 142
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    const-string v3, ""

    .line 143
    :cond_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "&"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "="

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "utf-8"

    invoke-static {v3, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 145
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_2

    .line 146
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/bianfeng/netlib/ActionSupport;->mUrl:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "?"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/netlib/ActionSupport;->mUrl:Ljava/lang/String;

    .line 148
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionSupport;->httpHelper:Lcom/bianfeng/netlib/HttpHelper;

    iget-object v1, p0, Lcom/bianfeng/netlib/ActionSupport;->mUrl:Ljava/lang/String;

    invoke-virtual {v0, v1, p0}, Lcom/bianfeng/netlib/HttpHelper;->request(Ljava/lang/String;Lcom/bianfeng/netlib/HttpListener;)V

    return-void
.end method

.method protected formatType(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2

    .line 224
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 226
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :cond_0
    return-object p1
.end method

.method protected abstract getURL()Ljava/lang/String;
.end method

.method public onComplete(Ljava/lang/String;)V
    .locals 1

    .line 153
    new-instance v0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;-><init>(Lcom/bianfeng/netlib/ActionSupport;Ljava/lang/String;)V

    .line 154
    invoke-virtual {p0, v0}, Lcom/bianfeng/netlib/ActionSupport;->processResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 1

    .line 159
    new-instance v0, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1, p2}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;-><init>(Lcom/bianfeng/netlib/ActionSupport;ILjava/lang/String;)V

    .line 160
    invoke-virtual {p0, v0}, Lcom/bianfeng/netlib/ActionSupport;->processResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    return-void
.end method

.method protected abstract onSuccess(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlib/ActionSupport$ResponseResult;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public processResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V
    .locals 2

    .line 164
    invoke-direct {p0, p1}, Lcom/bianfeng/netlib/ActionSupport;->parseResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    .line 165
    iget-object v0, p0, Lcom/bianfeng/netlib/ActionSupport;->context:Landroid/app/Activity;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 166
    new-instance v1, Lcom/bianfeng/netlib/ActionSupport$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/netlib/ActionSupport$1;-><init>(Lcom/bianfeng/netlib/ActionSupport;Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 172
    :cond_0
    invoke-direct {p0, p1}, Lcom/bianfeng/netlib/ActionSupport;->notifyResponseResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    :goto_0
    return-void
.end method

.method public putReqData(Ljava/util/TreeMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 134
    iput-object p1, p0, Lcom/bianfeng/netlib/ActionSupport;->gContent:Ljava/util/TreeMap;

    :cond_0
    return-void
.end method

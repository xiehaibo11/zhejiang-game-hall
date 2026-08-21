.class public abstract Lcom/ymnsdk/replugin/action/ActionSupport;
.super Ljava/util/Observable;
.source "ActionSupport.java"

# interfaces
.implements Lcom/ymnsdk/replugin/action/HttpListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/util/Observable;",
        "Lcom/ymnsdk/replugin/action/HttpListener;"
    }
.end annotation


# static fields
.field protected static final TAG:Ljava/lang/String; = "Replugin_ActionSupport"


# instance fields
.field protected attachment:Lcom/ymnsdk/replugin/action/ActionAttachment;

.field protected context:Landroid/content/Context;

.field protected gContent:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field protected httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

.field private mUrl:Ljava/lang/String;

.field protected pContent:Ljava/lang/String;

.field private transactionId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 123
    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    .line 124
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->context:Landroid/content/Context;

    .line 125
    new-instance v0, Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/action/HttpHelper;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    const/4 p1, 0x2

    .line 126
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/action/HttpHelper;->setMethod(I)V

    .line 127
    new-instance p1, Ljava/util/TreeMap;

    invoke-direct {p1}, Ljava/util/TreeMap;-><init>()V

    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->gContent:Ljava/util/Map;

    return-void
.end method

.method static synthetic access$000(Lcom/ymnsdk/replugin/action/ActionSupport;Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 0

    .line 28
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->notifyResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V

    return-void
.end method

.method private notifyResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 1

    .line 240
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/action/ActionSupport;->setChanged()V

    .line 241
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->isResponsed()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 243
    :try_start_0
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 244
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 250
    :catch_0
    :cond_0
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method

.method private parseResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 3

    const-string v0, "code"

    .line 218
    :try_start_0
    iget-object v1, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 220
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 221
    iput-object v1, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->srcObj:Lorg/json/JSONObject;

    .line 222
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 223
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    const-string v0, "message"

    .line 224
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    const-string v0, "data"

    .line 225
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 227
    iput v0, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    .line 228
    iput-object v1, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 232
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/16 v0, 0x25a

    .line 233
    iput v0, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    const-string v0, "parse response json error"

    .line 234
    iput-object v0, p1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    :goto_0
    return-void
.end method

.method private processResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 2

    .line 205
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->parseResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V

    .line 206
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->context:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/ymnsdk/replugin/action/ActionSupport$1;

    invoke-direct {v1, p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport$1;-><init>(Lcom/ymnsdk/replugin/action/ActionSupport;Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 212
    :cond_0
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->notifyResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public actionStart()V
    .locals 1

    .line 134
    :try_start_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/action/ActionSupport;->getURL()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->mUrl:Ljava/lang/String;

    .line 135
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/action/ActionSupport;->doRequest(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 137
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public doRequest(Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 172
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 173
    iget-object v1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->gContent:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 174
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "&"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 177
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_1

    .line 178
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "?"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 180
    :cond_1
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/action/HttpHelper;->isGetMethod()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 181
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->gContent:Ljava/util/Map;

    if-eqz v0, :cond_3

    .line 182
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    const-string v1, ""

    invoke-virtual {v0, p1, v1, p0}, Lcom/ymnsdk/replugin/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/action/HttpListener;)V

    goto :goto_1

    .line 185
    :cond_2
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->pContent:Ljava/lang/String;

    if-eqz v0, :cond_3

    .line 186
    iget-object v1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-virtual {v1, p1, v0, p0}, Lcom/ymnsdk/replugin/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/action/HttpListener;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public encode(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    :try_start_0
    const-string v0, "UTF-8"

    .line 283
    invoke-static {p1, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 285
    new-instance v0, Ljava/lang/Exception;

    const-string v1, "Replugin_ActionSupport"

    invoke-direct {v0, v1, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0
.end method

.method protected formatType(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2

    .line 268
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 270
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

.method protected formatUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 263
    invoke-static {}, Lcom/ymnsdk/replugin/action/URLManager;->getHost()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v0, 0x1

    const-string v2, "v1"

    aput-object v2, v1, v0

    const/4 v0, 0x2

    aput-object p1, v1, v0

    const-string p1, "%s/%s/%s"

    .line 264
    invoke-static {p1, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected abstract getURL()Ljava/lang/String;
.end method

.method public onComplete(Ljava/lang/String;)V
    .locals 1

    .line 194
    new-instance v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;-><init>(Lcom/ymnsdk/replugin/action/ActionSupport;Ljava/lang/String;)V

    .line 195
    invoke-direct {p0, v0}, Lcom/ymnsdk/replugin/action/ActionSupport;->processResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V

    return-void
.end method

.method public onEndAttachment()V
    .locals 2

    .line 52
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->attachment:Lcom/ymnsdk/replugin/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 53
    iget-object v1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/ymnsdk/replugin/action/ActionAttachment;->onEnd(Landroid/content/Context;)V

    const/4 v0, 0x0

    .line 54
    iput-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->attachment:Lcom/ymnsdk/replugin/action/ActionAttachment;

    :cond_0
    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 1

    .line 200
    new-instance v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1, p2}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;-><init>(Lcom/ymnsdk/replugin/action/ActionSupport;ILjava/lang/String;)V

    .line 201
    invoke-direct {p0, v0}, Lcom/ymnsdk/replugin/action/ActionSupport;->processResponseResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V

    return-void
.end method

.method public varargs abstract onPrepareData([Ljava/lang/Object;)Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public onStartAttachment()V
    .locals 2

    .line 46
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->attachment:Lcom/ymnsdk/replugin/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 47
    iget-object v1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/ymnsdk/replugin/action/ActionAttachment;->onStart(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method protected abstract onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public varargs putGetData([Ljava/lang/Object;)V
    .locals 1

    .line 143
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->onPrepareData([Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 145
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->gContent:Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 148
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public varargs putReqData([Ljava/lang/Object;)V
    .locals 0

    .line 155
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->onPrepareData([Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 157
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->pContent:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 160
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public setAttachment(Lcom/ymnsdk/replugin/action/ActionAttachment;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->attachment:Lcom/ymnsdk/replugin/action/ActionAttachment;

    return-void
.end method

.method public setTransactionId(Ljava/lang/String;)V
    .locals 0

    .line 165
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/ActionSupport;->transactionId:Ljava/lang/String;

    return-void
.end method

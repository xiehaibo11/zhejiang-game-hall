.class public abstract Lcom/bianfeng/ymnsdk/action/ActionSupport;
.super Ljava/util/Observable;
.source "ActionSupport.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/action/HttpListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/util/Observable;",
        "Lcom/bianfeng/ymnsdk/action/HttpListener;"
    }
.end annotation


# static fields
.field protected static final TAG:Ljava/lang/String; = "Ymn_ActionSupport"


# instance fields
.field protected attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

.field protected context:Landroid/content/Context;

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

.field protected httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

.field private mUrl:Ljava/lang/String;

.field protected pContent:Ljava/lang/String;

.field private transactionId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 116
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    .line 117
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->context:Landroid/content/Context;

    .line 118
    new-instance v0, Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/action/HttpHelper;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    .line 119
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->setMethod(I)V

    .line 120
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    .line 121
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/action/ActionSupport;Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 0
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/action/ActionSupport;
    .param p1, "x1"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 32
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->notifyResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    return-void
.end method

.method private notifyResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 3
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 283
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    invoke-virtual {p0}, Ljava/util/Observable;->setChanged()V

    .line 284
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->isResponsed()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 286
    :try_start_0
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 287
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 291
    :cond_0
    goto :goto_0

    .line 289
    :catch_0
    move-exception v0

    .line 290
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "notifyResponseResult result.isOk()"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 292
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->context:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->i(Landroid/content/Context;)V

    .line 293
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->notifyRequestSuccess()V

    goto :goto_1

    .line 295
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->context:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->h(Landroid/content/Context;)V

    .line 296
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->notifyRequestFailure()V

    .line 302
    :goto_1
    invoke-virtual {p0, p1}, Ljava/util/Observable;->notifyObservers(Ljava/lang/Object;)V

    .line 303
    return-void
.end method

.method private parseResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 5
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 251
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    :try_start_0
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->showDebugLog(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    .line 253
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 254
    const-string v0, "Ymn_ActionSupport"

    const-string v1, "do action response error code = %d msg = %s"

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    iget v4, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    const/4 v3, 0x1

    iget-object v4, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    aput-object v4, v2, v3

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 256
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 257
    .local v0, "obj":Lorg/json/JSONObject;
    iput-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcObj:Lorg/json/JSONObject;

    .line 258
    const-string v1, "code"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    .line 259
    const-string v1, "msg"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    .line 260
    const-string v1, "data"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    .line 261
    const-string v1, "ext"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->ext:Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 267
    .end local v0    # "obj":Lorg/json/JSONObject;
    :goto_0
    goto :goto_1

    .line 263
    :catch_0
    move-exception v0

    .line 264
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 265
    const/16 v1, 0x25a

    iput v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->code:I

    .line 266
    const-string v1, "parse response json error"

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    .line 268
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method private processResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 2
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 239
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->parseResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    .line 240
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->context:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/ymnsdk/action/ActionSupport$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$1;-><init>(Lcom/bianfeng/ymnsdk/action/ActionSupport;Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 246
    :cond_0
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->notifyResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    .line 247
    :goto_0
    return-void
.end method

.method private setTransactionIdToBase(Lorg/json/JSONObject;)V
    .locals 2
    .param p1, "base"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 173
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->transactionId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "transactionId"

    if-eqz v0, :cond_0

    .line 174
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInitTrace()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 176
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->transactionId:Ljava/lang/String;

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 178
    :goto_0
    return-void
.end method

.method private showDebugLog(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 4
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 271
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 272
    .local v0, "builder":Ljava/lang/StringBuilder;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[CONTEXT] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->context:Landroid/content/Context;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 273
    const-string v1, "\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 274
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[REQUEST] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->mUrl:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 275
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 276
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[CONTENT] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->pContent:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 277
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 278
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[RESPONSE] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 279
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->dRich(Ljava/lang/String;)I

    .line 280
    return-void
.end method


# virtual methods
.method public actionStart()V
    .locals 1

    .line 127
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->getURL()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->mUrl:Ljava/lang/String;

    .line 128
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->mUrl:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->doRequest(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 131
    goto :goto_0

    .line 129
    :catch_0
    move-exception v0

    .line 130
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 132
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public doRequest(Ljava/lang/String;)V
    .locals 5
    .param p1, "url"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 203
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 204
    .local v0, "sb":Ljava/lang/StringBuilder;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-virtual {v1}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

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

    .line 205
    .local v2, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
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

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 206
    .end local v2    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    goto :goto_0

    .line 208
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_1

    .line 209
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "?"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 211
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->isGetMethod()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 212
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    if-eqz v1, :cond_3

    .line 213
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    const-string v2, ""

    invoke-virtual {v1, p1, v2, p0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    goto :goto_1

    .line 216
    :cond_2
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->pContent:Ljava/lang/String;

    if-eqz v1, :cond_3

    .line 217
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v2

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->pContent:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p1, v2, p0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    .line 224
    :cond_3
    :goto_1
    return-void
.end method

.method protected formatType(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2
    .param p1, "obj"    # Ljava/lang/Object;

    .line 320
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 322
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 323
    :catch_0
    move-exception v0

    .line 324
    .local v0, "e":Ljava/lang/Exception;
    return-object p1

    .line 327
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_0
    return-object p1
.end method

.method protected formatUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p1, "action"    # Ljava/lang/String;

    .line 315
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    const-string v0, "ymn"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getHost(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 316
    .local v0, "urlHost":Ljava/lang/String;
    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v2, 0x1

    const-string v3, "v1"

    aput-object v3, v1, v2

    const/4 v2, 0x2

    aput-object p1, v1, v2

    const-string v2, "%s/%s/%s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method protected abstract getURL()Ljava/lang/String;
.end method

.method public onComplete(Ljava/lang/String;)V
    .locals 1
    .param p1, "response"    # Ljava/lang/String;

    .line 228
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;-><init>(Lcom/bianfeng/ymnsdk/action/ActionSupport;Ljava/lang/String;)V

    .line 229
    .local v0, "result":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->processResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    .line 230
    return-void
.end method

.method public onEndAttachment()V
    .locals 2

    .line 56
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 57
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment;->onEnd(Landroid/content/Context;)V

    .line 58
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 60
    :cond_0
    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 1
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 234
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1, p2}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;-><init>(Lcom/bianfeng/ymnsdk/action/ActionSupport;ILjava/lang/String;)V

    .line 235
    .local v0, "result":Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->processResponseResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    .line 236
    return-void
.end method

.method public varargs abstract onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation
.end method

.method public onStartAttachment()V
    .locals 2

    .line 50
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 51
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment;->onStart(Landroid/content/Context;)V

    .line 53
    :cond_0
    return-void
.end method

.method protected abstract onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method protected putBasicData(Lorg/json/JSONObject;)V
    .locals 4
    .param p1, "json"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 142
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    .line 143
    .local v0, "dataFunUtils":Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
    const-string v1, "appid"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 144
    const-string v1, "channel"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getChannelId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 145
    const-string v1, "package_id"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getIdentify_id()I

    move-result v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 146
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 147
    .local v1, "base":Lorg/json/JSONObject;
    const-string v2, "df_ver"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getPlatformUtils()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getDatafun_ver()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 148
    const-string v2, "app_key"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 149
    const-string v2, "group_id"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getGroupId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 150
    const-string v2, "device_id"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 151
    const-string v2, "version_code"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerCode()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 152
    const-string v2, "version_name"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 153
    const-string v2, "device_mobile"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 154
    const-string v2, "device_network"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getNetChannelStr()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 155
    const-string v2, "device_os"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceOS()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 156
    const-string v2, "device_os_version"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 157
    const-string v2, "device_pixel"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDevicePixel()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 158
    const-string v2, "device_type"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getDeviceType()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 159
    const-string v2, "device_version_code"

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceVersionCode()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 160
    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->setTransactionIdToBase(Lorg/json/JSONObject;)V

    .line 161
    const-string v2, "base"

    invoke-virtual {p1, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 164
    nop

    .line 165
    .end local v0    # "dataFunUtils":Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
    .end local v1    # "base":Lorg/json/JSONObject;
    return-void

    .line 162
    :catch_0
    move-exception v0

    .line 163
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public varargs putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V
    .locals 3
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;

    .line 183
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const-string v1, "os"

    const-string v2, "android"

    invoke-virtual {v0, v1, v2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 184
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const-string v1, "mid"

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 185
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object v0

    .line 186
    .local v0, "json":Lorg/json/JSONObject;
    if-eqz v0, :cond_0

    .line 187
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putBasicData(Lorg/json/JSONObject;)V

    .line 188
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->pContent:Ljava/lang/String;
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    .line 193
    .end local v0    # "json":Lorg/json/JSONObject;
    :cond_0
    goto :goto_0

    .line 190
    :catch_0
    move-exception v0

    .line 191
    .local v0, "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "putReqData"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 192
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 194
    .end local v0    # "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    :goto_0
    return-void
.end method

.method public setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V
    .locals 0
    .param p1, "attachment"    # Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 46
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 47
    return-void
.end method

.method public setTransactionId(Ljava/lang/String;)V
    .locals 0
    .param p1, "transactionId"    # Ljava/lang/String;

    .line 197
    .local p0, "this":Lcom/bianfeng/ymnsdk/action/ActionSupport;, "Lcom/bianfeng/ymnsdk/action/ActionSupport<TT;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->transactionId:Ljava/lang/String;

    .line 198
    return-void
.end method

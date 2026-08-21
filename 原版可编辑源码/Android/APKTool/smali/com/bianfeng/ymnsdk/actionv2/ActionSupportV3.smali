.class public abstract Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;
.super Ljava/util/Observable;
.source "ActionSupportV3.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/action/HttpListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;
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
.field protected static final TAG:Ljava/lang/String; = "ActionSupport"


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

.field protected pContent:Ljava/lang/String;

.field private url:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 102
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    .line 103
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->context:Landroid/content/Context;

    .line 104
    new-instance v0, Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/action/HttpHelper;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    .line 105
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->setMethod(I)V

    .line 106
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->gContent:Ljava/util/TreeMap;

    .line 107
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 0
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;
    .param p1, "x1"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    .line 26
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->notifyResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    return-void
.end method

.method private notifyResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 1
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    .line 246
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    invoke-virtual {p0}, Ljava/util/Observable;->setChanged()V

    .line 247
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->isResponsed()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 249
    :try_start_0
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 250
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->processedResult:Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 254
    :cond_0
    goto :goto_0

    .line 252
    :catch_0
    move-exception v0

    .line 253
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 255
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->context:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->i(Landroid/content/Context;)V

    .line 256
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->notifyRequestSuccess()V

    goto :goto_1

    .line 258
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->context:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->h(Landroid/content/Context;)V

    .line 259
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->notifyRequestFailure()V

    .line 265
    :goto_1
    invoke-virtual {p0, p1}, Ljava/util/Observable;->notifyObservers(Ljava/lang/Object;)V

    .line 266
    return-void
.end method

.method private parseResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 5
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    .line 215
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    :try_start_0
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->showDebugLog(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    .line 216
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 217
    const-string v0, "ActionSupport"

    const-string v1, "do action response error code = %d msg = %s"

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    iget v4, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->code:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    const/4 v3, 0x1

    iget-object v4, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->msg:Ljava/lang/String;

    aput-object v4, v2, v3

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 219
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 220
    .local v0, "obj":Lorg/json/JSONObject;
    iput-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->srcObj:Lorg/json/JSONObject;

    .line 221
    const-string v1, "code"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->code:I

    .line 222
    const-string v1, "msg"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->msg:Ljava/lang/String;

    .line 223
    const-string v1, "data"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    .line 224
    const-string v1, "ext"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->ext:Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 230
    .end local v0    # "obj":Lorg/json/JSONObject;
    :goto_0
    goto :goto_1

    .line 226
    :catch_0
    move-exception v0

    .line 227
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 228
    const/16 v1, 0x25a

    iput v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->code:I

    .line 229
    const-string v1, "parse response json error"

    iput-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->msg:Ljava/lang/String;

    .line 231
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method private showDebugLog(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 4
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    .line 234
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 235
    .local v0, "builder":Ljava/lang/StringBuilder;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[CONTEXT] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->context:Landroid/content/Context;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 236
    const-string v1, "\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 237
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[REQUEST] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->url:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 238
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 239
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[CONTENT] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->pContent:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 240
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 241
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[RESPONSE] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 242
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->dRich(Ljava/lang/String;)I

    .line 243
    return-void
.end method


# virtual methods
.method public actionStart()V
    .locals 1

    .line 113
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->getURL()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->url:Ljava/lang/String;

    .line 114
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->url:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->doRequest(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 117
    goto :goto_0

    .line 115
    :catch_0
    move-exception v0

    .line 116
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 118
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public doRequest(Ljava/lang/String;)V
    .locals 5
    .param p1, "url"    # Ljava/lang/String;

    .line 173
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 174
    .local v0, "sb":Ljava/lang/StringBuilder;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->gContent:Ljava/util/TreeMap;

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

    .line 175
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

    .line 176
    .end local v2    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
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

    const-string v2, "?"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 180
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "doRequest doRequest"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 181
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->pContent:Ljava/lang/String;

    if-eqz v1, :cond_2

    .line 182
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-virtual {v2, p1, v1, p0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    .line 188
    :cond_2
    return-void
.end method

.method protected formatUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "action"    # Ljava/lang/String;

    .line 276
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    const-string v0, "login"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getHost(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 279
    .local v0, "urlHost":Ljava/lang/String;
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v2, 0x1

    aput-object p1, v1, v2

    const-string v2, "%s/%s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method protected abstract getURL()Ljava/lang/String;
.end method

.method public onComplete(Ljava/lang/String;)V
    .locals 1
    .param p1, "response"    # Ljava/lang/String;

    .line 192
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;-><init>(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;Ljava/lang/String;)V

    .line 193
    .local v0, "result":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    .line 194
    return-void
.end method

.method public onEndAttachment()V
    .locals 2

    .line 47
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 48
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment;->onEnd(Landroid/content/Context;)V

    .line 50
    :cond_0
    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 1
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 198
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    invoke-direct {v0, p0, p1, p2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;-><init>(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;ILjava/lang/String;)V

    .line 199
    .local v0, "result":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    .line 200
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

    .line 41
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 42
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment;->onStart(Landroid/content/Context;)V

    .line 44
    :cond_0
    return-void
.end method

.method protected abstract onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 2
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    .line 203
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->parseResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    .line 204
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->context:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;-><init>(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 210
    :cond_0
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->notifyResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    .line 211
    :goto_0
    return-void
.end method

.method public varargs putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V
    .locals 3
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;

    .line 155
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    const/4 v0, 0x0

    aget-object v0, p2, v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->pContent:Ljava/lang/String;

    .line 162
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 166
    goto :goto_0

    .line 163
    :catch_0
    move-exception v0

    .line 164
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 165
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "putReqData"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 168
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V
    .locals 0
    .param p1, "attachment"    # Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 38
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<TT;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 39
    return-void
.end method

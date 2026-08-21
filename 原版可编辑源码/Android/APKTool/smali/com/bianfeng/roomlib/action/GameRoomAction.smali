.class public Lcom/bianfeng/roomlib/action/GameRoomAction;
.super Ljava/lang/Object;
.source "GameRoomAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<M:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field private final TAG:Ljava/lang/String;

.field private callback:Lcom/bianfeng/roomlib/action/ActionCallback;

.field private getParamsMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mClass:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "TM;>;"
        }
    .end annotation
.end field

.field private murl:Ljava/lang/String;

.field private postParamsStr:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/util/Map;Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/Class<",
            "TM;>;)V"
        }
    .end annotation

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "https://cpgate.imeete.com/list?"

    .line 16
    iput-object v0, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->murl:Ljava/lang/String;

    const-string v0, "GameRoomAction"

    .line 19
    iput-object v0, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->TAG:Ljava/lang/String;

    .line 23
    iput-object p1, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->getParamsMap:Ljava/util/Map;

    .line 24
    iput-object p2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->mClass:Ljava/lang/Class;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/roomlib/action/GameRoomAction;)V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/bianfeng/roomlib/action/GameRoomAction;->request()V

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/roomlib/action/GameRoomAction;)V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/bianfeng/roomlib/action/GameRoomAction;->requestGet()V

    return-void
.end method

.method static synthetic access$200(Lcom/bianfeng/roomlib/action/GameRoomAction;)V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/bianfeng/roomlib/action/GameRoomAction;->requestPost()V

    return-void
.end method

.method private joinUrl()V
    .locals 4

    .line 33
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 34
    iget-object v1, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->getParamsMap:Ljava/util/Map;

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

    const-string v3, "&"

    .line 35
    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 36
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "="

    .line 37
    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 38
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    .line 40
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->murl:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->substring(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->murl:Ljava/lang/String;

    return-void
.end method

.method private joinUrlPost()V
    .locals 4

    .line 44
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 45
    iget-object v1, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->getParamsMap:Ljava/util/Map;

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

    const-string v3, "&"

    .line 46
    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 47
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "="

    .line 48
    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 49
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    .line 51
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->substring(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->postParamsStr:Ljava/lang/String;

    return-void
.end method

.method private request()V
    .locals 6

    const-string v0, "request: "

    .line 56
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/roomlib/action/GameRoomAction;->joinUrl()V

    .line 57
    new-instance v1, Ljava/net/URL;

    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->murl:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 58
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;

    .line 59
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    const/16 v3, 0xc8

    if-ne v2, v3, :cond_0

    .line 61
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->streamToString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v1

    .line 62
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v2

    iget-object v3, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->mClass:Ljava/lang/Class;

    invoke-virtual {v2, v1, v3}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    .line 63
    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    invoke-interface {v2, v1}, Lcom/bianfeng/roomlib/action/ActionCallback;->onSuccess(Ljava/lang/Object;)V

    goto :goto_0

    .line 65
    :cond_0
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->streamToString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v1

    .line 66
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 67
    iget-object v3, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u8fde\u63a5\u7f51\u7edc\u51fa\u9519\u4e86code:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",message"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v1}, Lcom/bianfeng/roomlib/action/ActionCallback;->onFali(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 70
    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u8bf7\u6c42\u51fa\u73b0\u4e86\u5f02\u5e38"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Lcom/bianfeng/roomlib/action/ActionCallback;->onFali(Ljava/lang/String;)V

    .line 71
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private requestGet()V
    .locals 6

    const-string v0, "request: "

    .line 77
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/roomlib/action/GameRoomAction;->joinUrl()V

    .line 78
    new-instance v1, Ljava/net/URL;

    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->murl:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 79
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;

    .line 80
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    const/16 v3, 0xc8

    if-ne v2, v3, :cond_0

    .line 82
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->streamToString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v1

    .line 83
    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    invoke-interface {v2, v1}, Lcom/bianfeng/roomlib/action/ActionCallback;->onSuccess(Ljava/lang/Object;)V

    goto :goto_0

    .line 85
    :cond_0
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->streamToString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v1

    .line 86
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 87
    iget-object v3, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u8fde\u63a5\u7f51\u7edc\u51fa\u9519\u4e86code:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",message"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v1}, Lcom/bianfeng/roomlib/action/ActionCallback;->onFali(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 90
    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u8bf7\u6c42\u51fa\u73b0\u4e86\u5f02\u5e38"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Lcom/bianfeng/roomlib/action/ActionCallback;->onFali(Ljava/lang/String;)V

    .line 91
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private requestPost()V
    .locals 6

    const-string v0, "request: "

    .line 97
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/roomlib/action/GameRoomAction;->joinUrlPost()V

    .line 98
    new-instance v1, Ljava/net/URL;

    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->murl:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 99
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;

    const-string v2, "POST"

    .line 100
    invoke-virtual {v1, v2}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/4 v2, 0x1

    .line 102
    invoke-virtual {v1, v2}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 103
    invoke-virtual {v1, v2}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 105
    new-instance v2, Ljava/io/PrintWriter;

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/PrintWriter;-><init>(Ljava/io/OutputStream;)V

    .line 107
    iget-object v3, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->postParamsStr:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/io/PrintWriter;->write(Ljava/lang/String;)V

    .line 109
    invoke-virtual {v2}, Ljava/io/PrintWriter;->flush()V

    .line 111
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    const/16 v3, 0xc8

    if-ne v2, v3, :cond_0

    .line 113
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->streamToString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v1

    .line 114
    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    invoke-interface {v2, v1}, Lcom/bianfeng/roomlib/action/ActionCallback;->onSuccess(Ljava/lang/Object;)V

    goto :goto_0

    .line 116
    :cond_0
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->streamToString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v1

    .line 117
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 118
    iget-object v3, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u8fde\u63a5\u7f51\u7edc\u51fa\u9519\u4e86code:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",message"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v3, v1}, Lcom/bianfeng/roomlib/action/ActionCallback;->onFali(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 121
    iget-object v2, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u8bf7\u6c42\u51fa\u73b0\u4e86\u5f02\u5e38"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Lcom/bianfeng/roomlib/action/ActionCallback;->onFali(Ljava/lang/String;)V

    .line 122
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private streamToString(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 128
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 129
    new-instance v1, Ljava/io/BufferedReader;

    new-instance v2, Ljava/io/InputStreamReader;

    invoke-direct {v2, p1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v1, v2}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 130
    :goto_0
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 131
    invoke-virtual {v0, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    .line 133
    :cond_0
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V

    .line 134
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public startAction(Lcom/bianfeng/roomlib/action/ActionCallback;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    .line 138
    new-instance p1, Lcom/bianfeng/roomlib/action/GameRoomAction$1;

    invoke-direct {p1, p0}, Lcom/bianfeng/roomlib/action/GameRoomAction$1;-><init>(Lcom/bianfeng/roomlib/action/GameRoomAction;)V

    .line 143
    invoke-virtual {p1}, Lcom/bianfeng/roomlib/action/GameRoomAction$1;->start()V

    return-void
.end method

.method public startActionGet(Lcom/bianfeng/roomlib/action/ActionCallback;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    .line 148
    new-instance p1, Lcom/bianfeng/roomlib/action/GameRoomAction$2;

    invoke-direct {p1, p0}, Lcom/bianfeng/roomlib/action/GameRoomAction$2;-><init>(Lcom/bianfeng/roomlib/action/GameRoomAction;)V

    .line 153
    invoke-virtual {p1}, Lcom/bianfeng/roomlib/action/GameRoomAction$2;->start()V

    return-void
.end method

.method public startActionPost(Lcom/bianfeng/roomlib/action/ActionCallback;)V
    .locals 0

    .line 157
    iput-object p1, p0, Lcom/bianfeng/roomlib/action/GameRoomAction;->callback:Lcom/bianfeng/roomlib/action/ActionCallback;

    .line 158
    new-instance p1, Lcom/bianfeng/roomlib/action/GameRoomAction$3;

    invoke-direct {p1, p0}, Lcom/bianfeng/roomlib/action/GameRoomAction$3;-><init>(Lcom/bianfeng/roomlib/action/GameRoomAction;)V

    .line 163
    invoke-virtual {p1}, Lcom/bianfeng/roomlib/action/GameRoomAction$3;->start()V

    return-void
.end method

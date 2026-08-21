.class public Lcom/mbridge/msdk/foundation/download/DownloadMessage;
.super Ljava/lang/Object;
.source "DownloadMessage.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field private campaign:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field private checkMD5:Z

.field private downloadRate:I

.field private downloadResourceType:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

.field private downloadUrl:Ljava/lang/String;

.field private extraData:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private from:I

.field private md5:Ljava/lang/String;

.field private resourceUrl:Ljava/lang/String;

.field private saveFileName:Ljava/lang/String;

.field private saveFilePath:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/foundation/download/DownloadResourceType;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "I",
            "Lcom/mbridge/msdk/foundation/download/DownloadResourceType;",
            ")V"
        }
    .end annotation

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 32
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->md5:Ljava/lang/String;

    const/4 v1, 0x0

    .line 36
    iput-boolean v1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->checkMD5:Z

    const/16 v2, 0x64

    .line 40
    iput v2, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadRate:I

    .line 45
    iput v1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->from:I

    .line 48
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->campaign:Ljava/lang/Object;

    .line 49
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadUrl:Ljava/lang/String;

    .line 50
    iput-object p3, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->saveFileName:Ljava/lang/String;

    .line 51
    iput p4, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadRate:I

    .line 52
    iput-object p5, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadResourceType:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    .line 55
    :try_start_0
    new-instance p1, Ljava/net/URL;

    invoke-direct {p1, p2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 56
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    .line 57
    invoke-virtual {p1}, Ljava/net/URL;->getProtocol()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "://"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/net/URL;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 58
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->resourceUrl:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getInstance()Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getLogger()Lcom/mbridge/msdk/foundation/download/utils/ILogger;

    move-result-object p1

    const-string p2, "DownloadMessage"

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, " resourceUrl: "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p4, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->resourceUrl:Ljava/lang/String;

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/foundation/download/utils/ILogger;->log(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 61
    :catch_0
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->resourceUrl:Ljava/lang/String;

    :goto_0
    return-void
.end method


# virtual methods
.method public addExtra(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->extraData:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 105
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x4

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->extraData:Ljava/util/Map;

    .line 108
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->extraData:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public getCampaign()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation

    .line 66
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->campaign:Ljava/lang/Object;

    return-object v0
.end method

.method public getDownloadRate()I
    .locals 1

    .line 96
    iget v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadRate:I

    return v0
.end method

.method public getDownloadResourceType()Lcom/mbridge/msdk/foundation/download/DownloadResourceType;
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadResourceType:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    return-object v0
.end method

.method public getDownloadUrl()Ljava/lang/String;
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getExtra(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->extraData:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 113
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->extraData:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getFrom()I
    .locals 1

    .line 123
    iget v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->from:I

    return v0
.end method

.method public getMd5()Ljava/lang/String;
    .locals 1

    .line 80
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->md5:Ljava/lang/String;

    return-object v0
.end method

.method public getResourceUrl()Ljava/lang/String;
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->resourceUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getSaveFileName()Ljava/lang/String;
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->saveFileName:Ljava/lang/String;

    return-object v0
.end method

.method public getSaveFilePath()Ljava/lang/String;
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->saveFilePath:Ljava/lang/String;

    return-object v0
.end method

.method public isCheckMD5()Z
    .locals 1

    .line 88
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->checkMD5:Z

    return v0
.end method

.method public setCheckMD5(Z)V
    .locals 0

    .line 92
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->checkMD5:Z

    return-void
.end method

.method public setDownloadRate(I)V
    .locals 0

    .line 100
    iput p1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->downloadRate:I

    return-void
.end method

.method public setFrom(I)V
    .locals 0

    .line 119
    iput p1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->from:I

    return-void
.end method

.method public setMd5(Ljava/lang/String;)V
    .locals 0

    .line 84
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->md5:Ljava/lang/String;

    return-void
.end method

.method public setSaveFilePath(Ljava/lang/String;)V
    .locals 0

    .line 135
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->saveFilePath:Ljava/lang/String;

    return-void
.end method

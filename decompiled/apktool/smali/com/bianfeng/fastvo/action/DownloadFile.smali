.class public Lcom/bianfeng/fastvo/action/DownloadFile;
.super Ljava/lang/Object;
.source "DownloadFile.java"

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final STATUS_DOWNLOADED:I = 0x4

.field public static final STATUS_DOWNLOADING:I = 0x2

.field public static final STATUS_NONE:I = 0x0

.field public static final STATUS_PAUSE:I = 0x3

.field public static final STATUS_QUEUE:I = 0x1

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field public downedSize:I

.field public filePath:Ljava/lang/String;

.field public status:I

.field public task:Lcom/bianfeng/fastvo/action/DownloadTask;

.field public totalSize:I

.field public url:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public fillData(Lcom/bianfeng/fastvo/action/DownloadFile;)V
    .locals 1

    .line 48
    iget-object v0, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->url:Ljava/lang/String;

    iput-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->url:Ljava/lang/String;

    .line 49
    iget v0, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->downedSize:I

    iput v0, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->downedSize:I

    .line 50
    iget v0, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->totalSize:I

    iput v0, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->totalSize:I

    .line 51
    iget-object v0, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    iput-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    .line 52
    iget p1, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->status:I

    iput p1, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->status:I

    return-void
.end method

.method public toString(I)Ljava/lang/String;
    .locals 2

    .line 56
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "status"

    .line 58
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "url"

    .line 59
    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->url:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "downedSize"

    .line 60
    iget v1, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->downedSize:I

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "totalSize"

    .line 61
    iget v1, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->totalSize:I

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "filePath"

    .line 62
    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 64
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 66
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

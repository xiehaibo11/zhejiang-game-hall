.class public Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;
.super Ljava/lang/Object;
.source "DownloadFileDataEnity.java"


# instance fields
.field infoMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getInfoMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;",
            ">;"
        }
    .end annotation

    .line 11
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;->infoMap:Ljava/util/Map;

    return-object v0
.end method

.method public setInfoMap(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;",
            ">;)V"
        }
    .end annotation

    .line 15
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;->infoMap:Ljava/util/Map;

    return-void
.end method

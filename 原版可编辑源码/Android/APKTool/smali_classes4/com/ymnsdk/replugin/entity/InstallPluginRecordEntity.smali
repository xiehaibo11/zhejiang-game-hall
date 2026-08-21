.class public Lcom/ymnsdk/replugin/entity/InstallPluginRecordEntity;
.super Ljava/lang/Object;
.source "InstallPluginRecordEntity.java"


# instance fields
.field downloadRecord:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getDownloadRecord()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    .line 10
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/InstallPluginRecordEntity;->downloadRecord:Ljava/util/Map;

    return-object v0
.end method

.method public setDownloadRecord(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;)V"
        }
    .end annotation

    .line 14
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/InstallPluginRecordEntity;->downloadRecord:Ljava/util/Map;

    return-void
.end method

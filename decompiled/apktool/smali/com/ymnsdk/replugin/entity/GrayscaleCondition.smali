.class public Lcom/ymnsdk/replugin/entity/GrayscaleCondition;
.super Ljava/lang/Object;
.source "GrayscaleCondition.java"


# instance fields
.field device_id:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field ip:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field user_id:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
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
.method public getDevice_id()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 30
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->device_id:Ljava/util/List;

    return-object v0
.end method

.method public getIp()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 14
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->ip:Ljava/util/List;

    return-object v0
.end method

.method public getUser_id()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 22
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->user_id:Ljava/util/List;

    return-object v0
.end method

.method public setDevice_id(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 34
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->device_id:Ljava/util/List;

    return-void
.end method

.method public setIp(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 18
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->ip:Ljava/util/List;

    return-void
.end method

.method public setUser_id(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 26
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->user_id:Ljava/util/List;

    return-void
.end method

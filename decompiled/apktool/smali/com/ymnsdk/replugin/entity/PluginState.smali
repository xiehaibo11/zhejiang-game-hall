.class public Lcom/ymnsdk/replugin/entity/PluginState;
.super Ljava/lang/Object;
.source "PluginState.java"


# instance fields
.field private allow_versions:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private is_in_maintenance:I

.field private maintenance_reason:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getAllow_versions()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 32
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginState;->allow_versions:Ljava/util/List;

    return-object v0
.end method

.method public getIs_in_maintenance()I
    .locals 1

    .line 16
    iget v0, p0, Lcom/ymnsdk/replugin/entity/PluginState;->is_in_maintenance:I

    return v0
.end method

.method public getMaintenance_reason()Ljava/lang/String;
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/PluginState;->maintenance_reason:Ljava/lang/String;

    return-object v0
.end method

.method public setAllow_versions(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 36
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginState;->allow_versions:Ljava/util/List;

    return-void
.end method

.method public setIs_in_maintenance(I)V
    .locals 0

    .line 20
    iput p1, p0, Lcom/ymnsdk/replugin/entity/PluginState;->is_in_maintenance:I

    return-void
.end method

.method public setMaintenance_reason(Ljava/lang/String;)V
    .locals 0

    .line 28
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/PluginState;->maintenance_reason:Ljava/lang/String;

    return-void
.end method

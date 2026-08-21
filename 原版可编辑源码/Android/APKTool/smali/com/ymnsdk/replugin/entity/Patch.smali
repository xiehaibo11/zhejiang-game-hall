.class public Lcom/ymnsdk/replugin/entity/Patch;
.super Ljava/lang/Object;
.source "Patch.java"


# instance fields
.field private from_version:Ljava/lang/String;

.field private patch_md5:Ljava/lang/String;

.field private patch_path:Ljava/lang/String;

.field private patch_size:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 4
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getFrom_version()Ljava/lang/String;
    .locals 1

    .line 15
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Patch;->from_version:Ljava/lang/String;

    return-object v0
.end method

.method public getPatch_md5()Ljava/lang/String;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Patch;->patch_md5:Ljava/lang/String;

    return-object v0
.end method

.method public getPatch_path()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Patch;->patch_path:Ljava/lang/String;

    return-object v0
.end method

.method public getPatch_size()J
    .locals 2

    .line 23
    iget-wide v0, p0, Lcom/ymnsdk/replugin/entity/Patch;->patch_size:J

    return-wide v0
.end method

.method public setFrom_version(Ljava/lang/String;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Patch;->from_version:Ljava/lang/String;

    return-void
.end method

.method public setPatch_md5(Ljava/lang/String;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Patch;->patch_md5:Ljava/lang/String;

    return-void
.end method

.method public setPatch_path(Ljava/lang/String;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Patch;->patch_path:Ljava/lang/String;

    return-void
.end method

.method public setPatch_size(J)V
    .locals 0

    .line 27
    iput-wide p1, p0, Lcom/ymnsdk/replugin/entity/Patch;->patch_size:J

    return-void
.end method

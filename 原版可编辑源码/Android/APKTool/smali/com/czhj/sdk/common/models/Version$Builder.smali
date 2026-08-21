.class public final Lcom/czhj/sdk/common/models/Version$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/Version;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/Version;",
        "Lcom/czhj/sdk/common/models/Version$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public major:Ljava/lang/Integer;

.field public micro:Ljava/lang/Integer;

.field public minor:Ljava/lang/Integer;

.field public version_str:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/Version;->DEFAULT_MAJOR:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Version$Builder;->major:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/Version;->DEFAULT_MINOR:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Version$Builder;->minor:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/Version;->DEFAULT_MICRO:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Version$Builder;->micro:Ljava/lang/Integer;

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Version$Builder;->version_str:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public build()Lcom/czhj/sdk/common/models/Version;
    .locals 7

    new-instance v6, Lcom/czhj/sdk/common/models/Version;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Version$Builder;->major:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/Version$Builder;->minor:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/czhj/sdk/common/models/Version$Builder;->micro:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/Version$Builder;->version_str:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v5

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/czhj/sdk/common/models/Version;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v6
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Version$Builder;->build()Lcom/czhj/sdk/common/models/Version;

    move-result-object v0

    return-object v0
.end method

.method public major(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Version$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Version$Builder;->major:Ljava/lang/Integer;

    return-object p0
.end method

.method public micro(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Version$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Version$Builder;->micro:Ljava/lang/Integer;

    return-object p0
.end method

.method public minor(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Version$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Version$Builder;->minor:Ljava/lang/Integer;

    return-object p0
.end method

.method public version_str(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Version$Builder;->version_str:Ljava/lang/String;

    return-object p0
.end method

.class public final Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;",
        "Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public app:Lcom/czhj/sdk/common/models/App;

.field public device:Lcom/czhj/sdk/common/models/Device;

.field public network:Lcom/czhj/sdk/common/models/Network;

.field public privacy:Lcom/czhj/sdk/common/models/Privacy;

.field public user:Lcom/czhj/sdk/common/models/User;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public app(Lcom/czhj/sdk/common/models/App;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->build()Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;
    .locals 8

    new-instance v7, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iget-object v5, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v6

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;-><init>(Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Lcom/czhj/sdk/common/models/Privacy;Lcom/czhj/sdk/common/models/User;Lcom/czhj/wire/okio/ByteString;)V

    return-object v7
.end method

.method public device(Lcom/czhj/sdk/common/models/Device;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    return-object p0
.end method

.method public network(Lcom/czhj/sdk/common/models/Network;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    return-object p0
.end method

.method public privacy(Lcom/czhj/sdk/common/models/Privacy;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    return-object p0
.end method

.method public user(Lcom/czhj/sdk/common/models/User;)Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    return-object p0
.end method

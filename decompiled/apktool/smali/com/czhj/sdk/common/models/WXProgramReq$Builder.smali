.class public final Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/WXProgramReq;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/WXProgramReq;",
        "Lcom/czhj/sdk/common/models/WXProgramReq$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public opensdk_ver:Ljava/lang/String;

.field public wx_api_ver:Ljava/lang/Integer;

.field public wx_installed:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->DEFAULT_WX_API_VER:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_api_ver:Ljava/lang/Integer;

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->opensdk_ver:Ljava/lang/String;

    sget-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->DEFAULT_WX_INSTALLED:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_installed:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public build()Lcom/czhj/sdk/common/models/WXProgramReq;
    .locals 5

    new-instance v0, Lcom/czhj/sdk/common/models/WXProgramReq;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_api_ver:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->opensdk_ver:Ljava/lang/String;

    iget-object v3, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_installed:Ljava/lang/Boolean;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/czhj/sdk/common/models/WXProgramReq;-><init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->build()Lcom/czhj/sdk/common/models/WXProgramReq;

    move-result-object v0

    return-object v0
.end method

.method public opensdk_ver(Ljava/lang/String;)Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->opensdk_ver:Ljava/lang/String;

    return-object p0
.end method

.method public wx_api_ver(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_api_ver:Ljava/lang/Integer;

    return-object p0
.end method

.method public wx_installed(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_installed:Ljava/lang/Boolean;

    return-object p0
.end method

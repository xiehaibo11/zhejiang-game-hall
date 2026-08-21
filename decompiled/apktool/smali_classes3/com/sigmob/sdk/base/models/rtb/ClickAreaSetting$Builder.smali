.class public final Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public bottom:Ljava/lang/Float;

.field public left:Ljava/lang/Float;

.field public right:Ljava/lang/Float;

.field public top:Ljava/lang/Float;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_TOP:Ljava/lang/Float;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->top:Ljava/lang/Float;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_LEFT:Ljava/lang/Float;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->left:Ljava/lang/Float;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_BOTTOM:Ljava/lang/Float;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->bottom:Ljava/lang/Float;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->DEFAULT_RIGHT:Ljava/lang/Float;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->right:Ljava/lang/Float;

    return-void
.end method


# virtual methods
.method public bottom(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->bottom:Ljava/lang/Float;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
    .locals 7

    new-instance v6, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->top:Ljava/lang/Float;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->left:Ljava/lang/Float;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->bottom:Ljava/lang/Float;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->right:Ljava/lang/Float;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v5

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;-><init>(Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Lcom/czhj/wire/okio/ByteString;)V

    return-object v6
.end method

.method public left(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->left:Ljava/lang/Float;

    return-object p0
.end method

.method public right(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->right:Ljava/lang/Float;

    return-object p0
.end method

.method public top(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->top:Ljava/lang/Float;

    return-object p0
.end method

.class public final Lcom/sigmob/sdk/base/models/rtb/Color$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/Color;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/Color;",
        "Lcom/sigmob/sdk/base/models/rtb/Color$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public alpha:Ljava/lang/Float;

.field public blue:Ljava/lang/Integer;

.field public green:Ljava/lang/Integer;

.field public red:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Color;->DEFAULT_RED:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->red:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Color;->DEFAULT_GREEN:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->green:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Color;->DEFAULT_BLUE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->blue:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Color;->DEFAULT_ALPHA:Ljava/lang/Float;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->alpha:Ljava/lang/Float;

    return-void
.end method


# virtual methods
.method public alpha(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/Color$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->alpha:Ljava/lang/Float;

    return-object p0
.end method

.method public blue(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/Color$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->blue:Ljava/lang/Integer;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Color;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/Color;
    .locals 7

    new-instance v6, Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->red:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->green:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->blue:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->alpha:Ljava/lang/Float;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v5

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/models/rtb/Color;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Float;Lcom/czhj/wire/okio/ByteString;)V

    return-object v6
.end method

.method public green(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/Color$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->green:Ljava/lang/Integer;

    return-object p0
.end method

.method public red(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/Color$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Color$Builder;->red:Ljava/lang/Integer;

    return-object p0
.end method

.class public final Lcom/kwad/sdk/core/network/c;
.super Ljava/lang/Object;


# instance fields
.field public aoK:I

.field public aoL:Ljava/lang/Exception;

.field public aoM:Ljava/lang/String;

.field public code:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/network/c;->aoK:I

    return-void
.end method


# virtual methods
.method public final Bd()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/network/c;->code:I

    const/16 v1, 0xc8

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

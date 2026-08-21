.class final enum Lcom/sigmob/sdk/mraid/g$1;
.super Lcom/sigmob/sdk/mraid/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4010
    name = null
.end annotation


# direct methods
.method constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/mraid/g;-><init>(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/mraid/g$1;)V

    return-void
.end method


# virtual methods
.method a(Lcom/sigmob/sdk/base/models/PlacementType;)Z
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/PlacementType;->INLINE:Lcom/sigmob/sdk/base/models/PlacementType;

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

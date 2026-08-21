.class final Lcom/kwad/sdk/core/network/idc/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/network/idc/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field private static final apX:Lcom/kwad/sdk/core/network/idc/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/network/idc/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/network/idc/a;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/core/network/idc/a$a;->apX:Lcom/kwad/sdk/core/network/idc/a;

    return-void
.end method

.method static synthetic Bq()Lcom/kwad/sdk/core/network/idc/a;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/network/idc/a$a;->apX:Lcom/kwad/sdk/core/network/idc/a;

    return-object v0
.end method

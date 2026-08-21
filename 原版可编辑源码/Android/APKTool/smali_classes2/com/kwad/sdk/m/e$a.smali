.class final Lcom/kwad/sdk/m/e$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/m/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final aME:Lcom/kwad/sdk/m/e;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/m/e;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/m/e;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/m/e$a;->aME:Lcom/kwad/sdk/m/e;

    return-void
.end method

.method static synthetic KQ()Lcom/kwad/sdk/m/e;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/m/e$a;->aME:Lcom/kwad/sdk/m/e;

    return-object v0
.end method

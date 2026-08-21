.class final Lcom/kwad/sdk/crash/e$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/crash/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final azY:Lcom/kwad/sdk/crash/e;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/crash/e;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/crash/e;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/crash/e$a;->azY:Lcom/kwad/sdk/crash/e;

    return-void
.end method

.method static synthetic EK()Lcom/kwad/sdk/crash/e;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/crash/e$a;->azY:Lcom/kwad/sdk/crash/e;

    return-object v0
.end method

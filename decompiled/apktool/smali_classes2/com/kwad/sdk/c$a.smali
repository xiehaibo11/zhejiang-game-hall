.class final Lcom/kwad/sdk/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field private static final agR:Lcom/kwad/sdk/c;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/c;

    invoke-direct {v0}, Lcom/kwad/sdk/c;-><init>()V

    sput-object v0, Lcom/kwad/sdk/c$a;->agR:Lcom/kwad/sdk/c;

    return-void
.end method

.method static synthetic wW()Lcom/kwad/sdk/c;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/c$a;->agR:Lcom/kwad/sdk/c;

    return-object v0
.end method

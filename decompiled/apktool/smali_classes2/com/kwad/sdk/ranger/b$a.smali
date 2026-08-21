.class final Lcom/kwad/sdk/ranger/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/ranger/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final aGC:Lcom/kwad/sdk/ranger/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/ranger/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/ranger/b;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/ranger/b$a;->aGC:Lcom/kwad/sdk/ranger/b;

    return-void
.end method

.method static synthetic Ho()Lcom/kwad/sdk/ranger/b;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/ranger/b$a;->aGC:Lcom/kwad/sdk/ranger/b;

    return-object v0
.end method

.class final Lcom/kwad/sdk/b/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final ajF:Lcom/kwad/sdk/b/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/b/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/b/b;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/b/b$a;->ajF:Lcom/kwad/sdk/b/b;

    return-void
.end method

.method static synthetic yC()Lcom/kwad/sdk/b/b;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/b/b$a;->ajF:Lcom/kwad/sdk/b/b;

    return-object v0
.end method

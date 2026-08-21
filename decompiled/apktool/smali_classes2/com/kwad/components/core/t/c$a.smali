.class final Lcom/kwad/components/core/t/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/t/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static Rl:Lcom/kwad/components/core/t/c;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/t/c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/components/core/t/c;-><init>(B)V

    sput-object v0, Lcom/kwad/components/core/t/c$a;->Rl:Lcom/kwad/components/core/t/c;

    return-void
.end method

.method static synthetic qm()Lcom/kwad/components/core/t/c;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/t/c$a;->Rl:Lcom/kwad/components/core/t/c;

    return-object v0
.end method

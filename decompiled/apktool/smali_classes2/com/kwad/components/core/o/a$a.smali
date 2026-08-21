.class final Lcom/kwad/components/core/o/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/o/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field private static final PA:Lcom/kwad/components/core/o/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/o/a;

    invoke-direct {v0}, Lcom/kwad/components/core/o/a;-><init>()V

    sput-object v0, Lcom/kwad/components/core/o/a$a;->PA:Lcom/kwad/components/core/o/a;

    return-void
.end method

.method static synthetic pE()Lcom/kwad/components/core/o/a;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/o/a$a;->PA:Lcom/kwad/components/core/o/a;

    return-object v0
.end method

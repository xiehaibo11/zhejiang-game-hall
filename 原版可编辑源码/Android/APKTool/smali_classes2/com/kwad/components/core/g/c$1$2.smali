.class final Lcom/kwad/components/core/g/c$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/g/c$1;->kV()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/components/core/video/h;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic KC:Lcom/kwad/components/core/g/c$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/g/c$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/g/c$1$2;->KC:Lcom/kwad/components/core/g/c$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static e(Lcom/kwad/components/core/video/h;)V
    .locals 0

    invoke-interface {p0}, Lcom/kwad/components/core/video/h;->onMediaPlayCompleted()V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/video/h;

    invoke-static {p1}, Lcom/kwad/components/core/g/c$1$2;->e(Lcom/kwad/components/core/video/h;)V

    return-void
.end method

.class final Lcom/kwad/components/core/c/d$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic In:Lcom/kwad/components/core/c/e;

.field final synthetic Io:Lcom/kwad/components/core/c/d$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/c/d$2;Lcom/kwad/components/core/c/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/c/d$2$1;->Io:Lcom/kwad/components/core/c/d$2;

    iput-object p2, p0, Lcom/kwad/components/core/c/d$2$1;->In:Lcom/kwad/components/core/c/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/c/d$2$1;->In:Lcom/kwad/components/core/c/e;

    invoke-static {v0}, Lcom/kwad/components/core/c/b;->b(Lcom/kwad/components/core/c/e;)V

    return-void
.end method

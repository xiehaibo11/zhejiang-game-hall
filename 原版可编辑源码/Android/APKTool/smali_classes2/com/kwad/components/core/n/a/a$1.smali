.class final Lcom/kwad/components/core/n/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/n/a/a;->pz()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Pu:Lcom/kwad/components/core/n/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/n/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/n/a/a$1;->Pu:Lcom/kwad/components/core/n/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/n/a/a$1;->Pu:Lcom/kwad/components/core/n/a/a;

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/n/a/a;->a(Lcom/kwad/components/core/n/a/a;J)J

    iget-object v0, p0, Lcom/kwad/components/core/n/a/a$1;->Pu:Lcom/kwad/components/core/n/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/n/a/a;->report()V

    return-void
.end method

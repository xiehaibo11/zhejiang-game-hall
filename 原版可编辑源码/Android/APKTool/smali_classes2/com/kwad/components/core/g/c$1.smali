.class final Lcom/kwad/components/core/g/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/g/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/g/c;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic KA:Lcom/kwad/components/core/g/c;

.field private Ky:Z

.field private Kz:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/core/g/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/core/g/c$1;->Ky:Z

    iput-boolean p1, p0, Lcom/kwad/components/core/g/c$1;->Kz:Z

    return-void
.end method

.method private kV()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/core/g/c$1;->Ky:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    new-instance v1, Lcom/kwad/components/core/g/c$1$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/g/c$1$2;-><init>(Lcom/kwad/components/core/g/c$1;)V

    invoke-static {v0, v1}, Lcom/kwad/components/core/g/c;->a(Lcom/kwad/components/core/g/c;Lcom/kwad/sdk/g/a;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/g/c$1;->Ky:Z

    :cond_0
    return-void
.end method

.method private nX()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/core/g/c$1;->Kz:Z

    if-nez v0, :cond_0

    const-string v0, "KSImagePlayer"

    const-string v1, "onFirstFrame: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/g/c$1;->Kz:Z

    iget-object v0, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    new-instance v1, Lcom/kwad/components/core/g/c$1$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/g/c$1$3;-><init>(Lcom/kwad/components/core/g/c$1;)V

    invoke-static {v0, v1}, Lcom/kwad/components/core/g/c;->a(Lcom/kwad/components/core/g/c;Lcom/kwad/sdk/g/a;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final u(J)V
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onTimerProgress: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KSImagePlayer"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    cmp-long v2, p1, v0

    if-nez v2, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/g/c$1;->nX()V

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    invoke-static {v2, p1, p2}, Lcom/kwad/components/core/g/c;->a(Lcom/kwad/components/core/g/c;J)J

    iget-object v2, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    invoke-static {v2}, Lcom/kwad/components/core/g/c;->a(Lcom/kwad/components/core/g/c;)J

    move-result-wide v2

    iget-object v4, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    invoke-static {v4}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/components/core/g/c;)J

    move-result-wide v4

    cmp-long v2, v2, v4

    if-ltz v2, :cond_1

    iget-object v2, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    invoke-static {v2}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/components/core/g/c;)J

    move-result-wide v2

    cmp-long v0, v2, v0

    if-lez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/g/c$1;->kV()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/g/c$1;->KA:Lcom/kwad/components/core/g/c;

    new-instance v1, Lcom/kwad/components/core/g/c$1$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/kwad/components/core/g/c$1$1;-><init>(Lcom/kwad/components/core/g/c$1;J)V

    invoke-static {v0, v1}, Lcom/kwad/components/core/g/c;->a(Lcom/kwad/components/core/g/c;Lcom/kwad/sdk/g/a;)V

    return-void
.end method

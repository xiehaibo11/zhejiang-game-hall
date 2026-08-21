.class final Lcom/kwad/components/ad/g/a/a/b$c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/g/a/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "c"
.end annotation


# instance fields
.field final synthetic nI:Lcom/kwad/components/ad/g/a/a/b;

.field private nL:Z

.field private nM:I


# direct methods
.method private constructor <init>(Lcom/kwad/components/ad/g/a/a/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nI:Lcom/kwad/components/ad/g/a/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nL:Z

    const/4 p1, -0x1

    iput p1, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nM:I

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/components/ad/g/a/a/b;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/g/a/a/b$c;-><init>(Lcom/kwad/components/ad/g/a/a/b;)V

    return-void
.end method


# virtual methods
.method public final I(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nM:I

    return-void
.end method

.method public final run()V
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "TimerRunnable run timerPaused:  "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nL:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", currentTime: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nM:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RegisterTimer"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nL:Z

    const-wide/16 v1, 0x3e8

    const/4 v3, 0x0

    if-eqz v0, :cond_0

    invoke-static {p0, v3, v1, v2}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void

    :cond_0
    iget v0, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nM:I

    if-gez v0, :cond_1

    return-void

    :cond_1
    iget-object v4, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nI:Lcom/kwad/components/ad/g/a/a/b;

    invoke-static {v4, v0}, Lcom/kwad/components/ad/g/a/a/b;->a(Lcom/kwad/components/ad/g/a/a/b;I)V

    iget v0, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nM:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nM:I

    invoke-static {p0, v3, v1, v2}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method public final y(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/g/a/a/b$c;->nL:Z

    return-void
.end method

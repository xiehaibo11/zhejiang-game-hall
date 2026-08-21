.class final Lcom/kwad/components/ad/splashscreen/c/l$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/l;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Dn:Lcom/kwad/components/ad/splashscreen/c/l;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/l$2;->Dn:Lcom/kwad/components/ad/splashscreen/c/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l$2;->Dn:Lcom/kwad/components/ad/splashscreen/c/l;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l$2;->Dn:Lcom/kwad/components/ad/splashscreen/c/l;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/l$2;->Dn:Lcom/kwad/components/ad/splashscreen/c/l;

    invoke-static {v3}, Lcom/kwad/components/ad/splashscreen/c/l;->b(Lcom/kwad/components/ad/splashscreen/c/l;)J

    move-result-wide v3

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/components/ad/splashscreen/h;->Cr:J

    :cond_0
    return-void
.end method

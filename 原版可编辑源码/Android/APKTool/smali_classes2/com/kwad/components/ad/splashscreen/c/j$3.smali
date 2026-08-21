.class final Lcom/kwad/components/ad/splashscreen/c/j$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/offline/api/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Df:Lcom/kwad/components/ad/splashscreen/c/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(IIJJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput p1, v0, Lcom/kwad/components/ad/splashscreen/h;->Ck:I

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput p2, p1, Lcom/kwad/components/ad/splashscreen/h;->Cl:I

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput-wide p3, p1, Lcom/kwad/components/ad/splashscreen/h;->Cm:J

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput-wide p5, p1, Lcom/kwad/components/ad/splashscreen/h;->Cn:J

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/j;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p2

    iget-object p4, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    invoke-static {p4}, Lcom/kwad/components/ad/splashscreen/c/j;->e(Lcom/kwad/components/ad/splashscreen/c/j;)J

    move-result-wide p4

    sub-long/2addr p2, p4

    invoke-static {p1, p2, p3}, Lcom/kwad/components/ad/splashscreen/monitor/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/j$3;->Df:Lcom/kwad/components/ad/splashscreen/c/j;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/j;->d(Lcom/kwad/components/ad/splashscreen/c/j;)V

    return-void
.end method

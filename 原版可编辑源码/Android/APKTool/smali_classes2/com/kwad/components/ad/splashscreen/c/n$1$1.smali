.class final Lcom/kwad/components/ad/splashscreen/c/n$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/h$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/n$1;->a(FFFF)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DC:F

.field final synthetic DD:Lcom/kwad/components/ad/splashscreen/c/n$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/n$1;F)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/n$1$1;->DD:Lcom/kwad/components/ad/splashscreen/c/n$1;

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/c/n$1$1;->DC:F

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/core/report/j;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n$1$1;->DD:Lcom/kwad/components/ad/splashscreen/c/n$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/n$1;->DB:Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/n;->d(Lcom/kwad/components/ad/splashscreen/c/n;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    move-result-object v0

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->style:I

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/j;->cn(I)Lcom/kwad/sdk/core/report/j;

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/c/n$1$1;->DC:F

    float-to-int v0, v0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/j;->co(I)Lcom/kwad/sdk/core/report/j;

    return-void
.end method
